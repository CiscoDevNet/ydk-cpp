
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_132.hpp"
#include "Cisco_IOS_XE_native_180.hpp"
#include "Cisco_IOS_XE_native_186.hpp"
#include "Cisco_IOS_XE_native_135.hpp"
#include "Cisco_IOS_XE_native_133.hpp"
#include "Cisco_IOS_XE_native_138.hpp"
#include "Cisco_IOS_XE_native_160.hpp"
#include "Cisco_IOS_XE_native_214.hpp"
#include "Cisco_IOS_XE_native_139.hpp"
#include "Cisco_IOS_XE_native_216.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Tcp::Tcp()
    :
    pak_priority{YType::empty, "pak-priority"}
{

    yang_name = "tcp"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Tcp::~Tcp()
{
}

bool Native::Mpls::Ldp::Enable2::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return pak_priority.is_set;
}

bool Native::Mpls::Ldp::Enable2::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pak_priority.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pak_priority.is_set || is_set(pak_priority.yfilter)) leaf_name_data.push_back(pak_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Enable2::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pak-priority")
    {
        pak_priority = value;
        pak_priority.value_namespace = name_space;
        pak_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pak-priority")
    {
        pak_priority.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pak-priority")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrf"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    password(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password>())
{
    password->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Password()
    :
    fallback(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback>())
    , option(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option>())
    , required(nullptr) // presence node
    , rollover(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover>())
{
    fallback->parent = this;
    option->parent = this;
    rollover->parent = this;

    yang_name = "password"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::has_data() const
{
    if (is_presence_container) return true;
    return (fallback !=  nullptr && fallback->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (required !=  nullptr && required->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::has_operation() const
{
    return is_set(yfilter)
	|| (fallback !=  nullptr && fallback->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (required !=  nullptr && required->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback>();
        }
        return fallback;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option>();
        }
        return option;
    }

    if(child_yang_name == "required")
    {
        if(required == nullptr)
        {
            required = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required>();
        }
        return required;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fallback != nullptr)
    {
        _children["fallback"] = fallback;
    }

    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(required != nullptr)
    {
        _children["required"] = required;
    }

    if(rollover != nullptr)
    {
        _children["rollover"] = rollover;
    }

    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "option" || name == "required" || name == "rollover")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::Fallback()
    :
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
        ,
    key_chain(nullptr) // presence node
{

    yang_name = "fallback"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::~Fallback()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::has_data() const
{
    if (is_presence_container) return true;
    return encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(line.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "encryption-type" || name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{

    yang_name = "key-chain"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::Option()
    :
    seq_num(this, {"seq_num"})
{

    yang_name = "option"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::~Option()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<seq_num.len(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::has_operation() const
{
    for (std::size_t index=0; index<seq_num.len(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        auto ent_ = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum>();
        ent_->parent = this;
        seq_num.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : seq_num.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-num")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::SeqNum()
    :
    seq_num{YType::uint16, "seq-num"}
        ,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For>())
{
    for_->parent = this;

    yang_name = "seq-num"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::~SeqNum()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::has_data() const
{
    if (is_presence_container) return true;
    return seq_num.is_set
	|| (for_ !=  nullptr && for_->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| (for_ !=  nullptr && for_->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num";
    ADD_KEY_TOKEN(seq_num, "seq-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For>();
        }
        return for_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(for_ != nullptr)
    {
        _children["for"] = for_;
    }

    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "seq-num")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::For()
    :
    line(this, {"acl_name"})
{

    yang_name = "for"; yang_parent_name = "seq-num"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::~For()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<line.len(); index++)
    {
        if(line[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::has_operation() const
{
    for (std::size_t index=0; index<line.len(); index++)
    {
        if(line[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LINE")
    {
        auto ent_ = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE>();
        ent_->parent = this;
        line.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : line.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::LINE()
    :
    acl_name{YType::str, "acl-name"},
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
        ,
    key_chain(nullptr) // presence node
{

    yang_name = "LINE"; yang_parent_name = "for"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::~LINE()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(line.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LINE";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "acl-name" || name == "encryption-type" || name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{

    yang_name = "key-chain"; yang_parent_name = "LINE"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::Required()
    :
    for_{YType::str, "for"}
{

    yang_name = "required"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::~Required()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::has_data() const
{
    if (is_presence_container) return true;
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "required";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.yfilter)) leaf_name_data.push_back(for_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for")
    {
        for_ = value;
        for_.value_namespace = name_space;
        for_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for")
    {
        for_.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::Rollover()
    :
    duration{YType::uint16, "duration"}
{

    yang_name = "rollover"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::has_data() const
{
    if (is_presence_container) return true;
    return duration.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Session()
    :
    protection(nullptr) // presence node
{

    yang_name = "session"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Session::~Session()
{
}

bool Native::Mpls::Ldp::Session::has_data() const
{
    if (is_presence_container) return true;
    return (protection !=  nullptr && protection->has_data());
}

bool Native::Mpls::Ldp::Session::has_operation() const
{
    return is_set(yfilter)
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Mpls::Ldp::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Mpls::Ldp::Session::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    return _children;
}

void Native::Mpls::Ldp::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Protection()
    :
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::Duration>())
    , for_(std::make_shared<Native::Mpls::Ldp::Session::Protection::For>())
    , vrf(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf>())
{
    duration->parent = this;
    for_->parent = this;
    vrf->parent = this;

    yang_name = "protection"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Session::Protection::~Protection()
{
}

bool Native::Mpls::Ldp::Session::Protection::has_data() const
{
    if (is_presence_container) return true;
    return (duration !=  nullptr && duration->has_data())
	|| (for_ !=  nullptr && for_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (duration !=  nullptr && duration->has_operation())
	|| (for_ !=  nullptr && for_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::Duration>();
        }
        return duration;
    }

    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Session::Protection::For>();
        }
        return for_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(duration != nullptr)
    {
        _children["duration"] = duration;
    }

    if(for_ != nullptr)
    {
        _children["for"] = for_;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Mpls::Ldp::Session::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Session::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Session::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "for" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "duration"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Session::Protection::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::Duration::has_data() const
{
    if (is_presence_container) return true;
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdup_time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::Duration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.yfilter)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Session::Protection::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
        holdup_time.value_namespace = name_space;
        holdup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdup-time")
    {
        holdup_time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdup-time" || name == "infinite")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::For::For()
    :
    acl_name{YType::str, "acl-name"}
        ,
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::For::Duration>())
{
    duration->parent = this;

    yang_name = "for"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Session::Protection::For::~For()
{
}

bool Native::Mpls::Ldp::Session::Protection::For::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::For::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::For::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::For::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::For::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::For::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::For::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(duration != nullptr)
    {
        _children["duration"] = duration;
    }

    return _children;
}

void Native::Mpls::Ldp::Session::Protection::For::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::For::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::For::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "acl-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::For::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "duration"; yang_parent_name = "for"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Session::Protection::For::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::For::Duration::has_data() const
{
    if (is_presence_container) return true;
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::For::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdup_time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::For::Duration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/for/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::For::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::For::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.yfilter)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::For::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::For::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Session::Protection::For::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
        holdup_time.value_namespace = name_space;
        holdup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::For::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdup-time")
    {
        holdup_time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::For::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdup-time" || name == "infinite")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrf"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Session::Protection::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Session::Protection::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    for_(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For>())
    , duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration>())
{
    for_->parent = this;
    duration->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (for_ !=  nullptr && for_->has_data())
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (for_ !=  nullptr && for_->has_operation())
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For>();
        }
        return for_;
    }

    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(for_ != nullptr)
    {
        _children["for"] = for_;
    }

    if(duration != nullptr)
    {
        _children["duration"] = duration;
    }

    return _children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "duration" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::For()
    :
    acl_name{YType::str, "acl-name"}
        ,
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration>())
{
    duration->parent = this;

    yang_name = "for"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::~For()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(duration != nullptr)
    {
        _children["duration"] = duration;
    }

    return _children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "acl-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "duration"; yang_parent_name = "for"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::has_data() const
{
    if (is_presence_container) return true;
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdup_time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.yfilter)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
        holdup_time.value_namespace = name_space;
        holdup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdup-time")
    {
        holdup_time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdup-time" || name == "infinite")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "duration"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::has_data() const
{
    if (is_presence_container) return true;
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdup_time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.yfilter)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
        holdup_time.value_namespace = name_space;
        holdup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdup-time")
    {
        holdup_time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdup-time" || name == "infinite")
        return true;
    return false;
}

Native::Mpls::PrefixMap::PrefixMap()
    :
    nr{YType::uint8, "nr"},
    access_list{YType::uint8, "access-list"},
    cos_map{YType::uint8, "cos-map"}
{

    yang_name = "prefix-map"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::PrefixMap::~PrefixMap()
{
}

bool Native::Mpls::PrefixMap::has_data() const
{
    if (is_presence_container) return true;
    return nr.is_set
	|| access_list.is_set
	|| cos_map.is_set;
}

bool Native::Mpls::PrefixMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nr.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(cos_map.yfilter);
}

std::string Native::Mpls::PrefixMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::PrefixMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:prefix-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::PrefixMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nr.is_set || is_set(nr.yfilter)) leaf_name_data.push_back(nr.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (cos_map.is_set || is_set(cos_map.yfilter)) leaf_name_data.push_back(cos_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::PrefixMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::PrefixMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::PrefixMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nr")
    {
        nr = value;
        nr.value_namespace = name_space;
        nr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-map")
    {
        cos_map = value;
        cos_map.value_namespace = name_space;
        cos_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::PrefixMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nr")
    {
        nr.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "cos-map")
    {
        cos_map.yfilter = yfilter;
    }
}

bool Native::Mpls::PrefixMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nr" || name == "access-list" || name == "cos-map")
        return true;
    return false;
}

Native::Mpls::Static::Static()
    :
    binding(std::make_shared<Native::Mpls::Static::Binding>())
{
    binding->parent = this;

    yang_name = "static"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Static::~Static()
{
}

bool Native::Mpls::Static::has_data() const
{
    if (is_presence_container) return true;
    return (binding !=  nullptr && binding->has_data());
}

bool Native::Mpls::Static::has_operation() const
{
    return is_set(yfilter)
	|| (binding !=  nullptr && binding->has_operation());
}

std::string Native::Mpls::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Native::Mpls::Static::Binding>();
        }
        return binding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding != nullptr)
    {
        _children["binding"] = binding;
    }

    return _children;
}

void Native::Mpls::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

Native::Mpls::Static::Binding::Binding()
    :
    ipv4(std::make_shared<Native::Mpls::Static::Binding::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "binding"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Static::Binding::~Binding()
{
}

bool Native::Mpls::Static::Binding::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Mpls::Static::Binding::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Mpls::Static::Binding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Mpls::Static::Binding::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Native::Mpls::Static::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Static::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Static::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Mpls::Static::Binding::Ipv4::Ipv4()
    :
    global(this, {"address", "mask"})
    , vrf(this, {"name", "address", "mask"})
{

    yang_name = "ipv4"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Static::Binding::Ipv4::~Ipv4()
{
}

bool Native::Mpls::Static::Binding::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global.len(); index++)
    {
        if(global[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Static::Binding::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<global.len(); index++)
    {
        if(global[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Static::Binding::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static::Binding::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::Binding::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::Binding::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        auto ent_ = std::make_shared<Native::Mpls::Static::Binding::Ipv4::Global>();
        ent_->parent = this;
        global.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Mpls::Static::Binding::Ipv4::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::Binding::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : global.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::Static::Binding::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Static::Binding::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Static::Binding::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Static::Binding::Ipv4::Global::Global()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    label{YType::uint32, "label"}
        ,
    input(std::make_shared<Native::Mpls::Static::Binding::Ipv4::Global::Input>())
    , output(std::make_shared<Native::Mpls::Static::Binding::Ipv4::Global::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "global"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Static::Binding::Ipv4::Global::~Global()
{
}

bool Native::Mpls::Static::Binding::Ipv4::Global::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| label.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Mpls::Static::Binding::Ipv4::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(label.yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Mpls::Static::Binding::Ipv4::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static::Binding::Ipv4::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::Binding::Ipv4::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::Binding::Ipv4::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Mpls::Static::Binding::Ipv4::Global::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Mpls::Static::Binding::Ipv4::Global::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::Binding::Ipv4::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Mpls::Static::Binding::Ipv4::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static::Binding::Ipv4::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static::Binding::Ipv4::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "address" || name == "mask" || name == "label")
        return true;
    return false;
}

Native::Mpls::Static::Binding::Ipv4::Global::Input::Input()
    :
    label{YType::uint32, "label"}
{

    yang_name = "input"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Static::Binding::Ipv4::Global::Input::~Input()
{
}

bool Native::Mpls::Static::Binding::Ipv4::Global::Input::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set;
}

bool Native::Mpls::Static::Binding::Ipv4::Global::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Mpls::Static::Binding::Ipv4::Global::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::Binding::Ipv4::Global::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::Binding::Ipv4::Global::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::Binding::Ipv4::Global::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Static::Binding::Ipv4::Global::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static::Binding::Ipv4::Global::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static::Binding::Ipv4::Global::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Mpls::Static::Binding::Ipv4::Global::Output::Output()
    :
    dst_next_hop{YType::str, "dst-next-hop"},
    label{YType::str, "label"}
{

    yang_name = "output"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Static::Binding::Ipv4::Global::Output::~Output()
{
}

bool Native::Mpls::Static::Binding::Ipv4::Global::Output::has_data() const
{
    if (is_presence_container) return true;
    return dst_next_hop.is_set
	|| label.is_set;
}

bool Native::Mpls::Static::Binding::Ipv4::Global::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Mpls::Static::Binding::Ipv4::Global::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::Binding::Ipv4::Global::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_next_hop.is_set || is_set(dst_next_hop.yfilter)) leaf_name_data.push_back(dst_next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::Binding::Ipv4::Global::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::Binding::Ipv4::Global::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Static::Binding::Ipv4::Global::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop = value;
        dst_next_hop.value_namespace = name_space;
        dst_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static::Binding::Ipv4::Global::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static::Binding::Ipv4::Global::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-next-hop" || name == "label")
        return true;
    return false;
}

Native::Mpls::Static::Binding::Ipv4::Vrf::Vrf()
    :
    name{YType::str, "name"},
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    label{YType::uint32, "label"}
        ,
    input(std::make_shared<Native::Mpls::Static::Binding::Ipv4::Vrf::Input>())
    , output(std::make_shared<Native::Mpls::Static::Binding::Ipv4::Vrf::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "vrf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Static::Binding::Ipv4::Vrf::~Vrf()
{
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| address.is_set
	|| mask.is_set
	|| label.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(label.yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Mpls::Static::Binding::Ipv4::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static::Binding::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::Binding::Ipv4::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::Binding::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Mpls::Static::Binding::Ipv4::Vrf::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Mpls::Static::Binding::Ipv4::Vrf::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::Binding::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Mpls::Static::Binding::Ipv4::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static::Binding::Ipv4::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "name" || name == "address" || name == "mask" || name == "label")
        return true;
    return false;
}

Native::Mpls::Static::Binding::Ipv4::Vrf::Input::Input()
    :
    label{YType::uint32, "label"}
{

    yang_name = "input"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Static::Binding::Ipv4::Vrf::Input::~Input()
{
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::Input::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set;
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Mpls::Static::Binding::Ipv4::Vrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::Binding::Ipv4::Vrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::Binding::Ipv4::Vrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::Binding::Ipv4::Vrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Static::Binding::Ipv4::Vrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static::Binding::Ipv4::Vrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Mpls::Static::Binding::Ipv4::Vrf::Output::Output()
    :
    dst_next_hop{YType::str, "dst-next-hop"},
    label{YType::str, "label"}
{

    yang_name = "output"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Static::Binding::Ipv4::Vrf::Output::~Output()
{
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::Output::has_data() const
{
    if (is_presence_container) return true;
    return dst_next_hop.is_set
	|| label.is_set;
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Mpls::Static::Binding::Ipv4::Vrf::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static::Binding::Ipv4::Vrf::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_next_hop.is_set || is_set(dst_next_hop.yfilter)) leaf_name_data.push_back(dst_next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Static::Binding::Ipv4::Vrf::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Static::Binding::Ipv4::Vrf::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Static::Binding::Ipv4::Vrf::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop = value;
        dst_next_hop.value_namespace = name_space;
        dst_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static::Binding::Ipv4::Vrf::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static::Binding::Ipv4::Vrf::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-next-hop" || name == "label")
        return true;
    return false;
}

Native::Mpls::TrafficEng::TrafficEng()
    :
    fault_oam{YType::empty, "fault-oam"},
    nsr{YType::empty, "nsr"},
    tunnels{YType::empty, "tunnels"}
        ,
    auto_bw(std::make_shared<Native::Mpls::TrafficEng::AutoBw>())
    , auto_tunnel(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel>())
    , ds_te(std::make_shared<Native::Mpls::TrafficEng::DsTe>())
    , fast_reroute(std::make_shared<Native::Mpls::TrafficEng::FastReroute>())
    , link_management(std::make_shared<Native::Mpls::TrafficEng::LinkManagement>())
    , logging(std::make_shared<Native::Mpls::TrafficEng::Logging>())
    , lsp(std::make_shared<Native::Mpls::TrafficEng::Lsp>())
    , path_option(std::make_shared<Native::Mpls::TrafficEng::PathOption>())
    , path_selection(std::make_shared<Native::Mpls::TrafficEng::PathSelection>())
    , pcc(std::make_shared<Native::Mpls::TrafficEng::Pcc>())
    , reoptimize(std::make_shared<Native::Mpls::TrafficEng::Reoptimize>())
    , signalling(std::make_shared<Native::Mpls::TrafficEng::Signalling>())
    , topology(std::make_shared<Native::Mpls::TrafficEng::Topology>())
    , trace(std::make_shared<Native::Mpls::TrafficEng::Trace>())
{
    auto_bw->parent = this;
    auto_tunnel->parent = this;
    ds_te->parent = this;
    fast_reroute->parent = this;
    link_management->parent = this;
    logging->parent = this;
    lsp->parent = this;
    path_option->parent = this;
    path_selection->parent = this;
    pcc->parent = this;
    reoptimize->parent = this;
    signalling->parent = this;
    topology->parent = this;
    trace->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Mpls::TrafficEng::has_data() const
{
    if (is_presence_container) return true;
    return fault_oam.is_set
	|| nsr.is_set
	|| tunnels.is_set
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (ds_te !=  nullptr && ds_te->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (link_management !=  nullptr && link_management->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (lsp !=  nullptr && lsp->has_data())
	|| (path_option !=  nullptr && path_option->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pcc !=  nullptr && pcc->has_data())
	|| (reoptimize !=  nullptr && reoptimize->has_data())
	|| (signalling !=  nullptr && signalling->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (trace !=  nullptr && trace->has_data());
}

bool Native::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fault_oam.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (ds_te !=  nullptr && ds_te->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (link_management !=  nullptr && link_management->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (path_option !=  nullptr && path_option->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation())
	|| (reoptimize !=  nullptr && reoptimize->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (trace !=  nullptr && trace->has_operation());
}

std::string Native::Mpls::TrafficEng::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fault_oam.is_set || is_set(fault_oam.yfilter)) leaf_name_data.push_back(fault_oam.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Mpls::TrafficEng::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "ds-te")
    {
        if(ds_te == nullptr)
        {
            ds_te = std::make_shared<Native::Mpls::TrafficEng::DsTe>();
        }
        return ds_te;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Mpls::TrafficEng::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "link-management")
    {
        if(link_management == nullptr)
        {
            link_management = std::make_shared<Native::Mpls::TrafficEng::LinkManagement>();
        }
        return link_management;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Mpls::TrafficEng::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<Native::Mpls::TrafficEng::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "path-option")
    {
        if(path_option == nullptr)
        {
            path_option = std::make_shared<Native::Mpls::TrafficEng::PathOption>();
        }
        return path_option;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Mpls::TrafficEng::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<Native::Mpls::TrafficEng::Pcc>();
        }
        return pcc;
    }

    if(child_yang_name == "reoptimize")
    {
        if(reoptimize == nullptr)
        {
            reoptimize = std::make_shared<Native::Mpls::TrafficEng::Reoptimize>();
        }
        return reoptimize;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Mpls::TrafficEng::Signalling>();
        }
        return signalling;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Mpls::TrafficEng::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Mpls::TrafficEng::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_bw != nullptr)
    {
        _children["auto-bw"] = auto_bw;
    }

    if(auto_tunnel != nullptr)
    {
        _children["auto-tunnel"] = auto_tunnel;
    }

    if(ds_te != nullptr)
    {
        _children["ds-te"] = ds_te;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    if(link_management != nullptr)
    {
        _children["link-management"] = link_management;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(lsp != nullptr)
    {
        _children["lsp"] = lsp;
    }

    if(path_option != nullptr)
    {
        _children["path-option"] = path_option;
    }

    if(path_selection != nullptr)
    {
        _children["path-selection"] = path_selection;
    }

    if(pcc != nullptr)
    {
        _children["pcc"] = pcc;
    }

    if(reoptimize != nullptr)
    {
        _children["reoptimize"] = reoptimize;
    }

    if(signalling != nullptr)
    {
        _children["signalling"] = signalling;
    }

    if(topology != nullptr)
    {
        _children["topology"] = topology;
    }

    if(trace != nullptr)
    {
        _children["trace"] = trace;
    }

    return _children;
}

void Native::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fault-oam")
    {
        fault_oam = value;
        fault_oam.value_namespace = name_space;
        fault_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fault-oam")
    {
        fault_oam.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-bw" || name == "auto-tunnel" || name == "ds-te" || name == "fast-reroute" || name == "link-management" || name == "logging" || name == "lsp" || name == "path-option" || name == "path-selection" || name == "pcc" || name == "reoptimize" || name == "signalling" || name == "topology" || name == "trace" || name == "fault-oam" || name == "nsr" || name == "tunnels")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoBw::AutoBw()
    :
    timers(nullptr) // presence node
{

    yang_name = "auto-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoBw::~AutoBw()
{
}

bool Native::Mpls::TrafficEng::AutoBw::has_data() const
{
    if (is_presence_container) return true;
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::AutoBw::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoBw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoBw::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoBw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoBw::Timers::Timers()
    :
    frequency{YType::uint32, "frequency"}
{

    yang_name = "timers"; yang_parent_name = "auto-bw"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::AutoBw::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoBw::Timers::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set;
}

bool Native::Mpls::TrafficEng::AutoBw::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoBw::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-bw/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoBw::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoBw::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoBw::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoBw::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoBw::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoBw::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoBw::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::AutoTunnel()
    :
    backup(nullptr) // presence node
    , mesh(nullptr) // presence node
    , p2p(nullptr) // presence node
    , primary(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary>())
{
    primary->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::~AutoTunnel()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::has_data() const
{
    if (is_presence_container) return true;
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (p2p !=  nullptr && p2p->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (p2p !=  nullptr && p2p->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "p2p")
    {
        if(p2p == nullptr)
        {
            p2p = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p>();
        }
        return p2p;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary>();
        }
        return primary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(mesh != nullptr)
    {
        _children["mesh"] = mesh;
    }

    if(p2p != nullptr)
    {
        _children["p2p"] = p2p;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mesh" || name == "p2p" || name == "primary")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Backup()
    :
    nhop_only{YType::empty, "nhop-only"}
        ,
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config>())
    , srlg(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg>())
    , timers(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers>())
    , tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum>())
{
    config->parent = this;
    srlg->parent = this;
    timers->parent = this;
    tunnel_num->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::~Backup()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::has_data() const
{
    if (is_presence_container) return true;
    return nhop_only.is_set
	|| (config !=  nullptr && config->has_data())
	|| (srlg !=  nullptr && srlg->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhop_only.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhop_only.is_set || is_set(nhop_only.yfilter)) leaf_name_data.push_back(nhop_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config>();
        }
        return config;
    }

    if(child_yang_name == "srlg")
    {
        if(srlg == nullptr)
        {
            srlg = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg>();
        }
        return srlg;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(srlg != nullptr)
    {
        _children["srlg"] = srlg;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(tunnel_num != nullptr)
    {
        _children["tunnel-num"] = tunnel_num;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhop-only")
    {
        nhop_only = value;
        nhop_only.value_namespace = name_space;
        nhop_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhop-only")
    {
        nhop_only.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "srlg" || name == "timers" || name == "tunnel-num" || name == "nhop-only")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Config()
    :
    affinity_mask(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask>())
    , unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface>())
{
    affinity_mask->parent = this;
    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::has_data() const
{
    if (is_presence_container) return true;
    return (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::has_operation() const
{
    return is_set(yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity_mask != nullptr)
    {
        _children["affinity-mask"] = affinity_mask;
    }

    if(unnumbered_interface != nullptr)
    {
        _children["unnumbered-interface"] = unnumbered_interface;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "unnumbered-interface")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::~AffinityMask()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::UnnumberedInterface()
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
    atm_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "unnumbered-interface"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::has_data() const
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
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::has_operation() const
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
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Srlg()
    :
    exclude{YType::enumeration, "exclude"}
{

    yang_name = "srlg"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::~Srlg()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::has_data() const
{
    if (is_presence_container) return true;
    return exclude.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclude.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude.is_set || is_set(exclude.yfilter)) leaf_name_data.push_back(exclude.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude")
    {
        exclude = value;
        exclude.value_namespace = name_space;
        exclude.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude")
    {
        exclude.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Timers()
    :
    removal(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(removal != nullptr)
    {
        _children["removal"] = removal;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Removal()
    :
    unused(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused>())
{
    unused->parent = this;

    yang_name = "removal"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::~Removal()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::has_data() const
{
    if (is_presence_container) return true;
    return (unused !=  nullptr && unused->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| (unused !=  nullptr && unused->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused>();
        }
        return unused;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unused != nullptr)
    {
        _children["unused"] = unused;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unused")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::Unused()
    :
    interval{YType::uint32, "interval"},
    duration{YType::uint32, "duration"}
{

    yang_name = "unused"; yang_parent_name = "removal"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::~Unused()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| duration.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/timers/removal/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "duration")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::has_data() const
{
    if (is_presence_container) return true;
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min_max != nullptr)
    {
        _children["min-max"] = min_max;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::MinMax()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "min-max"; yang_parent_name = "tunnel-num"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/tunnel-num/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::Mesh()
    :
    tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum>())
{
    tunnel_num->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::~Mesh()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_num != nullptr)
    {
        _children["tunnel-num"] = tunnel_num;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::has_data() const
{
    if (is_presence_container) return true;
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min_max != nullptr)
    {
        _children["min-max"] = min_max;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::MinMax()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "min-max"; yang_parent_name = "tunnel-num"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/mesh/tunnel-num/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::P2p()
    :
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config>())
    , tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum>())
{
    config->parent = this;
    tunnel_num->parent = this;

    yang_name = "p2p"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::~P2p()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config>();
        }
        return config;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(tunnel_num != nullptr)
    {
        _children["tunnel-num"] = tunnel_num;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "tunnel-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::Config()
    :
    unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface>())
{
    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "p2p"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::has_data() const
{
    if (is_presence_container) return true;
    return (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::has_operation() const
{
    return is_set(yfilter)
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unnumbered_interface != nullptr)
    {
        _children["unnumbered-interface"] = unnumbered_interface;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unnumbered-interface")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::UnnumberedInterface()
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
    atm_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "unnumbered-interface"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::has_data() const
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
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::has_operation() const
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
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "p2p"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::has_data() const
{
    if (is_presence_container) return true;
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min_max != nullptr)
    {
        _children["min-max"] = min_max;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::MinMax()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "min-max"; yang_parent_name = "tunnel-num"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/tunnel-num/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Primary()
    :
    onehop{YType::empty, "onehop"}
        ,
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config>())
    , timers(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers>())
    , tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum>())
{
    config->parent = this;
    timers->parent = this;
    tunnel_num->parent = this;

    yang_name = "primary"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::~Primary()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_data() const
{
    if (is_presence_container) return true;
    return onehop.is_set
	|| (config !=  nullptr && config->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(onehop.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onehop.is_set || is_set(onehop.yfilter)) leaf_name_data.push_back(onehop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config>();
        }
        return config;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(tunnel_num != nullptr)
    {
        _children["tunnel-num"] = tunnel_num;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "onehop")
    {
        onehop = value;
        onehop.value_namespace = name_space;
        onehop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "onehop")
    {
        onehop.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "timers" || name == "tunnel-num" || name == "onehop")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Config()
    :
    mpls(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_>())
    , unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface>())
{
    mpls->parent = this;
    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_data() const
{
    if (is_presence_container) return true;
    return (mpls !=  nullptr && mpls->has_data())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_>();
        }
        return mpls;
    }

    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(unnumbered_interface != nullptr)
    {
        _children["unnumbered-interface"] = unnumbered_interface;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "unnumbered-interface")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::Mpls_()
    :
    ip{YType::empty, "ip"}
{

    yang_name = "mpls"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::~Mpls_()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::UnnumberedInterface()
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
    atm_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "unnumbered-interface"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_data() const
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
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_operation() const
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
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Timers()
    :
    removal(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(removal != nullptr)
    {
        _children["removal"] = removal;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::Removal()
    :
    rerouted{YType::uint32, "rerouted"}
{

    yang_name = "removal"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::~Removal()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_data() const
{
    if (is_presence_container) return true;
    return rerouted.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rerouted.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rerouted.is_set || is_set(rerouted.yfilter)) leaf_name_data.push_back(rerouted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rerouted")
    {
        rerouted = value;
        rerouted.value_namespace = name_space;
        rerouted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rerouted")
    {
        rerouted.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rerouted")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_data() const
{
    if (is_presence_container) return true;
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min_max != nullptr)
    {
        _children["min-max"] = min_max;
    }

    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::MinMax()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "min-max"; yang_parent_name = "tunnel-num"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/tunnel-num/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::DsTe()
    :
    bc_model{YType::enumeration, "bc-model"},
    mode{YType::enumeration, "mode"}
        ,
    te_classes(nullptr) // presence node
{

    yang_name = "ds-te"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::DsTe::~DsTe()
{
}

bool Native::Mpls::TrafficEng::DsTe::has_data() const
{
    if (is_presence_container) return true;
    return bc_model.is_set
	|| mode.is_set
	|| (te_classes !=  nullptr && te_classes->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bc_model.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (te_classes !=  nullptr && te_classes->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::DsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::DsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc_model.is_set || is_set(bc_model.yfilter)) leaf_name_data.push_back(bc_model.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::DsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-classes")
    {
        if(te_classes == nullptr)
        {
            te_classes = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses>();
        }
        return te_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::DsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_classes != nullptr)
    {
        _children["te-classes"] = te_classes;
    }

    return _children;
}

void Native::Mpls::TrafficEng::DsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bc-model")
    {
        bc_model = value;
        bc_model.value_namespace = name_space;
        bc_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bc-model")
    {
        bc_model.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-classes" || name == "bc-model" || name == "mode")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClasses()
    :
    te_class(this, {"te_idx"})
{

    yang_name = "te-classes"; yang_parent_name = "ds-te"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::~TeClasses()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_class.len(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.len(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::DsTe::TeClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        auto ent_ = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass>();
        ent_->parent = this;
        te_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-class")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::TeClass()
    :
    te_idx{YType::uint8, "te-idx"},
    unused{YType::empty, "unused"}
        ,
    class_type(std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType>())
{
    class_type->parent = this;

    yang_name = "te-class"; yang_parent_name = "te-classes"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::~TeClass()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_data() const
{
    if (is_presence_container) return true;
    return te_idx.is_set
	|| unused.is_set
	|| (class_type !=  nullptr && class_type->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_idx.yfilter)
	|| ydk::is_set(unused.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/te-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class";
    ADD_KEY_TOKEN(te_idx, "te-idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_idx.is_set || is_set(te_idx.yfilter)) leaf_name_data.push_back(te_idx.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType>();
        }
        return class_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(class_type != nullptr)
    {
        _children["class-type"] = class_type;
    }

    return _children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-idx")
    {
        te_idx = value;
        te_idx.value_namespace = name_space;
        te_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-idx")
    {
        te_idx.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "te-idx" || name == "unused")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::ClassType()
    :
    type{YType::uint8, "type"},
    priority{YType::uint8, "priority"}
{

    yang_name = "class-type"; yang_parent_name = "te-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::~ClassType()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| priority.is_set;
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "priority")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::FastReroute()
    :
    backup_prot_preempt(std::make_shared<Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt>())
    , timers(std::make_shared<Native::Mpls::TrafficEng::FastReroute::Timers>())
{
    backup_prot_preempt->parent = this;
    timers->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return (backup_prot_preempt !=  nullptr && backup_prot_preempt->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (backup_prot_preempt !=  nullptr && backup_prot_preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-prot-preempt")
    {
        if(backup_prot_preempt == nullptr)
        {
            backup_prot_preempt = std::make_shared<Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt>();
        }
        return backup_prot_preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::FastReroute::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup_prot_preempt != nullptr)
    {
        _children["backup-prot-preempt"] = backup_prot_preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    return _children;
}

void Native::Mpls::TrafficEng::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-prot-preempt" || name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::BackupProtPreempt()
    :
    optimize_bw{YType::empty, "optimize-bw"}
{

    yang_name = "backup-prot-preempt"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::~BackupProtPreempt()
{
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_data() const
{
    if (is_presence_container) return true;
    return optimize_bw.is_set;
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optimize_bw.yfilter);
}

std::string Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-prot-preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optimize_bw.is_set || is_set(optimize_bw.yfilter)) leaf_name_data.push_back(optimize_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optimize-bw")
    {
        optimize_bw = value;
        optimize_bw.value_namespace = name_space;
        optimize_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optimize-bw")
    {
        optimize_bw.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optimize-bw")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::Timers::Timers()
    :
    promotion{YType::uint32, "promotion"}
{

    yang_name = "timers"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::FastReroute::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_data() const
{
    if (is_presence_container) return true;
    return promotion.is_set;
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(promotion.yfilter);
}

std::string Native::Mpls::TrafficEng::FastReroute::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::FastReroute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::FastReroute::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (promotion.is_set || is_set(promotion.yfilter)) leaf_name_data.push_back(promotion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::FastReroute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::FastReroute::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::FastReroute::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "promotion")
    {
        promotion = value;
        promotion.value_namespace = name_space;
        promotion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::FastReroute::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "promotion")
    {
        promotion.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "promotion")
        return true;
    return false;
}

Native::Mpls::TrafficEng::LinkManagement::LinkManagement()
    :
    timers(std::make_shared<Native::Mpls::TrafficEng::LinkManagement::Timers>())
{
    timers->parent = this;

    yang_name = "link-management"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::LinkManagement::~LinkManagement()
{
}

bool Native::Mpls::TrafficEng::LinkManagement::has_data() const
{
    if (is_presence_container) return true;
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::LinkManagement::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::LinkManagement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::LinkManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::LinkManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::LinkManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::LinkManagement::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::LinkManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    return _children;
}

void Native::Mpls::TrafficEng::LinkManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::LinkManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::LinkManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::LinkManagement::Timers::Timers()
    :
    bandwidth_hold{YType::uint16, "bandwidth-hold"},
    periodic_flooding{YType::uint16, "periodic-flooding"}
{

    yang_name = "timers"; yang_parent_name = "link-management"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::LinkManagement::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_hold.is_set
	|| periodic_flooding.is_set;
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_hold.yfilter)
	|| ydk::is_set(periodic_flooding.yfilter);
}

std::string Native::Mpls::TrafficEng::LinkManagement::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/link-management/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::LinkManagement::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::LinkManagement::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold.is_set || is_set(bandwidth_hold.yfilter)) leaf_name_data.push_back(bandwidth_hold.get_name_leafdata());
    if (periodic_flooding.is_set || is_set(periodic_flooding.yfilter)) leaf_name_data.push_back(periodic_flooding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::LinkManagement::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::LinkManagement::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::LinkManagement::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-hold")
    {
        bandwidth_hold = value;
        bandwidth_hold.value_namespace = name_space;
        bandwidth_hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-flooding")
    {
        periodic_flooding = value;
        periodic_flooding.value_namespace = name_space;
        periodic_flooding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::LinkManagement::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-hold")
    {
        bandwidth_hold.yfilter = yfilter;
    }
    if(value_path == "periodic-flooding")
    {
        periodic_flooding.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-hold" || name == "periodic-flooding")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Logging()
    :
    lsp(std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp>())
    , tunnel(std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel>())
{
    lsp->parent = this;
    tunnel->parent = this;

    yang_name = "logging"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Logging::~Logging()
{
}

bool Native::Mpls::TrafficEng::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (lsp !=  nullptr && lsp->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Mpls::TrafficEng::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp != nullptr)
    {
        _children["lsp"] = lsp;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "tunnel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Lsp()
    :
    path_errors(nullptr) // presence node
    , preemption(nullptr) // presence node
    , reservation_errors(nullptr) // presence node
    , setups(nullptr) // presence node
    , teardowns(nullptr) // presence node
{

    yang_name = "lsp"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Logging::Lsp::~Lsp()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_data() const
{
    if (is_presence_container) return true;
    return (path_errors !=  nullptr && path_errors->has_data())
	|| (preemption !=  nullptr && preemption->has_data())
	|| (reservation_errors !=  nullptr && reservation_errors->has_data())
	|| (setups !=  nullptr && setups->has_data())
	|| (teardowns !=  nullptr && teardowns->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| (path_errors !=  nullptr && path_errors->has_operation())
	|| (preemption !=  nullptr && preemption->has_operation())
	|| (reservation_errors !=  nullptr && reservation_errors->has_operation())
	|| (setups !=  nullptr && setups->has_operation())
	|| (teardowns !=  nullptr && teardowns->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-errors")
    {
        if(path_errors == nullptr)
        {
            path_errors = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::PathErrors>();
        }
        return path_errors;
    }

    if(child_yang_name == "preemption")
    {
        if(preemption == nullptr)
        {
            preemption = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Preemption>();
        }
        return preemption;
    }

    if(child_yang_name == "reservation-errors")
    {
        if(reservation_errors == nullptr)
        {
            reservation_errors = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors>();
        }
        return reservation_errors;
    }

    if(child_yang_name == "setups")
    {
        if(setups == nullptr)
        {
            setups = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Setups>();
        }
        return setups;
    }

    if(child_yang_name == "teardowns")
    {
        if(teardowns == nullptr)
        {
            teardowns = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Teardowns>();
        }
        return teardowns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_errors != nullptr)
    {
        _children["path-errors"] = path_errors;
    }

    if(preemption != nullptr)
    {
        _children["preemption"] = preemption;
    }

    if(reservation_errors != nullptr)
    {
        _children["reservation-errors"] = reservation_errors;
    }

    if(setups != nullptr)
    {
        _children["setups"] = setups;
    }

    if(teardowns != nullptr)
    {
        _children["teardowns"] = teardowns;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-errors" || name == "preemption" || name == "reservation-errors" || name == "setups" || name == "teardowns")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::PathErrors()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "path-errors"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::~PathErrors()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Preemption::Preemption()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "preemption"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Logging::Lsp::Preemption::~Preemption()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Preemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Preemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::ReservationErrors()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "reservation-errors"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::~ReservationErrors()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Setups::Setups()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "setups"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Logging::Lsp::Setups::~Setups()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Setups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Setups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::Teardowns()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "teardowns"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::~Teardowns()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "teardowns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Tunnel()
    :
    lsp_selection(nullptr) // presence node
    , lsp_switchover(nullptr) // presence node
    , path(std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path>())
{
    path->parent = this;

    yang_name = "tunnel"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Logging::Tunnel::~Tunnel()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return (lsp_selection !=  nullptr && lsp_selection->has_data())
	|| (lsp_switchover !=  nullptr && lsp_switchover->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_selection !=  nullptr && lsp_selection->has_operation())
	|| (lsp_switchover !=  nullptr && lsp_switchover->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-selection")
    {
        if(lsp_selection == nullptr)
        {
            lsp_selection = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection>();
        }
        return lsp_selection;
    }

    if(child_yang_name == "lsp-switchover")
    {
        if(lsp_switchover == nullptr)
        {
            lsp_switchover = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover>();
        }
        return lsp_switchover;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_selection != nullptr)
    {
        _children["lsp-selection"] = lsp_selection;
    }

    if(lsp_switchover != nullptr)
    {
        _children["lsp-switchover"] = lsp_switchover;
    }

    if(path != nullptr)
    {
        _children["path"] = path;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-selection" || name == "lsp-switchover" || name == "path")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::LspSelection()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "lsp-selection"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::~LspSelection()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::LspSwitchover()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "lsp-switchover"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::~LspSwitchover()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-switchover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Path()
    :
    change(nullptr) // presence node
{

    yang_name = "path"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::~Path()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_data() const
{
    if (is_presence_container) return true;
    return (change !=  nullptr && change->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_operation() const
{
    return is_set(yfilter)
	|| (change !=  nullptr && change->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change>();
        }
        return change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(change != nullptr)
    {
        _children["change"] = change;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::Change()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "change"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::~Change()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Lsp()
    :
    attributes(this, {"name"})
{

    yang_name = "lsp"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Lsp::~Lsp()
{
}

bool Native::Mpls::TrafficEng::Lsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attributes.len(); index++)
    {
        if(attributes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Lsp::has_operation() const
{
    for (std::size_t index=0; index<attributes.len(); index++)
    {
        if(attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        auto ent_ = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes>();
        ent_->parent = this;
        attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::Attributes()
    :
    name{YType::str, "name"}
        ,
    mpls_te_mode_config_lsp_attr(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr>())
{
    mpls_te_mode_config_lsp_attr->parent = this;

    yang_name = "attributes"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::~Attributes()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (mpls_te_mode_config_lsp_attr !=  nullptr && mpls_te_mode_config_lsp_attr->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (mpls_te_mode_config_lsp_attr !=  nullptr && mpls_te_mode_config_lsp_attr->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-mode-config-lsp-attr")
    {
        if(mpls_te_mode_config_lsp_attr == nullptr)
        {
            mpls_te_mode_config_lsp_attr = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr>();
        }
        return mpls_te_mode_config_lsp_attr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_te_mode_config_lsp_attr != nullptr)
    {
        _children["mpls-te-mode-config-lsp-attr"] = mpls_te_mode_config_lsp_attr;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-mode-config-lsp-attr" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::MplsTeModeConfigLspAttr()
    :
    record_route{YType::empty, "record-route"}
        ,
    affinity_mask(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask>())
    , auto_bw(nullptr) // presence node
    , bandwidth(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth>())
    , bfd_reverse_path(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath>())
    , lockdown(nullptr) // presence node
    , path_selection(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection>())
    , pce(nullptr) // presence node
    , priority(nullptr) // presence node
    , protection(nullptr) // presence node
{
    affinity_mask->parent = this;
    bandwidth->parent = this;
    bfd_reverse_path->parent = this;
    path_selection->parent = this;

    yang_name = "mpls-te-mode-config-lsp-attr"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::~MplsTeModeConfigLspAttr()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_data() const
{
    if (is_presence_container) return true;
    return record_route.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data())
	|| (lockdown !=  nullptr && lockdown->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation())
	|| (lockdown !=  nullptr && lockdown->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-mode-config-lsp-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "lockdown")
    {
        if(lockdown == nullptr)
        {
            lockdown = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown>();
        }
        return lockdown;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity_mask != nullptr)
    {
        _children["affinity-mask"] = affinity_mask;
    }

    if(auto_bw != nullptr)
    {
        _children["auto-bw"] = auto_bw;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(bfd_reverse_path != nullptr)
    {
        _children["bfd-reverse-path"] = bfd_reverse_path;
    }

    if(lockdown != nullptr)
    {
        _children["lockdown"] = lockdown;
    }

    if(path_selection != nullptr)
    {
        _children["path-selection"] = path_selection;
    }

    if(pce != nullptr)
    {
        _children["pce"] = pce;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "auto-bw" || name == "bandwidth" || name == "bfd-reverse-path" || name == "lockdown" || name == "path-selection" || name == "pce" || name == "priority" || name == "protection" || name == "record-route")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::~AffinityMask()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::AutoBw()
    :
    frequency{YType::uint32, "frequency"},
    collect_bw{YType::empty, "collect-bw"},
    adjustment_threshold{YType::uint8, "adjustment-threshold"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"}
        ,
    overflow_limit(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit>())
{
    overflow_limit->parent = this;

    yang_name = "auto-bw"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::~AutoBw()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| collect_bw.is_set
	|| adjustment_threshold.is_set
	|| max_bw.is_set
	|| min_bw.is_set
	|| (overflow_limit !=  nullptr && overflow_limit->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(collect_bw.yfilter)
	|| ydk::is_set(adjustment_threshold.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| (overflow_limit !=  nullptr && overflow_limit->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (collect_bw.is_set || is_set(collect_bw.yfilter)) leaf_name_data.push_back(collect_bw.get_name_leafdata());
    if (adjustment_threshold.is_set || is_set(adjustment_threshold.yfilter)) leaf_name_data.push_back(adjustment_threshold.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overflow-limit")
    {
        if(overflow_limit == nullptr)
        {
            overflow_limit = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit>();
        }
        return overflow_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(overflow_limit != nullptr)
    {
        _children["overflow-limit"] = overflow_limit;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect-bw")
    {
        collect_bw = value;
        collect_bw.value_namespace = name_space;
        collect_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold = value;
        adjustment_threshold.value_namespace = name_space;
        adjustment_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "collect-bw")
    {
        collect_bw.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-limit" || name == "frequency" || name == "collect-bw" || name == "adjustment-threshold" || name == "max-bw" || name == "min-bw")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::OverflowLimit()
    :
    limit{YType::uint8, "limit"},
    overflow_threshold{YType::uint8, "overflow-threshold"}
{

    yang_name = "overflow-limit"; yang_parent_name = "auto-bw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::~OverflowLimit()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| overflow_threshold.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "overflow-threshold")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::Bandwidth()
    :
    bw{YType::uint32, "bw"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::~Bandwidth()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return bw.is_set
	|| sub_pool.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw" || name == "sub-pool")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::~BfdReversePath()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_data() const
{
    if (is_presence_container) return true;
    return binding_label.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::Lockdown()
    :
    sticky{YType::empty, "sticky"}
{

    yang_name = "lockdown"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::~Lockdown()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_data() const
{
    if (is_presence_container) return true;
    return sticky.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"}
        ,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation>())
    , segment_routing(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;
    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(invalidation != nullptr)
    {
        _children["invalidation"] = invalidation;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing" || name == "metric")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::Invalidation()
    :
    value_{YType::int32, "value"},
    drop{YType::empty, "drop"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| drop.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "drop")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency{YType::enumeration, "adjacency"}
{

    yang_name = "segment-routing"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return adjacency.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::Pce()
    :
    disjoint_path(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath>())
{
    disjoint_path->parent = this;

    yang_name = "pce"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::~Pce()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_data() const
{
    if (is_presence_container) return true;
    return (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_operation() const
{
    return is_set(yfilter)
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disjoint_path != nullptr)
    {
        _children["disjoint-path"] = disjoint_path;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disjoint-path")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::DisjointPath()
    :
    source{YType::str, "source"},
    type{YType::enumeration, "type"},
    group_id{YType::uint32, "group-id"}
{

    yang_name = "disjoint-path"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::~DisjointPath()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| type.is_set
	|| group_id.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(group_id.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "type" || name == "group-id")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::Priority()
    :
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::~Priority()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::Protection()
    :
    fast_reroute(nullptr) // presence node
{

    yang_name = "protection"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::~Protection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_data() const
{
    if (is_presence_container) return true;
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::FastReroute()
    :
    bw_protect{YType::empty, "bw-protect"}
{

    yang_name = "fast-reroute"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return bw_protect.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_protect.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_protect.is_set || is_set(bw_protect.yfilter)) leaf_name_data.push_back(bw_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-protect")
    {
        bw_protect = value;
        bw_protect.value_namespace = name_space;
        bw_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-protect")
    {
        bw_protect.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-protect")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::PathOption()
    :
    list(std::make_shared<Native::Mpls::TrafficEng::PathOption::List>())
{
    list->parent = this;

    yang_name = "path-option"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Mpls::TrafficEng::PathOption::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Mpls::TrafficEng::PathOption::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::List()
    :
    identifier(this, {"pol_num"})
    , name(this, {"pol_name"})
{

    yang_name = "list"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::PathOption::List::~List()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<identifier.len(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::PathOption::List::has_operation() const
{
    for (std::size_t index=0; index<identifier.len(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        auto ent_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier>();
        ent_->parent = this;
        identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "name")
    {
        auto ent_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name>();
        ent_->parent = this;
        name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::Identifier()
    :
    pol_num{YType::uint16, "pol-num"}
        ,
    path_option(this, {"po_num"})
{

    yang_name = "identifier"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return pol_num.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_operation() const
{
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pol_num.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    ADD_KEY_TOKEN(pol_num, "pol-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pol_num.is_set || is_set(pol_num.yfilter)) leaf_name_data.push_back(pol_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        auto ent_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_>();
        ent_->parent = this;
        path_option.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_option.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pol-num")
    {
        pol_num = value;
        pol_num.value_namespace = name_space;
        pol_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pol-num")
    {
        pol_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option" || name == "pol-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::PathOption_()
    :
    po_num{YType::uint16, "po-num"}
        ,
    explicit_(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit>())
{
    explicit_->parent = this;

    yang_name = "path-option"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::~PathOption_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_data() const
{
    if (is_presence_container) return true;
    return po_num.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(po_num.yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    ADD_KEY_TOKEN(po_num, "po-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.yfilter)) leaf_name_data.push_back(po_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit>();
        }
        return explicit_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(explicit_ != nullptr)
    {
        _children["explicit"] = explicit_;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "po-num")
    {
        po_num = value;
        po_num.value_namespace = name_space;
        po_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "po-num")
    {
        po_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "po-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Explicit()
    :
    identifier(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_>())
    , name(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name>())
{
    identifier->parent = this;
    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::~Explicit()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::has_data() const
{
    if (is_presence_container) return true;
    return (identifier !=  nullptr && identifier->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::has_operation() const
{
    return is_set(yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_>();
        }
        return identifier;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(identifier != nullptr)
    {
        _children["identifier"] = identifier;
    }

    if(name != nullptr)
    {
        _children["name"] = name;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::Identifier_()
    :
    pnum{YType::uint16, "pnum"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "identifier"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::~Identifier_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::has_data() const
{
    if (is_presence_container) return true;
    return pnum.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pnum" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::Name()
    :
    pname{YType::str, "pname"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "name"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::has_data() const
{
    if (is_presence_container) return true;
    return pname.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pname" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::Name()
    :
    pol_name{YType::str, "pol-name"}
        ,
    path_option(this, {"po_num"})
{

    yang_name = "name"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::PathOption::List::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return pol_name.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_operation() const
{
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pol_name.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(pol_name, "pol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pol_name.is_set || is_set(pol_name.yfilter)) leaf_name_data.push_back(pol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        auto ent_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_>();
        ent_->parent = this;
        path_option.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_option.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pol-name")
    {
        pol_name = value;
        pol_name.value_namespace = name_space;
        pol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pol-name")
    {
        pol_name.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option" || name == "pol-name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::PathOption_()
    :
    po_num{YType::uint16, "po-num"}
        ,
    explicit_(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit>())
{
    explicit_->parent = this;

    yang_name = "path-option"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::~PathOption_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_data() const
{
    if (is_presence_container) return true;
    return po_num.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(po_num.yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    ADD_KEY_TOKEN(po_num, "po-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.yfilter)) leaf_name_data.push_back(po_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit>();
        }
        return explicit_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(explicit_ != nullptr)
    {
        _children["explicit"] = explicit_;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "po-num")
    {
        po_num = value;
        po_num.value_namespace = name_space;
        po_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "po-num")
    {
        po_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "po-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Explicit()
    :
    identifier(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier>())
    , name(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_>())
{
    identifier->parent = this;
    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::~Explicit()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::has_data() const
{
    if (is_presence_container) return true;
    return (identifier !=  nullptr && identifier->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::has_operation() const
{
    return is_set(yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(identifier != nullptr)
    {
        _children["identifier"] = identifier;
    }

    if(name != nullptr)
    {
        _children["name"] = name;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::Identifier()
    :
    pnum{YType::uint16, "pnum"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "identifier"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::has_data() const
{
    if (is_presence_container) return true;
    return pnum.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pnum" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::Name_()
    :
    pname{YType::str, "pname"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "name"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::~Name_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::has_data() const
{
    if (is_presence_container) return true;
    return pname.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pname" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"},
    tiebreaker{YType::enumeration, "tiebreaker"}
        ,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>())
    , overload(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>())
{
    invalidation->parent = this;
    overload->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::PathSelection::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(invalidation != nullptr)
    {
        _children["invalidation"] = invalidation;
    }

    if(overload != nullptr)
    {
        _children["overload"] = overload;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "overload" || name == "metric" || name == "tiebreaker")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    value_{YType::int32, "value"},
    drop{YType::empty, "drop"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| drop.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Mpls::TrafficEng::PathSelection::Invalidation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "drop")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Overload()
    :
    allow(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>())
{
    allow->parent = this;

    yang_name = "overload"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::PathSelection::Overload::~Overload()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_data() const
{
    if (is_presence_container) return true;
    return (allow !=  nullptr && allow->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathSelection::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allow != nullptr)
    {
        _children["allow"] = allow;
    }

    return _children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::Allow()
    :
    head{YType::empty, "head"},
    middle{YType::empty, "middle"},
    tail{YType::empty, "tail"}
{

    yang_name = "allow"; yang_parent_name = "overload"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::~Allow()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_data() const
{
    if (is_presence_container) return true;
    return head.is_set
	|| middle.is_set
	|| tail.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(middle.yfilter)
	|| ydk::is_set(tail.yfilter);
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/overload/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (middle.is_set || is_set(middle.yfilter)) leaf_name_data.push_back(middle.get_name_leafdata());
    if (tail.is_set || is_set(tail.yfilter)) leaf_name_data.push_back(tail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "head")
    {
        head = value;
        head.value_namespace = name_space;
        head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "middle")
    {
        middle = value;
        middle.value_namespace = name_space;
        middle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail")
    {
        tail = value;
        tail.value_namespace = name_space;
        tail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "middle")
    {
        middle.yfilter = yfilter;
    }
    if(value_path == "tail")
    {
        tail.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "middle" || name == "tail")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Pcc()
    :
    report_all{YType::empty, "report-all"}
        ,
    peer(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>())
{
    peer->parent = this;

    yang_name = "pcc"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Pcc::~Pcc()
{
}

bool Native::Mpls::TrafficEng::Pcc::has_data() const
{
    if (is_presence_container) return true;
    return report_all.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(report_all.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (report_all.is_set || is_set(report_all.yfilter)) leaf_name_data.push_back(report_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "report-all")
    {
        report_all = value;
        report_all.value_namespace = name_space;
        report_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "report-all")
    {
        report_all.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "report-all")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Peer()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "peer"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Pcc::Peer::~Peer()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Pcc::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Pcc::Peer::get_children() const
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

    return _children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    source{YType::str, "source"},
    precedence{YType::uint8, "precedence"},
    keychain{YType::str, "keychain"}
        ,
    password(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>())
{
    password->parent = this;

    yang_name = "ipv4"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::~Ipv4()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| source.is_set
	|| precedence.is_set
	|| keychain.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "ipv4" || name == "source" || name == "precedence" || name == "keychain")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::Password()
    :
    clear{YType::str, "clear"},
    encrypted{YType::str, "encrypted"}
{

    yang_name = "password"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::~Password()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_data() const
{
    if (is_presence_container) return true;
    return clear.is_set
	|| encrypted.is_set;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear.yfilter)
	|| ydk::is_set(encrypted.yfilter);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear" || name == "encrypted")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Reoptimize()
    :
    events(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>())
    , timers(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>())
{
    events->parent = this;
    timers->parent = this;

    yang_name = "reoptimize"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Reoptimize::~Reoptimize()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_data() const
{
    if (is_presence_container) return true;
    return (events !=  nullptr && events->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::has_operation() const
{
    return is_set(yfilter)
	|| (events !=  nullptr && events->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Reoptimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>();
        }
        return events;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Reoptimize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events != nullptr)
    {
        _children["events"] = events;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Reoptimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Reoptimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events" || name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Events::Events()
    :
    link_up{YType::empty, "link-up"}
{

    yang_name = "events"; yang_parent_name = "reoptimize"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Reoptimize::Events::~Events()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_data() const
{
    if (is_presence_container) return true;
    return link_up.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_up.yfilter);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Events::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_up.is_set || is_set(link_up.yfilter)) leaf_name_data.push_back(link_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Reoptimize::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Reoptimize::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-up")
    {
        link_up = value;
        link_up.value_namespace = name_space;
        link_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-up")
    {
        link_up.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-up")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Timers()
    :
    frequency{YType::uint32, "frequency"}
        ,
    delay(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>())
{
    delay->parent = this;

    yang_name = "timers"; yang_parent_name = "reoptimize"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Reoptimize::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "frequency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::Delay()
    :
    after_frr{YType::uint8, "after-frr"},
    cleanup{YType::uint8, "cleanup"},
    installation{YType::uint16, "installation"}
{

    yang_name = "delay"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::~Delay()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_data() const
{
    if (is_presence_container) return true;
    return after_frr.is_set
	|| cleanup.is_set
	|| installation.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(after_frr.yfilter)
	|| ydk::is_set(cleanup.yfilter)
	|| ydk::is_set(installation.yfilter);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (after_frr.is_set || is_set(after_frr.yfilter)) leaf_name_data.push_back(after_frr.get_name_leafdata());
    if (cleanup.is_set || is_set(cleanup.yfilter)) leaf_name_data.push_back(cleanup.get_name_leafdata());
    if (installation.is_set || is_set(installation.yfilter)) leaf_name_data.push_back(installation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "after-frr")
    {
        after_frr = value;
        after_frr.value_namespace = name_space;
        after_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup")
    {
        cleanup = value;
        cleanup.value_namespace = name_space;
        cleanup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installation")
    {
        installation = value;
        installation.value_namespace = name_space;
        installation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "after-frr")
    {
        after_frr.yfilter = yfilter;
    }
    if(value_path == "cleanup")
    {
        cleanup.yfilter = yfilter;
    }
    if(value_path == "installation")
    {
        installation.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after-frr" || name == "cleanup" || name == "installation")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Signalling()
    :
    advertise(std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>())
    , forwarding(std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>())
{
    advertise->parent = this;
    forwarding->parent = this;

    yang_name = "signalling"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Signalling::~Signalling()
{
}

bool Native::Mpls::TrafficEng::Signalling::has_data() const
{
    if (is_presence_container) return true;
    return (advertise !=  nullptr && advertise->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    if(forwarding != nullptr)
    {
        _children["forwarding"] = forwarding;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "forwarding")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::Advertise()
    :
    explicit_null(nullptr) // presence node
{

    yang_name = "advertise"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Signalling::Advertise::~Advertise()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return (explicit_null !=  nullptr && explicit_null->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| (explicit_null !=  nullptr && explicit_null->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Signalling::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull>();
        }
        return explicit_null;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(explicit_null != nullptr)
    {
        _children["explicit-null"] = explicit_null;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::ExplicitNull()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "explicit-null"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/advertise/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Forwarding::Forwarding()
    :
    sync{YType::empty, "sync"}
{

    yang_name = "forwarding"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Signalling::Forwarding::~Forwarding()
{
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_data() const
{
    if (is_presence_container) return true;
    return sync.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Mpls::TrafficEng::Signalling::Forwarding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Signalling::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Signalling::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::Topology()
    :
    holddown(std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>())
    , mesh_group(std::make_shared<Native::Mpls::TrafficEng::Topology::MeshGroup>())
{
    holddown->parent = this;
    mesh_group->parent = this;

    yang_name = "topology"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Topology::~Topology()
{
}

bool Native::Mpls::TrafficEng::Topology::has_data() const
{
    if (is_presence_container) return true;
    return (holddown !=  nullptr && holddown->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data());
}

bool Native::Mpls::TrafficEng::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (holddown !=  nullptr && holddown->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation());
}

std::string Native::Mpls::TrafficEng::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "holddown")
    {
        if(holddown == nullptr)
        {
            holddown = std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>();
        }
        return holddown;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Mpls::TrafficEng::Topology::MeshGroup>();
        }
        return mesh_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(holddown != nullptr)
    {
        _children["holddown"] = holddown;
    }

    if(mesh_group != nullptr)
    {
        _children["mesh-group"] = mesh_group;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddown" || name == "mesh-group")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::Holddown::Holddown()
    :
    sigerr{YType::uint16, "sigerr"}
{

    yang_name = "holddown"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Topology::Holddown::~Holddown()
{
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_data() const
{
    if (is_presence_container) return true;
    return sigerr.is_set;
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sigerr.yfilter);
}

std::string Native::Mpls::TrafficEng::Topology::Holddown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::Holddown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holddown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::Holddown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sigerr.is_set || is_set(sigerr.yfilter)) leaf_name_data.push_back(sigerr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Topology::Holddown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Topology::Holddown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sigerr")
    {
        sigerr = value;
        sigerr.value_namespace = name_space;
        sigerr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sigerr")
    {
        sigerr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sigerr")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::MeshGroup::MeshGroup()
    :
    accept_domain{YType::empty, "accept-domain"}
{

    yang_name = "mesh-group"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Topology::MeshGroup::~MeshGroup()
{
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_data() const
{
    if (is_presence_container) return true;
    return accept_domain.is_set;
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_domain.yfilter);
}

std::string Native::Mpls::TrafficEng::Topology::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_domain.is_set || is_set(accept_domain.yfilter)) leaf_name_data.push_back(accept_domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Topology::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Topology::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Topology::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-domain")
    {
        accept_domain = value;
        accept_domain.value_namespace = name_space;
        accept_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Topology::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-domain")
    {
        accept_domain.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-domain")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Trace::Trace()
    :
    buffer_size(std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>())
{
    buffer_size->parent = this;

    yang_name = "trace"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Trace::~Trace()
{
}

bool Native::Mpls::TrafficEng::Trace::has_data() const
{
    if (is_presence_container) return true;
    return (buffer_size !=  nullptr && buffer_size->has_data());
}

bool Native::Mpls::TrafficEng::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (buffer_size !=  nullptr && buffer_size->has_operation());
}

std::string Native::Mpls::TrafficEng::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>();
        }
        return buffer_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(buffer_size != nullptr)
    {
        _children["buffer-size"] = buffer_size;
    }

    return _children;
}

void Native::Mpls::TrafficEng::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-size")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Trace::BufferSize::BufferSize()
    :
    error{YType::uint16, "error"},
    event{YType::uint16, "event"},
    warning{YType::uint8, "warning"}
{

    yang_name = "buffer-size"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::TrafficEng::Trace::BufferSize::~BufferSize()
{
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_data() const
{
    if (is_presence_container) return true;
    return error.is_set
	|| event.is_set
	|| warning.is_set;
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(warning.yfilter);
}

std::string Native::Mpls::TrafficEng::Trace::BufferSize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Trace::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Trace::BufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (warning.is_set || is_set(warning.yfilter)) leaf_name_data.push_back(warning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::TrafficEng::Trace::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::TrafficEng::Trace::BufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning")
    {
        warning = value;
        warning.value_namespace = name_space;
        warning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "warning")
    {
        warning.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "event" || name == "warning")
        return true;
    return false;
}

Native::Mpls::Tp::Tp()
{

    yang_name = "tp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Tp::~Tp()
{
}

bool Native::Mpls::Tp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Mpls::Tp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Mpls::Tp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mpls::Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mpls::Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mpls::Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Router()
    :
    isis(nullptr) // presence node
    , isis_container(std::make_shared<Native::Router::IsisContainer>())
    , ospf(this, {"id"})
    , lisp(nullptr) // presence node
    , lisp_list(this, {"lisp"})
    , ospfv3(this, {"id"})
    , bgp(this, {"id"})
    , eigrp(this, {"id"})
    , rip(nullptr) // presence node
{
    isis_container->parent = this;

    yang_name = "router"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::~Router()
{
}

bool Native::Router::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lisp_list.len(); index++)
    {
        if(lisp_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return (isis !=  nullptr && isis->has_data())
	|| (isis_container !=  nullptr && isis_container->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::has_operation() const
{
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lisp_list.len(); index++)
    {
        if(lisp_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (isis_container !=  nullptr && isis_container->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-isis:isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:isis-container")
    {
        if(isis_container == nullptr)
        {
            isis_container = std::make_shared<Native::Router::IsisContainer>();
        }
        return isis_container;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospf:ospf")
    {
        auto ent_ = std::make_shared<Native::Router::Ospf>();
        ent_->parent = this;
        ospf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-lisp:lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "Cisco-IOS-XE-lisp:lisp-list")
    {
        auto ent_ = std::make_shared<Native::Router::LispList>();
        ent_->parent = this;
        lisp_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospfv3:ospfv3")
    {
        auto ent_ = std::make_shared<Native::Router::Ospfv3>();
        ent_->parent = this;
        ospfv3.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-bgp:bgp")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-eigrp:eigrp")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-rip:rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["Cisco-IOS-XE-isis:isis"] = isis;
    }

    if(isis_container != nullptr)
    {
        _children["Cisco-IOS-XE-isis:isis-container"] = isis_container;
    }

    count_ = 0;
    for (auto ent_ : ospf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(lisp != nullptr)
    {
        _children["Cisco-IOS-XE-lisp:lisp"] = lisp;
    }

    count_ = 0;
    for (auto ent_ : lisp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ospfv3.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : bgp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(rip != nullptr)
    {
        _children["Cisco-IOS-XE-rip:rip"] = rip;
    }

    return _children;
}

void Native::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "isis-container" || name == "ospf" || name == "lisp" || name == "lisp-list" || name == "ospfv3" || name == "bgp" || name == "eigrp" || name == "rip")
        return true;
    return false;
}

const Enum::YLeaf Native::Mpls::Static::Binding::Ipv4::Global::Output::Label::explicit_null {0, "explicit-null"};
const Enum::YLeaf Native::Mpls::Static::Binding::Ipv4::Global::Output::Label::implicit_null {1, "implicit-null"};

const Enum::YLeaf Native::Mpls::Static::Binding::Ipv4::Vrf::Output::Label::explicit_null {0, "explicit-null"};
const Enum::YLeaf Native::Mpls::Static::Binding::Ipv4::Vrf::Output::Label::implicit_null {1, "implicit-null"};

const Enum::YLeaf Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::force {0, "force"};
const Enum::YLeaf Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::preferred {1, "preferred"};

const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::BcModel::mam {0, "mam"};

const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::Mode::ietf {0, "ietf"};
const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::Mode::migration {1, "migration"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency::protected_ {0, "protected"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency::unprotected {1, "unprotected"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::link {0, "link"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::node {1, "node"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::srlg {2, "srlg"};

const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::Metric::te {1, "te"};


}
}

