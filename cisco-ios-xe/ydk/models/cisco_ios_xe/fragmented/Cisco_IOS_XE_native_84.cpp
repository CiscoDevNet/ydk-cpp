
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_85.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Pki::Trustpoint::Rsakeypair::Rsakeypair()
    :
    key_label{YType::str, "key-label"},
    gen_key{YType::uint16, "gen-key"},
    encrypt_key{YType::uint16, "encrypt-key"}
{

    yang_name = "rsakeypair"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Rsakeypair::~Rsakeypair()
{
}

bool Native::Crypto::Pki::Trustpoint::Rsakeypair::has_data() const
{
    return key_label.is_set
	|| gen_key.is_set
	|| encrypt_key.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Rsakeypair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_label.yfilter)
	|| ydk::is_set(gen_key.yfilter)
	|| ydk::is_set(encrypt_key.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Rsakeypair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsakeypair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Rsakeypair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_label.is_set || is_set(key_label.yfilter)) leaf_name_data.push_back(key_label.get_name_leafdata());
    if (gen_key.is_set || is_set(gen_key.yfilter)) leaf_name_data.push_back(gen_key.get_name_leafdata());
    if (encrypt_key.is_set || is_set(encrypt_key.yfilter)) leaf_name_data.push_back(encrypt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Rsakeypair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Rsakeypair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpoint::Rsakeypair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-label")
    {
        key_label = value;
        key_label.value_namespace = name_space;
        key_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen-key")
    {
        gen_key = value;
        gen_key.value_namespace = name_space;
        gen_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypt-key")
    {
        encrypt_key = value;
        encrypt_key.value_namespace = name_space;
        encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Rsakeypair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-label")
    {
        key_label.yfilter = yfilter;
    }
    if(value_path == "gen-key")
    {
        gen_key.yfilter = yfilter;
    }
    if(value_path == "encrypt-key")
    {
        encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Rsakeypair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-label" || name == "gen-key" || name == "encrypt-key")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::SerialNumber::SerialNumber()
    :
    none{YType::empty, "none"}
{

    yang_name = "serial-number"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::SerialNumber::~SerialNumber()
{
}

bool Native::Crypto::Pki::Trustpoint::SerialNumber::has_data() const
{
    return none.is_set;
}

bool Native::Crypto::Pki::Trustpoint::SerialNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::SerialNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::SerialNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::SerialNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::SerialNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpoint::SerialNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::SerialNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::SerialNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::IpAddress::IpAddress()
    :
    address_line{YType::str, "address-line"},
    none{YType::empty, "none"}
{

    yang_name = "ip-address"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::IpAddress::~IpAddress()
{
}

bool Native::Crypto::Pki::Trustpoint::IpAddress::has_data() const
{
    return address_line.is_set
	|| none.is_set;
}

bool Native::Crypto::Pki::Trustpoint::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_line.is_set || is_set(address_line.yfilter)) leaf_name_data.push_back(address_line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpoint::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-line")
    {
        address_line = value;
        address_line.value_namespace = name_space;
        address_line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-line")
    {
        address_line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-line" || name == "none")
        return true;
    return false;
}

Native::Crypto::Pki::Token::Token()
{

    yang_name = "token"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Token::~Token()
{
}

bool Native::Crypto::Pki::Token::has_data() const
{
    for (std::size_t index=0; index<token_name.size(); index++)
    {
        if(token_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Pki::Token::has_operation() const
{
    for (std::size_t index=0; index<token_name.size(); index++)
    {
        if(token_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Pki::Token::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Token::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "token";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Token::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Token::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "token-name")
    {
        for(auto const & c : token_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Token::TokenName>();
        c->parent = this;
        token_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Token::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : token_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Pki::Token::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Token::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Token::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "token-name")
        return true;
    return false;
}

Native::Crypto::Pki::Token::TokenName::TokenName()
    :
    name{YType::str, "name"}
    	,
    removal(std::make_shared<Native::Crypto::Pki::Token::TokenName::Removal>())
{
    removal->parent = this;

    yang_name = "token-name"; yang_parent_name = "token"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Token::TokenName::~TokenName()
{
}

bool Native::Crypto::Pki::Token::TokenName::has_data() const
{
    return name.is_set
	|| (removal !=  nullptr && removal->has_data());
}

bool Native::Crypto::Pki::Token::TokenName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Crypto::Pki::Token::TokenName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/token/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Token::TokenName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "token-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Token::TokenName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Token::TokenName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Crypto::Pki::Token::TokenName::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Token::TokenName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Crypto::Pki::Token::TokenName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Token::TokenName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Token::TokenName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal" || name == "name")
        return true;
    return false;
}

Native::Crypto::Pki::Token::TokenName::Removal::Removal()
    :
    timeout{YType::uint16, "timeout"}
{

    yang_name = "removal"; yang_parent_name = "token-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Token::TokenName::Removal::~Removal()
{
}

bool Native::Crypto::Pki::Token::TokenName::Removal::has_data() const
{
    return timeout.is_set;
}

bool Native::Crypto::Pki::Token::TokenName::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Pki::Token::TokenName::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Token::TokenName::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Token::TokenName::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Token::TokenName::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Token::TokenName::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Token::TokenName::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Token::TokenName::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpool::Trustpool()
    :
    import(nullptr) // presence node
{

    yang_name = "trustpool"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Trustpool::~Trustpool()
{
}

bool Native::Crypto::Pki::Trustpool::has_data() const
{
    return (import !=  nullptr && import->has_data());
}

bool Native::Crypto::Pki::Trustpool::has_operation() const
{
    return is_set(yfilter)
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Crypto::Pki::Trustpool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Trustpool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustpool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Crypto::Pki::Trustpool::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(import != nullptr)
    {
        children["import"] = import;
    }

    return children;
}

void Native::Crypto::Pki::Trustpool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Trustpool::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Trustpool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpool::Import::Import()
    :
    clean{YType::empty, "clean"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Trustpool::Import::Url>())
{
    url->parent = this;

    yang_name = "import"; yang_parent_name = "trustpool"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Trustpool::Import::~Import()
{
}

bool Native::Crypto::Pki::Trustpool::Import::has_data() const
{
    return clean.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Trustpool::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clean.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Trustpool::Import::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/trustpool/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Trustpool::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpool::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clean.is_set || is_set(clean.yfilter)) leaf_name_data.push_back(clean.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpool::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Trustpool::Import::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpool::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Trustpool::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clean")
    {
        clean = value;
        clean.value_namespace = name_space;
        clean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpool::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clean")
    {
        clean.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpool::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "clean" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpool::Import::Url::Url()
    :
    file{YType::enumeration, "file"}
{

    yang_name = "url"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Trustpool::Import::Url::~Url()
{
}

bool Native::Crypto::Pki::Trustpool::Import::Url::has_data() const
{
    return file.is_set;
}

bool Native::Crypto::Pki::Trustpool::Import::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter);
}

std::string Native::Crypto::Pki::Trustpool::Import::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/trustpool/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Trustpool::Import::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpool::Import::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpool::Import::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpool::Import::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpool::Import::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpool::Import::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpool::Import::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file")
        return true;
    return false;
}

Native::Crypto::Pki::Default_::Default_()
    :
    removal(std::make_shared<Native::Crypto::Pki::Default_::Removal>())
{
    removal->parent = this;

    yang_name = "default"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Default_::~Default_()
{
}

bool Native::Crypto::Pki::Default_::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Crypto::Pki::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Crypto::Pki::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Crypto::Pki::Default_::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Crypto::Pki::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

Native::Crypto::Pki::Default_::Removal::Removal()
    :
    timeout{YType::uint16, "timeout"}
{

    yang_name = "removal"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Default_::Removal::~Removal()
{
}

bool Native::Crypto::Pki::Default_::Removal::has_data() const
{
    return timeout.is_set;
}

bool Native::Crypto::Pki::Default_::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Pki::Default_::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Default_::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Default_::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Default_::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Default_::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Default_::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Default_::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Default_::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnel()
{

    yang_name = "tls-tunnel"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::TlsTunnel::~TlsTunnel()
{
}

bool Native::Crypto::TlsTunnel::has_data() const
{
    for (std::size_t index=0; index<tls_tunnel_list.size(); index++)
    {
        if(tls_tunnel_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::TlsTunnel::has_operation() const
{
    for (std::size_t index=0; index<tls_tunnel_list.size(); index++)
    {
        if(tls_tunnel_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::TlsTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::TlsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:tls-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tls-tunnel-list")
    {
        for(auto const & c : tls_tunnel_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList>();
        c->parent = this;
        tls_tunnel_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tls_tunnel_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::TlsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::TlsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::TlsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tls-tunnel-list")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::TlsTunnelList()
    :
    tunnel_name{YType::str, "tunnel-name"}
    	,
    overlay_address(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress>())
	,protection(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Protection>())
	,psk(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk>())
	,server(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Server>())
{
    overlay_address->parent = this;
    protection->parent = this;
    psk->parent = this;
    server->parent = this;

    yang_name = "tls-tunnel-list"; yang_parent_name = "tls-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::~TlsTunnelList()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::has_data() const
{
    for (std::size_t index=0; index<local_interface.size(); index++)
    {
        if(local_interface[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| (overlay_address !=  nullptr && overlay_address->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (psk !=  nullptr && psk->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::has_operation() const
{
    for (std::size_t index=0; index<local_interface.size(); index++)
    {
        if(local_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (overlay_address !=  nullptr && overlay_address->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (psk !=  nullptr && psk->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:tls-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tls-tunnel-list" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-interface")
    {
        for(auto const & c : local_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface>();
        c->parent = this;
        local_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "overlay-address")
    {
        if(overlay_address == nullptr)
        {
            overlay_address = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress>();
        }
        return overlay_address;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk>();
        }
        return psk;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(overlay_address != nullptr)
    {
        children["overlay-address"] = overlay_address;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(psk != nullptr)
    {
        children["psk"] = psk;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-interface" || name == "overlay-address" || name == "protection" || name == "psk" || name == "server" || name == "tunnel-name")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::LocalInterface()
    :
    interface_name{YType::str, "interface-name"},
    priority{YType::uint8, "priority"}
{

    yang_name = "local-interface"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::~LocalInterface()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::has_data() const
{
    return interface_name.is_set
	|| priority.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "priority")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::OverlayAddress()
    :
    addresses{YType::str, "addresses"},
    vrf{YType::str, "vrf"}
{

    yang_name = "overlay-address"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::~OverlayAddress()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::has_data() const
{
    return addresses.is_set
	|| vrf.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overlay-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection()
    :
    protection{YType::enumeration, "protection"}
{

    yang_name = "protection"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Protection::~Protection()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Protection::has_data() const
{
    return protection.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Psk()
{

    yang_name = "psk"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::~Psk()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Psk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        for(auto const & c : id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Id()
    :
    id{YType::str, "id"}
    	,
    key(std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key>())
{
    key->parent = this;

    yang_name = "id"; yang_parent_name = "psk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::~Id()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::has_data() const
{
    return id.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "id")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::Key()
    :
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "key"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::~Key()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::has_data() const
{
    return key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Server()
{

    yang_name = "server"; yang_parent_name = "tls-tunnel-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::~Server()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::has_data() const
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

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::has_operation() const
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

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4>();
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
        auto c = std::make_shared<Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Server::get_children() const
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

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    port{YType::uint32, "port"}
{

    yang_name = "ipv4"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::~Ipv4()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::has_data() const
{
    return ipv4.is_set
	|| port.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "port")
        return true;
    return false;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    port{YType::uint32, "port"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::~Ipv6()
{
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::has_data() const
{
    return ipv6.is_set
	|| port.is_set;
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "port")
        return true;
    return false;
}

Native::Crypto::Ssl::Ssl()
    :
    policy{YType::str, "policy"},
    profile{YType::str, "profile"}
    	,
    authorization(std::make_shared<Native::Crypto::Ssl::Authorization>())
	,diagnose(std::make_shared<Native::Crypto::Ssl::Diagnose>())
	,proposal(std::make_shared<Native::Crypto::Ssl::Proposal>())
{
    authorization->parent = this;
    diagnose->parent = this;
    proposal->parent = this;

    yang_name = "ssl"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::~Ssl()
{
}

bool Native::Crypto::Ssl::has_data() const
{
    return policy.is_set
	|| profile.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (diagnose !=  nullptr && diagnose->has_data())
	|| (proposal !=  nullptr && proposal->has_data());
}

bool Native::Crypto::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (diagnose !=  nullptr && diagnose->has_operation())
	|| (proposal !=  nullptr && proposal->has_operation());
}

std::string Native::Crypto::Ssl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Ssl::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "diagnose")
    {
        if(diagnose == nullptr)
        {
            diagnose = std::make_shared<Native::Crypto::Ssl::Diagnose>();
        }
        return diagnose;
    }

    if(child_yang_name == "proposal")
    {
        if(proposal == nullptr)
        {
            proposal = std::make_shared<Native::Crypto::Ssl::Proposal>();
        }
        return proposal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(diagnose != nullptr)
    {
        children["diagnose"] = diagnose;
    }

    if(proposal != nullptr)
    {
        children["proposal"] = proposal;
    }

    return children;
}

void Native::Crypto::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "diagnose" || name == "proposal" || name == "policy" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Ssl::Authorization::Authorization()
    :
    policy{YType::str, "policy"}
{

    yang_name = "authorization"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::Authorization::~Authorization()
{
}

bool Native::Crypto::Ssl::Authorization::has_data() const
{
    return policy.is_set;
}

bool Native::Crypto::Ssl::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Ssl::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ssl::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Crypto::Ssl::Diagnose::Diagnose()
    :
    error{YType::uint16, "error"}
{

    yang_name = "diagnose"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::Diagnose::~Diagnose()
{
}

bool Native::Crypto::Ssl::Diagnose::has_data() const
{
    return error.is_set;
}

bool Native::Crypto::Ssl::Diagnose::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string Native::Crypto::Ssl::Diagnose::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::Diagnose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagnose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::Diagnose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::Diagnose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::Diagnose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ssl::Diagnose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::Diagnose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::Diagnose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

Native::Crypto::Ssl::Proposal::Proposal()
    :
    name{YType::str, "name"}
    	,
    protection(std::make_shared<Native::Crypto::Ssl::Proposal::Protection>())
{
    protection->parent = this;

    yang_name = "proposal"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::Proposal::~Proposal()
{
}

bool Native::Crypto::Ssl::Proposal::has_data() const
{
    return name.is_set
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Crypto::Ssl::Proposal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Crypto::Ssl::Proposal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::Proposal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::Proposal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::Proposal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Crypto::Ssl::Proposal::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::Proposal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Crypto::Ssl::Proposal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::Proposal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::Proposal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ssl::Proposal::Protection::Protection()
    :
    rsa_3des_ede_sha1{YType::empty, "rsa-3des-ede-sha1"},
    rsa_aes128_sha1{YType::empty, "rsa-aes128-sha1"},
    rsa_aes256_sha1{YType::empty, "rsa-aes256-sha1"},
    rsa_rc4128_md5{YType::empty, "rsa-rc4128-md5"}
{

    yang_name = "protection"; yang_parent_name = "proposal"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Ssl::Proposal::Protection::~Protection()
{
}

bool Native::Crypto::Ssl::Proposal::Protection::has_data() const
{
    return rsa_3des_ede_sha1.is_set
	|| rsa_aes128_sha1.is_set
	|| rsa_aes256_sha1.is_set
	|| rsa_rc4128_md5.is_set;
}

bool Native::Crypto::Ssl::Proposal::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsa_3des_ede_sha1.yfilter)
	|| ydk::is_set(rsa_aes128_sha1.yfilter)
	|| ydk::is_set(rsa_aes256_sha1.yfilter)
	|| ydk::is_set(rsa_rc4128_md5.yfilter);
}

std::string Native::Crypto::Ssl::Proposal::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ssl/proposal/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ssl::Proposal::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ssl::Proposal::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa_3des_ede_sha1.is_set || is_set(rsa_3des_ede_sha1.yfilter)) leaf_name_data.push_back(rsa_3des_ede_sha1.get_name_leafdata());
    if (rsa_aes128_sha1.is_set || is_set(rsa_aes128_sha1.yfilter)) leaf_name_data.push_back(rsa_aes128_sha1.get_name_leafdata());
    if (rsa_aes256_sha1.is_set || is_set(rsa_aes256_sha1.yfilter)) leaf_name_data.push_back(rsa_aes256_sha1.get_name_leafdata());
    if (rsa_rc4128_md5.is_set || is_set(rsa_rc4128_md5.yfilter)) leaf_name_data.push_back(rsa_rc4128_md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Ssl::Proposal::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ssl::Proposal::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ssl::Proposal::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsa-3des-ede-sha1")
    {
        rsa_3des_ede_sha1 = value;
        rsa_3des_ede_sha1.value_namespace = name_space;
        rsa_3des_ede_sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-aes128-sha1")
    {
        rsa_aes128_sha1 = value;
        rsa_aes128_sha1.value_namespace = name_space;
        rsa_aes128_sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-aes256-sha1")
    {
        rsa_aes256_sha1 = value;
        rsa_aes256_sha1.value_namespace = name_space;
        rsa_aes256_sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsa-rc4128-md5")
    {
        rsa_rc4128_md5 = value;
        rsa_rc4128_md5.value_namespace = name_space;
        rsa_rc4128_md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ssl::Proposal::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsa-3des-ede-sha1")
    {
        rsa_3des_ede_sha1.yfilter = yfilter;
    }
    if(value_path == "rsa-aes128-sha1")
    {
        rsa_aes128_sha1.yfilter = yfilter;
    }
    if(value_path == "rsa-aes256-sha1")
    {
        rsa_aes256_sha1.yfilter = yfilter;
    }
    if(value_path == "rsa-rc4128-md5")
    {
        rsa_rc4128_md5.yfilter = yfilter;
    }
}

bool Native::Crypto::Ssl::Proposal::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa-3des-ede-sha1" || name == "rsa-aes128-sha1" || name == "rsa-aes256-sha1" || name == "rsa-rc4128-md5")
        return true;
    return false;
}

Native::Crypto::Vpn::Vpn()
    :
    csd{YType::str, "csd"}
    	,
    anyconnect(std::make_shared<Native::Crypto::Vpn::Anyconnect>())
{
    anyconnect->parent = this;

    yang_name = "vpn"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Vpn::~Vpn()
{
}

bool Native::Crypto::Vpn::has_data() const
{
    return csd.is_set
	|| (anyconnect !=  nullptr && anyconnect->has_data());
}

bool Native::Crypto::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csd.yfilter)
	|| (anyconnect !=  nullptr && anyconnect->has_operation());
}

std::string Native::Crypto::Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csd.is_set || is_set(csd.yfilter)) leaf_name_data.push_back(csd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect")
    {
        if(anyconnect == nullptr)
        {
            anyconnect = std::make_shared<Native::Crypto::Vpn::Anyconnect>();
        }
        return anyconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect != nullptr)
    {
        children["anyconnect"] = anyconnect;
    }

    return children;
}

void Native::Crypto::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csd")
    {
        csd = value;
        csd.value_namespace = name_space;
        csd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csd")
    {
        csd.yfilter = yfilter;
    }
}

bool Native::Crypto::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect" || name == "csd")
        return true;
    return false;
}

Native::Crypto::Vpn::Anyconnect::Anyconnect()
    :
    file(std::make_shared<Native::Crypto::Vpn::Anyconnect::File>())
	,profile_container(std::make_shared<Native::Crypto::Vpn::Anyconnect::ProfileContainer>())
{
    file->parent = this;
    profile_container->parent = this;

    yang_name = "anyconnect"; yang_parent_name = "vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Vpn::Anyconnect::~Anyconnect()
{
}

bool Native::Crypto::Vpn::Anyconnect::has_data() const
{
    return (file !=  nullptr && file->has_data())
	|| (profile_container !=  nullptr && profile_container->has_data());
}

bool Native::Crypto::Vpn::Anyconnect::has_operation() const
{
    return is_set(yfilter)
	|| (file !=  nullptr && file->has_operation())
	|| (profile_container !=  nullptr && profile_container->has_operation());
}

std::string Native::Crypto::Vpn::Anyconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Vpn::Anyconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Vpn::Anyconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Vpn::Anyconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Native::Crypto::Vpn::Anyconnect::File>();
        }
        return file;
    }

    if(child_yang_name == "profile-container")
    {
        if(profile_container == nullptr)
        {
            profile_container = std::make_shared<Native::Crypto::Vpn::Anyconnect::ProfileContainer>();
        }
        return profile_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Vpn::Anyconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(profile_container != nullptr)
    {
        children["profile-container"] = profile_container;
    }

    return children;
}

void Native::Crypto::Vpn::Anyconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Vpn::Anyconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Vpn::Anyconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "profile-container")
        return true;
    return false;
}

Native::Crypto::Vpn::Anyconnect::File::File()
    :
    filename{YType::str, "filename"},
    sequence{YType::uint8, "sequence"}
{

    yang_name = "file"; yang_parent_name = "anyconnect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Vpn::Anyconnect::File::~File()
{
}

bool Native::Crypto::Vpn::Anyconnect::File::has_data() const
{
    return filename.is_set
	|| sequence.is_set;
}

bool Native::Crypto::Vpn::Anyconnect::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(sequence.yfilter);
}

std::string Native::Crypto::Vpn::Anyconnect::File::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:vpn/anyconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Vpn::Anyconnect::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Vpn::Anyconnect::File::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Vpn::Anyconnect::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Vpn::Anyconnect::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Vpn::Anyconnect::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Vpn::Anyconnect::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Vpn::Anyconnect::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename" || name == "sequence")
        return true;
    return false;
}

Native::Crypto::Vpn::Anyconnect::ProfileContainer::ProfileContainer()
    :
    profile{YType::str, "profile"},
    filename{YType::str, "filename"}
{

    yang_name = "profile-container"; yang_parent_name = "anyconnect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Vpn::Anyconnect::ProfileContainer::~ProfileContainer()
{
}

bool Native::Crypto::Vpn::Anyconnect::ProfileContainer::has_data() const
{
    return profile.is_set
	|| filename.is_set;
}

bool Native::Crypto::Vpn::Anyconnect::ProfileContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:vpn/anyconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Vpn::Anyconnect::ProfileContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Vpn::Anyconnect::ProfileContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Vpn::Anyconnect::ProfileContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Native::Crypto::Vpn::Anyconnect::ProfileContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "filename")
        return true;
    return false;
}

Native::Cts::Cts()
    :
    critical_authentication_conf{YType::empty, "Cisco-IOS-XE-cts:critical-authentication-conf"},
    dot1x_server_timeout{YType::uint16, "Cisco-IOS-XE-cts:dot1x-server-timeout"},
    dot1x_supp_timeout{YType::uint16, "Cisco-IOS-XE-cts:dot1x-supp-timeout"},
    logging{YType::enumeration, "Cisco-IOS-XE-cts:logging"},
    sgt{YType::uint16, "Cisco-IOS-XE-cts:sgt"},
    sg_epg{YType::enumeration, "Cisco-IOS-XE-cts:sg-epg"}
    	,
    cache(std::make_shared<Native::Cts::Cache>())
	,critical_authentication(nullptr) // presence node
	,authorization(std::make_shared<Native::Cts::Authorization>())
	,role_based(std::make_shared<Native::Cts::RoleBased>())
	,server(std::make_shared<Native::Cts::Server>())
	,sxp(std::make_shared<Native::Cts::Sxp>())
{
    cache->parent = this;
    authorization->parent = this;
    role_based->parent = this;
    server->parent = this;
    sxp->parent = this;

    yang_name = "cts"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::~Cts()
{
}

bool Native::Cts::has_data() const
{
    return critical_authentication_conf.is_set
	|| dot1x_server_timeout.is_set
	|| dot1x_supp_timeout.is_set
	|| logging.is_set
	|| sgt.is_set
	|| sg_epg.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (critical_authentication !=  nullptr && critical_authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (role_based !=  nullptr && role_based->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (sxp !=  nullptr && sxp->has_data());
}

bool Native::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical_authentication_conf.yfilter)
	|| ydk::is_set(dot1x_server_timeout.yfilter)
	|| ydk::is_set(dot1x_supp_timeout.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(sg_epg.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (critical_authentication !=  nullptr && critical_authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (role_based !=  nullptr && role_based->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (sxp !=  nullptr && sxp->has_operation());
}

std::string Native::Cts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical_authentication_conf.is_set || is_set(critical_authentication_conf.yfilter)) leaf_name_data.push_back(critical_authentication_conf.get_name_leafdata());
    if (dot1x_server_timeout.is_set || is_set(dot1x_server_timeout.yfilter)) leaf_name_data.push_back(dot1x_server_timeout.get_name_leafdata());
    if (dot1x_supp_timeout.is_set || is_set(dot1x_supp_timeout.yfilter)) leaf_name_data.push_back(dot1x_supp_timeout.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (sg_epg.is_set || is_set(sg_epg.yfilter)) leaf_name_data.push_back(sg_epg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Cts::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "critical-authentication")
    {
        if(critical_authentication == nullptr)
        {
            critical_authentication = std::make_shared<Native::Cts::CriticalAuthentication>();
        }
        return critical_authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Cts::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "role-based")
    {
        if(role_based == nullptr)
        {
            role_based = std::make_shared<Native::Cts::RoleBased>();
        }
        return role_based;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Cts::Server>();
        }
        return server;
    }

    if(child_yang_name == "sxp")
    {
        if(sxp == nullptr)
        {
            sxp = std::make_shared<Native::Cts::Sxp>();
        }
        return sxp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(critical_authentication != nullptr)
    {
        children["critical-authentication"] = critical_authentication;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(role_based != nullptr)
    {
        children["role-based"] = role_based;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(sxp != nullptr)
    {
        children["sxp"] = sxp;
    }

    return children;
}

void Native::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical-authentication-conf")
    {
        critical_authentication_conf = value;
        critical_authentication_conf.value_namespace = name_space;
        critical_authentication_conf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1x-server-timeout")
    {
        dot1x_server_timeout = value;
        dot1x_server_timeout.value_namespace = name_space;
        dot1x_server_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1x-supp-timeout")
    {
        dot1x_supp_timeout = value;
        dot1x_supp_timeout.value_namespace = name_space;
        dot1x_supp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-epg")
    {
        sg_epg = value;
        sg_epg.value_namespace = name_space;
        sg_epg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical-authentication-conf")
    {
        critical_authentication_conf.yfilter = yfilter;
    }
    if(value_path == "dot1x-server-timeout")
    {
        dot1x_server_timeout.yfilter = yfilter;
    }
    if(value_path == "dot1x-supp-timeout")
    {
        dot1x_supp_timeout.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "sg-epg")
    {
        sg_epg.yfilter = yfilter;
    }
}

bool Native::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "critical-authentication" || name == "authorization" || name == "role-based" || name == "server" || name == "sxp" || name == "critical-authentication-conf" || name == "dot1x-server-timeout" || name == "dot1x-supp-timeout" || name == "logging" || name == "sgt" || name == "sg-epg")
        return true;
    return false;
}

Native::Cts::Cache::Cache()
    :
    enable{YType::empty, "enable"}
    	,
    nv_storage(std::make_shared<Native::Cts::Cache::NvStorage>())
{
    nv_storage->parent = this;

    yang_name = "cache"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Cache::~Cache()
{
}

bool Native::Cts::Cache::has_data() const
{
    return enable.is_set
	|| (nv_storage !=  nullptr && nv_storage->has_data());
}

bool Native::Cts::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (nv_storage !=  nullptr && nv_storage->has_operation());
}

std::string Native::Cts::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-storage")
    {
        if(nv_storage == nullptr)
        {
            nv_storage = std::make_shared<Native::Cts::Cache::NvStorage>();
        }
        return nv_storage;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nv_storage != nullptr)
    {
        children["nv-storage"] = nv_storage;
    }

    return children;
}

void Native::Cts::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Cts::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nv-storage" || name == "enable")
        return true;
    return false;
}

Native::Cts::Cache::NvStorage::NvStorage()
    :
    nv_storage{YType::enumeration, "nv-storage"}
{

    yang_name = "nv-storage"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Cache::NvStorage::~NvStorage()
{
}

bool Native::Cts::Cache::NvStorage::has_data() const
{
    return nv_storage.is_set;
}

bool Native::Cts::Cache::NvStorage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nv_storage.yfilter);
}

std::string Native::Cts::Cache::NvStorage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Cache::NvStorage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-storage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Cache::NvStorage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nv_storage.is_set || is_set(nv_storage.yfilter)) leaf_name_data.push_back(nv_storage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Cache::NvStorage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Cache::NvStorage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Cache::NvStorage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nv-storage")
    {
        nv_storage = value;
        nv_storage.value_namespace = name_space;
        nv_storage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Cache::NvStorage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nv-storage")
    {
        nv_storage.yfilter = yfilter;
    }
}

bool Native::Cts::Cache::NvStorage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nv-storage")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::CriticalAuthentication()
    :
    default_(std::make_shared<Native::Cts::CriticalAuthentication::Default_>())
	,fallback(std::make_shared<Native::Cts::CriticalAuthentication::Fallback>())
{
    default_->parent = this;
    fallback->parent = this;

    yang_name = "critical-authentication"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::~CriticalAuthentication()
{
}

bool Native::Cts::CriticalAuthentication::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::Cts::CriticalAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::Cts::CriticalAuthentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:critical-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Cts::CriticalAuthentication::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Cts::CriticalAuthentication::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::Cts::CriticalAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::CriticalAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::CriticalAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "fallback")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Default_::Default_()
    :
    peer_sgt(std::make_shared<Native::Cts::CriticalAuthentication::Default_::PeerSgt>())
	,pmk(std::make_shared<Native::Cts::CriticalAuthentication::Default_::Pmk>())
{
    peer_sgt->parent = this;
    pmk->parent = this;

    yang_name = "default"; yang_parent_name = "critical-authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Default_::~Default_()
{
}

bool Native::Cts::CriticalAuthentication::Default_::has_data() const
{
    return (peer_sgt !=  nullptr && peer_sgt->has_data())
	|| (pmk !=  nullptr && pmk->has_data());
}

bool Native::Cts::CriticalAuthentication::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (peer_sgt !=  nullptr && peer_sgt->has_operation())
	|| (pmk !=  nullptr && pmk->has_operation());
}

std::string Native::Cts::CriticalAuthentication::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-sgt")
    {
        if(peer_sgt == nullptr)
        {
            peer_sgt = std::make_shared<Native::Cts::CriticalAuthentication::Default_::PeerSgt>();
        }
        return peer_sgt;
    }

    if(child_yang_name == "pmk")
    {
        if(pmk == nullptr)
        {
            pmk = std::make_shared<Native::Cts::CriticalAuthentication::Default_::Pmk>();
        }
        return pmk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_sgt != nullptr)
    {
        children["peer-sgt"] = peer_sgt;
    }

    if(pmk != nullptr)
    {
        children["pmk"] = pmk;
    }

    return children;
}

void Native::Cts::CriticalAuthentication::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::CriticalAuthentication::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::CriticalAuthentication::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-sgt" || name == "pmk")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Default_::PeerSgt::PeerSgt()
{

    yang_name = "peer-sgt"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Default_::PeerSgt::~PeerSgt()
{
}

bool Native::Cts::CriticalAuthentication::Default_::PeerSgt::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::CriticalAuthentication::Default_::PeerSgt::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::CriticalAuthentication::Default_::PeerSgt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Default_::PeerSgt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-sgt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Default_::PeerSgt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Default_::PeerSgt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Default_::PeerSgt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::CriticalAuthentication::Default_::PeerSgt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::CriticalAuthentication::Default_::PeerSgt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::CriticalAuthentication::Default_::PeerSgt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::Range()
    :
    range{YType::uint16, "range"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "range"; yang_parent_name = "peer-sgt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::~Range()
{
}

bool Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::has_data() const
{
    return range.is_set
	|| trusted.is_set;
}

bool Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/default/peer-sgt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "trusted")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Default_::Pmk::Pmk()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "pmk"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Default_::Pmk::~Pmk()
{
}

bool Native::Cts::CriticalAuthentication::Default_::Pmk::has_data() const
{
    return type.is_set
	|| secret.is_set;
}

bool Native::Cts::CriticalAuthentication::Default_::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Cts::CriticalAuthentication::Default_::Pmk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Default_::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Default_::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Default_::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Default_::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::CriticalAuthentication::Default_::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::CriticalAuthentication::Default_::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Cts::CriticalAuthentication::Default_::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Cts::CriticalAuthentication::Fallback::Fallback()
    :
    cached{YType::empty, "Cached"},
    default_{YType::empty, "default"}
{

    yang_name = "fallback"; yang_parent_name = "critical-authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::CriticalAuthentication::Fallback::~Fallback()
{
}

bool Native::Cts::CriticalAuthentication::Fallback::has_data() const
{
    return cached.is_set
	|| default_.is_set;
}

bool Native::Cts::CriticalAuthentication::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cached.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Cts::CriticalAuthentication::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:critical-authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::CriticalAuthentication::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::CriticalAuthentication::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.yfilter)) leaf_name_data.push_back(cached.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::CriticalAuthentication::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::CriticalAuthentication::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::CriticalAuthentication::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cached")
    {
        cached = value;
        cached.value_namespace = name_space;
        cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::CriticalAuthentication::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Cached")
    {
        cached.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Cts::CriticalAuthentication::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cached" || name == "default")
        return true;
    return false;
}

Native::Cts::Authorization::Authorization()
    :
    list{YType::str, "list"}
{

    yang_name = "authorization"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Authorization::~Authorization()
{
}

bool Native::Cts::Authorization::has_data() const
{
    return list.is_set;
}

bool Native::Cts::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Cts::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Cts::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Cts::RoleBased::RoleBased()
    :
    sgt_caching{YType::empty, "sgt-caching"}
    	,
    permissions(std::make_shared<Native::Cts::RoleBased::Permissions>())
	,enforcement(nullptr) // presence node
	,monitor(std::make_shared<Native::Cts::RoleBased::Monitor>())
	,sgt_map_vlan_list(std::make_shared<Native::Cts::RoleBased::SgtMapVlanList>())
{
    permissions->parent = this;
    monitor->parent = this;
    sgt_map_vlan_list->parent = this;

    yang_name = "role-based"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::~RoleBased()
{
}

bool Native::Cts::RoleBased::has_data() const
{
    for (std::size_t index=0; index<sgt_map.size(); index++)
    {
        if(sgt_map[index]->has_data())
            return true;
    }
    return sgt_caching.is_set
	|| (permissions !=  nullptr && permissions->has_data())
	|| (enforcement !=  nullptr && enforcement->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (sgt_map_vlan_list !=  nullptr && sgt_map_vlan_list->has_data());
}

bool Native::Cts::RoleBased::has_operation() const
{
    for (std::size_t index=0; index<sgt_map.size(); index++)
    {
        if(sgt_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sgt_caching.yfilter)
	|| (permissions !=  nullptr && permissions->has_operation())
	|| (enforcement !=  nullptr && enforcement->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (sgt_map_vlan_list !=  nullptr && sgt_map_vlan_list->has_operation());
}

std::string Native::Cts::RoleBased::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:role-based";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt_caching.is_set || is_set(sgt_caching.yfilter)) leaf_name_data.push_back(sgt_caching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permissions")
    {
        if(permissions == nullptr)
        {
            permissions = std::make_shared<Native::Cts::RoleBased::Permissions>();
        }
        return permissions;
    }

    if(child_yang_name == "enforcement")
    {
        if(enforcement == nullptr)
        {
            enforcement = std::make_shared<Native::Cts::RoleBased::Enforcement>();
        }
        return enforcement;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Cts::RoleBased::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "sgt-map")
    {
        for(auto const & c : sgt_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::RoleBased::SgtMap>();
        c->parent = this;
        sgt_map.push_back(c);
        return c;
    }

    if(child_yang_name == "sgt-map-vlan-list")
    {
        if(sgt_map_vlan_list == nullptr)
        {
            sgt_map_vlan_list = std::make_shared<Native::Cts::RoleBased::SgtMapVlanList>();
        }
        return sgt_map_vlan_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permissions != nullptr)
    {
        children["permissions"] = permissions;
    }

    if(enforcement != nullptr)
    {
        children["enforcement"] = enforcement;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    for (auto const & c : sgt_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(sgt_map_vlan_list != nullptr)
    {
        children["sgt-map-vlan-list"] = sgt_map_vlan_list;
    }

    return children;
}

void Native::Cts::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt-caching")
    {
        sgt_caching = value;
        sgt_caching.value_namespace = name_space;
        sgt_caching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt-caching")
    {
        sgt_caching.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permissions" || name == "enforcement" || name == "monitor" || name == "sgt-map" || name == "sgt-map-vlan-list" || name == "sgt-caching")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::Permissions()
    :
    default_(std::make_shared<Native::Cts::RoleBased::Permissions::Default_>())
	,from(std::make_shared<Native::Cts::RoleBased::Permissions::From>())
{
    default_->parent = this;
    from->parent = this;

    yang_name = "permissions"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Permissions::~Permissions()
{
}

bool Native::Cts::RoleBased::Permissions::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (from !=  nullptr && from->has_data());
}

bool Native::Cts::RoleBased::Permissions::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (from !=  nullptr && from->has_operation());
}

std::string Native::Cts::RoleBased::Permissions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Permissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Cts::RoleBased::Permissions::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "from")
    {
        if(from == nullptr)
        {
            from = std::make_shared<Native::Cts::RoleBased::Permissions::From>();
        }
        return from;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(from != nullptr)
    {
        children["from"] = from;
    }

    return children;
}

void Native::Cts::RoleBased::Permissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::RoleBased::Permissions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::RoleBased::Permissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "from")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::Default_::Default_()
    :
    name{YType::str, "name"}
{

    yang_name = "default"; yang_parent_name = "permissions"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Permissions::Default_::~Default_()
{
}

bool Native::Cts::RoleBased::Permissions::Default_::has_data() const
{
    return name.is_set;
}

bool Native::Cts::RoleBased::Permissions::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Cts::RoleBased::Permissions::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/permissions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Permissions::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::RoleBased::Permissions::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Permissions::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Permissions::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::From::From()
{

    yang_name = "from"; yang_parent_name = "permissions"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Permissions::From::~From()
{
}

bool Native::Cts::RoleBased::Permissions::From::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::RoleBased::Permissions::From::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::RoleBased::Permissions::From::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/permissions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Permissions::From::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "from";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::From::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::From::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::RoleBased::Permissions::From::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::From::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::RoleBased::Permissions::From::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::RoleBased::Permissions::From::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::RoleBased::Permissions::From::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::From::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    to(std::make_shared<Native::Cts::RoleBased::Permissions::From::Range::To>())
{
    to->parent = this;

    yang_name = "range"; yang_parent_name = "from"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Permissions::From::Range::~Range()
{
}

bool Native::Cts::RoleBased::Permissions::From::Range::has_data() const
{
    return range.is_set
	|| (to !=  nullptr && to->has_data());
}

bool Native::Cts::RoleBased::Permissions::From::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (to !=  nullptr && to->has_operation());
}

std::string Native::Cts::RoleBased::Permissions::From::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/permissions/from/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Permissions::From::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::From::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::From::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "to")
    {
        if(to == nullptr)
        {
            to = std::make_shared<Native::Cts::RoleBased::Permissions::From::Range::To>();
        }
        return to;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::From::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(to != nullptr)
    {
        children["to"] = to;
    }

    return children;
}

void Native::Cts::RoleBased::Permissions::From::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Permissions::From::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Permissions::From::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "to" || name == "range")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::From::Range::To::To()
{

    yang_name = "to"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::RoleBased::Permissions::From::Range::To::~To()
{
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::RoleBased::Permissions::From::Range::To::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::From::Range::To::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::From::Range::To::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::RoleBased::Permissions::From::Range::To::Range_>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::From::Range::To::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::RoleBased::Permissions::From::Range::To::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::RoleBased::Permissions::From::Range::To::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Cts::RoleBased::Permissions::From::Range::To::Range_::Range_()
    :
    range{YType::uint16, "range"},
    name{YType::str, "name"}
{

    yang_name = "range"; yang_parent_name = "to"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::RoleBased::Permissions::From::Range::To::Range_::~Range_()
{
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::Range_::has_data() const
{
    return range.is_set
	|| name.is_set;
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::Range_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Cts::RoleBased::Permissions::From::Range::To::Range_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Permissions::From::Range::To::Range_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Permissions::From::Range::To::Range_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Permissions::From::Range::To::Range_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::RoleBased::Permissions::From::Range::To::Range_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Permissions::From::Range::To::Range_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Permissions::From::Range::To::Range_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "name")
        return true;
    return false;
}

Native::Cts::RoleBased::Enforcement::Enforcement()
    :
    logging_interval{YType::uint32, "logging-interval"}
{

    yang_name = "enforcement"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Enforcement::~Enforcement()
{
}

bool Native::Cts::RoleBased::Enforcement::has_data() const
{
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return logging_interval.is_set;
}

bool Native::Cts::RoleBased::Enforcement::has_operation() const
{
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(logging_interval.yfilter);
}

std::string Native::Cts::RoleBased::Enforcement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Enforcement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enforcement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Enforcement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging_interval.is_set || is_set(logging_interval.yfilter)) leaf_name_data.push_back(logging_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Enforcement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-list")
    {
        for(auto const & c : vlan_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::RoleBased::Enforcement::VlanList>();
        c->parent = this;
        vlan_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Enforcement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::RoleBased::Enforcement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging-interval")
    {
        logging_interval = value;
        logging_interval.value_namespace = name_space;
        logging_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Enforcement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging-interval")
    {
        logging_interval.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Enforcement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-list" || name == "logging-interval")
        return true;
    return false;
}

Native::Cts::RoleBased::Enforcement::VlanList::VlanList()
    :
    id{YType::str, "id"}
{

    yang_name = "vlan-list"; yang_parent_name = "enforcement"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Enforcement::VlanList::~VlanList()
{
}

bool Native::Cts::RoleBased::Enforcement::VlanList::has_data() const
{
    return id.is_set;
}

bool Native::Cts::RoleBased::Enforcement::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Cts::RoleBased::Enforcement::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/enforcement/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Enforcement::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Enforcement::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Enforcement::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Enforcement::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::RoleBased::Enforcement::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Enforcement::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Enforcement::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Cts::RoleBased::Monitor::Monitor()
    :
    all{YType::empty, "all"}
{

    yang_name = "monitor"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::Monitor::~Monitor()
{
}

bool Native::Cts::RoleBased::Monitor::has_data() const
{
    return all.is_set;
}

bool Native::Cts::RoleBased::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Cts::RoleBased::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::RoleBased::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Cts::RoleBased::SgtMap::SgtMap()
    :
    ip{YType::str, "ip"},
    sgt{YType::uint16, "sgt"},
    vrf{YType::str, "vrf"},
    host{YType::empty, "host"}
{

    yang_name = "sgt-map"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::SgtMap::~SgtMap()
{
}

bool Native::Cts::RoleBased::SgtMap::has_data() const
{
    return ip.is_set
	|| sgt.is_set
	|| vrf.is_set
	|| host.is_set;
}

bool Native::Cts::RoleBased::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Cts::RoleBased::SgtMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map" <<"[ip='" <<ip <<"']" <<"[sgt='" <<sgt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::SgtMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::RoleBased::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "sgt" || name == "vrf" || name == "host")
        return true;
    return false;
}

Native::Cts::RoleBased::SgtMapVlanList::SgtMapVlanList()
{

    yang_name = "sgt-map-vlan-list"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::SgtMapVlanList::~SgtMapVlanList()
{
}

bool Native::Cts::RoleBased::SgtMapVlanList::has_data() const
{
    for (std::size_t index=0; index<sgt_map.size(); index++)
    {
        if(sgt_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::RoleBased::SgtMapVlanList::has_operation() const
{
    for (std::size_t index=0; index<sgt_map.size(); index++)
    {
        if(sgt_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::RoleBased::SgtMapVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::SgtMapVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map-vlan-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::SgtMapVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::SgtMapVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgt-map")
    {
        for(auto const & c : sgt_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::RoleBased::SgtMapVlanList::SgtMap>();
        c->parent = this;
        sgt_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::SgtMapVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sgt_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::RoleBased::SgtMapVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::RoleBased::SgtMapVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::RoleBased::SgtMapVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt-map")
        return true;
    return false;
}

Native::Cts::RoleBased::SgtMapVlanList::SgtMap::SgtMap()
    :
    vlan_list{YType::str, "vlan-list"},
    sgt{YType::int16, "sgt"}
{

    yang_name = "sgt-map"; yang_parent_name = "sgt-map-vlan-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::RoleBased::SgtMapVlanList::SgtMap::~SgtMap()
{
}

bool Native::Cts::RoleBased::SgtMapVlanList::SgtMap::has_data() const
{
    return vlan_list.is_set
	|| sgt.is_set;
}

bool Native::Cts::RoleBased::SgtMapVlanList::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_list.yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:role-based/sgt-map-vlan-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map" <<"[vlan-list='" <<vlan_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_list.is_set || is_set(vlan_list.yfilter)) leaf_name_data.push_back(vlan_list.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::RoleBased::SgtMapVlanList::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::RoleBased::SgtMapVlanList::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-list")
    {
        vlan_list = value;
        vlan_list.value_namespace = name_space;
        vlan_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::RoleBased::SgtMapVlanList::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-list")
    {
        vlan_list.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Cts::RoleBased::SgtMapVlanList::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-list" || name == "sgt")
        return true;
    return false;
}

Native::Cts::Server::Server()
    :
    deadtime{YType::uint32, "deadtime"}
    	,
    key_wrap(std::make_shared<Native::Cts::Server::KeyWrap>())
	,load_balance(std::make_shared<Native::Cts::Server::LoadBalance>())
	,test(std::make_shared<Native::Cts::Server::Test>())
{
    key_wrap->parent = this;
    load_balance->parent = this;
    test->parent = this;

    yang_name = "server"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::~Server()
{
}

bool Native::Cts::Server::has_data() const
{
    return deadtime.is_set
	|| (key_wrap !=  nullptr && key_wrap->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (test !=  nullptr && test->has_data());
}

bool Native::Cts::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| (key_wrap !=  nullptr && key_wrap->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Cts::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-wrap")
    {
        if(key_wrap == nullptr)
        {
            key_wrap = std::make_shared<Native::Cts::Server::KeyWrap>();
        }
        return key_wrap;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::Cts::Server::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Cts::Server::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_wrap != nullptr)
    {
        children["key-wrap"] = key_wrap;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Cts::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
}

bool Native::Cts::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-wrap" || name == "load-balance" || name == "test" || name == "deadtime")
        return true;
    return false;
}

Native::Cts::Server::KeyWrap::KeyWrap()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "key-wrap"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::KeyWrap::~KeyWrap()
{
}

bool Native::Cts::Server::KeyWrap::has_data() const
{
    return enable.is_set;
}

bool Native::Cts::Server::KeyWrap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Cts::Server::KeyWrap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::KeyWrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-wrap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::KeyWrap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::KeyWrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::KeyWrap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Server::KeyWrap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::KeyWrap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Cts::Server::KeyWrap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Cts::Server::LoadBalance::LoadBalance()
    :
    method(std::make_shared<Native::Cts::Server::LoadBalance::Method>())
{
    method->parent = this;

    yang_name = "load-balance"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::LoadBalance::~LoadBalance()
{
}

bool Native::Cts::Server::LoadBalance::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::Cts::Server::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Cts::Server::LoadBalance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Cts::Server::LoadBalance::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Cts::Server::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Server::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Server::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::Cts::Server::LoadBalance::Method::Method()
    :
    least_outstanding(nullptr) // presence node
{

    yang_name = "method"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::LoadBalance::Method::~Method()
{
}

bool Native::Cts::Server::LoadBalance::Method::has_data() const
{
    return (least_outstanding !=  nullptr && least_outstanding->has_data());
}

bool Native::Cts::Server::LoadBalance::Method::has_operation() const
{
    return is_set(yfilter)
	|| (least_outstanding !=  nullptr && least_outstanding->has_operation());
}

std::string Native::Cts::Server::LoadBalance::Method::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/load-balance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::LoadBalance::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::LoadBalance::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::LoadBalance::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "least-outstanding")
    {
        if(least_outstanding == nullptr)
        {
            least_outstanding = std::make_shared<Native::Cts::Server::LoadBalance::Method::LeastOutstanding>();
        }
        return least_outstanding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::LoadBalance::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(least_outstanding != nullptr)
    {
        children["least-outstanding"] = least_outstanding;
    }

    return children;
}

void Native::Cts::Server::LoadBalance::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Server::LoadBalance::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Server::LoadBalance::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "least-outstanding")
        return true;
    return false;
}

Native::Cts::Server::LoadBalance::Method::LeastOutstanding::LeastOutstanding()
    :
    batch_size{YType::uint32, "batch-size"},
    ignore_preferred_server{YType::empty, "ignore-preferred-server"}
{

    yang_name = "least-outstanding"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::LoadBalance::Method::LeastOutstanding::~LeastOutstanding()
{
}

bool Native::Cts::Server::LoadBalance::Method::LeastOutstanding::has_data() const
{
    return batch_size.is_set
	|| ignore_preferred_server.is_set;
}

bool Native::Cts::Server::LoadBalance::Method::LeastOutstanding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batch_size.yfilter)
	|| ydk::is_set(ignore_preferred_server.yfilter);
}

std::string Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/load-balance/method/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "least-outstanding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.yfilter)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.yfilter)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::LoadBalance::Method::LeastOutstanding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Server::LoadBalance::Method::LeastOutstanding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batch-size")
    {
        batch_size = value;
        batch_size.value_namespace = name_space;
        batch_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
        ignore_preferred_server.value_namespace = name_space;
        ignore_preferred_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::LoadBalance::Method::LeastOutstanding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batch-size")
    {
        batch_size.yfilter = yfilter;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server.yfilter = yfilter;
    }
}

bool Native::Cts::Server::LoadBalance::Method::LeastOutstanding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batch-size" || name == "ignore-preferred-server")
        return true;
    return false;
}

Native::Cts::Server::Test::Test()
    :
    all(std::make_shared<Native::Cts::Server::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::Test::~Test()
{
}

bool Native::Cts::Server::Test::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Cts::Server::Test::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Cts::Server::Test::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::Server::Test::Server_>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Cts::Server::Test::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Cts::Server::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Server::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Server::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "all")
        return true;
    return false;
}

Native::Cts::Server::Test::Server_::Server_()
    :
    ip{YType::str, "ip"},
    deadtime{YType::uint32, "deadtime"},
    enable{YType::boolean, "enable"},
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "server"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::Test::Server_::~Server_()
{
}

bool Native::Cts::Server::Test::Server_::has_data() const
{
    return ip.is_set
	|| deadtime.is_set
	|| enable.is_set
	|| idle_time.is_set;
}

bool Native::Cts::Server::Test::Server_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Cts::Server::Test::Server_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/test/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::Test::Server_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::Test::Server_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::Test::Server_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::Test::Server_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Server::Test::Server_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::Test::Server_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Cts::Server::Test::Server_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "deadtime" || name == "enable" || name == "idle-time")
        return true;
    return false;
}

Native::Cts::Server::Test::All::All()
    :
    deadtime{YType::uint32, "deadtime"},
    enable{YType::boolean, "enable"},
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Server::Test::All::~All()
{
}

bool Native::Cts::Server::Test::All::has_data() const
{
    return deadtime.is_set
	|| enable.is_set
	|| idle_time.is_set;
}

bool Native::Cts::Server::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Cts::Server::Test::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:server/test/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Server::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Server::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Server::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Server::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Server::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Server::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Cts::Server::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deadtime" || name == "enable" || name == "idle-time")
        return true;
    return false;
}

Native::Cts::Sxp::Sxp()
    :
    enable{YType::empty, "enable"}
    	,
    default_(std::make_shared<Native::Cts::Sxp::Default_>())
	,connection(std::make_shared<Native::Cts::Sxp::Connection>())
{
    default_->parent = this;
    connection->parent = this;

    yang_name = "sxp"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::~Sxp()
{
}

bool Native::Cts::Sxp::has_data() const
{
    return enable.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (connection !=  nullptr && connection->has_data());
}

bool Native::Cts::Sxp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (connection !=  nullptr && connection->has_operation());
}

std::string Native::Cts::Sxp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:sxp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Cts::Sxp::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Native::Cts::Sxp::Connection>();
        }
        return connection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    return children;
}

void Native::Cts::Sxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "connection" || name == "enable")
        return true;
    return false;
}

Native::Cts::Sxp::Default_::Default_()
    :
    source_ip{YType::str, "source-ip"}
    	,
    password(std::make_shared<Native::Cts::Sxp::Default_::Password>())
{
    password->parent = this;

    yang_name = "default"; yang_parent_name = "sxp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Default_::~Default_()
{
}

bool Native::Cts::Sxp::Default_::has_data() const
{
    return source_ip.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Cts::Sxp::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Cts::Sxp::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Cts::Sxp::Default_::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Cts::Sxp::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "source-ip")
        return true;
    return false;
}

Native::Cts::Sxp::Default_::Password::Password()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Default_::Password::~Password()
{
}

bool Native::Cts::Sxp::Default_::Password::has_data() const
{
    return type.is_set
	|| secret.is_set;
}

bool Native::Cts::Sxp::Default_::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Cts::Sxp::Default_::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Default_::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Default_::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Default_::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Default_::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Default_::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Default_::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Default_::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Connection()
    :
    peer(std::make_shared<Native::Cts::Sxp::Connection::Peer>())
{
    peer->parent = this;

    yang_name = "connection"; yang_parent_name = "sxp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Connection::~Connection()
{
}

bool Native::Cts::Sxp::Connection::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Cts::Sxp::Connection::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Cts::Sxp::Connection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Cts::Sxp::Connection::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Cts::Sxp::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Peer()
{

    yang_name = "peer"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Connection::Peer::~Peer()
{
}

bool Native::Cts::Sxp::Connection::Peer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::Sxp::Connection::Peer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/connection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Connection::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
    	,
    source(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source>())
{
    source->parent = this;

    yang_name = "ipv4"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::~Ipv4()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::has_data() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_data())
            return true;
    }
    return ipv4.is_set
	|| (source !=  nullptr && source->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/cts/Cisco-IOS-XE-cts:sxp/connection/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source>();
        }
        return source;
    }

    if(child_yang_name == "password")
    {
        for(auto const & c : password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password>();
        c->parent = this;
        password.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    for (auto const & c : password)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "password" || name == "ipv4")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Source()
{

    yang_name = "source"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::~Source()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Ipv4_()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "ipv4"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::~Ipv4_()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::has_data() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_data())
            return true;
    }
    return ipv4.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::has_operation() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        for(auto const & c : password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password>();
        c->parent = this;
        password.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "ipv4")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Password()
    :
    password_type{YType::enumeration, "password-type"}
    	,
    mode(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode>())
{
    mode->parent = this;

    yang_name = "password"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::~Password()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::has_data() const
{
    return password_type.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password_type.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password" <<"[password-type='" <<password_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password_type.is_set || is_set(password_type.yfilter)) leaf_name_data.push_back(password_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password-type")
    {
        password_type = value;
        password_type.value_namespace = name_space;
        password_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password-type")
    {
        password_type.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "password-type")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Mode()
    :
    local(nullptr) // presence node
	,peer(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::~Mode()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Local()
    :
    both(nullptr) // presence node
	,listener(nullptr) // presence node
	,speaker(nullptr) // presence node
{

    yang_name = "local"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::~Local()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::has_data() const
{
    return (both !=  nullptr && both->has_data())
	|| (listener !=  nullptr && listener->has_data())
	|| (speaker !=  nullptr && speaker->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::has_operation() const
{
    return is_set(yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (listener !=  nullptr && listener->has_operation())
	|| (speaker !=  nullptr && speaker->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both>();
        }
        return both;
    }

    if(child_yang_name == "listener")
    {
        if(listener == nullptr)
        {
            listener = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener>();
        }
        return listener;
    }

    if(child_yang_name == "speaker")
    {
        if(speaker == nullptr)
        {
            speaker = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker>();
        }
        return speaker;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(both != nullptr)
    {
        children["both"] = both;
    }

    if(listener != nullptr)
    {
        children["listener"] = listener;
    }

    if(speaker != nullptr)
    {
        children["speaker"] = speaker;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "listener" || name == "speaker")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::Both()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "both"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::~Both()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::has_data() const
{
    return vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::Listener()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "listener"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::~Listener()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    max_time{YType::uint16, "max-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_data() const
{
    return min_time.is_set
	|| max_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "max-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::Speaker()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "speaker"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::~Speaker()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::has_data() const
{
    return min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Peer_()
    :
    both(nullptr) // presence node
	,listener(nullptr) // presence node
	,speaker(nullptr) // presence node
{

    yang_name = "peer"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::~Peer_()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::has_data() const
{
    return (both !=  nullptr && both->has_data())
	|| (listener !=  nullptr && listener->has_data())
	|| (speaker !=  nullptr && speaker->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::has_operation() const
{
    return is_set(yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (listener !=  nullptr && listener->has_operation())
	|| (speaker !=  nullptr && speaker->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both>();
        }
        return both;
    }

    if(child_yang_name == "listener")
    {
        if(listener == nullptr)
        {
            listener = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener>();
        }
        return listener;
    }

    if(child_yang_name == "speaker")
    {
        if(speaker == nullptr)
        {
            speaker = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker>();
        }
        return speaker;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(both != nullptr)
    {
        children["both"] = both;
    }

    if(listener != nullptr)
    {
        children["listener"] = listener;
    }

    if(speaker != nullptr)
    {
        children["speaker"] = speaker;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "listener" || name == "speaker")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::Both()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "both"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::~Both()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::has_data() const
{
    return vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::Listener()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "listener"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::~Listener()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::has_data() const
{
    return min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::Speaker()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "speaker"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::~Speaker()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    max_time{YType::uint16, "max-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_data() const
{
    return min_time.is_set
	|| max_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "max-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Password()
    :
    password_type{YType::enumeration, "password-type"}
    	,
    mode(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode>())
{
    mode->parent = this;

    yang_name = "password"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::~Password()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::has_data() const
{
    return password_type.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password_type.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password" <<"[password-type='" <<password_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password_type.is_set || is_set(password_type.yfilter)) leaf_name_data.push_back(password_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password-type")
    {
        password_type = value;
        password_type.value_namespace = name_space;
        password_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password-type")
    {
        password_type.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "password-type")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Mode()
    :
    local(nullptr) // presence node
	,peer(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::~Mode()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Local()
    :
    both(nullptr) // presence node
	,listener(nullptr) // presence node
	,speaker(nullptr) // presence node
{

    yang_name = "local"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::~Local()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::has_data() const
{
    return (both !=  nullptr && both->has_data())
	|| (listener !=  nullptr && listener->has_data())
	|| (speaker !=  nullptr && speaker->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::has_operation() const
{
    return is_set(yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (listener !=  nullptr && listener->has_operation())
	|| (speaker !=  nullptr && speaker->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both>();
        }
        return both;
    }

    if(child_yang_name == "listener")
    {
        if(listener == nullptr)
        {
            listener = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener>();
        }
        return listener;
    }

    if(child_yang_name == "speaker")
    {
        if(speaker == nullptr)
        {
            speaker = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker>();
        }
        return speaker;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(both != nullptr)
    {
        children["both"] = both;
    }

    if(listener != nullptr)
    {
        children["listener"] = listener;
    }

    if(speaker != nullptr)
    {
        children["speaker"] = speaker;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "listener" || name == "speaker")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::Both()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "both"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::~Both()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::has_data() const
{
    return vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::Listener()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "listener"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::~Listener()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    max_time{YType::uint16, "max-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::has_data() const
{
    return min_time.is_set
	|| max_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "max-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::Speaker()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "speaker"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::~Speaker()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::has_data() const
{
    return min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Peer_()
    :
    both(nullptr) // presence node
	,listener(nullptr) // presence node
	,speaker(nullptr) // presence node
{

    yang_name = "peer"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::~Peer_()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::has_data() const
{
    return (both !=  nullptr && both->has_data())
	|| (listener !=  nullptr && listener->has_data())
	|| (speaker !=  nullptr && speaker->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::has_operation() const
{
    return is_set(yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (listener !=  nullptr && listener->has_operation())
	|| (speaker !=  nullptr && speaker->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both>();
        }
        return both;
    }

    if(child_yang_name == "listener")
    {
        if(listener == nullptr)
        {
            listener = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener>();
        }
        return listener;
    }

    if(child_yang_name == "speaker")
    {
        if(speaker == nullptr)
        {
            speaker = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker>();
        }
        return speaker;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(both != nullptr)
    {
        children["both"] = both;
    }

    if(listener != nullptr)
    {
        children["listener"] = listener;
    }

    if(speaker != nullptr)
    {
        children["speaker"] = speaker;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "listener" || name == "speaker")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::Both()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "both"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::~Both()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::has_data() const
{
    return vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::Listener()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "listener"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::~Listener()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "listener"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::has_data() const
{
    return min_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::Speaker()
    :
    vrf{YType::str, "vrf"}
    	,
    hold_time(std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime>())
{
    hold_time->parent = this;

    yang_name = "speaker"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::~Speaker()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::has_data() const
{
    return vrf.is_set
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speaker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "vrf")
        return true;
    return false;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::HoldTime()
    :
    min_time{YType::uint16, "min-time"},
    max_time{YType::uint16, "max-time"},
    vrf{YType::str, "vrf"}
{

    yang_name = "hold-time"; yang_parent_name = "speaker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::~HoldTime()
{
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_data() const
{
    return min_time.is_set
	|| max_time.is_set
	|| vrf.is_set;
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-time" || name == "max-time" || name == "vrf")
        return true;
    return false;
}

Native::BfdTemplate::BfdTemplate()
    :
    single_hop(std::make_shared<Native::BfdTemplate::SingleHop>())
{
    single_hop->parent = this;

    yang_name = "bfd-template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::~BfdTemplate()
{
}

bool Native::BfdTemplate::has_data() const
{
    return (single_hop !=  nullptr && single_hop->has_data());
}

bool Native::BfdTemplate::has_operation() const
{
    return is_set(yfilter)
	|| (single_hop !=  nullptr && single_hop->has_operation());
}

std::string Native::BfdTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "single-hop")
    {
        if(single_hop == nullptr)
        {
            single_hop = std::make_shared<Native::BfdTemplate::SingleHop>();
        }
        return single_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(single_hop != nullptr)
    {
        children["single-hop"] = single_hop;
    }

    return children;
}

void Native::BfdTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BfdTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BfdTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "single-hop")
        return true;
    return false;
}

Native::BfdTemplate::SingleHop::SingleHop()
    :
    name{YType::str, "name"}
    	,
    interval(std::make_shared<Native::BfdTemplate::SingleHop::Interval>())
{
    interval->parent = this;

    yang_name = "single-hop"; yang_parent_name = "bfd-template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::SingleHop::~SingleHop()
{
}

bool Native::BfdTemplate::SingleHop::has_data() const
{
    return name.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::BfdTemplate::SingleHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::BfdTemplate::SingleHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd-template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::SingleHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:single-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::SingleHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::SingleHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::BfdTemplate::SingleHop::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::SingleHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::BfdTemplate::SingleHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BfdTemplate::SingleHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::BfdTemplate::SingleHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "name")
        return true;
    return false;
}

Native::BfdTemplate::SingleHop::Interval::Interval()
    :
    microseconds(std::make_shared<Native::BfdTemplate::SingleHop::Interval::Microseconds>())
{
    microseconds->parent = this;

    yang_name = "interval"; yang_parent_name = "single-hop"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::SingleHop::Interval::~Interval()
{
}

bool Native::BfdTemplate::SingleHop::Interval::has_data() const
{
    return (microseconds !=  nullptr && microseconds->has_data());
}

bool Native::BfdTemplate::SingleHop::Interval::has_operation() const
{
    return is_set(yfilter)
	|| (microseconds !=  nullptr && microseconds->has_operation());
}

std::string Native::BfdTemplate::SingleHop::Interval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd-template/Cisco-IOS-XE-bfd:single-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::SingleHop::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::SingleHop::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::SingleHop::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microseconds")
    {
        if(microseconds == nullptr)
        {
            microseconds = std::make_shared<Native::BfdTemplate::SingleHop::Interval::Microseconds>();
        }
        return microseconds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::SingleHop::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(microseconds != nullptr)
    {
        children["microseconds"] = microseconds;
    }

    return children;
}

void Native::BfdTemplate::SingleHop::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BfdTemplate::SingleHop::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BfdTemplate::SingleHop::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microseconds")
        return true;
    return false;
}

Native::BfdTemplate::SingleHop::Interval::Microseconds::Microseconds()
    :
    min_tx{YType::uint32, "min-tx"},
    min_rx{YType::uint32, "min-rx"},
    multiplier{YType::uint8, "multiplier"}
{

    yang_name = "microseconds"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BfdTemplate::SingleHop::Interval::Microseconds::~Microseconds()
{
}

bool Native::BfdTemplate::SingleHop::Interval::Microseconds::has_data() const
{
    return min_tx.is_set
	|| min_rx.is_set
	|| multiplier.is_set;
}

bool Native::BfdTemplate::SingleHop::Interval::Microseconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_tx.yfilter)
	|| ydk::is_set(min_rx.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Native::BfdTemplate::SingleHop::Interval::Microseconds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd-template/Cisco-IOS-XE-bfd:single-hop/interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BfdTemplate::SingleHop::Interval::Microseconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microseconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BfdTemplate::SingleHop::Interval::Microseconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_tx.is_set || is_set(min_tx.yfilter)) leaf_name_data.push_back(min_tx.get_name_leafdata());
    if (min_rx.is_set || is_set(min_rx.yfilter)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BfdTemplate::SingleHop::Interval::Microseconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BfdTemplate::SingleHop::Interval::Microseconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BfdTemplate::SingleHop::Interval::Microseconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-tx")
    {
        min_tx = value;
        min_tx.value_namespace = name_space;
        min_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rx")
    {
        min_rx = value;
        min_rx.value_namespace = name_space;
        min_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BfdTemplate::SingleHop::Interval::Microseconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-tx")
    {
        min_tx.yfilter = yfilter;
    }
    if(value_path == "min-rx")
    {
        min_rx.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Native::BfdTemplate::SingleHop::Interval::Microseconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-tx" || name == "min-rx" || name == "multiplier")
        return true;
    return false;
}

Native::Pfr::Pfr()
    :
    border(nullptr) // presence node
	,master(nullptr) // presence node
{

    yang_name = "pfr"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::~Pfr()
{
}

bool Native::Pfr::has_data() const
{
    return (border !=  nullptr && border->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| (border !=  nullptr && border->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Pfr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::Pfr::Border>();
        }
        return border;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Pfr::Master>();
        }
        return master;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(border != nullptr)
    {
        children["border"] = border;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    return children;
}

void Native::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "master")
        return true;
    return false;
}

Native::Pfr::Border::Border()
    :
    pfr_mode__config_pfr_br(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr>())
{
    pfr_mode__config_pfr_br->parent = this;

    yang_name = "border"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::~Border()
{
}

bool Native::Pfr::Border::has_data() const
{
    return (pfr_mode__config_pfr_br !=  nullptr && pfr_mode__config_pfr_br->has_data());
}

bool Native::Pfr::Border::has_operation() const
{
    return is_set(yfilter)
	|| (pfr_mode__config_pfr_br !=  nullptr && pfr_mode__config_pfr_br->has_operation());
}

std::string Native::Pfr::Border::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfr-Mode__config-pfr-br")
    {
        if(pfr_mode__config_pfr_br == nullptr)
        {
            pfr_mode__config_pfr_br = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr>();
        }
        return pfr_mode__config_pfr_br;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfr_mode__config_pfr_br != nullptr)
    {
        children["pfr-Mode__config-pfr-br"] = pfr_mode__config_pfr_br;
    }

    return children;
}

void Native::Pfr::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-Mode__config-pfr-br")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::PfrModeConfigpfrbr()
    :
    logging{YType::empty, "logging"},
    port{YType::uint16, "port"},
    shutdown{YType::empty, "shutdown"}
    	,
    active_probe(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe>())
	,local(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local>())
	,master(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master>())
{
    active_probe->parent = this;
    local->parent = this;
    master->parent = this;

    yang_name = "pfr-Mode__config-pfr-br"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::~PfrModeConfigpfrbr()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_data() const
{
    return logging.is_set
	|| port.is_set
	|| shutdown.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-Mode__config-pfr-br";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local>();
        }
        return local;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master>();
        }
        return master;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "local" || name == "master" || name == "logging" || name == "port" || name == "shutdown")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::ActiveProbe()
    :
    address(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address>())
{
    address->parent = this;

    yang_name = "active-probe"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::~ActiveProbe()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Address()
    :
    source(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source>())
{
    source->parent = this;

    yang_name = "address"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::~Address()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Source()
    :
    interface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface>())
{
    interface->parent = this;

    yang_name = "source"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::~Source()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::~Interface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Local()
    :
    interface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::~Local()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::~Interface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Master()
{

    yang_name = "master"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::~Master()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    key_chain{YType::str, "key-chain"}
{

    yang_name = "ipv4"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_data() const
{
    return ipv4.is_set
	|| key_chain.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(key_chain.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/master/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "key-chain")
        return true;
    return false;
}

Native::Pfr::Master::Master()
    :
    icmp_mode_config_pfr_mc(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc>())
{
    icmp_mode_config_pfr_mc->parent = this;

    yang_name = "master"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::~Master()
{
}

bool Native::Pfr::Master::has_data() const
{
    return (icmp_mode_config_pfr_mc !=  nullptr && icmp_mode_config_pfr_mc->has_data());
}

bool Native::Pfr::Master::has_operation() const
{
    return is_set(yfilter)
	|| (icmp_mode_config_pfr_mc !=  nullptr && icmp_mode_config_pfr_mc->has_operation());
}

std::string Native::Pfr::Master::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-Mode-config-pfr-mc")
    {
        if(icmp_mode_config_pfr_mc == nullptr)
        {
            icmp_mode_config_pfr_mc = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc>();
        }
        return icmp_mode_config_pfr_mc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icmp_mode_config_pfr_mc != nullptr)
    {
        children["icmp-Mode-config-pfr-mc"] = icmp_mode_config_pfr_mc;
    }

    return children;
}

void Native::Pfr::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-Mode-config-pfr-mc")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::IcmpModeConfigPfrMc()
    :
    bandwidth_resolution{YType::empty, "bandwidth-resolution"},
    exporter{YType::str, "exporter"},
    holddown{YType::uint16, "holddown"},
    keepalive{YType::uint16, "keepalive"},
    logging{YType::empty, "logging"},
    periodic{YType::uint16, "periodic"},
    policy_rules{YType::str, "policy-rules"},
    port{YType::uint16, "port"},
    shutdown{YType::empty, "shutdown"},
    trigger_log_percentage{YType::uint8, "trigger-log-percentage"}
    	,
    active_probe(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe>())
	,application(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application>())
	,backoff(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff>())
	,border(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border>())
	,delay(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Delay>())
	,jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter>())
	,learn(nullptr) // presence node
	,loss(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Loss>())
	,max(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max>())
	,max_range_utilization(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization>())
	,mc_peer(nullptr) // presence node
	,mode(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode>())
	,mos(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos>())
	,probe(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Probe>())
	,resolve(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve>())
	,rsvp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp>())
	,target_discovery(nullptr) // presence node
	,traceroute(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute>())
	,unreachable(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable>())
{
    active_probe->parent = this;
    application->parent = this;
    backoff->parent = this;
    border->parent = this;
    delay->parent = this;
    jitter->parent = this;
    loss->parent = this;
    max->parent = this;
    max_range_utilization->parent = this;
    mode->parent = this;
    mos->parent = this;
    probe->parent = this;
    resolve->parent = this;
    rsvp->parent = this;
    traceroute->parent = this;
    unreachable->parent = this;

    yang_name = "icmp-Mode-config-pfr-mc"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::~IcmpModeConfigPfrMc()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_data() const
{
    return bandwidth_resolution.is_set
	|| exporter.is_set
	|| holddown.is_set
	|| keepalive.is_set
	|| logging.is_set
	|| periodic.is_set
	|| policy_rules.is_set
	|| port.is_set
	|| shutdown.is_set
	|| trigger_log_percentage.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (border !=  nullptr && border->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (learn !=  nullptr && learn->has_data())
	|| (loss !=  nullptr && loss->has_data())
	|| (max !=  nullptr && max->has_data())
	|| (max_range_utilization !=  nullptr && max_range_utilization->has_data())
	|| (mc_peer !=  nullptr && mc_peer->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (mos !=  nullptr && mos->has_data())
	|| (probe !=  nullptr && probe->has_data())
	|| (resolve !=  nullptr && resolve->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (target_discovery !=  nullptr && target_discovery->has_data())
	|| (traceroute !=  nullptr && traceroute->has_data())
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_resolution.yfilter)
	|| ydk::is_set(exporter.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(policy_rules.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trigger_log_percentage.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (border !=  nullptr && border->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (learn !=  nullptr && learn->has_operation())
	|| (loss !=  nullptr && loss->has_operation())
	|| (max !=  nullptr && max->has_operation())
	|| (max_range_utilization !=  nullptr && max_range_utilization->has_operation())
	|| (mc_peer !=  nullptr && mc_peer->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (mos !=  nullptr && mos->has_operation())
	|| (probe !=  nullptr && probe->has_operation())
	|| (resolve !=  nullptr && resolve->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (target_discovery !=  nullptr && target_discovery->has_operation())
	|| (traceroute !=  nullptr && traceroute->has_operation())
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-Mode-config-pfr-mc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_resolution.is_set || is_set(bandwidth_resolution.yfilter)) leaf_name_data.push_back(bandwidth_resolution.get_name_leafdata());
    if (exporter.is_set || is_set(exporter.yfilter)) leaf_name_data.push_back(exporter.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (policy_rules.is_set || is_set(policy_rules.yfilter)) leaf_name_data.push_back(policy_rules.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trigger_log_percentage.is_set || is_set(trigger_log_percentage.yfilter)) leaf_name_data.push_back(trigger_log_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application>();
        }
        return application;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border>();
        }
        return border;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "learn")
    {
        if(learn == nullptr)
        {
            learn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn>();
        }
        return learn;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "max")
    {
        if(max == nullptr)
        {
            max = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max>();
        }
        return max;
    }

    if(child_yang_name == "max-range-utilization")
    {
        if(max_range_utilization == nullptr)
        {
            max_range_utilization = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization>();
        }
        return max_range_utilization;
    }

    if(child_yang_name == "mc-peer")
    {
        if(mc_peer == nullptr)
        {
            mc_peer = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer>();
        }
        return mc_peer;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "mos")
    {
        if(mos == nullptr)
        {
            mos = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos>();
        }
        return mos;
    }

    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Probe>();
        }
        return probe;
    }

    if(child_yang_name == "resolve")
    {
        if(resolve == nullptr)
        {
            resolve = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve>();
        }
        return resolve;
    }

    if(child_yang_name == "rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "target-discovery")
    {
        if(target_discovery == nullptr)
        {
            target_discovery = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery>();
        }
        return target_discovery;
    }

    if(child_yang_name == "traceroute")
    {
        if(traceroute == nullptr)
        {
            traceroute = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute>();
        }
        return traceroute;
    }

    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(border != nullptr)
    {
        children["border"] = border;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(learn != nullptr)
    {
        children["learn"] = learn;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    if(max != nullptr)
    {
        children["max"] = max;
    }

    if(max_range_utilization != nullptr)
    {
        children["max-range-utilization"] = max_range_utilization;
    }

    if(mc_peer != nullptr)
    {
        children["mc-peer"] = mc_peer;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(mos != nullptr)
    {
        children["mos"] = mos;
    }

    if(probe != nullptr)
    {
        children["probe"] = probe;
    }

    if(resolve != nullptr)
    {
        children["resolve"] = resolve;
    }

    if(rsvp != nullptr)
    {
        children["rsvp"] = rsvp;
    }

    if(target_discovery != nullptr)
    {
        children["target-discovery"] = target_discovery;
    }

    if(traceroute != nullptr)
    {
        children["traceroute"] = traceroute;
    }

    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-resolution")
    {
        bandwidth_resolution = value;
        bandwidth_resolution.value_namespace = name_space;
        bandwidth_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exporter")
    {
        exporter = value;
        exporter.value_namespace = name_space;
        exporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-rules")
    {
        policy_rules = value;
        policy_rules.value_namespace = name_space;
        policy_rules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage = value;
        trigger_log_percentage.value_namespace = name_space;
        trigger_log_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-resolution")
    {
        bandwidth_resolution.yfilter = yfilter;
    }
    if(value_path == "exporter")
    {
        exporter.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "policy-rules")
    {
        policy_rules.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "application" || name == "backoff" || name == "border" || name == "delay" || name == "jitter" || name == "learn" || name == "loss" || name == "max" || name == "max-range-utilization" || name == "mc-peer" || name == "mode" || name == "mos" || name == "probe" || name == "resolve" || name == "rsvp" || name == "target-discovery" || name == "traceroute" || name == "unreachable" || name == "bandwidth-resolution" || name == "exporter" || name == "holddown" || name == "keepalive" || name == "logging" || name == "periodic" || name == "policy-rules" || name == "port" || name == "shutdown" || name == "trigger-log-percentage")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::ActiveProbe()
    :
    echo{YType::str, "echo"}
    	,
    jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter>())
	,tcp_conn(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn>())
	,udp_echo(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho>())
{
    jitter->parent = this;
    tcp_conn->parent = this;
    udp_echo->parent = this;

    yang_name = "active-probe"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::~ActiveProbe()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_data() const
{
    return echo.is_set
	|| (jitter !=  nullptr && jitter->has_data())
	|| (tcp_conn !=  nullptr && tcp_conn->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(echo.yfilter)
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (tcp_conn !=  nullptr && tcp_conn->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "tcp-conn")
    {
        if(tcp_conn == nullptr)
        {
            tcp_conn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn>();
        }
        return tcp_conn;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(tcp_conn != nullptr)
    {
        children["tcp-conn"] = tcp_conn;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter" || name == "tcp-conn" || name == "udp-echo" || name == "echo")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Jitter()
{

    yang_name = "jitter"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/jitter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::TcpConn()
{

    yang_name = "tcp-conn"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::~TcpConn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-conn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "tcp-conn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/tcp-conn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::UdpEcho()
{

    yang_name = "udp-echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::~UdpEcho()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/udp-echo/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Application()
    :
    define(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define>())
{
    define->parent = this;

    yang_name = "application"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::~Application()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_data() const
{
    return (define !=  nullptr && define->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_operation() const
{
    return is_set(yfilter)
	|| (define !=  nullptr && define->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "define")
    {
        if(define == nullptr)
        {
            define = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define>();
        }
        return define;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(define != nullptr)
    {
        children["define"] = define;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "define")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::Define()
{

    yang_name = "define"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::~Define()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_data() const
{
    for (std::size_t index=0; index<app_def.size(); index++)
    {
        if(app_def[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_operation() const
{
    for (std::size_t index=0; index<app_def.size(); index++)
    {
        if(app_def[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/application/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "define";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app-def")
    {
        for(auto const & c : app_def)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef>();
        c->parent = this;
        app_def.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : app_def)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-def")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::AppDef()
    :
    app_def{YType::str, "app-def"},
    access_list{YType::str, "access-list"},
    nbar{YType::empty, "nbar"}
{

    yang_name = "app-def"; yang_parent_name = "define"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::~AppDef()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_data() const
{
    return app_def.is_set
	|| access_list.is_set
	|| nbar.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_def.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(nbar.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/application/define/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-def" <<"[app-def='" <<app_def <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_def.is_set || is_set(app_def.yfilter)) leaf_name_data.push_back(app_def.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (nbar.is_set || is_set(nbar.yfilter)) leaf_name_data.push_back(nbar.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-def")
    {
        app_def = value;
        app_def.value_namespace = name_space;
        app_def.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbar")
    {
        nbar = value;
        nbar.value_namespace = name_space;
        nbar.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-def")
    {
        app_def.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "nbar")
    {
        nbar.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-def" || name == "access-list" || name == "nbar")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Backoff()
{

    yang_name = "backoff"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::~Backoff()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_data() const
{
    for (std::size_t index=0; index<boff.size(); index++)
    {
        if(boff[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff.size(); index++)
    {
        if(boff[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff")
    {
        for(auto const & c : boff)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff>();
        c->parent = this;
        boff.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff()
    :
    boff{YType::uint16, "boff"}
{

    yang_name = "boff"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::~Boff()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_data() const
{
    for (std::size_t index=0; index<boff0.size(); index++)
    {
        if(boff0[index]->has_data())
            return true;
    }
    return boff.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_operation() const
{
    for (std::size_t index=0; index<boff0.size(); index++)
    {
        if(boff0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boff.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/backoff/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff" <<"[boff='" <<boff <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff.is_set || is_set(boff.yfilter)) leaf_name_data.push_back(boff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff0")
    {
        for(auto const & c : boff0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0>();
        c->parent = this;
        boff0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff")
    {
        boff = value;
        boff.value_namespace = name_space;
        boff.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff")
    {
        boff.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff0" || name == "boff")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::Boff0()
    :
    boff0{YType::uint16, "boff0"},
    bstep{YType::uint16, "bstep"}
{

    yang_name = "boff0"; yang_parent_name = "boff"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::~Boff0()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_data() const
{
    return boff0.is_set
	|| bstep.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boff0.yfilter)
	|| ydk::is_set(bstep.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff0" <<"[boff0='" <<boff0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff0.is_set || is_set(boff0.yfilter)) leaf_name_data.push_back(boff0.get_name_leafdata());
    if (bstep.is_set || is_set(bstep.yfilter)) leaf_name_data.push_back(bstep.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff0")
    {
        boff0 = value;
        boff0.value_namespace = name_space;
        boff0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bstep")
    {
        bstep = value;
        bstep.value_namespace = name_space;
        bstep.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff0")
    {
        boff0.yfilter = yfilter;
    }
    if(value_path == "bstep")
    {
        bstep.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff0" || name == "bstep")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Border()
{

    yang_name = "border"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::~Border()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::empty, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_data() const
{
    for (std::size_t index=0; index<key_chain.size(); index++)
    {
        if(key_chain[index]->has_data())
            return true;
    }
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<key_chain.size(); index++)
    {
        if(key_chain[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/border/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        for(auto const & c : key_chain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain>();
        c->parent = this;
        key_chain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::KeyChain()
    :
    kc_name{YType::str, "kc-name"},
    interface{YType::empty, "interface"}
{

    yang_name = "key-chain"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::~KeyChain()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_data() const
{
    return kc_name.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kc_name.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain" <<"[kc-name='" <<kc_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kc_name.is_set || is_set(kc_name.yfilter)) leaf_name_data.push_back(kc_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kc-name")
    {
        kc_name = value;
        kc_name.value_namespace = name_space;
        kc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kc-name")
    {
        kc_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kc-name" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::Delay()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "delay"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::Jitter()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "jitter"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_data() const
{
    return threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::Learn()
    :
    lrn_mode__config_pfr_mc_learn(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn>())
{
    lrn_mode__config_pfr_mc_learn->parent = this;

    yang_name = "learn"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::~Learn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_data() const
{
    return (lrn_mode__config_pfr_mc_learn !=  nullptr && lrn_mode__config_pfr_mc_learn->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_operation() const
{
    return is_set(yfilter)
	|| (lrn_mode__config_pfr_mc_learn !=  nullptr && lrn_mode__config_pfr_mc_learn->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lrn-Mode__config-pfr-mc-learn")
    {
        if(lrn_mode__config_pfr_mc_learn == nullptr)
        {
            lrn_mode__config_pfr_mc_learn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn>();
        }
        return lrn_mode__config_pfr_mc_learn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lrn_mode__config_pfr_mc_learn != nullptr)
    {
        children["lrn-Mode__config-pfr-mc-learn"] = lrn_mode__config_pfr_mc_learn;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lrn-Mode__config-pfr-mc-learn")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::LrnModeConfigpfrmclearn()
    :
    delay{YType::empty, "delay"},
    monitor_period{YType::uint16, "monitor-period"},
    periodic_interval{YType::uint16, "periodic-interval"},
    throughput{YType::empty, "throughput"}
    	,
    aggregation_type(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType>())
	,expire(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire>())
	,inside(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside>())
	,list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List>())
	,prefixes(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes>())
	,traffic_class(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass>())
{
    aggregation_type->parent = this;
    expire->parent = this;
    inside->parent = this;
    list->parent = this;
    prefixes->parent = this;
    traffic_class->parent = this;

    yang_name = "lrn-Mode__config-pfr-mc-learn"; yang_parent_name = "learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::~LrnModeConfigpfrmclearn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_data() const
{
    return delay.is_set
	|| monitor_period.is_set
	|| periodic_interval.is_set
	|| throughput.is_set
	|| (aggregation_type !=  nullptr && aggregation_type->has_data())
	|| (expire !=  nullptr && expire->has_data())
	|| (inside !=  nullptr && inside->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(monitor_period.yfilter)
	|| ydk::is_set(periodic_interval.yfilter)
	|| ydk::is_set(throughput.yfilter)
	|| (aggregation_type !=  nullptr && aggregation_type->has_operation())
	|| (expire !=  nullptr && expire->has_operation())
	|| (inside !=  nullptr && inside->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lrn-Mode__config-pfr-mc-learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (monitor_period.is_set || is_set(monitor_period.yfilter)) leaf_name_data.push_back(monitor_period.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (throughput.is_set || is_set(throughput.yfilter)) leaf_name_data.push_back(throughput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregation-type")
    {
        if(aggregation_type == nullptr)
        {
            aggregation_type = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType>();
        }
        return aggregation_type;
    }

    if(child_yang_name == "expire")
    {
        if(expire == nullptr)
        {
            expire = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire>();
        }
        return expire;
    }

    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List>();
        }
        return list;
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregation_type != nullptr)
    {
        children["aggregation-type"] = aggregation_type;
    }

    if(expire != nullptr)
    {
        children["expire"] = expire;
    }

    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-period")
    {
        monitor_period = value;
        monitor_period.value_namespace = name_space;
        monitor_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throughput")
    {
        throughput = value;
        throughput.value_namespace = name_space;
        throughput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "monitor-period")
    {
        monitor_period.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
    if(value_path == "throughput")
    {
        throughput.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregation-type" || name == "expire" || name == "inside" || name == "list" || name == "prefixes" || name == "traffic-class" || name == "delay" || name == "monitor-period" || name == "periodic-interval" || name == "throughput")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::AggregationType()
    :
    bgp{YType::empty, "bgp"},
    non_bgp{YType::empty, "non-bgp"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "aggregation-type"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::~AggregationType()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_data() const
{
    return bgp.is_set
	|| non_bgp.is_set
	|| prefix_length.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(non_bgp.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregation-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (non_bgp.is_set || is_set(non_bgp.yfilter)) leaf_name_data.push_back(non_bgp.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-bgp")
    {
        non_bgp = value;
        non_bgp.value_namespace = name_space;
        non_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "non-bgp")
    {
        non_bgp.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "non-bgp" || name == "prefix-length")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::Expire()
    :
    after(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After>())
{
    after->parent = this;

    yang_name = "expire"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::~Expire()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_data() const
{
    return (after !=  nullptr && after->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_operation() const
{
    return is_set(yfilter)
	|| (after !=  nullptr && after->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "after")
    {
        if(after == nullptr)
        {
            after = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After>();
        }
        return after;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(after != nullptr)
    {
        children["after"] = after;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::After()
    :
    session{YType::uint16, "session"},
    time{YType::uint16, "time"}
{

    yang_name = "after"; yang_parent_name = "expire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::~After()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_data() const
{
    return session.is_set
	|| time.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/expire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "after";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "time")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::Inside()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "inside"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::~Inside()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_data() const
{
    return bgp.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::List()
    :
    seq(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq>())
{
    seq->parent = this;

    yang_name = "list"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::~List()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_data() const
{
    return (seq !=  nullptr && seq->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_operation() const
{
    return is_set(yfilter)
	|| (seq !=  nullptr && seq->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq")
    {
        if(seq == nullptr)
        {
            seq = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq>();
        }
        return seq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(seq != nullptr)
    {
        children["seq"] = seq;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::Seq()
{

    yang_name = "seq"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::~Seq()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_data() const
{
    for (std::size_t index=0; index<pfr_tc.size(); index++)
    {
        if(pfr_tc[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_operation() const
{
    for (std::size_t index=0; index<pfr_tc.size(); index++)
    {
        if(pfr_tc[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfr-tc")
    {
        for(auto const & c : pfr_tc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc>();
        c->parent = this;
        pfr_tc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pfr_tc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-tc")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::PfrTc()
    :
    pfr_tc{YType::uint16, "pfr-tc"},
    refname{YType::empty, "refname"}
{

    yang_name = "pfr-tc"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::~PfrTc()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_data() const
{
    return pfr_tc.is_set
	|| refname.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfr_tc.yfilter)
	|| ydk::is_set(refname.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/list/seq/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-tc" <<"[pfr-tc='" <<pfr_tc <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfr_tc.is_set || is_set(pfr_tc.yfilter)) leaf_name_data.push_back(pfr_tc.get_name_leafdata());
    if (refname.is_set || is_set(refname.yfilter)) leaf_name_data.push_back(refname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfr-tc")
    {
        pfr_tc = value;
        pfr_tc.value_namespace = name_space;
        pfr_tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refname")
    {
        refname = value;
        refname.value_namespace = name_space;
        refname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfr-tc")
    {
        pfr_tc.yfilter = yfilter;
    }
    if(value_path == "refname")
    {
        refname.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-tc" || name == "refname")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Trustpool::Import::Url::File::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_::dhe_psk_aes128_cbc_sha1 {0, "dhe-psk-aes128-cbc-sha1"};
const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_::dhe_psk_aes256_cbc_sha1 {1, "dhe-psk-aes256-cbc-sha1"};
const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_::psk_aes128_cbc_sha1 {2, "psk-aes128-cbc-sha1"};
const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Protection::Protection_::psk_aes256_cbc_sha1 {3, "psk-aes256-cbc-sha1"};

const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Cts::Logging::verbose {0, "verbose"};

const Enum::YLeaf Native::Cts::SgEpg::translation {0, "translation"};

const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::crashinfo__COLON__ {1, "crashinfo:"};
const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::kinfo__COLON__ {2, "kinfo:"};
const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::slot0__COLON__ {3, "slot0:"};
const Enum::YLeaf Native::Cts::Cache::NvStorage::NvStorage_::usb0__COLON__ {4, "usb0:"};

const Enum::YLeaf Native::Cts::CriticalAuthentication::Default_::Pmk::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Cts::CriticalAuthentication::Default_::Pmk::Type::Y_6 {1, "6"};

const Enum::YLeaf Native::Cts::RoleBased::Enforcement::VlanList::Id::all {0, "all"};

const Enum::YLeaf Native::Cts::RoleBased::SgtMapVlanList::SgtMap::VlanList::all {0, "all"};

const Enum::YLeaf Native::Cts::Sxp::Default_::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Cts::Sxp::Default_::Password::Type::Y_6 {1, "6"};
const Enum::YLeaf Native::Cts::Sxp::Default_::Password::Type::Y_7 {2, "7"};

const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType::default_ {0, "default"};
const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType::none {1, "none"};

const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Password::PasswordType::default_ {0, "default"};
const Enum::YLeaf Native::Cts::Sxp::Connection::Peer::Ipv4::Password::PasswordType::none {1, "none"};


}
}

