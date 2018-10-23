
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_127.hpp"
#include "Cisco_IOS_XE_native_128.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Key::Encrypt::Write::Ec::Ec()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "ec"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Encrypt::Write::Ec::~Ec()
{
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Write::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Write::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Write::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Encrypt::Write::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Encrypt::Write::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Encrypt::Write::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Write::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Write::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Encrypt::Write::Rsa::Rsa()
    :
    name{YType::str, "name"},
    passphrase{YType::str, "passphrase"}
{

    yang_name = "rsa"; yang_parent_name = "write"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Encrypt::Write::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| passphrase.is_set;
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(passphrase.yfilter);
}

std::string Native::Crypto::Key::Encrypt::Write::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/encrypt/write/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Encrypt::Write::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Encrypt::Write::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (passphrase.is_set || is_set(passphrase.yfilter)) leaf_name_data.push_back(passphrase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Encrypt::Write::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Encrypt::Write::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Encrypt::Write::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passphrase")
    {
        passphrase = value;
        passphrase.value_namespace = name_space;
        passphrase.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Encrypt::Write::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "passphrase")
    {
        passphrase.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Encrypt::Write::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "passphrase")
        return true;
    return false;
}

Native::Crypto::Key::Export::Export()
    :
    ec(this, {"label"})
    , rsa(this, {"label"})
{

    yang_name = "export"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Export::~Export()
{
}

bool Native::Crypto::Key::Export::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ec.len(); index++)
    {
        if(ec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsa.len(); index++)
    {
        if(rsa[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::Export::has_operation() const
{
    for (std::size_t index=0; index<ec.len(); index++)
    {
        if(ec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsa.len(); index++)
    {
        if(rsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::Export::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::Export::Ec>();
        ent_->parent = this;
        ec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rsa")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::Export::Rsa>();
        ent_->parent = this;
        rsa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Key::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Ec()
    :
    label{YType::str, "label"}
        ,
    pem(std::make_shared<Native::Crypto::Key::Export::Ec::Pem>())
{
    pem->parent = this;

    yang_name = "ec"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Export::Ec::~Ec()
{
}

bool Native::Crypto::Key::Export::Ec::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| (pem !=  nullptr && pem->has_data());
}

bool Native::Crypto::Key::Export::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (pem !=  nullptr && pem->has_operation());
}

std::string Native::Crypto::Key::Export::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Key::Export::Ec::Pem>();
        }
        return pem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pem != nullptr)
    {
        _children["pem"] = pem;
    }

    return _children;
}

void Native::Crypto::Key::Export::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Pem()
    :
    terminal(std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Terminal>())
    , url(std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "ec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Ec::Pem::~Pem()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::has_data() const
{
    if (is_presence_container) return true;
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Export::Ec::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Export::Ec::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Ec::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Export::Ec::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Ec::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(terminal != nullptr)
    {
        _children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::Crypto::Key::Export::Ec::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::Ec::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::Ec::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Terminal::Terminal()
    :
    pk_3des{YType::str, "pk-3des"},
    des{YType::str, "des"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Ec::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_data() const
{
    if (is_presence_container) return true;
    return pk_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pk_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Ec::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pk_3des.is_set || is_set(pk_3des.yfilter)) leaf_name_data.push_back(pk_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Ec::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Ec::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Export::Ec::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pk-3des")
    {
        pk_3des = value;
        pk_3des.value_namespace = name_space;
        pk_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pk-3des")
    {
        pk_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pk-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Ec::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    url_3des{YType::str, "url-3des"},
    des{YType::str, "des"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Ec::Pem::Url::~Url()
{
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| url_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(url_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Ec::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Ec::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (url_3des.is_set || is_set(url_3des.yfilter)) leaf_name_data.push_back(url_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Ec::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Ec::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Export::Ec::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-3des")
    {
        url_3des = value;
        url_3des.value_namespace = name_space;
        url_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Ec::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "url-3des")
    {
        url_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Ec::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "url-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Rsa()
    :
    label{YType::str, "label"}
        ,
    pem(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem>())
{
    pem->parent = this;

    yang_name = "rsa"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Export::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Export::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| (pem !=  nullptr && pem->has_data());
}

bool Native::Crypto::Key::Export::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (pem !=  nullptr && pem->has_operation());
}

std::string Native::Crypto::Key::Export::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Export::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem>();
        }
        return pem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pem != nullptr)
    {
        _children["pem"] = pem;
    }

    return _children;
}

void Native::Crypto::Key::Export::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Pem()
    :
    terminal(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Terminal>())
    , url(std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Rsa::Pem::~Pem()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_data() const
{
    if (is_presence_container) return true;
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Export::Rsa::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Rsa::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Export::Rsa::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Rsa::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(terminal != nullptr)
    {
        _children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::Crypto::Key::Export::Rsa::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Export::Rsa::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Terminal::Terminal()
    :
    pk_3des{YType::str, "pk-3des"},
    des{YType::str, "des"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Rsa::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_data() const
{
    if (is_presence_container) return true;
    return pk_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pk_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pk_3des.is_set || is_set(pk_3des.yfilter)) leaf_name_data.push_back(pk_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Rsa::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Export::Rsa::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pk-3des")
    {
        pk_3des = value;
        pk_3des.value_namespace = name_space;
        pk_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pk-3des")
    {
        pk_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pk-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Export::Rsa::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    url_3des{YType::str, "url-3des"},
    des{YType::str, "des"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Export::Rsa::Pem::Url::~Url()
{
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| url_3des.is_set
	|| des.is_set;
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(url_3des.yfilter)
	|| ydk::is_set(des.yfilter);
}

std::string Native::Crypto::Key::Export::Rsa::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Export::Rsa::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (url_3des.is_set || is_set(url_3des.yfilter)) leaf_name_data.push_back(url_3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Export::Rsa::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Export::Rsa::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Export::Rsa::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-3des")
    {
        url_3des = value;
        url_3des.value_namespace = name_space;
        url_3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Export::Rsa::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "url-3des")
    {
        url_3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Export::Rsa::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "url-3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Generate()
    :
    ec(std::make_shared<Native::Crypto::Key::Generate::Ec>())
    , rsa(nullptr) // presence node
{
    ec->parent = this;

    yang_name = "generate"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Generate::~Generate()
{
}

bool Native::Crypto::Key::Generate::has_data() const
{
    if (is_presence_container) return true;
    return (ec !=  nullptr && ec->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Generate::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Generate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Generate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Generate::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Generate::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Generate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::Generate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Generate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Generate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Ec::Ec()
    :
    keysize{YType::enumeration, "keysize"},
    exportable{YType::empty, "exportable"},
    label{YType::str, "label"}
{

    yang_name = "ec"; yang_parent_name = "generate"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Generate::Ec::~Ec()
{
}

bool Native::Crypto::Key::Generate::Ec::has_data() const
{
    if (is_presence_container) return true;
    return keysize.is_set
	|| exportable.is_set
	|| label.is_set;
}

bool Native::Crypto::Key::Generate::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Generate::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/generate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Generate::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Generate::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Generate::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Generate::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Generate::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keysize" || name == "exportable" || name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Generate::Rsa::Rsa()
    :
    encryption{YType::empty, "encryption"},
    exportable{YType::empty, "exportable"},
    general_keys{YType::empty, "general-keys"},
    label{YType::str, "label"},
    modulus{YType::uint16, "modulus"},
    on{YType::str, "on"},
    redundancy{YType::empty, "redundancy"},
    signature{YType::empty, "signature"},
    storage{YType::str, "storage"},
    usage_keys{YType::empty, "usage-keys"}
{

    yang_name = "rsa"; yang_parent_name = "generate"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Generate::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Generate::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| exportable.is_set
	|| general_keys.is_set
	|| label.is_set
	|| modulus.is_set
	|| on.is_set
	|| redundancy.is_set
	|| signature.is_set
	|| storage.is_set
	|| usage_keys.is_set;
}

bool Native::Crypto::Key::Generate::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(general_keys.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(modulus.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(signature.yfilter)
	|| ydk::is_set(storage.yfilter)
	|| ydk::is_set(usage_keys.yfilter);
}

std::string Native::Crypto::Key::Generate::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/generate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Generate::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Generate::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (general_keys.is_set || is_set(general_keys.yfilter)) leaf_name_data.push_back(general_keys.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (modulus.is_set || is_set(modulus.yfilter)) leaf_name_data.push_back(modulus.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Generate::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Generate::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Generate::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-keys")
    {
        general_keys = value;
        general_keys.value_namespace = name_space;
        general_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modulus")
    {
        modulus = value;
        modulus.value_namespace = name_space;
        modulus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Generate::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "general-keys")
    {
        general_keys.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "modulus")
    {
        modulus.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Generate::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "exportable" || name == "general-keys" || name == "label" || name == "modulus" || name == "on" || name == "redundancy" || name == "signature" || name == "storage" || name == "usage-keys")
        return true;
    return false;
}

Native::Crypto::Key::Import::Import()
    :
    ec(this, {"name"})
    , rsa(this, {"label"})
{

    yang_name = "import"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Import::~Import()
{
}

bool Native::Crypto::Key::Import::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ec.len(); index++)
    {
        if(ec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsa.len(); index++)
    {
        if(rsa[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::Import::has_operation() const
{
    for (std::size_t index=0; index<ec.len(); index++)
    {
        if(ec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsa.len(); index++)
    {
        if(rsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::Import::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::Import::Ec>();
        ent_->parent = this;
        ec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rsa")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::Import::Rsa>();
        ent_->parent = this;
        rsa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Key::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Import::Ec::Ec()
    :
    name{YType::str, "name"},
    exportable{YType::empty, "exportable"},
    terminal{YType::str, "terminal"}
        ,
    url(std::make_shared<Native::Crypto::Key::Import::Ec::Url>())
{
    url->parent = this;

    yang_name = "ec"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Import::Ec::~Ec()
{
}

bool Native::Crypto::Key::Import::Ec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| exportable.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Import::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Import::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::Crypto::Key::Import::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "name" || name == "exportable" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Key::Import::Ec::Url::Url()
    :
    file{YType::enumeration, "file"},
    key{YType::str, "key"}
{

    yang_name = "url"; yang_parent_name = "ec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Import::Ec::Url::~Url()
{
}

bool Native::Crypto::Key::Import::Ec::Url::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| key.is_set;
}

bool Native::Crypto::Key::Import::Ec::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Key::Import::Ec::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Ec::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::Ec::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::Ec::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Import::Ec::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Ec::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Ec::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "key")
        return true;
    return false;
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
    usage_keys{YType::empty, "usage-keys"},
    terminal{YType::str, "terminal"}
        ,
    url(std::make_shared<Native::Crypto::Key::Import::Rsa::Url>())
{
    url->parent = this;

    yang_name = "rsa"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Import::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Import::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| encryption.is_set
	|| exportable.is_set
	|| general_purpose.is_set
	|| on.is_set
	|| pem.is_set
	|| redundancy.is_set
	|| signature.is_set
	|| storage.is_set
	|| usage_keys.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Import::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(general_purpose.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(pem.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(signature.yfilter)
	|| ydk::is_set(storage.yfilter)
	|| ydk::is_set(usage_keys.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Import::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Import::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (general_purpose.is_set || is_set(general_purpose.yfilter)) leaf_name_data.push_back(general_purpose.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (pem.is_set || is_set(pem.yfilter)) leaf_name_data.push_back(pem.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::Crypto::Key::Import::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-purpose")
    {
        general_purpose = value;
        general_purpose.value_namespace = name_space;
        general_purpose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pem")
    {
        pem = value;
        pem.value_namespace = name_space;
        pem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "general-purpose")
    {
        general_purpose.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "pem")
    {
        pem.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "label" || name == "encryption" || name == "exportable" || name == "general-purpose" || name == "on" || name == "pem" || name == "redundancy" || name == "signature" || name == "storage" || name == "usage-keys" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Key::Import::Rsa::Url::Url()
    :
    file{YType::enumeration, "file"},
    key{YType::str, "key"}
{

    yang_name = "url"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::Import::Rsa::Url::~Url()
{
}

bool Native::Crypto::Key::Import::Rsa::Url::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| key.is_set;
}

bool Native::Crypto::Key::Import::Rsa::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Key::Import::Rsa::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Import::Rsa::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Import::Rsa::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Import::Rsa::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Import::Rsa::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Import::Rsa::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Import::Rsa::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "key")
        return true;
    return false;
}

Native::Crypto::Key::Move::Move()
    :
    rsa(std::make_shared<Native::Crypto::Key::Move::Rsa>())
{
    rsa->parent = this;

    yang_name = "move"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Move::~Move()
{
}

bool Native::Crypto::Key::Move::has_data() const
{
    if (is_presence_container) return true;
    return (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Move::has_operation() const
{
    return is_set(yfilter)
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Move::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Move::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Move::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Move::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Move::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::Move::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Move::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Move::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Move::Rsa::Rsa()
    :
    label{YType::str, "label"},
    non_exportable{YType::empty, "non-exportable"},
    on{YType::str, "on"},
    redundancy{YType::empty, "redundancy"},
    storage{YType::str, "storage"}
{

    yang_name = "rsa"; yang_parent_name = "move"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Move::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Move::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| non_exportable.is_set
	|| on.is_set
	|| redundancy.is_set
	|| storage.is_set;
}

bool Native::Crypto::Key::Move::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(non_exportable.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(storage.yfilter);
}

std::string Native::Crypto::Key::Move::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/move/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Move::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Move::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (non_exportable.is_set || is_set(non_exportable.yfilter)) leaf_name_data.push_back(non_exportable.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (storage.is_set || is_set(storage.yfilter)) leaf_name_data.push_back(storage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Move::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Move::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::Move::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-exportable")
    {
        non_exportable = value;
        non_exportable.value_namespace = name_space;
        non_exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage")
    {
        storage = value;
        storage.value_namespace = name_space;
        storage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Move::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "non-exportable")
    {
        non_exportable.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "storage")
    {
        storage.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Move::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "non-exportable" || name == "on" || name == "redundancy" || name == "storage")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::PubkeyChain()
    :
    rsa(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa>())
{
    rsa->parent = this;

    yang_name = "pubkey-chain"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::~PubkeyChain()
{
}

bool Native::Crypto::Key::PubkeyChain::has_data() const
{
    if (is_presence_container) return true;
    return (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::PubkeyChain::has_operation() const
{
    return is_set(yfilter)
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Rsa()
    :
    addressed_key(this, {"ip"})
    , named_key(this, {"name"})
    , default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default>())
{
    default_->parent = this;

    yang_name = "rsa"; yang_parent_name = "pubkey-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addressed_key.len(); index++)
    {
        if(addressed_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_key.len(); index++)
    {
        if(named_key[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_operation() const
{
    for (std::size_t index=0; index<addressed_key.len(); index++)
    {
        if(addressed_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_key.len(); index++)
    {
        if(named_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey>();
        ent_->parent = this;
        addressed_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "named-key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey>();
        ent_->parent = this;
        named_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addressed_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : named_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressed-key" || name == "named-key" || name == "default")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"}
        ,
    key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>())
    , default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default>())
{
    key_string->parent = this;
    default_->parent = this;

    yang_name = "addressed-key"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| use.is_set
	|| address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(use.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "default" || name == "ip" || name == "use" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::KeyString()
    :
    hex_data{YType::str, "hex-data"},
    quit{YType::empty, "quit"}
{

    yang_name = "key-string"; yang_parent_name = "addressed-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return hex_data.is_set
	|| quit.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_data.yfilter)
	|| ydk::is_set(quit.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_data.is_set || is_set(hex_data.yfilter)) leaf_name_data.push_back(hex_data.get_name_leafdata());
    if (quit.is_set || is_set(quit.yfilter)) leaf_name_data.push_back(quit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-data")
    {
        hex_data = value;
        hex_data.value_namespace = name_space;
        hex_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quit")
    {
        quit = value;
        quit.value_namespace = name_space;
        quit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-data")
    {
        hex_data.yfilter = yfilter;
    }
    if(value_path == "quit")
    {
        quit.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-data" || name == "quit")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::Default()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
        ,
    key_string(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "addressed-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::KeyString()
{

    yang_name = "key-string"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"}
        ,
    key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>())
    , default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default>())
{
    key_string->parent = this;
    default_->parent = this;

    yang_name = "named-key"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| use.is_set
	|| address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(use.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "default" || name == "name" || name == "use" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::KeyString()
    :
    hex_data{YType::str, "hex-data"},
    quit{YType::empty, "quit"}
{

    yang_name = "key-string"; yang_parent_name = "named-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return hex_data.is_set
	|| quit.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_data.yfilter)
	|| ydk::is_set(quit.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_data.is_set || is_set(hex_data.yfilter)) leaf_name_data.push_back(hex_data.get_name_leafdata());
    if (quit.is_set || is_set(quit.yfilter)) leaf_name_data.push_back(quit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-data")
    {
        hex_data = value;
        hex_data.value_namespace = name_space;
        hex_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quit")
    {
        quit = value;
        quit.value_namespace = name_space;
        quit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-data")
    {
        hex_data.yfilter = yfilter;
    }
    if(value_path == "quit")
    {
        quit.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-data" || name == "quit")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::Default()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
        ,
    key_string(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "named-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "address" || name == "serial-number")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::KeyString()
{

    yang_name = "key-string"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::Default()
    :
    addressed_key(this, {"ip"})
    , named_key(this, {"name"})
{

    yang_name = "default"; yang_parent_name = "rsa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::~Default()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addressed_key.len(); index++)
    {
        if(addressed_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_key.len(); index++)
    {
        if(named_key[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_operation() const
{
    for (std::size_t index=0; index<addressed_key.len(); index++)
    {
        if(addressed_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_key.len(); index++)
    {
        if(named_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey>();
        ent_->parent = this;
        addressed_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "named-key")
    {
        auto ent_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey>();
        ent_->parent = this;
        named_key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addressed_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : named_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressed-key" || name == "named-key")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"}
{

    yang_name = "addressed-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"}
{

    yang_name = "named-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Zeroize()
    :
    ec(nullptr) // presence node
    , pubkey_chain(nullptr) // presence node
    , rsa(nullptr) // presence node
{

    yang_name = "zeroize"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Key::Zeroize::~Zeroize()
{
}

bool Native::Crypto::Key::Zeroize::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Zeroize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Zeroize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(pubkey_chain != nullptr)
    {
        _children["pubkey-chain"] = pubkey_chain;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    return _children;
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

    yang_name = "ec"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Zeroize::Ec::~Ec()
{
}

bool Native::Crypto::Key::Zeroize::Ec::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Zeroize::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Zeroize::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "pubkey-chain"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Zeroize::PubkeyChain::~PubkeyChain()
{
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Zeroize::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Zeroize::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "rsa"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Key::Zeroize::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Zeroize::Rsa::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Crypto::Key::Zeroize::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Key::Zeroize::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    description{YType::str, "description"}
        ,
    default_(std::make_shared<Native::Crypto::Keyring::Default>())
    , local_address(std::make_shared<Native::Crypto::Keyring::LocalAddress>())
    , pre_shared_key(std::make_shared<Native::Crypto::Keyring::PreSharedKey>())
    , rsa_pubkey(std::make_shared<Native::Crypto::Keyring::RsaPubkey>())
{
    default_->parent = this;
    local_address->parent = this;
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "keyring"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Keyring::~Keyring()
{
}

bool Native::Crypto::Keyring::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
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
    path_buffer << "Cisco-IOS-XE-crypto:keyring";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Keyring::Default>();
        }
        return default_;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Native::Crypto::Keyring::LocalAddress>();
        }
        return local_address;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    if(rsa_pubkey != nullptr)
    {
        _children["rsa-pubkey"] = rsa_pubkey;
    }

    return _children;
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
}

bool Native::Crypto::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "local-address" || name == "pre-shared-key" || name == "rsa-pubkey" || name == "name" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::Default()
    :
    description{YType::str, "description"}
        ,
    local_address(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress>())
    , pre_shared_key(std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey>())
    , rsa_pubkey(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey>())
{
    local_address->parent = this;
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "default"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::~Default()
{
}

bool Native::Crypto::Keyring::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey>();
        }
        return pre_shared_key;
    }

    if(child_yang_name == "rsa-pubkey")
    {
        if(rsa_pubkey == nullptr)
        {
            rsa_pubkey = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey>();
        }
        return rsa_pubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    if(rsa_pubkey != nullptr)
    {
        _children["rsa-pubkey"] = rsa_pubkey;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "pre-shared-key" || name == "rsa-pubkey" || name == "description")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::LocalAddress()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    bind_ip_address(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress>())
    , atm_subinterface(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface>())
{
    bind_ip_address->parent = this;
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "local-address"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::~LocalAddress()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Crypto::Keyring::Default::LocalAddress::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Crypto::Keyring::Default::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bind-ip-address")
    {
        if(bind_ip_address == nullptr)
        {
            bind_ip_address = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress>();
        }
        return bind_ip_address;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bind_ip_address != nullptr)
    {
        _children["bind-ip-address"] = bind_ip_address;
    }

    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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

void Native::Crypto::Keyring::Default::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Crypto::Keyring::Default::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bind-ip-address" || name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::BindIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    vrf{YType::str, "vrf"}
{

    yang_name = "bind-ip-address"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::~BindIpAddress()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::BindIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default::LocalAddress::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address>())
    , hostname(this, {"name"})
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Hostname>();
        ent_->parent = this;
        hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    count_ = 0;
    for (auto ent_ : hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Address()
    :
    ipv4(this, {"ipv4_addr"})
    , ipv6(this, {"ipv6_addr"})
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Ipv4()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    mask{YType::str, "mask"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| mask.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_addr, "ipv4-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "mask" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6_addr{YType::str, "ipv6-addr"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_addr.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(ipv6_addr, "ipv6-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
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

void Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
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

bool Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "hostname"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::PreSharedKey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Keyring::Default::PreSharedKey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Keyring::Default::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Addr>())
    , hostname(std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Hostname>())
{
    addr->parent = this;
    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::RsaPubkey::~RsaPubkey()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_data() const
{
    if (is_presence_container) return true;
    return (addr !=  nullptr && addr->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_operation() const
{
    return is_set(yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::Default::RsaPubkey::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    return _children;
}

void Native::Crypto::Keyring::Default::RsaPubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default::RsaPubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{

    yang_name = "addr"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::RsaPubkey::Addr::~Addr()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::RsaPubkey::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Keyring::Default::RsaPubkey::Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Keyring::Default::RsaPubkey::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{

    yang_name = "hostname"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::Default::RsaPubkey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::Default::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::Default::RsaPubkey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Keyring::Default::RsaPubkey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Keyring::Default::RsaPubkey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::LocalAddress()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    bind_ip_address(std::make_shared<Native::Crypto::Keyring::LocalAddress::BindIpAddress>())
    , atm_subinterface(std::make_shared<Native::Crypto::Keyring::LocalAddress::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Crypto::Keyring::LocalAddress::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface>())
{
    bind_ip_address->parent = this;
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "local-address"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::~LocalAddress()
{
}

bool Native::Crypto::Keyring::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Crypto::Keyring::LocalAddress::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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
	|| (bind_ip_address !=  nullptr && bind_ip_address->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Crypto::Keyring::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bind-ip-address")
    {
        if(bind_ip_address == nullptr)
        {
            bind_ip_address = std::make_shared<Native::Crypto::Keyring::LocalAddress::BindIpAddress>();
        }
        return bind_ip_address;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Crypto::Keyring::LocalAddress::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Crypto::Keyring::LocalAddress::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bind_ip_address != nullptr)
    {
        _children["bind-ip-address"] = bind_ip_address;
    }

    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Crypto::Keyring::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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

void Native::Crypto::Keyring::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Crypto::Keyring::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bind-ip-address" || name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::BindIpAddress::BindIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    vrf{YType::str, "vrf"}
{

    yang_name = "bind-ip-address"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::BindIpAddress::~BindIpAddress()
{
}

bool Native::Crypto::Keyring::LocalAddress::BindIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::BindIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::BindIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::BindIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::BindIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::BindIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::BindIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::BindIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::BindIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Crypto::Keyring::LocalAddress::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Crypto::Keyring::LocalAddress::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "local-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::LocalAddress::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address>())
    , hostname(this, {"name"})
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto ent_ = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Hostname>();
        ent_->parent = this;
        hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    count_ = 0;
    for (auto ent_ : hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    :
    ipv4(this, {"ipv4_addr"})
    , ipv6(this, {"ipv6_addr"})
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Keyring::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_addr, "ipv4-addr");
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    ipv6_addr{YType::str, "ipv6-addr"},
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
    if (is_presence_container) return true;
    return ipv6_addr.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(ipv6_addr, "ipv6-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
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
    if(name == "ipv6-addr" || name == "key" || name == "encryption" || name == "unencryt-key")
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
    if (is_presence_container) return true;
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
    path_buffer << "hostname";
    ADD_KEY_TOKEN(name, "name");
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , hostname(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Hostname>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Crypto::Keyring::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Keyring::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Native::Crypto::Isakmp::Isakmp()
    :
    aggressive_mode{YType::enumeration, "aggressive-mode"},
    disconnect_revoked_peers{YType::empty, "disconnect-revoked-peers"},
    enable{YType::empty, "enable"},
    fragmentation{YType::empty, "fragmentation"},
    identity{YType::enumeration, "identity"},
    invalid_spi_recovery{YType::empty, "invalid-spi-recovery"}
        ,
    client(std::make_shared<Native::Crypto::Isakmp::Client>())
    , default_(std::make_shared<Native::Crypto::Isakmp::Default>())
    , keepalive(std::make_shared<Native::Crypto::Isakmp::Keepalive>())
    , key(std::make_shared<Native::Crypto::Isakmp::Key>())
    , nat(std::make_shared<Native::Crypto::Isakmp::Nat>())
    , peer(std::make_shared<Native::Crypto::Isakmp::Peer>())
    , policy(this, {"number"})
    , profile(this, {"name"})
    , xauth(std::make_shared<Native::Crypto::Isakmp::Xauth>())
{
    client->parent = this;
    default_->parent = this;
    keepalive->parent = this;
    key->parent = this;
    nat->parent = this;
    peer->parent = this;
    xauth->parent = this;

    yang_name = "isakmp"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::~Isakmp()
{
}

bool Native::Crypto::Isakmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return aggressive_mode.is_set
	|| disconnect_revoked_peers.is_set
	|| enable.is_set
	|| fragmentation.is_set
	|| identity.is_set
	|| invalid_spi_recovery.is_set
	|| (client !=  nullptr && client->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (xauth !=  nullptr && xauth->has_data());
}

bool Native::Crypto::Isakmp::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggressive_mode.yfilter)
	|| ydk::is_set(disconnect_revoked_peers.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(fragmentation.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(invalid_spi_recovery.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (xauth !=  nullptr && xauth->has_operation());
}

std::string Native::Crypto::Isakmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive_mode.is_set || is_set(aggressive_mode.yfilter)) leaf_name_data.push_back(aggressive_mode.get_name_leafdata());
    if (disconnect_revoked_peers.is_set || is_set(disconnect_revoked_peers.yfilter)) leaf_name_data.push_back(disconnect_revoked_peers.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (invalid_spi_recovery.is_set || is_set(invalid_spi_recovery.yfilter)) leaf_name_data.push_back(invalid_spi_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Client>();
        }
        return client;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Default>();
        }
        return default_;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Isakmp::Key>();
        }
        return key;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Isakmp::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Isakmp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    if(child_yang_name == "xauth")
    {
        if(xauth == nullptr)
        {
            xauth = std::make_shared<Native::Crypto::Isakmp::Xauth>();
        }
        return xauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(nat != nullptr)
    {
        _children["nat"] = nat;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(xauth != nullptr)
    {
        _children["xauth"] = xauth;
    }

    return _children;
}

void Native::Crypto::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive-mode")
    {
        aggressive_mode = value;
        aggressive_mode.value_namespace = name_space;
        aggressive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers = value;
        disconnect_revoked_peers.value_namespace = name_space;
        disconnect_revoked_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-spi-recovery")
    {
        invalid_spi_recovery = value;
        invalid_spi_recovery.value_namespace = name_space;
        invalid_spi_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive-mode")
    {
        aggressive_mode.yfilter = yfilter;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "invalid-spi-recovery")
    {
        invalid_spi_recovery.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "default" || name == "keepalive" || name == "key" || name == "nat" || name == "peer" || name == "policy" || name == "profile" || name == "xauth" || name == "aggressive-mode" || name == "disconnect-revoked-peers" || name == "enable" || name == "fragmentation" || name == "identity" || name == "invalid-spi-recovery")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Client()
    :
    configuration(std::make_shared<Native::Crypto::Isakmp::Client::Configuration>())
    , firewall(this, {"policy_name"})
{
    configuration->parent = this;

    yang_name = "client"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<firewall.len(); index++)
    {
        if(firewall[index]->has_data())
            return true;
    }
    return (configuration !=  nullptr && configuration->has_data());
}

bool Native::Crypto::Isakmp::Client::has_operation() const
{
    for (std::size_t index=0; index<firewall.len(); index++)
    {
        if(firewall[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::Crypto::Isakmp::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "firewall")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Client::Firewall>();
        ent_->parent = this;
        firewall.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    count_ = 0;
    for (auto ent_ : firewall.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration" || name == "firewall")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Configuration()
    :
    browser_proxy{YType::str, "browser-proxy"}
        ,
    address_pool(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::AddressPool>())
    , group(this, {"name"})
{
    address_pool->parent = this;

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return browser_proxy.is_set
	|| (address_pool !=  nullptr && address_pool->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(browser_proxy.yfilter)
	|| (address_pool !=  nullptr && address_pool->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (browser_proxy.is_set || is_set(browser_proxy.yfilter)) leaf_name_data.push_back(browser_proxy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-pool")
    {
        if(address_pool == nullptr)
        {
            address_pool = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::AddressPool>();
        }
        return address_pool;
    }

    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_pool != nullptr)
    {
        _children["address-pool"] = address_pool;
    }

    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "browser-proxy")
    {
        browser_proxy = value;
        browser_proxy.value_namespace = name_space;
        browser_proxy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "browser-proxy")
    {
        browser_proxy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-pool" || name == "group" || name == "browser-proxy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::AddressPool::AddressPool()
    :
    local{YType::str, "local"}
{

    yang_name = "address-pool"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::Configuration::AddressPool::~AddressPool()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::AddressPool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::AddressPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::AddressPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::AddressPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Group()
    :
    name{YType::str, "name"},
    access_restrict{YType::str, "access-restrict"},
    acl{YType::str, "acl"},
    backup_gateway{YType::str, "backup-gateway"},
    browser_proxy{YType::str, "browser-proxy"},
    domain{YType::str, "domain"},
    group_lock{YType::empty, "group-lock"},
    include_local_lan{YType::empty, "include-local-lan"},
    max_logins{YType::uint8, "max-logins"},
    max_users{YType::uint32, "max-users"},
    netmask{YType::str, "netmask"},
    pfs{YType::empty, "pfs"},
    pool{YType::str, "pool"},
    save_password{YType::empty, "save-password"},
    smartcard_removal_disconnect{YType::empty, "smartcard-removal-disconnect"},
    split_dns{YType::str, "split-dns"}
        ,
    auto_update(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate>())
    , configuration(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_>())
    , crypto(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_>())
    , dhcp(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp>())
    , dns(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dns>())
    , firewall(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Firewall>())
    , key(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Key>())
    , wins(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Wins>())
{
    auto_update->parent = this;
    configuration->parent = this;
    crypto->parent = this;
    dhcp->parent = this;
    dns->parent = this;
    firewall->parent = this;
    key->parent = this;
    wins->parent = this;

    yang_name = "group"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::~Group()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| access_restrict.is_set
	|| acl.is_set
	|| backup_gateway.is_set
	|| browser_proxy.is_set
	|| domain.is_set
	|| group_lock.is_set
	|| include_local_lan.is_set
	|| max_logins.is_set
	|| max_users.is_set
	|| netmask.is_set
	|| pfs.is_set
	|| pool.is_set
	|| save_password.is_set
	|| smartcard_removal_disconnect.is_set
	|| split_dns.is_set
	|| (auto_update !=  nullptr && auto_update->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (firewall !=  nullptr && firewall->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (wins !=  nullptr && wins->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_restrict.yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(backup_gateway.yfilter)
	|| ydk::is_set(browser_proxy.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(group_lock.yfilter)
	|| ydk::is_set(include_local_lan.yfilter)
	|| ydk::is_set(max_logins.yfilter)
	|| ydk::is_set(max_users.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(pfs.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(save_password.yfilter)
	|| ydk::is_set(smartcard_removal_disconnect.yfilter)
	|| ydk::is_set(split_dns.yfilter)
	|| (auto_update !=  nullptr && auto_update->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (firewall !=  nullptr && firewall->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (wins !=  nullptr && wins->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_restrict.is_set || is_set(access_restrict.yfilter)) leaf_name_data.push_back(access_restrict.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (backup_gateway.is_set || is_set(backup_gateway.yfilter)) leaf_name_data.push_back(backup_gateway.get_name_leafdata());
    if (browser_proxy.is_set || is_set(browser_proxy.yfilter)) leaf_name_data.push_back(browser_proxy.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (group_lock.is_set || is_set(group_lock.yfilter)) leaf_name_data.push_back(group_lock.get_name_leafdata());
    if (include_local_lan.is_set || is_set(include_local_lan.yfilter)) leaf_name_data.push_back(include_local_lan.get_name_leafdata());
    if (max_logins.is_set || is_set(max_logins.yfilter)) leaf_name_data.push_back(max_logins.get_name_leafdata());
    if (max_users.is_set || is_set(max_users.yfilter)) leaf_name_data.push_back(max_users.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (pfs.is_set || is_set(pfs.yfilter)) leaf_name_data.push_back(pfs.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (save_password.is_set || is_set(save_password.yfilter)) leaf_name_data.push_back(save_password.get_name_leafdata());
    if (smartcard_removal_disconnect.is_set || is_set(smartcard_removal_disconnect.yfilter)) leaf_name_data.push_back(smartcard_removal_disconnect.get_name_leafdata());
    if (split_dns.is_set || is_set(split_dns.yfilter)) leaf_name_data.push_back(split_dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-update")
    {
        if(auto_update == nullptr)
        {
            auto_update = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate>();
        }
        return auto_update;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_>();
        }
        return configuration;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_>();
        }
        return crypto;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "firewall")
    {
        if(firewall == nullptr)
        {
            firewall = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Firewall>();
        }
        return firewall;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Key>();
        }
        return key;
    }

    if(child_yang_name == "wins")
    {
        if(wins == nullptr)
        {
            wins = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Wins>();
        }
        return wins;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_update != nullptr)
    {
        _children["auto-update"] = auto_update;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(crypto != nullptr)
    {
        _children["crypto"] = crypto;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    if(firewall != nullptr)
    {
        _children["firewall"] = firewall;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(wins != nullptr)
    {
        _children["wins"] = wins;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-restrict")
    {
        access_restrict = value;
        access_restrict.value_namespace = name_space;
        access_restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway = value;
        backup_gateway.value_namespace = name_space;
        backup_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "browser-proxy")
    {
        browser_proxy = value;
        browser_proxy.value_namespace = name_space;
        browser_proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-lock")
    {
        group_lock = value;
        group_lock.value_namespace = name_space;
        group_lock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-local-lan")
    {
        include_local_lan = value;
        include_local_lan.value_namespace = name_space;
        include_local_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-logins")
    {
        max_logins = value;
        max_logins.value_namespace = name_space;
        max_logins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-users")
    {
        max_users = value;
        max_users.value_namespace = name_space;
        max_users.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfs")
    {
        pfs = value;
        pfs.value_namespace = name_space;
        pfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "save-password")
    {
        save_password = value;
        save_password.value_namespace = name_space;
        save_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smartcard-removal-disconnect")
    {
        smartcard_removal_disconnect = value;
        smartcard_removal_disconnect.value_namespace = name_space;
        smartcard_removal_disconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-dns")
    {
        split_dns = value;
        split_dns.value_namespace = name_space;
        split_dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-restrict")
    {
        access_restrict.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway.yfilter = yfilter;
    }
    if(value_path == "browser-proxy")
    {
        browser_proxy.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "group-lock")
    {
        group_lock.yfilter = yfilter;
    }
    if(value_path == "include-local-lan")
    {
        include_local_lan.yfilter = yfilter;
    }
    if(value_path == "max-logins")
    {
        max_logins.yfilter = yfilter;
    }
    if(value_path == "max-users")
    {
        max_users.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "pfs")
    {
        pfs.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "save-password")
    {
        save_password.yfilter = yfilter;
    }
    if(value_path == "smartcard-removal-disconnect")
    {
        smartcard_removal_disconnect.yfilter = yfilter;
    }
    if(value_path == "split-dns")
    {
        split_dns.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-update" || name == "configuration" || name == "crypto" || name == "dhcp" || name == "dns" || name == "firewall" || name == "key" || name == "wins" || name == "name" || name == "access-restrict" || name == "acl" || name == "backup-gateway" || name == "browser-proxy" || name == "domain" || name == "group-lock" || name == "include-local-lan" || name == "max-logins" || name == "max-users" || name == "netmask" || name == "pfs" || name == "pool" || name == "save-password" || name == "smartcard-removal-disconnect" || name == "split-dns")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::AutoUpdate()
    :
    client{YType::str, "client"},
    url{YType::str, "url"},
    rev{YType::str, "rev"}
{

    yang_name = "auto-update"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::~AutoUpdate()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_data() const
{
    if (is_presence_container) return true;
    return client.is_set
	|| url.is_set
	|| rev.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(rev.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "url" || name == "rev")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Configuration_()
    :
    url{YType::enumeration, "url"},
    version{YType::uint32, "version"}
{

    yang_name = "configuration"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::~Configuration_()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set
	|| version.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "version")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Crypto_()
    :
    aaa(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa>())
{
    aaa->parent = this;

    yang_name = "crypto"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::~Crypto_()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_data() const
{
    if (is_presence_container) return true;
    return (aaa !=  nullptr && aaa->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_operation() const
{
    return is_set(yfilter)
	|| (aaa !=  nullptr && aaa->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa>();
        }
        return aaa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Aaa()
    :
    attribute(std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute>())
{
    attribute->parent = this;

    yang_name = "aaa"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::~Aaa()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::Attribute()
    :
    list{YType::str, "list"}
{

    yang_name = "attribute"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::~Attribute()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::Dhcp()
    :
    giaddr{YType::str, "giaddr"},
    server{YType::str, "server"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "dhcp"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::~Dhcp()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return giaddr.is_set
	|| server.is_set
	|| timeout.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(giaddr.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (giaddr.is_set || is_set(giaddr.yfilter)) leaf_name_data.push_back(giaddr.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "giaddr")
    {
        giaddr = value;
        giaddr.value_namespace = name_space;
        giaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "giaddr")
    {
        giaddr.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "giaddr" || name == "server" || name == "timeout")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dns::Dns()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Dns::~Dns()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::Firewall()
    :
    are_u_there{YType::empty, "are-u-there"},
    policy{YType::str, "policy"}
{

    yang_name = "firewall"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::~Firewall()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_data() const
{
    if (is_presence_container) return true;
    return are_u_there.is_set
	|| policy.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_u_there.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_u_there.is_set || is_set(are_u_there.yfilter)) leaf_name_data.push_back(are_u_there.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-u-there")
    {
        are_u_there = value;
        are_u_there.value_namespace = name_space;
        are_u_there.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-u-there")
    {
        are_u_there.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "are-u-there" || name == "policy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Key::~Key()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Configuration::Group::Wins::Wins()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "wins"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Configuration::Group::Wins::~Wins()
{
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wins";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Configuration::Group::Wins::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Wins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Configuration::Group::Wins::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Configuration::Group::Wins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Firewall()
    :
    policy_name{YType::str, "policy-name"},
    optional{YType::enumeration, "optional"},
    required{YType::enumeration, "required"}
        ,
    policy(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy>())
{
    policy->parent = this;

    yang_name = "firewall"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Client::Firewall::~Firewall()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| optional.is_set
	|| required.is_set
	|| (policy !=  nullptr && policy->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(optional.yfilter)
	|| ydk::is_set(required.yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Client::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (optional.is_set || is_set(optional.yfilter)) leaf_name_data.push_back(optional.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optional")
    {
        optional = value;
        optional.value_namespace = name_space;
        optional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "optional")
    {
        optional.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "policy-name" || name == "optional" || name == "required")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::Policy()
    :
    check_presence{YType::empty, "check-presence"}
        ,
    central_policy_push(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush>())
{
    central_policy_push->parent = this;

    yang_name = "policy"; yang_parent_name = "firewall"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Firewall::Policy::~Policy()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_data() const
{
    if (is_presence_container) return true;
    return check_presence.is_set
	|| (central_policy_push !=  nullptr && central_policy_push->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(check_presence.yfilter)
	|| (central_policy_push !=  nullptr && central_policy_push->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check_presence.is_set || is_set(check_presence.yfilter)) leaf_name_data.push_back(check_presence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "central-policy-push")
    {
        if(central_policy_push == nullptr)
        {
            central_policy_push = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush>();
        }
        return central_policy_push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(central_policy_push != nullptr)
    {
        _children["central-policy-push"] = central_policy_push;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "check-presence")
    {
        check_presence = value;
        check_presence.value_namespace = name_space;
        check_presence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "check-presence")
    {
        check_presence.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "central-policy-push" || name == "check-presence")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::CentralPolicyPush()
    :
    access_list(std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList>())
{
    access_list->parent = this;

    yang_name = "central-policy-push"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::~CentralPolicyPush()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_data() const
{
    if (is_presence_container) return true;
    return (access_list !=  nullptr && access_list->has_data());
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation());
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "central-policy-push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList>();
        }
        return access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_list != nullptr)
    {
        _children["access-list"] = access_list;
    }

    return _children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::AccessList()
    :
    direction{YType::enumeration, "direction"},
    acl{YType::str, "acl"}
{

    yang_name = "access-list"; yang_parent_name = "central-policy-push"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::~AccessList()
{
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| acl.is_set;
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "acl")
        return true;
    return false;
}

Native::Crypto::Isakmp::Default::Default()
    :
    policy{YType::empty, "policy"}
{

    yang_name = "default"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Default::~Default()
{
}

bool Native::Crypto::Isakmp::Default::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set;
}

bool Native::Crypto::Isakmp::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Crypto::Isakmp::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Crypto::Isakmp::Keepalive::Keepalive()
    :
    number{YType::uint16, "number"},
    retry_number{YType::uint8, "retry-number"},
    send{YType::enumeration, "send"}
{

    yang_name = "keepalive"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| retry_number.is_set
	|| send.is_set;
}

bool Native::Crypto::Isakmp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(retry_number.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Crypto::Isakmp::Keepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (retry_number.is_set || is_set(retry_number.yfilter)) leaf_name_data.push_back(retry_number.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-number")
    {
        retry_number = value;
        retry_number.value_namespace = name_space;
        retry_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "retry-number")
    {
        retry_number.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "retry-number" || name == "send")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::Key()
    :
    key_address(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress>())
    , key_host(std::make_shared<Native::Crypto::Isakmp::Key::KeyHost>())
{
    key_address->parent = this;
    key_host->parent = this;

    yang_name = "key"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::~Key()
{
}

bool Native::Crypto::Isakmp::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_address !=  nullptr && key_address->has_data())
	|| (key_host !=  nullptr && key_host->has_data());
}

bool Native::Crypto::Isakmp::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_address !=  nullptr && key_address->has_operation())
	|| (key_host !=  nullptr && key_host->has_operation());
}

std::string Native::Crypto::Isakmp::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-address")
    {
        if(key_address == nullptr)
        {
            key_address = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress>();
        }
        return key_address;
    }

    if(child_yang_name == "key-host")
    {
        if(key_host == nullptr)
        {
            key_host = std::make_shared<Native::Crypto::Isakmp::Key::KeyHost>();
        }
        return key_host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_address != nullptr)
    {
        _children["key-address"] = key_address;
    }

    if(key_host != nullptr)
    {
        _children["key-host"] = key_host;
    }

    return _children;
}

void Native::Crypto::Isakmp::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-address" || name == "key-host")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::KeyAddress()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
        ,
    addr4_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container>())
    , addr6_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container>())
{
    addr4_container->parent = this;
    addr6_container->parent = this;

    yang_name = "key-address"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyAddress::~KeyAddress()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set
	|| (addr4_container !=  nullptr && addr4_container->has_data())
	|| (addr6_container !=  nullptr && addr6_container->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (addr4_container !=  nullptr && addr4_container->has_operation())
	|| (addr6_container !=  nullptr && addr6_container->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr4-container")
    {
        if(addr4_container == nullptr)
        {
            addr4_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container>();
        }
        return addr4_container;
    }

    if(child_yang_name == "addr6-container")
    {
        if(addr6_container == nullptr)
        {
            addr6_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container>();
        }
        return addr6_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr4_container != nullptr)
    {
        _children["addr4-container"] = addr4_container;
    }

    if(addr6_container != nullptr)
    {
        _children["addr6-container"] = addr6_container;
    }

    return _children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr4-container" || name == "addr6-container" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::Addr4Container()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "addr4-container"; yang_parent_name = "key-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::~Addr4Container()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr4-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Addr6Container()
    :
    address(std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address>())
{
    address->parent = this;

    yang_name = "addr6-container"; yang_parent_name = "key-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::~Addr6Container()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr6-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "address"; yang_parent_name = "addr6-container"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-address/addr6-container/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyHost::KeyHost()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
        ,
    host_container(std::make_shared<Native::Crypto::Isakmp::Key::KeyHost::HostContainer>())
{
    host_container->parent = this;

    yang_name = "key-host"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyHost::~KeyHost()
{
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set
	|| (host_container !=  nullptr && host_container->has_data());
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (host_container !=  nullptr && host_container->has_operation());
}

std::string Native::Crypto::Isakmp::Key::KeyHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-container")
    {
        if(host_container == nullptr)
        {
            host_container = std::make_shared<Native::Crypto::Isakmp::Key::KeyHost::HostContainer>();
        }
        return host_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_container != nullptr)
    {
        _children["host-container"] = host_container;
    }

    return _children;
}

void Native::Crypto::Isakmp::Key::KeyHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-container" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Key::KeyHost::HostContainer::HostContainer()
    :
    hostname{YType::str, "hostname"},
    no_xauth{YType::empty, "no-xauth"}
{

    yang_name = "host-container"; yang_parent_name = "key-host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Key::KeyHost::HostContainer::~HostContainer()
{
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| no_xauth.is_set;
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(no_xauth.yfilter);
}

std::string Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/key/key-host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (no_xauth.is_set || is_set(no_xauth.yfilter)) leaf_name_data.push_back(no_xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Key::KeyHost::HostContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Key::KeyHost::HostContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-xauth")
    {
        no_xauth = value;
        no_xauth.value_namespace = name_space;
        no_xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Key::KeyHost::HostContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "no-xauth")
    {
        no_xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Key::KeyHost::HostContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "no-xauth")
        return true;
    return false;
}

Native::Crypto::Isakmp::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{

    yang_name = "nat"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Nat::~Nat()
{
}

bool Native::Crypto::Isakmp::Nat::has_data() const
{
    if (is_presence_container) return true;
    return keepalive.is_set;
}

bool Native::Crypto::Isakmp::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter);
}

std::string Native::Crypto::Isakmp::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Peer()
    :
    ipv4_addr(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr>())
    , ipv6_addr(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr>())
    , hostname(this, {"name"})
{
    ipv4_addr->parent = this;
    ipv6_addr->parent = this;

    yang_name = "peer"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::~Peer()
{
}

bool Native::Crypto::Isakmp::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (ipv4_addr !=  nullptr && ipv4_addr->has_data())
	|| (ipv6_addr !=  nullptr && ipv6_addr->has_data());
}

bool Native::Crypto::Isakmp::Peer::has_operation() const
{
    for (std::size_t index=0; index<hostname.len(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv4_addr !=  nullptr && ipv4_addr->has_operation())
	|| (ipv6_addr !=  nullptr && ipv6_addr->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr")
    {
        if(ipv4_addr == nullptr)
        {
            ipv4_addr = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr>();
        }
        return ipv4_addr;
    }

    if(child_yang_name == "ipv6-addr")
    {
        if(ipv6_addr == nullptr)
        {
            ipv6_addr = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr>();
        }
        return ipv6_addr;
    }

    if(child_yang_name == "hostname")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname>();
        ent_->parent = this;
        hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_addr != nullptr)
    {
        _children["ipv4-addr"] = ipv4_addr;
    }

    if(ipv6_addr != nullptr)
    {
        _children["ipv6-addr"] = ipv6_addr;
    }

    count_ = 0;
    for (auto ent_ : hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Ipv4Addr()
    :
    address(this, {"ipv4"})
{

    yang_name = "ipv4-addr"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::~Ipv4Addr()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
        ,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set>())
{
    set->parent = this;

    yang_name = "address"; yang_parent_name = "ipv4-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
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
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "ipv4" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_data() const
{
    if (is_presence_container) return true;
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_mode != nullptr)
    {
        _children["aggressive-mode"] = aggressive_mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint>())
    , password(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_data() const
{
    if (is_presence_container) return true;
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_endpoint != nullptr)
    {
        _children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    if (is_presence_container) return true;
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Ipv6Addr()
    :
    address(this, {"ipv6"})
{

    yang_name = "ipv6-addr"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::~Ipv6Addr()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
        ,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set>())
{
    set->parent = this;

    yang_name = "address"; yang_parent_name = "ipv6-addr"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(ipv6, "ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
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
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "ipv6" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_data() const
{
    if (is_presence_container) return true;
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_mode != nullptr)
    {
        _children["aggressive-mode"] = aggressive_mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint>())
    , password(std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_data() const
{
    if (is_presence_container) return true;
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_endpoint != nullptr)
    {
        _children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    if (is_presence_container) return true;
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Hostname()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"}
        ,
    set(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set>())
{
    set->parent = this;

    yang_name = "hostname"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Peer::Hostname::~Hostname()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Peer::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Crypto::Isakmp::Peer::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Native::Crypto::Isakmp::Peer::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "name" || name == "vrf" || name == "description")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::Set()
    :
    aggressive_mode(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode>())
{
    aggressive_mode->parent = this;

    yang_name = "set"; yang_parent_name = "hostname"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Hostname::Set::~Set()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_data() const
{
    if (is_presence_container) return true;
    return (aggressive_mode !=  nullptr && aggressive_mode->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_operation() const
{
    return is_set(yfilter)
	|| (aggressive_mode !=  nullptr && aggressive_mode->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-mode")
    {
        if(aggressive_mode == nullptr)
        {
            aggressive_mode = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode>();
        }
        return aggressive_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_mode != nullptr)
    {
        _children["aggressive-mode"] = aggressive_mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::AggressiveMode()
    :
    client_endpoint(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint>())
    , password(std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password>())
{
    client_endpoint->parent = this;
    password->parent = this;

    yang_name = "aggressive-mode"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::~AggressiveMode()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_data() const
{
    if (is_presence_container) return true;
    return (client_endpoint !=  nullptr && client_endpoint->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_operation() const
{
    return is_set(yfilter)
	|| (client_endpoint !=  nullptr && client_endpoint->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-endpoint")
    {
        if(client_endpoint == nullptr)
        {
            client_endpoint = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint>();
        }
        return client_endpoint;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_endpoint != nullptr)
    {
        _children["client-endpoint"] = client_endpoint;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-endpoint" || name == "password")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::ClientEndpoint()
    :
    fqdn{YType::str, "fqdn"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    user_fqdn{YType::str, "user-fqdn"}
{

    yang_name = "client-endpoint"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::~ClientEndpoint()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_data() const
{
    if (is_presence_container) return true;
    return fqdn.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| user_fqdn.is_set;
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(user_fqdn.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (user_fqdn.is_set || is_set(user_fqdn.yfilter)) leaf_name_data.push_back(user_fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn = value;
        user_fqdn.value_namespace = name_space;
        user_fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "user-fqdn")
    {
        user_fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fqdn" || name == "ipv4-address" || name == "ipv6-address" || name == "user-fqdn")
        return true;
    return false;
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "password"; yang_parent_name = "aggressive-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::~Password()
{
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Policy()
    :
    number{YType::uint32, "number"},
    authentication{YType::enumeration, "authentication"},
    group{YType::enumeration, "group"},
    hash{YType::enumeration, "hash"},
    lifetime{YType::uint32, "lifetime"}
        ,
    default_(std::make_shared<Native::Crypto::Isakmp::Policy::Default>())
    , encryption(std::make_shared<Native::Crypto::Isakmp::Policy::Encryption>())
{
    default_->parent = this;
    encryption->parent = this;

    yang_name = "policy"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Policy::~Policy()
{
}

bool Native::Crypto::Isakmp::Policy::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| authentication.is_set
	|| group.is_set
	|| hash.is_set
	|| lifetime.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Native::Crypto::Isakmp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Policy::Default>();
        }
        return default_;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Isakmp::Policy::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    return _children;
}

void Native::Crypto::Isakmp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "encryption" || name == "number" || name == "authentication" || name == "group" || name == "hash" || name == "lifetime")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default::Default()
    :
    authentication{YType::enumeration, "authentication"},
    group{YType::enumeration, "group"},
    hash{YType::enumeration, "hash"},
    lifetime{YType::empty, "lifetime"}
        ,
    encryption(std::make_shared<Native::Crypto::Isakmp::Policy::Default::Encryption>())
{
    encryption->parent = this;

    yang_name = "default"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Policy::Default::~Default()
{
}

bool Native::Crypto::Isakmp::Policy::Default::has_data() const
{
    if (is_presence_container) return true;
    return authentication.is_set
	|| group.is_set
	|| hash.is_set
	|| lifetime.is_set
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Native::Crypto::Isakmp::Policy::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Isakmp::Policy::Default::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    return _children;
}

void Native::Crypto::Isakmp::Policy::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "authentication" || name == "group" || name == "hash" || name == "lifetime")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default::Encryption::Encryption()
    :
    a3des{YType::empty, "a3des"},
    des{YType::empty, "des"}
        ,
    aes(nullptr) // presence node
{

    yang_name = "encryption"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Policy::Default::Encryption::~Encryption()
{
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return a3des.is_set
	|| des.is_set
	|| (aes !=  nullptr && aes->has_data());
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des.yfilter)
	|| ydk::is_set(des.yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Default::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des.is_set || is_set(a3des.yfilter)) leaf_name_data.push_back(a3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Default::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::Crypto::Isakmp::Policy::Default::Encryption::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Default::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aes != nullptr)
    {
        _children["aes"] = aes;
    }

    return _children;
}

void Native::Crypto::Isakmp::Policy::Default::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des")
    {
        a3des = value;
        a3des.value_namespace = name_space;
        a3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des")
    {
        a3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes" || name == "a3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::Aes()
    :
    key{YType::enumeration, "key"}
{

    yang_name = "aes"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::~Aes()
{
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set;
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Encryption::Encryption()
    :
    a3des{YType::empty, "a3des"},
    des{YType::empty, "des"}
        ,
    aes(nullptr) // presence node
{

    yang_name = "encryption"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Policy::Encryption::~Encryption()
{
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return a3des.is_set
	|| des.is_set
	|| (aes !=  nullptr && aes->has_data());
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des.yfilter)
	|| ydk::is_set(des.yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::Crypto::Isakmp::Policy::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des.is_set || is_set(a3des.yfilter)) leaf_name_data.push_back(a3des.get_name_leafdata());
    if (des.is_set || is_set(des.yfilter)) leaf_name_data.push_back(des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::Crypto::Isakmp::Policy::Encryption::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aes != nullptr)
    {
        _children["aes"] = aes;
    }

    return _children;
}

void Native::Crypto::Isakmp::Policy::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des")
    {
        a3des = value;
        a3des.value_namespace = name_space;
        a3des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des")
    {
        des = value;
        des.value_namespace = name_space;
        des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des")
    {
        a3des.yfilter = yfilter;
    }
    if(value_path == "des")
    {
        des.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes" || name == "a3des" || name == "des")
        return true;
    return false;
}

Native::Crypto::Isakmp::Policy::Encryption::Aes::Aes()
    :
    key{YType::enumeration, "key"}
{

    yang_name = "aes"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Policy::Encryption::Aes::~Aes()
{
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set;
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Isakmp::Policy::Encryption::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Policy::Encryption::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Policy::Encryption::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Policy::Encryption::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Policy::Encryption::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Policy::Encryption::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Policy::Encryption::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Profile()
    :
    name{YType::str, "name"},
    accounting{YType::str, "accounting"},
    description{YType::str, "description"},
    keyring{YType::str, "keyring"},
    qos_group{YType::uint16, "qos-group"},
    virtual_template{YType::uint16, "virtual-template"},
    vrf{YType::str, "vrf"}
        ,
    default_(std::make_shared<Native::Crypto::Isakmp::Profile::Default>())
    , ca(std::make_shared<Native::Crypto::Isakmp::Profile::Ca>())
    , client(std::make_shared<Native::Crypto::Isakmp::Profile::Client>())
    , initiate(std::make_shared<Native::Crypto::Isakmp::Profile::Initiate>())
    , isakmp(std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_>())
    , keepalive(std::make_shared<Native::Crypto::Isakmp::Profile::Keepalive>())
    , local_address(std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress>())
    , match(std::make_shared<Native::Crypto::Isakmp::Profile::Match>())
    , self_identity(std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity>())
{
    default_->parent = this;
    ca->parent = this;
    client->parent = this;
    initiate->parent = this;
    isakmp->parent = this;
    keepalive->parent = this;
    local_address->parent = this;
    match->parent = this;
    self_identity->parent = this;

    yang_name = "profile"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Isakmp::Profile::~Profile()
{
}

bool Native::Crypto::Isakmp::Profile::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| accounting.is_set
	|| description.is_set
	|| keyring.is_set
	|| qos_group.is_set
	|| virtual_template.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (ca !=  nullptr && ca->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (initiate !=  nullptr && initiate->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (self_identity !=  nullptr && self_identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(keyring.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ca !=  nullptr && ca->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (initiate !=  nullptr && initiate->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (self_identity !=  nullptr && self_identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Isakmp::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (keyring.is_set || is_set(keyring.yfilter)) leaf_name_data.push_back(keyring.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Isakmp::Profile::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ca")
    {
        if(ca == nullptr)
        {
            ca = std::make_shared<Native::Crypto::Isakmp::Profile::Ca>();
        }
        return ca;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Profile::Client>();
        }
        return client;
    }

    if(child_yang_name == "initiate")
    {
        if(initiate == nullptr)
        {
            initiate = std::make_shared<Native::Crypto::Isakmp::Profile::Initiate>();
        }
        return initiate;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp::Profile::Isakmp_>();
        }
        return isakmp;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Profile::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Native::Crypto::Isakmp::Profile::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Isakmp::Profile::Match>();
        }
        return match;
    }

    if(child_yang_name == "self-identity")
    {
        if(self_identity == nullptr)
        {
            self_identity = std::make_shared<Native::Crypto::Isakmp::Profile::SelfIdentity>();
        }
        return self_identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(ca != nullptr)
    {
        _children["ca"] = ca;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(initiate != nullptr)
    {
        _children["initiate"] = initiate;
    }

    if(isakmp != nullptr)
    {
        _children["isakmp"] = isakmp;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(self_identity != nullptr)
    {
        _children["self-identity"] = self_identity;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring")
    {
        keyring = value;
        keyring.value_namespace = name_space;
        keyring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "keyring")
    {
        keyring.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ca" || name == "client" || name == "initiate" || name == "isakmp" || name == "keepalive" || name == "local-address" || name == "match" || name == "self-identity" || name == "name" || name == "accounting" || name == "description" || name == "keyring" || name == "qos-group" || name == "virtual-template" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Default()
    :
    accounting{YType::empty, "accounting"},
    description{YType::str, "description"},
    keyring{YType::str, "keyring"},
    local_address{YType::empty, "local-address"},
    qos_group{YType::empty, "qos-group"},
    virtual_template{YType::empty, "virtual-template"},
    vrf{YType::empty, "vrf"}
        ,
    ca(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Ca>())
    , client(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client>())
    , initiate(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Initiate>())
    , isakmp(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_>())
    , keepalive(nullptr) // presence node
    , match(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match>())
    , self_identity(nullptr) // presence node
{
    ca->parent = this;
    client->parent = this;
    initiate->parent = this;
    isakmp->parent = this;
    match->parent = this;

    yang_name = "default"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::~Default()
{
}

bool Native::Crypto::Isakmp::Profile::Default::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set
	|| description.is_set
	|| keyring.is_set
	|| local_address.is_set
	|| qos_group.is_set
	|| virtual_template.is_set
	|| vrf.is_set
	|| (ca !=  nullptr && ca->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (initiate !=  nullptr && initiate->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (self_identity !=  nullptr && self_identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(keyring.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (ca !=  nullptr && ca->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (initiate !=  nullptr && initiate->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (self_identity !=  nullptr && self_identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (keyring.is_set || is_set(keyring.yfilter)) leaf_name_data.push_back(keyring.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ca")
    {
        if(ca == nullptr)
        {
            ca = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Ca>();
        }
        return ca;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client>();
        }
        return client;
    }

    if(child_yang_name == "initiate")
    {
        if(initiate == nullptr)
        {
            initiate = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Initiate>();
        }
        return initiate;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_>();
        }
        return isakmp;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match>();
        }
        return match;
    }

    if(child_yang_name == "self-identity")
    {
        if(self_identity == nullptr)
        {
            self_identity = std::make_shared<Native::Crypto::Isakmp::Profile::Default::SelfIdentity>();
        }
        return self_identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ca != nullptr)
    {
        _children["ca"] = ca;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(initiate != nullptr)
    {
        _children["initiate"] = initiate;
    }

    if(isakmp != nullptr)
    {
        _children["isakmp"] = isakmp;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(self_identity != nullptr)
    {
        _children["self-identity"] = self_identity;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring")
    {
        keyring = value;
        keyring.value_namespace = name_space;
        keyring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "keyring")
    {
        keyring.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ca" || name == "client" || name == "initiate" || name == "isakmp" || name == "keepalive" || name == "match" || name == "self-identity" || name == "accounting" || name == "description" || name == "keyring" || name == "local-address" || name == "qos-group" || name == "virtual-template" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Ca::Ca()
    :
    trust_point{YType::str, "trust-point"}
{

    yang_name = "ca"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Ca::~Ca()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Ca::has_data() const
{
    if (is_presence_container) return true;
    return trust_point.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Ca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_point.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Ca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_point.is_set || is_set(trust_point.yfilter)) leaf_name_data.push_back(trust_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Ca::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Ca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-point")
    {
        trust_point = value;
        trust_point.value_namespace = name_space;
        trust_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Ca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-point")
    {
        trust_point.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Ca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust-point")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Client()
    :
    authentication(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Authentication>())
    , configuration(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Configuration>())
    , pki(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Pki>())
{
    authentication->parent = this;
    configuration->parent = this;
    pki->parent = this;

    yang_name = "client"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (pki !=  nullptr && pki->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Client::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (pki !=  nullptr && pki->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Pki>();
        }
        return pki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(pki != nullptr)
    {
        _children["pki"] = pki;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "configuration" || name == "pki")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Authentication::Authentication()
    :
    list{YType::empty, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Configuration::Configuration()
    :
    address{YType::enumeration, "address"},
    group{YType::str, "group"}
{

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| group.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Pki::Pki()
    :
    authorization(nullptr) // presence node
{

    yang_name = "pki"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Client::Pki::~Pki()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::has_data() const
{
    if (is_presence_container) return true;
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Client::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::Authorization()
{

    yang_name = "authorization"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Client::Pki::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Initiate::Initiate()
    :
    mode(nullptr) // presence node
{

    yang_name = "initiate"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Initiate::~Initiate()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Initiate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Initiate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Initiate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Initiate::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Initiate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Initiate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Initiate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::Mode()
{

    yang_name = "mode"; yang_parent_name = "initiate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::~Mode()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Initiate::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Isakmp_()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization>())
{
    authorization->parent = this;

    yang_name = "isakmp"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::~Isakmp_()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_data() const
{
    if (is_presence_container) return true;
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Isakmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::Authorization()
    :
    list{YType::empty, "list"}
{

    yang_name = "authorization"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::~Authorization()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Isakmp_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Keepalive::Keepalive()
{

    yang_name = "keepalive"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Default::Keepalive::~Keepalive()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Match()
    :
    certificate{YType::str, "certificate"}
        ,
    identity(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity>())
{
    identity->parent = this;

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::~Match()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_data() const
{
    if (is_presence_container) return true;
    return certificate.is_set
	|| (identity !=  nullptr && identity->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (identity !=  nullptr && identity->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity>();
        }
        return identity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identity" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Identity()
    :
    group{YType::str, "group"}
        ,
    ipv4_address(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address>())
    , address(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address>())
    , host(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host>())
    , user_fqdn(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn>())
{
    ipv4_address->parent = this;
    address->parent = this;
    host->parent = this;
    user_fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::~Identity()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (user_fqdn !=  nullptr && user_fqdn->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (user_fqdn !=  nullptr && user_fqdn->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address>();
        }
        return ipv4_address;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address>();
        }
        return address;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host>();
        }
        return host;
    }

    if(child_yang_name == "user-fqdn")
    {
        if(user_fqdn == nullptr)
        {
            user_fqdn = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn>();
        }
        return user_fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_address != nullptr)
    {
        _children["ipv4-address"] = ipv4_address;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(user_fqdn != nullptr)
    {
        _children["user-fqdn"] = user_fqdn;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "address" || name == "host" || name == "user-fqdn" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv4-address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::~Ipv4Address()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::Address()
    :
    ipv6{YType::str, "ipv6"},
    vrf{YType::str, "vrf"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::~Address()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::Host()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName>())
    , domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "host"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::~Host()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_data() const
{
    if (is_presence_container) return true;
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domain_name != nullptr)
    {
        _children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        _children["domain-match"] = domain_match;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "domain-match")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::Host::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::UserFqdn()
    :
    domain_name(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName>())
    , domain_match(std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch>())
{
    domain_name->parent = this;
    domain_match->parent = this;

    yang_name = "user-fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::~UserFqdn()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_data() const
{
    if (is_presence_container) return true;
    return (domain_name !=  nullptr && domain_name->has_data())
	|| (domain_match !=  nullptr && domain_match->has_data());
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_operation() const
{
    return is_set(yfilter)
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (domain_match !=  nullptr && domain_match->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "domain-match")
    {
        if(domain_match == nullptr)
        {
            domain_match = std::make_shared<Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch>();
        }
        return domain_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domain_name != nullptr)
    {
        _children["domain-name"] = domain_name;
    }

    if(domain_match != nullptr)
    {
        _children["domain-match"] = domain_match;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "domain-match")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::DomainName()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-name"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::~DomainName()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::DomainMatch()
    :
    domain{YType::str, "domain"},
    vrf{YType::str, "vrf"}
{

    yang_name = "domain-match"; yang_parent_name = "user-fqdn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::~DomainMatch()
{
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Default::Match::Identity::UserFqdn::DomainMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Default::SelfIdentity::SelfIdentity()
{

    yang_name = "self-identity"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Isakmp::Profile::Default::SelfIdentity::~SelfIdentity()
{
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self-identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Default::SelfIdentity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Default::SelfIdentity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Default::SelfIdentity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Default::SelfIdentity::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Isakmp::Profile::Ca::Ca()
    :
    trust_point{YType::str, "trust-point"}
{

    yang_name = "ca"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Ca::~Ca()
{
}

bool Native::Crypto::Isakmp::Profile::Ca::has_data() const
{
    if (is_presence_container) return true;
    return trust_point.is_set;
}

bool Native::Crypto::Isakmp::Profile::Ca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_point.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Ca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_point.is_set || is_set(trust_point.yfilter)) leaf_name_data.push_back(trust_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Ca::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Ca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-point")
    {
        trust_point = value;
        trust_point.value_namespace = name_space;
        trust_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Ca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-point")
    {
        trust_point.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Ca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust-point")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Client()
    :
    authentication(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Authentication>())
    , configuration(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Configuration>())
    , pki(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki>())
{
    authentication->parent = this;
    configuration->parent = this;
    pki->parent = this;

    yang_name = "client"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::~Client()
{
}

bool Native::Crypto::Isakmp::Profile::Client::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (pki !=  nullptr && pki->has_data());
}

bool Native::Crypto::Isakmp::Profile::Client::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (pki !=  nullptr && pki->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki>();
        }
        return pki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(pki != nullptr)
    {
        _children["pki"] = pki;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "configuration" || name == "pki")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Authentication::Authentication()
    :
    list{YType::str, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Configuration::Configuration()
    :
    address{YType::enumeration, "address"},
    group{YType::str, "group"}
{

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| group.is_set;
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Isakmp::Profile::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Isakmp::Profile::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Isakmp::Profile::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "group")
        return true;
    return false;
}

Native::Crypto::Isakmp::Profile::Client::Pki::Pki()
    :
    authorization(std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki::Authorization>())
{
    authorization->parent = this;

    yang_name = "pki"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Isakmp::Profile::Client::Pki::~Pki()
{
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_data() const
{
    if (is_presence_container) return true;
    return (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Isakmp::Profile::Client::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Isakmp::Profile::Client::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Isakmp::Profile::Client::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Isakmp::Profile::Client::Pki::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Isakmp::Profile::Client::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Native::Crypto::Isakmp::Profile::Client::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Isakmp::Profile::Client::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Isakmp::Profile::Client::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Ec::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Export::Rsa::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::Generate::Ec::Keysize::Y_256 {0, "256"};
const Enum::YLeaf Native::Crypto::Key::Generate::Ec::Keysize::Y_384 {1, "384"};

const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::File::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::File::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::AddressedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv4::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Address::Ipv6::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default::PreSharedKey::Hostname::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Addr::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Addr::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default::RsaPubkey::Hostname::Way::signature {1, "signature"};

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

const Enum::YLeaf Native::Crypto::Isakmp::AggressiveMode::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::Isakmp::Identity::address {0, "address"};
const Enum::YLeaf Native::Crypto::Isakmp::Identity::dn {1, "dn"};
const Enum::YLeaf Native::Crypto::Isakmp::Identity::hostname {2, "hostname"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Configuration::Group::Key::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::cisco_integrated_client_firewall {0, "cisco-integrated-client-firewall"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::cisco_security_agent {1, "cisco-security-agent"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::zonelabs_zonealarm {2, "zonelabs-zonealarm"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Optional::zonelabs_zonealarmpro {3, "zonelabs-zonealarmpro"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::cisco_integrated_client_firewall {0, "cisco-integrated-client-firewall"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::cisco_security_agent {1, "cisco-security-agent"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::zonelabs_zonealarm {2, "zonelabs-zonealarm"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Required::zonelabs_zonealarmpro {3, "zonelabs-zonealarmpro"};

const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Crypto::Isakmp::Keepalive::Send::on_demand {0, "on-demand"};
const Enum::YLeaf Native::Crypto::Isakmp::Keepalive::Send::periodic {1, "periodic"};

const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyAddress::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyAddress::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyHost::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Key::KeyHost::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::pre_share {0, "pre-share"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::rsa_encr {1, "rsa-encr"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Authentication::rsa_sig {2, "rsa-sig"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_1 {0, "1"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_14 {1, "14"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_15 {2, "15"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_16 {3, "16"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_19 {4, "19"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_2 {5, "2"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_20 {6, "20"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_21 {7, "21"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_24 {8, "24"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Group::Y_5 {9, "5"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::md5 {0, "md5"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha {1, "sha"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha256 {2, "sha256"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha384 {3, "sha384"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Hash::sha512 {4, "sha512"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Authentication::pre_share {0, "pre-share"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Authentication::rsa_encr {1, "rsa-encr"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Authentication::rsa_sig {2, "rsa-sig"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_1 {0, "1"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_14 {1, "14"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_15 {2, "15"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_16 {3, "16"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_19 {4, "19"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_2 {5, "2"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_20 {6, "20"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_21 {7, "21"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_24 {8, "24"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Group::Y_5 {9, "5"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::md5 {0, "md5"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::sha {1, "sha"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::sha256 {2, "sha256"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::sha384 {3, "sha384"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Hash::sha512 {4, "sha512"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::Key::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::Key::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Default::Encryption::Aes::Key::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_128 {0, "128"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_192 {1, "192"};
const Enum::YLeaf Native::Crypto::Isakmp::Policy::Encryption::Aes::Key::Y_256 {2, "256"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Keyring::default_ {0, "default"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default::Keyring::default_ {0, "default"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default::Client::Configuration::Address::initiate {0, "initiate"};
const Enum::YLeaf Native::Crypto::Isakmp::Profile::Default::Client::Configuration::Address::respond {1, "respond"};

const Enum::YLeaf Native::Crypto::Isakmp::Profile::Client::Configuration::Address::initiate {0, "initiate"};
const Enum::YLeaf Native::Crypto::Isakmp::Profile::Client::Configuration::Address::respond {1, "respond"};


}
}

