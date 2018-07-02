
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_122.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::Ipv4()
    :
    source{YType::str, "source"}
{

    yang_name = "ipv4"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::~Ipv4()
{
}

bool Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set;
}

bool Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::L3vpn::Encapsulation::Ip::Transport::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::L3vpn::Encapsulation::Ip::Protocol::Protocol()
    :
    gre(nullptr) // presence node
{

    yang_name = "protocol"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L3vpn::Encapsulation::Ip::Protocol::~Protocol()
{
}

bool Native::L3vpn::Encapsulation::Ip::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return (gre !=  nullptr && gre->has_data());
}

bool Native::L3vpn::Encapsulation::Ip::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (gre !=  nullptr && gre->has_operation());
}

std::string Native::L3vpn::Encapsulation::Ip::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3vpn::Encapsulation::Ip::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3vpn::Encapsulation::Ip::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::L3vpn::Encapsulation::Ip::Protocol::Gre>();
        }
        return gre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3vpn::Encapsulation::Ip::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    return children;
}

void Native::L3vpn::Encapsulation::Ip::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3vpn::Encapsulation::Ip::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3vpn::Encapsulation::Ip::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre")
        return true;
    return false;
}

Native::L3vpn::Encapsulation::Ip::Protocol::Gre::Gre()
    :
    key{YType::uint32, "key"}
{

    yang_name = "gre"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::L3vpn::Encapsulation::Ip::Protocol::Gre::~Gre()
{
}

bool Native::L3vpn::Encapsulation::Ip::Protocol::Gre::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set;
}

bool Native::L3vpn::Encapsulation::Ip::Protocol::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::L3vpn::Encapsulation::Ip::Protocol::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3vpn::Encapsulation::Ip::Protocol::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3vpn::Encapsulation::Ip::Protocol::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3vpn::Encapsulation::Ip::Protocol::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::L3vpn::Encapsulation::Ip::Protocol::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3vpn::Encapsulation::Ip::Protocol::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::L3vpn::Encapsulation::Ip::Protocol::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::L3vpn::Encapsulation::Ip::Mpls::Mpls()
    :
    mtu{YType::str, "mtu"}
{

    yang_name = "mpls"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L3vpn::Encapsulation::Ip::Mpls::~Mpls()
{
}

bool Native::L3vpn::Encapsulation::Ip::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return mtu.is_set;
}

bool Native::L3vpn::Encapsulation::Ip::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::L3vpn::Encapsulation::Ip::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3vpn::Encapsulation::Ip::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3vpn::Encapsulation::Ip::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3vpn::Encapsulation::Ip::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::L3vpn::Encapsulation::Ip::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3vpn::Encapsulation::Ip::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::L3vpn::Encapsulation::Ip::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

Native::Mpls::Mpls()
    :
    cos_map{YType::uint8, "Cisco-IOS-XE-mpls:cos-map"}
        ,
    atm(std::make_shared<Native::Mpls::Atm>())
    , ip(std::make_shared<Native::Mpls::Ip>())
    , label(std::make_shared<Native::Mpls::Label>())
    , ldp(std::make_shared<Native::Mpls::Ldp>())
    , prefix_map(std::make_shared<Native::Mpls::PrefixMap>())
    , static_(nullptr) // presence node
    , traffic_eng(std::make_shared<Native::Mpls::TrafficEng>())
    , tp(nullptr) // presence node
{
    atm->parent = this;
    ip->parent = this;
    label->parent = this;
    ldp->parent = this;
    prefix_map->parent = this;
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::~Mpls()
{
}

bool Native::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return cos_map.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (prefix_map !=  nullptr && prefix_map->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data())
	|| (tp !=  nullptr && tp->has_data());
}

bool Native::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_map.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (prefix_map !=  nullptr && prefix_map->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation())
	|| (tp !=  nullptr && tp->has_operation());
}

std::string Native::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_map.is_set || is_set(cos_map.yfilter)) leaf_name_data.push_back(cos_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-mpls:atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Mpls::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:prefix-map")
    {
        if(prefix_map == nullptr)
        {
            prefix_map = std::make_shared<Native::Mpls::PrefixMap>();
        }
        return prefix_map;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mpls::Static>();
        }
        return static_;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:tp")
    {
        if(tp == nullptr)
        {
            tp = std::make_shared<Native::Mpls::Tp>();
        }
        return tp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm != nullptr)
    {
        children["Cisco-IOS-XE-mpls:atm"] = atm;
    }

    if(ip != nullptr)
    {
        children["Cisco-IOS-XE-mpls:ip"] = ip;
    }

    if(label != nullptr)
    {
        children["Cisco-IOS-XE-mpls:label"] = label;
    }

    if(ldp != nullptr)
    {
        children["Cisco-IOS-XE-mpls:ldp"] = ldp;
    }

    if(prefix_map != nullptr)
    {
        children["Cisco-IOS-XE-mpls:prefix-map"] = prefix_map;
    }

    if(static_ != nullptr)
    {
        children["Cisco-IOS-XE-mpls:static"] = static_;
    }

    if(traffic_eng != nullptr)
    {
        children["Cisco-IOS-XE-mpls:traffic-eng"] = traffic_eng;
    }

    if(tp != nullptr)
    {
        children["Cisco-IOS-XE-mpls:tp"] = tp;
    }

    return children;
}

void Native::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-mpls:cos-map")
    {
        cos_map = value;
        cos_map.value_namespace = name_space;
        cos_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-map")
    {
        cos_map.yfilter = yfilter;
    }
}

bool Native::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "ip" || name == "label" || name == "ldp" || name == "prefix-map" || name == "static" || name == "traffic-eng" || name == "tp" || name == "cos-map")
        return true;
    return false;
}

Native::Mpls::Atm::Atm()
    :
    disable_headend_vc{YType::empty, "disable-headend-vc"}
{

    yang_name = "atm"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Atm::~Atm()
{
}

bool Native::Mpls::Atm::has_data() const
{
    if (is_presence_container) return true;
    return disable_headend_vc.is_set;
}

bool Native::Mpls::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_headend_vc.yfilter);
}

std::string Native::Mpls::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_headend_vc.is_set || is_set(disable_headend_vc.yfilter)) leaf_name_data.push_back(disable_headend_vc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc = value;
        disable_headend_vc.value_namespace = name_space;
        disable_headend_vc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc.yfilter = yfilter;
    }
}

bool Native::Mpls::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-headend-vc")
        return true;
    return false;
}

Native::Mpls::Ip::Ip()
    :
    default_route{YType::empty, "default-route"}
        ,
    conf(std::make_shared<Native::Mpls::Ip::Conf>())
    , conf_arg(std::make_shared<Native::Mpls::Ip::ConfArg>())
    , ttl_expiration(std::make_shared<Native::Mpls::Ip::TtlExpiration>())
{
    conf->parent = this;
    conf_arg->parent = this;
    ttl_expiration->parent = this;

    yang_name = "ip"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ip::~Ip()
{
}

bool Native::Mpls::Ip::has_data() const
{
    if (is_presence_container) return true;
    return default_route.is_set
	|| (conf !=  nullptr && conf->has_data())
	|| (conf_arg !=  nullptr && conf_arg->has_data())
	|| (ttl_expiration !=  nullptr && ttl_expiration->has_data());
}

bool Native::Mpls::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| (conf !=  nullptr && conf->has_operation())
	|| (conf_arg !=  nullptr && conf_arg->has_operation())
	|| (ttl_expiration !=  nullptr && ttl_expiration->has_operation());
}

std::string Native::Mpls::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conf")
    {
        if(conf == nullptr)
        {
            conf = std::make_shared<Native::Mpls::Ip::Conf>();
        }
        return conf;
    }

    if(child_yang_name == "conf-arg")
    {
        if(conf_arg == nullptr)
        {
            conf_arg = std::make_shared<Native::Mpls::Ip::ConfArg>();
        }
        return conf_arg;
    }

    if(child_yang_name == "ttl-expiration")
    {
        if(ttl_expiration == nullptr)
        {
            ttl_expiration = std::make_shared<Native::Mpls::Ip::TtlExpiration>();
        }
        return ttl_expiration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conf != nullptr)
    {
        children["conf"] = conf;
    }

    if(conf_arg != nullptr)
    {
        children["conf-arg"] = conf_arg;
    }

    if(ttl_expiration != nullptr)
    {
        children["ttl-expiration"] = ttl_expiration;
    }

    return children;
}

void Native::Mpls::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
}

bool Native::Mpls::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conf" || name == "conf-arg" || name == "ttl-expiration" || name == "default-route")
        return true;
    return false;
}

Native::Mpls::Ip::Conf::Conf()
    :
    propagate_ttl{YType::boolean, "propagate-ttl"}
{

    yang_name = "conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ip::Conf::~Conf()
{
}

bool Native::Mpls::Ip::Conf::has_data() const
{
    if (is_presence_container) return true;
    return propagate_ttl.is_set;
}

bool Native::Mpls::Ip::Conf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(propagate_ttl.yfilter);
}

std::string Native::Mpls::Ip::Conf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::Conf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::Conf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (propagate_ttl.is_set || is_set(propagate_ttl.yfilter)) leaf_name_data.push_back(propagate_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::Conf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::Conf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ip::Conf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "propagate-ttl")
    {
        propagate_ttl = value;
        propagate_ttl.value_namespace = name_space;
        propagate_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ip::Conf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "propagate-ttl")
    {
        propagate_ttl.yfilter = yfilter;
    }
}

bool Native::Mpls::Ip::Conf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "propagate-ttl")
        return true;
    return false;
}

Native::Mpls::Ip::ConfArg::ConfArg()
    :
    propagate_ttl(std::make_shared<Native::Mpls::Ip::ConfArg::PropagateTtl>())
{
    propagate_ttl->parent = this;

    yang_name = "conf-arg"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ip::ConfArg::~ConfArg()
{
}

bool Native::Mpls::Ip::ConfArg::has_data() const
{
    if (is_presence_container) return true;
    return (propagate_ttl !=  nullptr && propagate_ttl->has_data());
}

bool Native::Mpls::Ip::ConfArg::has_operation() const
{
    return is_set(yfilter)
	|| (propagate_ttl !=  nullptr && propagate_ttl->has_operation());
}

std::string Native::Mpls::Ip::ConfArg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::ConfArg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-arg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::ConfArg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::ConfArg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "propagate-ttl")
    {
        if(propagate_ttl == nullptr)
        {
            propagate_ttl = std::make_shared<Native::Mpls::Ip::ConfArg::PropagateTtl>();
        }
        return propagate_ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::ConfArg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(propagate_ttl != nullptr)
    {
        children["propagate-ttl"] = propagate_ttl;
    }

    return children;
}

void Native::Mpls::Ip::ConfArg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ip::ConfArg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ip::ConfArg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "propagate-ttl")
        return true;
    return false;
}

Native::Mpls::Ip::ConfArg::PropagateTtl::PropagateTtl()
    :
    forwarded{YType::boolean, "forwarded"}
{

    yang_name = "propagate-ttl"; yang_parent_name = "conf-arg"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ip::ConfArg::PropagateTtl::~PropagateTtl()
{
}

bool Native::Mpls::Ip::ConfArg::PropagateTtl::has_data() const
{
    if (is_presence_container) return true;
    return forwarded.is_set;
}

bool Native::Mpls::Ip::ConfArg::PropagateTtl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarded.yfilter);
}

std::string Native::Mpls::Ip::ConfArg::PropagateTtl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/conf-arg/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::ConfArg::PropagateTtl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate-ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::ConfArg::PropagateTtl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarded.is_set || is_set(forwarded.yfilter)) leaf_name_data.push_back(forwarded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::ConfArg::PropagateTtl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::ConfArg::PropagateTtl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ip::ConfArg::PropagateTtl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarded")
    {
        forwarded = value;
        forwarded.value_namespace = name_space;
        forwarded.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ip::ConfArg::PropagateTtl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarded")
    {
        forwarded.yfilter = yfilter;
    }
}

bool Native::Mpls::Ip::ConfArg::PropagateTtl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarded")
        return true;
    return false;
}

Native::Mpls::Ip::TtlExpiration::TtlExpiration()
    :
    pop{YType::uint8, "pop"}
{

    yang_name = "ttl-expiration"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ip::TtlExpiration::~TtlExpiration()
{
}

bool Native::Mpls::Ip::TtlExpiration::has_data() const
{
    if (is_presence_container) return true;
    return pop.is_set;
}

bool Native::Mpls::Ip::TtlExpiration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pop.yfilter);
}

std::string Native::Mpls::Ip::TtlExpiration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::TtlExpiration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-expiration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::TtlExpiration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop.is_set || is_set(pop.yfilter)) leaf_name_data.push_back(pop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::TtlExpiration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::TtlExpiration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ip::TtlExpiration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pop")
    {
        pop = value;
        pop.value_namespace = name_space;
        pop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ip::TtlExpiration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pop")
    {
        pop.yfilter = yfilter;
    }
}

bool Native::Mpls::Ip::TtlExpiration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop")
        return true;
    return false;
}

Native::Mpls::Label::Label()
    :
    protocol{YType::enumeration, "protocol"}
        ,
    atm(std::make_shared<Native::Mpls::Label::Atm>())
    , mode(std::make_shared<Native::Mpls::Label::Mode>())
    , range(std::make_shared<Native::Mpls::Label::Range>())
{
    atm->parent = this;
    mode->parent = this;
    range->parent = this;

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::~Label()
{
}

bool Native::Mpls::Label::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Mpls::Label::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Label::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Mpls::Label::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Mpls::Label::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "mode" || name == "range" || name == "protocol")
        return true;
    return false;
}

Native::Mpls::Label::Atm::Atm()
    :
    disable_headend_vc{YType::empty, "disable-headend-vc"}
{

    yang_name = "atm"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Atm::~Atm()
{
}

bool Native::Mpls::Label::Atm::has_data() const
{
    if (is_presence_container) return true;
    return disable_headend_vc.is_set;
}

bool Native::Mpls::Label::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_headend_vc.yfilter);
}

std::string Native::Mpls::Label::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_headend_vc.is_set || is_set(disable_headend_vc.yfilter)) leaf_name_data.push_back(disable_headend_vc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Label::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc = value;
        disable_headend_vc.value_namespace = name_space;
        disable_headend_vc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-headend-vc")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Mode()
    :
    all_vrfs(std::make_shared<Native::Mpls::Label::Mode::AllVrfs>())
    , vrf(std::make_shared<Native::Mpls::Label::Mode::Vrf>())
{
    all_vrfs->parent = this;
    vrf->parent = this;

    yang_name = "mode"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Mode::~Mode()
{
}

bool Native::Mpls::Label::Mode::has_data() const
{
    if (is_presence_container) return true;
    return (all_vrfs !=  nullptr && all_vrfs->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Label::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (all_vrfs !=  nullptr && all_vrfs->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Label::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-vrfs")
    {
        if(all_vrfs == nullptr)
        {
            all_vrfs = std::make_shared<Native::Mpls::Label::Mode::AllVrfs>();
        }
        return all_vrfs;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Label::Mode::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all_vrfs != nullptr)
    {
        children["all-vrfs"] = all_vrfs;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Label::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-vrfs" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::AllVrfs()
    :
    protocol(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol>())
{
    protocol->parent = this;

    yang_name = "all-vrfs"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Mode::AllVrfs::~AllVrfs()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::has_data() const
{
    if (is_presence_container) return true;
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Mpls::Label::Mode::AllVrfs::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Mpls::Label::Mode::AllVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::AllVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::AllVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::Protocol()
    :
    all_afs(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs>())
    , bgp_vpnv4(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4>())
    , bgp_vpnv6(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6>())
{
    all_afs->parent = this;
    bgp_vpnv4->parent = this;
    bgp_vpnv6->parent = this;

    yang_name = "protocol"; yang_parent_name = "all-vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::~Protocol()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return (all_afs !=  nullptr && all_afs->has_data())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_data())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_data());
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (all_afs !=  nullptr && all_afs->has_operation())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_operation())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_operation());
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-afs")
    {
        if(all_afs == nullptr)
        {
            all_afs = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs>();
        }
        return all_afs;
    }

    if(child_yang_name == "bgp-vpnv4")
    {
        if(bgp_vpnv4 == nullptr)
        {
            bgp_vpnv4 = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4>();
        }
        return bgp_vpnv4;
    }

    if(child_yang_name == "bgp-vpnv6")
    {
        if(bgp_vpnv6 == nullptr)
        {
            bgp_vpnv6 = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6>();
        }
        return bgp_vpnv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all_afs != nullptr)
    {
        children["all-afs"] = all_afs;
    }

    if(bgp_vpnv4 != nullptr)
    {
        children["bgp-vpnv4"] = bgp_vpnv4;
    }

    if(bgp_vpnv6 != nullptr)
    {
        children["bgp-vpnv6"] = bgp_vpnv6;
    }

    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-afs" || name == "bgp-vpnv4" || name == "bgp-vpnv6")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::AllAfs()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "all-afs"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::~AllAfs()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::has_data() const
{
    if (is_presence_container) return true;
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::BgpVpnv4()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "bgp-vpnv4"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::~BgpVpnv4()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::has_data() const
{
    if (is_presence_container) return true;
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::BgpVpnv6()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "bgp-vpnv6"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::~BgpVpnv6()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::has_data() const
{
    if (is_presence_container) return true;
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrf"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Mode::Vrf::~Vrf()
{
}

bool Native::Mpls::Label::Mode::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Label::Mode::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Label::Mode::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    protocol(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol>())
{
    protocol->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Mode::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::Protocol()
    :
    all_afs(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs>())
    , bgp_vpnv4(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4>())
    , bgp_vpnv6(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6>())
{
    all_afs->parent = this;
    bgp_vpnv4->parent = this;
    bgp_vpnv6->parent = this;

    yang_name = "protocol"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::~Protocol()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return (all_afs !=  nullptr && all_afs->has_data())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_data())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_data());
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (all_afs !=  nullptr && all_afs->has_operation())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_operation())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_operation());
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-afs")
    {
        if(all_afs == nullptr)
        {
            all_afs = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs>();
        }
        return all_afs;
    }

    if(child_yang_name == "bgp-vpnv4")
    {
        if(bgp_vpnv4 == nullptr)
        {
            bgp_vpnv4 = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4>();
        }
        return bgp_vpnv4;
    }

    if(child_yang_name == "bgp-vpnv6")
    {
        if(bgp_vpnv6 == nullptr)
        {
            bgp_vpnv6 = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6>();
        }
        return bgp_vpnv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all_afs != nullptr)
    {
        children["all-afs"] = all_afs;
    }

    if(bgp_vpnv4 != nullptr)
    {
        children["bgp-vpnv4"] = bgp_vpnv4;
    }

    if(bgp_vpnv6 != nullptr)
    {
        children["bgp-vpnv6"] = bgp_vpnv6;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-afs" || name == "bgp-vpnv4" || name == "bgp-vpnv6")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::AllAfs()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "all-afs"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::~AllAfs()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::has_data() const
{
    if (is_presence_container) return true;
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::BgpVpnv4()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "bgp-vpnv4"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::~BgpVpnv4()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::has_data() const
{
    if (is_presence_container) return true;
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::BgpVpnv6()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "bgp-vpnv6"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::~BgpVpnv6()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::has_data() const
{
    if (is_presence_container) return true;
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Range::Range()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
        ,
    static_(std::make_shared<Native::Mpls::Label::Range::Static>())
{
    static_->parent = this;

    yang_name = "range"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Range::~Range()
{
}

bool Native::Mpls::Label::Range::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mpls::Label::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Mpls::Label::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mpls::Label::Range::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Mpls::Label::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::Label::Range::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::Label::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::Label::Range::Static::Static()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "static"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Label::Range::Static::~Static()
{
}

bool Native::Mpls::Label::Range::Static::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::Label::Range::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::Label::Range::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Range::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Range::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Range::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Range::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Label::Range::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::Label::Range::Static::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::Label::Range::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::Ldp::Ldp()
    :
    enable(std::make_shared<Native::Mpls::Ldp::Enable>())
    , enable2(std::make_shared<Native::Mpls::Ldp::Enable2>())
    , session(std::make_shared<Native::Mpls::Ldp::Session>())
{
    enable->parent = this;
    enable2->parent = this;
    session->parent = this;

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::~Ldp()
{
}

bool Native::Mpls::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return (enable !=  nullptr && enable->has_data())
	|| (enable2 !=  nullptr && enable2->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Native::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (enable2 !=  nullptr && enable2->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Mpls::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Mpls::Ldp::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "enable2")
    {
        if(enable2 == nullptr)
        {
            enable2 = std::make_shared<Native::Mpls::Ldp::Enable2>();
        }
        return enable2;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Mpls::Ldp::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(enable2 != nullptr)
    {
        children["enable2"] = enable2;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Native::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "enable2" || name == "session")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable::Enable()
    :
    advertise_labels{YType::boolean, "advertise-labels"}
{

    yang_name = "enable"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable::~Enable()
{
}

bool Native::Mpls::Ldp::Enable::has_data() const
{
    if (is_presence_container) return true;
    return advertise_labels.is_set;
}

bool Native::Mpls::Ldp::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_labels.yfilter);
}

std::string Native::Mpls::Ldp::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_labels.is_set || is_set(advertise_labels.yfilter)) leaf_name_data.push_back(advertise_labels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-labels")
    {
        advertise_labels = value;
        advertise_labels.value_namespace = name_space;
        advertise_labels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-labels")
    {
        advertise_labels.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-labels")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Enable2()
    :
    entropy_label{YType::empty, "entropy-label"},
    holdtime{YType::uint32, "holdtime"},
    loop_detection{YType::empty, "loop-detection"},
    maxhops{YType::uint8, "maxhops"},
    nsr{YType::empty, "nsr"}
        ,
    advertise_labels(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels>())
    , atm(std::make_shared<Native::Mpls::Ldp::Enable2::Atm>())
    , backoff(std::make_shared<Native::Mpls::Ldp::Enable2::Backoff>())
    , discovery(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery>())
    , explicit_null(nullptr) // presence node
    , graceful_restart(nullptr) // presence node
    , igp(std::make_shared<Native::Mpls::Ldp::Enable2::Igp>())
    , label(nullptr) // presence node
    , logging(std::make_shared<Native::Mpls::Ldp::Enable2::Logging>())
    , neighbor(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor>())
    , password(std::make_shared<Native::Mpls::Ldp::Enable2::Password>())
    , request_labels(std::make_shared<Native::Mpls::Ldp::Enable2::RequestLabels>())
    , router_id(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId>())
    , tcp(std::make_shared<Native::Mpls::Ldp::Enable2::Tcp>())
    , vrf(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf>())
{
    advertise_labels->parent = this;
    atm->parent = this;
    backoff->parent = this;
    discovery->parent = this;
    igp->parent = this;
    logging->parent = this;
    neighbor->parent = this;
    password->parent = this;
    request_labels->parent = this;
    router_id->parent = this;
    tcp->parent = this;
    vrf->parent = this;

    yang_name = "enable2"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::~Enable2()
{
}

bool Native::Mpls::Ldp::Enable2::has_data() const
{
    if (is_presence_container) return true;
    return entropy_label.is_set
	|| holdtime.is_set
	|| loop_detection.is_set
	|| maxhops.is_set
	|| nsr.is_set
	|| (advertise_labels !=  nullptr && advertise_labels->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (explicit_null !=  nullptr && explicit_null->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (request_labels !=  nullptr && request_labels->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entropy_label.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(loop_detection.yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| (advertise_labels !=  nullptr && advertise_labels->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (explicit_null !=  nullptr && explicit_null->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (request_labels !=  nullptr && request_labels->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entropy_label.is_set || is_set(entropy_label.yfilter)) leaf_name_data.push_back(entropy_label.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (loop_detection.is_set || is_set(loop_detection.yfilter)) leaf_name_data.push_back(loop_detection.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-labels")
    {
        if(advertise_labels == nullptr)
        {
            advertise_labels = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels>();
        }
        return advertise_labels;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Ldp::Enable2::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Mpls::Ldp::Enable2::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<Native::Mpls::Ldp::Enable2::ExplicitNull>();
        }
        return explicit_null;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Native::Mpls::Ldp::Enable2::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Mpls::Ldp::Enable2::Label>();
        }
        return label;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Mpls::Ldp::Enable2::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Password>();
        }
        return password;
    }

    if(child_yang_name == "request-labels")
    {
        if(request_labels == nullptr)
        {
            request_labels = std::make_shared<Native::Mpls::Ldp::Enable2::RequestLabels>();
        }
        return request_labels;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Mpls::Ldp::Enable2::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(advertise_labels != nullptr)
    {
        children["advertise-labels"] = advertise_labels;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(explicit_null != nullptr)
    {
        children["explicit-null"] = explicit_null;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(request_labels != nullptr)
    {
        children["request-labels"] = request_labels;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entropy-label")
    {
        entropy_label = value;
        entropy_label.value_namespace = name_space;
        entropy_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-detection")
    {
        loop_detection = value;
        loop_detection.value_namespace = name_space;
        loop_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxhops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entropy-label")
    {
        entropy_label.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "loop-detection")
    {
        loop_detection.yfilter = yfilter;
    }
    if(value_path == "maxhops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-labels" || name == "atm" || name == "backoff" || name == "discovery" || name == "explicit-null" || name == "graceful-restart" || name == "igp" || name == "label" || name == "logging" || name == "neighbor" || name == "password" || name == "request-labels" || name == "router-id" || name == "tcp" || name == "vrf" || name == "entropy-label" || name == "holdtime" || name == "loop-detection" || name == "maxhops" || name == "nsr")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::AdvertiseLabels()
    :
    oldstyle{YType::empty, "oldstyle"}
        ,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::For>())
    , interface(this, {"name"})
    , vrf(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf>())
{
    for_->parent = this;
    vrf->parent = this;

    yang_name = "advertise-labels"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::~AdvertiseLabels()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return oldstyle.is_set
	|| (for_ !=  nullptr && for_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(oldstyle.yfilter)
	|| (for_ !=  nullptr && for_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oldstyle.is_set || is_set(oldstyle.yfilter)) leaf_name_data.push_back(oldstyle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::For>();
        }
        return for_;
    }

    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oldstyle")
    {
        oldstyle = value;
        oldstyle.value_namespace = name_space;
        oldstyle.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oldstyle")
    {
        oldstyle.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "interface" || name == "vrf" || name == "oldstyle")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::For()
    :
    from{YType::str, "from"},
    to{YType::str, "to"}
{

    yang_name = "for"; yang_parent_name = "advertise-labels"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::~For()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::For::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::Interface()
    :
    name{YType::str, "name"}
{

    yang_name = "interface"; yang_parent_name = "advertise-labels"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrf"; yang_parent_name = "advertise-labels"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"},
    oldstyle{YType::empty, "oldstyle"}
        ,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For>())
    , interface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface>())
{
    for_->parent = this;
    interface->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| oldstyle.is_set
	|| (for_ !=  nullptr && for_->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(oldstyle.yfilter)
	|| (for_ !=  nullptr && for_->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (oldstyle.is_set || is_set(oldstyle.yfilter)) leaf_name_data.push_back(oldstyle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For>();
        }
        return for_;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldstyle")
    {
        oldstyle = value;
        oldstyle.value_namespace = name_space;
        oldstyle.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "oldstyle")
    {
        oldstyle.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "interface" || name == "vrf-name" || name == "oldstyle")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::For()
    :
    from{YType::str, "from"},
    to{YType::str, "to"}
{

    yang_name = "for"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::~For()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_data() const
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

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_operation() const
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

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Atm::Atm()
    :
    control_mode{YType::enumeration, "control-mode"},
    vc_merge{YType::boolean, "vc-merge"}
{

    yang_name = "atm"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Atm::~Atm()
{
}

bool Native::Mpls::Ldp::Enable2::Atm::has_data() const
{
    if (is_presence_container) return true;
    return control_mode.is_set
	|| vc_merge.is_set;
}

bool Native::Mpls::Ldp::Enable2::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_mode.yfilter)
	|| ydk::is_set(vc_merge.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_mode.is_set || is_set(control_mode.yfilter)) leaf_name_data.push_back(control_mode.get_name_leafdata());
    if (vc_merge.is_set || is_set(vc_merge.yfilter)) leaf_name_data.push_back(vc_merge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-mode")
    {
        control_mode = value;
        control_mode.value_namespace = name_space;
        control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-merge")
    {
        vc_merge = value;
        vc_merge.value_namespace = name_space;
        vc_merge.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-mode")
    {
        control_mode.yfilter = yfilter;
    }
    if(value_path == "vc-merge")
    {
        vc_merge.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-mode" || name == "vc-merge")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Backoff::Backoff()
    :
    initial{YType::uint32, "initial"},
    max{YType::uint32, "max"}
{

    yang_name = "backoff"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Backoff::~Backoff()
{
}

bool Native::Mpls::Ldp::Enable2::Backoff::has_data() const
{
    if (is_presence_container) return true;
    return initial.is_set
	|| max.is_set;
}

bool Native::Mpls::Ldp::Enable2::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Backoff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial.is_set || is_set(initial.yfilter)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial")
    {
        initial = value;
        initial.value_namespace = name_space;
        initial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial")
    {
        initial.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial" || name == "max")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Discovery::Discovery()
    :
    hello(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::Hello>())
    , targeted_hello(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello>())
{
    hello->parent = this;
    targeted_hello->parent = this;

    yang_name = "discovery"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Discovery::~Discovery()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::has_data() const
{
    if (is_presence_container) return true;
    return (hello !=  nullptr && hello->has_data())
	|| (targeted_hello !=  nullptr && targeted_hello->has_data());
}

bool Native::Mpls::Ldp::Enable2::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| (hello !=  nullptr && hello->has_operation())
	|| (targeted_hello !=  nullptr && targeted_hello->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Discovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "targeted-hello")
    {
        if(targeted_hello == nullptr)
        {
            targeted_hello = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello>();
        }
        return targeted_hello;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(targeted_hello != nullptr)
    {
        children["targeted-hello"] = targeted_hello;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello" || name == "targeted-hello")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Discovery::Hello::Hello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
{

    yang_name = "hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Discovery::Hello::~Hello()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::Hello::has_data() const
{
    if (is_presence_container) return true;
    return holdtime.is_set
	|| interval.is_set;
}

bool Native::Mpls::Ldp::Enable2::Discovery::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Discovery::Hello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Discovery::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Discovery::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Discovery::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Discovery::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime" || name == "interval")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::TargetedHello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
        ,
    accept(nullptr) // presence node
{

    yang_name = "targeted-hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::~TargetedHello()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::has_data() const
{
    if (is_presence_container) return true;
    return holdtime.is_set
	|| interval.is_set
	|| (accept !=  nullptr && accept->has_data());
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept>();
        }
        return accept;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept" || name == "holdtime" || name == "interval")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::Accept()
    :
    from{YType::str, "from"}
{

    yang_name = "accept"; yang_parent_name = "targeted-hello"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::~Accept()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set;
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/targeted-hello/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::ExplicitNull::ExplicitNull()
    :
    for_{YType::str, "for"},
    to{YType::str, "to"}
{

    yang_name = "explicit-null"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::ExplicitNull::~ExplicitNull()
{
}

bool Native::Mpls::Ldp::Enable2::ExplicitNull::has_data() const
{
    if (is_presence_container) return true;
    return for_.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::ExplicitNull::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::ExplicitNull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.yfilter)) leaf_name_data.push_back(for_.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for")
    {
        for_ = value;
        for_.value_namespace = name_space;
        for_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for")
    {
        for_.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "to")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::GracefulRestart::GracefulRestart()
    :
    timers(std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart::Timers>())
{
    timers->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::GracefulRestart::~GracefulRestart()
{
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::Timers()
    :
    forwarding_holding{YType::uint16, "forwarding-holding"},
    max_recovery{YType::uint16, "max-recovery"},
    neighbor_liveness{YType::uint16, "neighbor-liveness"}
{

    yang_name = "timers"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::~Timers()
{
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::has_data() const
{
    if (is_presence_container) return true;
    return forwarding_holding.is_set
	|| max_recovery.is_set
	|| neighbor_liveness.is_set;
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_holding.yfilter)
	|| ydk::is_set(max_recovery.yfilter)
	|| ydk::is_set(neighbor_liveness.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_holding.is_set || is_set(forwarding_holding.yfilter)) leaf_name_data.push_back(forwarding_holding.get_name_leafdata());
    if (max_recovery.is_set || is_set(max_recovery.yfilter)) leaf_name_data.push_back(max_recovery.get_name_leafdata());
    if (neighbor_liveness.is_set || is_set(neighbor_liveness.yfilter)) leaf_name_data.push_back(neighbor_liveness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-holding")
    {
        forwarding_holding = value;
        forwarding_holding.value_namespace = name_space;
        forwarding_holding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-recovery")
    {
        max_recovery = value;
        max_recovery.value_namespace = name_space;
        max_recovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-liveness")
    {
        neighbor_liveness = value;
        neighbor_liveness.value_namespace = name_space;
        neighbor_liveness.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-holding")
    {
        forwarding_holding.yfilter = yfilter;
    }
    if(value_path == "max-recovery")
    {
        max_recovery.yfilter = yfilter;
    }
    if(value_path == "neighbor-liveness")
    {
        neighbor_liveness.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-holding" || name == "max-recovery" || name == "neighbor-liveness")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Igp::Igp()
    :
    sync(std::make_shared<Native::Mpls::Ldp::Enable2::Igp::Sync>())
{
    sync->parent = this;

    yang_name = "igp"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Igp::~Igp()
{
}

bool Native::Mpls::Ldp::Enable2::Igp::has_data() const
{
    if (is_presence_container) return true;
    return (sync !=  nullptr && sync->has_data());
}

bool Native::Mpls::Ldp::Enable2::Igp::has_operation() const
{
    return is_set(yfilter)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Igp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<Native::Mpls::Ldp::Enable2::Igp::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sync != nullptr)
    {
        children["sync"] = sync;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Igp::Sync::Sync()
    :
    holddown{YType::uint32, "holddown"}
{

    yang_name = "sync"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Igp::Sync::~Sync()
{
}

bool Native::Mpls::Ldp::Enable2::Igp::Sync::has_data() const
{
    if (is_presence_container) return true;
    return holddown.is_set;
}

bool Native::Mpls::Ldp::Enable2::Igp::Sync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Igp::Sync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/igp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Igp::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Igp::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Igp::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Igp::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddown")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Label::Label()
    :
    label_mode__config_ldp_lbl(std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl>())
{
    label_mode__config_ldp_lbl->parent = this;

    yang_name = "label"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Label::~Label()
{
}

bool Native::Mpls::Ldp::Enable2::Label::has_data() const
{
    if (is_presence_container) return true;
    return (label_mode__config_ldp_lbl !=  nullptr && label_mode__config_ldp_lbl->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::has_operation() const
{
    return is_set(yfilter)
	|| (label_mode__config_ldp_lbl !=  nullptr && label_mode__config_ldp_lbl->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-Mode__config-ldp-lbl")
    {
        if(label_mode__config_ldp_lbl == nullptr)
        {
            label_mode__config_ldp_lbl = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl>();
        }
        return label_mode__config_ldp_lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(label_mode__config_ldp_lbl != nullptr)
    {
        children["label-Mode__config-ldp-lbl"] = label_mode__config_ldp_lbl;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-Mode__config-ldp-lbl")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::LabelModeConfigLdpLbl()
    :
    allocate(std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate>())
{
    allocate->parent = this;

    yang_name = "label-Mode__config-ldp-lbl"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::~LabelModeConfigLdpLbl()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::has_data() const
{
    if (is_presence_container) return true;
    return (allocate !=  nullptr && allocate->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::has_operation() const
{
    return is_set(yfilter)
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-Mode__config-ldp-lbl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocate")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Allocate()
    :
    global(nullptr) // presence node
{

    yang_name = "allocate"; yang_parent_name = "label-Mode__config-ldp-lbl"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::~Allocate()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/label-Mode__config-ldp-lbl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::Global()
    :
    host_routes{YType::empty, "host-routes"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "global"; yang_parent_name = "allocate"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::~Global()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::has_data() const
{
    if (is_presence_container) return true;
    return host_routes.is_set
	|| prefix_list.is_set;
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_routes.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/label-Mode__config-ldp-lbl/allocate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_routes.is_set || is_set(host_routes.yfilter)) leaf_name_data.push_back(host_routes.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-routes")
    {
        host_routes = value;
        host_routes.value_namespace = name_space;
        host_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-routes")
    {
        host_routes.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-routes" || name == "prefix-list")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Logging()
    :
    neighbor_changes{YType::boolean, "neighbor-changes"}
        ,
    password(std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password>())
{
    password->parent = this;

    yang_name = "logging"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Logging::~Logging()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_changes.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::Ldp::Enable2::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_changes.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_changes.is_set || is_set(neighbor_changes.yfilter)) leaf_name_data.push_back(neighbor_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-changes")
    {
        neighbor_changes = value;
        neighbor_changes.value_namespace = name_space;
        neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-changes")
    {
        neighbor_changes.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "neighbor-changes")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Password()
    :
    configuration_conf(std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf>())
    , rollover_conf(std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf>())
    , configuration(nullptr) // presence node
    , rollover(nullptr) // presence node
{
    configuration_conf->parent = this;
    rollover_conf->parent = this;

    yang_name = "password"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Logging::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::has_data() const
{
    if (is_presence_container) return true;
    return (configuration_conf !=  nullptr && configuration_conf->has_data())
	|| (rollover_conf !=  nullptr && rollover_conf->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::has_operation() const
{
    return is_set(yfilter)
	|| (configuration_conf !=  nullptr && configuration_conf->has_operation())
	|| (rollover_conf !=  nullptr && rollover_conf->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-conf")
    {
        if(configuration_conf == nullptr)
        {
            configuration_conf = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf>();
        }
        return configuration_conf;
    }

    if(child_yang_name == "rollover-conf")
    {
        if(rollover_conf == nullptr)
        {
            rollover_conf = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf>();
        }
        return rollover_conf;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(configuration_conf != nullptr)
    {
        children["configuration-conf"] = configuration_conf;
    }

    if(rollover_conf != nullptr)
    {
        children["rollover-conf"] = rollover_conf;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Logging::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-conf" || name == "rollover-conf" || name == "configuration" || name == "rollover")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::ConfigurationConf()
    :
    configuration{YType::boolean, "configuration"}
{

    yang_name = "configuration-conf"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::~ConfigurationConf()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::has_data() const
{
    if (is_presence_container) return true;
    return configuration.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration.is_set || is_set(configuration.yfilter)) leaf_name_data.push_back(configuration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configuration")
    {
        configuration = value;
        configuration.value_namespace = name_space;
        configuration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configuration")
    {
        configuration.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::RolloverConf()
    :
    rollover{YType::boolean, "rollover"}
{

    yang_name = "rollover-conf"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::~RolloverConf()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::has_data() const
{
    if (is_presence_container) return true;
    return rollover.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rollover.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rollover.is_set || is_set(rollover.yfilter)) leaf_name_data.push_back(rollover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rollover")
    {
        rollover = value;
        rollover.value_namespace = name_space;
        rollover.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rollover")
    {
        rollover.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rollover")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::Configuration()
    :
    rate_limit{YType::uint8, "rate-limit"}
{

    yang_name = "configuration"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::~Configuration()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return rate_limit.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_limit.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::Rollover()
    :
    rate_limit{YType::uint8, "rate-limit"}
{

    yang_name = "rollover"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::has_data() const
{
    if (is_presence_container) return true;
    return rate_limit.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_limit.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Neighbor()
    :
    neighbor_content(this, {"address"})
    , vrf(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf>())
{
    vrf->parent = this;

    yang_name = "neighbor"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Neighbor::~Neighbor()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_content.len(); index++)
    {
        if(neighbor_content[index]->has_data())
            return true;
    }
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_content.len(); index++)
    {
        if(neighbor_content[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-content")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent>();
        c->parent = this;
        neighbor_content.append(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_content.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-content" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::NeighborContent()
    :
    address{YType::str, "address"},
    implicit_withdraw{YType::empty, "implicit-withdraw"}
        ,
    labels(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels>())
    , password(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password>())
    , targeted(nullptr) // presence node
{
    labels->parent = this;
    password->parent = this;

    yang_name = "neighbor-content"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::~NeighborContent()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| implicit_withdraw.is_set
	|| (labels !=  nullptr && labels->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (targeted !=  nullptr && targeted->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| (labels !=  nullptr && labels->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (targeted !=  nullptr && targeted->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-content";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels>();
        }
        return labels;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password>();
        }
        return password;
    }

    if(child_yang_name == "targeted")
    {
        if(targeted == nullptr)
        {
            targeted = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted>();
        }
        return targeted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(targeted != nullptr)
    {
        children["targeted"] = targeted;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labels" || name == "password" || name == "targeted" || name == "address" || name == "implicit-withdraw")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::Labels()
    :
    accept{YType::str, "accept"}
{

    yang_name = "labels"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::~Labels()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::has_data() const
{
    if (is_presence_container) return true;
    return accept.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept.is_set || is_set(accept.yfilter)) leaf_name_data.push_back(accept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept")
    {
        accept = value;
        accept.value_namespace = name_space;
        accept.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept")
    {
        accept.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::has_data() const
{
    if (is_presence_container) return true;
    return enctype.is_set
	|| text.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Targeted()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "targeted"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::~Targeted()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrf"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    neighbor_content(this, {"address"})
{

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_content.len(); index++)
    {
        if(neighbor_content[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<neighbor_content.len(); index++)
    {
        if(neighbor_content[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-content")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent>();
        c->parent = this;
        neighbor_content.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_content.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-content" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::NeighborContent()
    :
    address{YType::str, "address"},
    implicit_withdraw{YType::empty, "implicit-withdraw"}
        ,
    labels(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels>())
    , password(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password>())
    , targeted(nullptr) // presence node
{
    labels->parent = this;
    password->parent = this;

    yang_name = "neighbor-content"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::~NeighborContent()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| implicit_withdraw.is_set
	|| (labels !=  nullptr && labels->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (targeted !=  nullptr && targeted->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| (labels !=  nullptr && labels->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (targeted !=  nullptr && targeted->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-content";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels>();
        }
        return labels;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password>();
        }
        return password;
    }

    if(child_yang_name == "targeted")
    {
        if(targeted == nullptr)
        {
            targeted = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted>();
        }
        return targeted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(targeted != nullptr)
    {
        children["targeted"] = targeted;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labels" || name == "password" || name == "targeted" || name == "address" || name == "implicit-withdraw")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::Labels()
    :
    accept{YType::str, "accept"}
{

    yang_name = "labels"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::~Labels()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::has_data() const
{
    if (is_presence_container) return true;
    return accept.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept.is_set || is_set(accept.yfilter)) leaf_name_data.push_back(accept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept")
    {
        accept = value;
        accept.value_namespace = name_space;
        accept.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept")
    {
        accept.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::has_data() const
{
    if (is_presence_container) return true;
    return enctype.is_set
	|| text.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Targeted()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "targeted"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::~Targeted()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Password()
    :
    fallback(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback>())
    , option(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option>())
    , required(nullptr) // presence node
    , rollover(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Rollover>())
{
    fallback->parent = this;
    option->parent = this;
    rollover->parent = this;

    yang_name = "password"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Password::has_data() const
{
    if (is_presence_container) return true;
    return (fallback !=  nullptr && fallback->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (required !=  nullptr && required->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::has_operation() const
{
    return is_set(yfilter)
	|| (fallback !=  nullptr && fallback->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (required !=  nullptr && required->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback>();
        }
        return fallback;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option>();
        }
        return option;
    }

    if(child_yang_name == "required")
    {
        if(required == nullptr)
        {
            required = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Required>();
        }
        return required;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(required != nullptr)
    {
        children["required"] = required;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "option" || name == "required" || name == "rollover")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Fallback::Fallback()
    :
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
        ,
    key_chain(nullptr) // presence node
{

    yang_name = "fallback"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Password::Fallback::~Fallback()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::has_data() const
{
    if (is_presence_container) return true;
    return encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(line.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::Ldp::Enable2::Password::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::Ldp::Enable2::Password::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "encryption-type" || name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{

    yang_name = "key-chain"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::Option()
    :
    seq_num(this, {"seq_num"})
{

    yang_name = "option"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Password::Option::~Option()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<seq_num.len(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::has_operation() const
{
    for (std::size_t index=0; index<seq_num.len(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum>();
        c->parent = this;
        seq_num.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : seq_num.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Password::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-num")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::SeqNum()
    :
    seq_num{YType::uint16, "seq-num"}
        ,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For>())
{
    for_->parent = this;

    yang_name = "seq-num"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::~SeqNum()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::has_data() const
{
    if (is_presence_container) return true;
    return seq_num.is_set
	|| (for_ !=  nullptr && for_->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| (for_ !=  nullptr && for_->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/option/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num";
    ADD_KEY_TOKEN(seq_num, "seq-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For>();
        }
        return for_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "seq-num")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::For()
    :
    line(this, {"acl_name"})
{

    yang_name = "for"; yang_parent_name = "seq-num"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::~For()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<line.len(); index++)
    {
        if(line[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::has_operation() const
{
    for (std::size_t index=0; index<line.len(); index++)
    {
        if(line[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LINE")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE>();
        c->parent = this;
        line.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : line.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::LINE()
    :
    acl_name{YType::str, "acl-name"},
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
        ,
    key_chain(nullptr) // presence node
{

    yang_name = "LINE"; yang_parent_name = "for"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::~LINE()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(line.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LINE";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "acl-name" || name == "encryption-type" || name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{

    yang_name = "key-chain"; yang_parent_name = "LINE"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Required::Required()
    :
    for_{YType::str, "for"}
{

    yang_name = "required"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mpls::Ldp::Enable2::Password::Required::~Required()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Required::has_data() const
{
    if (is_presence_container) return true;
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Required::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Required::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Required::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "required";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Required::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.yfilter)) leaf_name_data.push_back(for_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Required::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Required::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Required::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for")
    {
        for_ = value;
        for_.value_namespace = name_space;
        for_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Required::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for")
    {
        for_.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Required::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Rollover::Rollover()
    :
    duration{YType::uint16, "duration"}
{

    yang_name = "rollover"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Rollover::has_data() const
{
    if (is_presence_container) return true;
    return duration.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Rollover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Rollover::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Rollover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Rollover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Rollover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Rollover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RequestLabels::RequestLabels()
    :
    for_{YType::str, "for"}
{

    yang_name = "request-labels"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::RequestLabels::~RequestLabels()
{
}

bool Native::Mpls::Ldp::Enable2::RequestLabels::has_data() const
{
    if (is_presence_container) return true;
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::RequestLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RequestLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RequestLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RequestLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.yfilter)) leaf_name_data.push_back(for_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RequestLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RequestLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::RequestLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for")
    {
        for_ = value;
        for_.value_namespace = name_space;
        for_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RequestLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for")
    {
        for_.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RequestLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::RouterId()
    :
    interface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface>())
    , vrf(this, {"vrf_name"})
{
    interface->parent = this;

    yang_name = "router-id"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::RouterId::~RouterId()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::Interface()
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
    vasiright{YType::uint16, "vasiright"},
    force{YType::empty, "force"}
        ,
    atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::has_data() const
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
	|| force.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::has_operation() const
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
	|| ydk::is_set(force.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::get_name_leaf_data() const
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
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Mpls::Ldp::Enable2::RouterId::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright" || name == "force")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    interface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface>())
{
    interface->parent = this;

    yang_name = "vrf"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::Interface()
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
    vasiright{YType::uint16, "vasiright"},
    force{YType::empty, "force"}
        ,
    atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::has_data() const
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
	|| force.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::has_operation() const
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
	|| ydk::is_set(force.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::get_name_leaf_data() const
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
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright" || name == "force")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(required != nullptr)
    {
        children["required"] = required;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum>();
        c->parent = this;
        seq_num.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : seq_num.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LINE")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE>();
        c->parent = this;
        line.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : line.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For::LINE::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::For::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::For::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::For::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::PrefixMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::PrefixMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(binding != nullptr)
    {
        children["binding"] = binding;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::Binding::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        auto c = std::make_shared<Native::Mpls::Static::Binding::Ipv4::Global>();
        c->parent = this;
        global.append(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Mpls::Static::Binding::Ipv4::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::Binding::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : global.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::Binding::Ipv4::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::Binding::Ipv4::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::Binding::Ipv4::Global::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::Binding::Ipv4::Global::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::Binding::Ipv4::Global::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::Binding::Ipv4::Global::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::Binding::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::Binding::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::Binding::Ipv4::Vrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::Binding::Ipv4::Vrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::Static::Binding::Ipv4::Vrf::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static::Binding::Ipv4::Vrf::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_bw != nullptr)
    {
        children["auto-bw"] = auto_bw;
    }

    if(auto_tunnel != nullptr)
    {
        children["auto-tunnel"] = auto_tunnel;
    }

    if(ds_te != nullptr)
    {
        children["ds-te"] = ds_te;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(link_management != nullptr)
    {
        children["link-management"] = link_management;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(lsp != nullptr)
    {
        children["lsp"] = lsp;
    }

    if(path_option != nullptr)
    {
        children["path-option"] = path_option;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    if(reoptimize != nullptr)
    {
        children["reoptimize"] = reoptimize;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoBw::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoBw::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(mesh != nullptr)
    {
        children["mesh"] = mesh;
    }

    if(p2p != nullptr)
    {
        children["p2p"] = p2p;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(srlg != nullptr)
    {
        children["srlg"] = srlg;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(unnumbered_interface != nullptr)
    {
        children["unnumbered-interface"] = unnumbered_interface;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(min_max != nullptr)
    {
        children["min-max"] = min_max;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(min_max != nullptr)
    {
        children["min-max"] = min_max;
    }

    return children;
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

const Enum::YLeaf Native::L3vpn::Encapsulation::Ip::Mpls::Mtu::max {0, "max"};

const Enum::YLeaf Native::Mpls::Label::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Label::Protocol::tdp {1, "tdp"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Atm::ControlMode::independent {0, "independent"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Atm::ControlMode::ordered {1, "ordered"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Protocol::tdp {1, "tdp"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Protocol::tdp {1, "tdp"};

const Enum::YLeaf Native::Mpls::Static::Binding::Ipv4::Global::Output::Label::explicit_null {0, "explicit-null"};
const Enum::YLeaf Native::Mpls::Static::Binding::Ipv4::Global::Output::Label::implicit_null {1, "implicit-null"};

const Enum::YLeaf Native::Mpls::Static::Binding::Ipv4::Vrf::Output::Label::explicit_null {0, "explicit-null"};
const Enum::YLeaf Native::Mpls::Static::Binding::Ipv4::Vrf::Output::Label::implicit_null {1, "implicit-null"};

const Enum::YLeaf Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::force {0, "force"};
const Enum::YLeaf Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::preferred {1, "preferred"};


}
}

