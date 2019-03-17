
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_11.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::McrConf::McrConf()
    :
    multicast_routing{YType::empty, "multicast-routing"}
{

    yang_name = "mcr-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::McrConf::~McrConf()
{
}

bool Native::Ip::McrConf::has_data() const
{
    if (is_presence_container) return true;
    return multicast_routing.is_set;
}

bool Native::Ip::McrConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_routing.yfilter);
}

std::string Native::Ip::McrConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::McrConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mcr-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::McrConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_routing.is_set || is_set(multicast_routing.yfilter)) leaf_name_data.push_back(multicast_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::McrConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::McrConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::McrConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing = value;
        multicast_routing.value_namespace = name_space;
        multicast_routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::McrConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing.yfilter = yfilter;
    }
}

bool Native::Ip::McrConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-routing")
        return true;
    return false;
}

Native::Ip::MulticastRouting::MulticastRouting()
    :
    distributed{YType::empty, "distributed"}
        ,
    vrf(this, {"name"})
{

    yang_name = "multicast-routing"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ip::MulticastRouting::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return distributed.is_set;
}

bool Native::Ip::MulticastRouting::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::MulticastRouting::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::MulticastRouting::get_children() const
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

void Native::Ip::MulticastRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "distributed")
        return true;
    return false;
}

Native::Ip::MulticastRouting::Vrf::Vrf()
    :
    name{YType::str, "name"},
    distributed{YType::empty, "distributed"}
{

    yang_name = "vrf"; yang_parent_name = "multicast-routing"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::MulticastRouting::Vrf::~Vrf()
{
}

bool Native::Ip::MulticastRouting::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| distributed.is_set;
}

bool Native::Ip::MulticastRouting::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:multicast-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::MulticastRouting::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::MulticastRouting::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::MulticastRouting::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "distributed")
        return true;
    return false;
}

Native::Ip::Mroute::Mroute()
    :
    source_address{YType::str, "source-address"},
    subnet_mask{YType::str, "subnet-mask"},
    tunnel{YType::int32, "Tunnel"}
{

    yang_name = "mroute"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Mroute::~Mroute()
{
}

bool Native::Ip::Mroute::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| subnet_mask.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Mroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(subnet_mask.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Mroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Mroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Mroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.yfilter)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Mroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Mroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Mroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
        subnet_mask.value_namespace = name_space;
        subnet_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Mroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Mroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "subnet-mask" || name == "Tunnel")
        return true;
    return false;
}

Native::Ip::Igmp::Igmp()
    :
    snooping_conf(std::make_shared<Native::Ip::Igmp::SnoopingConf>())
    , snooping(std::make_shared<Native::Ip::Igmp::Snooping>())
    , ssm_map(std::make_shared<Native::Ip::Igmp::SsmMap>())
    , vrf(this, {"name"})
{
    snooping_conf->parent = this;
    snooping->parent = this;
    ssm_map->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::~Igmp()
{
}

bool Native::Ip::Igmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (snooping_conf !=  nullptr && snooping_conf->has_data())
	|| (snooping !=  nullptr && snooping->has_data())
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation())
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Igmp::SnoopingConf>();
        }
        return snooping_conf;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::SsmMap>();
        }
        return ssm_map;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Igmp::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snooping_conf != nullptr)
    {
        _children["snooping-conf"] = snooping_conf;
    }

    if(snooping != nullptr)
    {
        _children["snooping"] = snooping;
    }

    if(ssm_map != nullptr)
    {
        _children["ssm-map"] = ssm_map;
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

void Native::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping-conf" || name == "snooping" || name == "ssm-map" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Igmp::SnoopingConf::SnoopingConf()
    :
    snooping{YType::boolean, "snooping"}
{

    yang_name = "snooping-conf"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::SnoopingConf::~SnoopingConf()
{
}

bool Native::Ip::Igmp::SnoopingConf::has_data() const
{
    if (is_presence_container) return true;
    return snooping.is_set;
}

bool Native::Ip::Igmp::SnoopingConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snooping.yfilter);
}

std::string Native::Ip::Igmp::SnoopingConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SnoopingConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SnoopingConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::SnoopingConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SnoopingConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SnoopingConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Snooping()
    :
    l2_entry_limit{YType::uint32, "l2-entry-limit"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"}
        ,
    check(std::make_shared<Native::Ip::Igmp::Snooping::Check>())
    , explicit_tracking(std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>())
    , querier(nullptr) // presence node
    , tcn(std::make_shared<Native::Ip::Igmp::Snooping::Tcn>())
    , vlan(std::make_shared<Native::Ip::Igmp::Snooping::Vlan>())
{
    check->parent = this;
    explicit_tracking->parent = this;
    tcn->parent = this;
    vlan->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::Ip::Igmp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    return l2_entry_limit.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (tcn !=  nullptr && tcn->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2_entry_limit.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (querier !=  nullptr && querier->has_operation())
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Ip::Igmp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_entry_limit.is_set || is_set(l2_entry_limit.yfilter)) leaf_name_data.push_back(l2_entry_limit.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Ip::Igmp::Snooping::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(check != nullptr)
    {
        _children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        _children["explicit-tracking"] = explicit_tracking;
    }

    if(querier != nullptr)
    {
        _children["querier"] = querier;
    }

    if(tcn != nullptr)
    {
        _children["tcn"] = tcn;
    }

    if(vlan != nullptr)
    {
        _children["Cisco-IOS-XE-switch:vlan"] = vlan;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2-entry-limit")
    {
        l2_entry_limit = value;
        l2_entry_limit.value_namespace = name_space;
        l2_entry_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2-entry-limit")
    {
        l2_entry_limit.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "querier" || name == "tcn" || name == "vlan" || name == "l2-entry-limit" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::Ip::Igmp::Snooping::Check::has_data() const
{
    if (is_presence_container) return true;
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Check::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Igmp::Snooping::ExplicitTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::str, "address"},
    max_response_time{YType::uint8, "max-response-time"},
    query_interval{YType::uint16, "query-interval"},
    version{YType::uint8, "version"}
        ,
    tcn(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn>())
    , timer(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>())
{
    tcn->parent = this;
    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Querier::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| version.is_set
	|| (tcn !=  nullptr && tcn->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Querier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tcn != nullptr)
    {
        _children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcn" || name == "timer" || name == "address" || name == "max-response-time" || name == "query-interval" || name == "version")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Tcn()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn::Query>())
{
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Querier::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_data() const
{
    if (is_presence_container) return true;
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Query::Query()
    :
    count{YType::uint8, "count"},
    interval{YType::uint8, "interval"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| interval.is_set;
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Timer::Timer()
    :
    expiry{YType::uint16, "expiry"}
{

    yang_name = "timer"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Querier::Timer::~Timer()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_data() const
{
    if (is_presence_container) return true;
    return expiry.is_set;
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Querier::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Querier::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Tcn()
    :
    flood(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood>())
    , query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>())
{
    flood->parent = this;
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::has_data() const
{
    if (is_presence_container) return true;
    return (flood !=  nullptr && flood->has_data())
	|| (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (flood !=  nullptr && flood->has_operation())
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Tcn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        if(flood == nullptr)
        {
            flood = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood>();
        }
        return flood;
    }

    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flood != nullptr)
    {
        _children["flood"] = flood;
    }

    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Flood()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood::Query>())
{
    query->parent = this;

    yang_name = "flood"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Tcn::Flood::~Flood()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_data() const
{
    if (is_presence_container) return true;
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Query::Query()
    :
    count{YType::uint8, "count"}
{

    yang_name = "query"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set;
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/flood/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Query::Query()
    :
    solicit{YType::empty, "solicit"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_data() const
{
    if (is_presence_container) return true;
    return solicit.is_set;
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(solicit.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Tcn::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (solicit.is_set || is_set(solicit.yfilter)) leaf_name_data.push_back(solicit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "solicit")
    {
        solicit = value;
        solicit.value_namespace = name_space;
        solicit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "solicit")
    {
        solicit.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "solicit")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Vlan()
    :
    range(this, {"range"})
{

    yang_name = "vlan"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Vlan::~Vlan()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Igmp::Snooping::Vlan::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Range()
    :
    range{YType::uint16, "range"},
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    robustness_variable{YType::uint8, "robustness-variable"}
        ,
    mrouter(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter>())
    , querier(nullptr) // presence node
    , static_(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static>())
{
    mrouter->parent = this;
    static_->parent = this;

    yang_name = "range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::~Range()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| robustness_variable.is_set
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/Cisco-IOS-XE-switch:vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier>();
        }
        return querier;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mrouter != nullptr)
    {
        _children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        _children["querier"] = querier;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mrouter" || name == "querier" || name == "static" || name == "range" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "robustness-variable")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Mrouter()
    :
    interface{YType::str, "interface"}
        ,
    learn(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn>())
{
    learn->parent = this;

    yang_name = "mrouter"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::~Mrouter()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (learn !=  nullptr && learn->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (learn !=  nullptr && learn->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "learn")
    {
        if(learn == nullptr)
        {
            learn = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn>();
        }
        return learn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(learn != nullptr)
    {
        _children["learn"] = learn;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learn" || name == "interface")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::Learn()
    :
    cgmp{YType::empty, "cgmp"},
    pim_dvmrp{YType::empty, "pim-dvmrp"}
{

    yang_name = "learn"; yang_parent_name = "mrouter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::~Learn()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_data() const
{
    if (is_presence_container) return true;
    return cgmp.is_set
	|| pim_dvmrp.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cgmp.yfilter)
	|| ydk::is_set(pim_dvmrp.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cgmp.is_set || is_set(cgmp.yfilter)) leaf_name_data.push_back(cgmp.get_name_leafdata());
    if (pim_dvmrp.is_set || is_set(pim_dvmrp.yfilter)) leaf_name_data.push_back(pim_dvmrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cgmp")
    {
        cgmp = value;
        cgmp.value_namespace = name_space;
        cgmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-dvmrp")
    {
        pim_dvmrp = value;
        pim_dvmrp.value_namespace = name_space;
        pim_dvmrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cgmp")
    {
        cgmp.yfilter = yfilter;
    }
    if(value_path == "pim-dvmrp")
    {
        pim_dvmrp.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cgmp" || name == "pim-dvmrp")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Querier()
    :
    address{YType::str, "address"},
    max_response_time{YType::uint8, "max-response-time"},
    query_interval{YType::uint16, "query-interval"},
    version{YType::uint8, "version"}
        ,
    tcn(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn>())
    , timer(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer>())
{
    tcn->parent = this;
    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| version.is_set
	|| (tcn !=  nullptr && tcn->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tcn != nullptr)
    {
        _children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcn" || name == "timer" || name == "address" || name == "max-response-time" || name == "query-interval" || name == "version")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Tcn()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query>())
{
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_data() const
{
    if (is_presence_container) return true;
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::Query()
    :
    count{YType::uint8, "count"},
    interval{YType::uint8, "interval"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| interval.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::Timer()
    :
    expiry{YType::uint16, "expiry"}
{

    yang_name = "timer"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::~Timer()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_data() const
{
    if (is_presence_container) return true;
    return expiry.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Static()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "static"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::~Static()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_children() const
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

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::str, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::~Ipv4()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
        ,
    query(std::make_shared<Native::Ip::Igmp::SsmMap::Query>())
    , static_(std::make_shared<Native::Ip::Igmp::SsmMap::Static>())
{
    query->parent = this;
    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::SsmMap::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::SsmMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::SsmMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::SsmMap::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(query != nullptr)
    {
        _children["query"] = query;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Ip::Igmp::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query" || name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{

    yang_name = "query"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::SsmMap::Query::~Query()
{
}

bool Native::Ip::Igmp::SsmMap::Query::has_data() const
{
    if (is_presence_container) return true;
    return dns.is_set;
}

bool Native::Ip::Igmp::SsmMap::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::SsmMap::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::Static::Static()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::SsmMap::Static::~Static()
{
}

bool Native::Ip::Igmp::SsmMap::Static::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Igmp::SsmMap::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::SsmMap::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::SsmMap::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::SsmMap::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    ssm_map(std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "vrf"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Igmp::Vrf::~Vrf()
{
}

bool Native::Ip::Igmp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ssm_map != nullptr)
    {
        _children["ssm-map"] = ssm_map;
    }

    return _children;
}

void Native::Ip::Igmp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map" || name == "name")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
        ,
    static_(this, {"srcaddress"})
{

    yang_name = "ssm-map"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Vrf::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_.len(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return enable.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_operation() const
{
    for (std::size_t index=0; index<static_.len(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Vrf::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        auto ent_ = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap::Static>();
        ent_->parent = this;
        static_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Vrf::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : static_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Igmp::Vrf::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::SsmMap::Static::Static()
    :
    srcaddress{YType::str, "srcaddress"},
    aclname{YType::str, "aclname"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Igmp::Vrf::SsmMap::Static::~Static()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_data() const
{
    if (is_presence_container) return true;
    return srcaddress.is_set
	|| aclname.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddress.yfilter)
	|| ydk::is_set(aclname.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    ADD_KEY_TOKEN(srcaddress, "srcaddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::SsmMap::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddress.is_set || is_set(srcaddress.yfilter)) leaf_name_data.push_back(srcaddress.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Igmp::Vrf::SsmMap::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Igmp::Vrf::SsmMap::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Igmp::Vrf::SsmMap::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcaddress")
    {
        srcaddress = value;
        srcaddress.value_namespace = name_space;
        srcaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclname")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::SsmMap::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcaddress")
    {
        srcaddress.yfilter = yfilter;
    }
    if(value_path == "aclname")
    {
        aclname.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcaddress" || name == "aclname")
        return true;
    return false;
}

Native::Ip::CommunityList::CommunityList()
    :
    number_standard(this, {"no"})
    , number_expanded(this, {"no"})
    , expanded(this, {"name"})
    , standard(this, {"name"})
{

    yang_name = "community-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::CommunityList::~CommunityList()
{
}

bool Native::Ip::CommunityList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<number_standard.len(); index++)
    {
        if(number_standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.len(); index++)
    {
        if(number_expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<expanded.len(); index++)
    {
        if(expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.len(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::has_operation() const
{
    for (std::size_t index=0; index<number_standard.len(); index++)
    {
        if(number_standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.len(); index++)
    {
        if(number_expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<expanded.len(); index++)
    {
        if(expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.len(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::CommunityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:community-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number-standard")
    {
        auto ent_ = std::make_shared<Native::Ip::CommunityList::NumberStandard>();
        ent_->parent = this;
        number_standard.append(ent_);
        return ent_;
    }

    if(child_yang_name == "number-expanded")
    {
        auto ent_ = std::make_shared<Native::Ip::CommunityList::NumberExpanded>();
        ent_->parent = this;
        number_expanded.append(ent_);
        return ent_;
    }

    if(child_yang_name == "expanded")
    {
        auto ent_ = std::make_shared<Native::Ip::CommunityList::Expanded>();
        ent_->parent = this;
        expanded.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standard")
    {
        auto ent_ = std::make_shared<Native::Ip::CommunityList::Standard>();
        ent_->parent = this;
        standard.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : number_standard.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : number_expanded.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : expanded.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standard.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::CommunityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::CommunityList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::CommunityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-standard" || name == "number-expanded" || name == "expanded" || name == "standard")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
        ,
    deny(std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>())
    , permit(std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::CommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::CommunityList::NumberStandard::has_data() const
{
    if (is_presence_container) return true;
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberStandard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard";
    ADD_KEY_TOKEN(no, "no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Ip::CommunityList::NumberStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::CommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::CommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
        ,
    expanded_grouping(std::make_shared<Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping>())
{
    expanded_grouping->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::CommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::CommunityList::NumberExpanded::has_data() const
{
    if (is_presence_container) return true;
    return no.is_set
	|| (expanded_grouping !=  nullptr && expanded_grouping->has_data());
}

bool Native::Ip::CommunityList::NumberExpanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (expanded_grouping !=  nullptr && expanded_grouping->has_operation());
}

std::string Native::Ip::CommunityList::NumberExpanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded";
    ADD_KEY_TOKEN(no, "no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expanded-grouping")
    {
        if(expanded_grouping == nullptr)
        {
            expanded_grouping = std::make_shared<Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping>();
        }
        return expanded_grouping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expanded_grouping != nullptr)
    {
        _children["expanded-grouping"] = expanded_grouping;
    }

    return _children;
}

void Native::Ip::CommunityList::NumberExpanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberExpanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expanded-grouping" || name == "no")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExpandedGrouping()
    :
    extended_grouping(this, {"action", "string"})
{

    yang_name = "expanded-grouping"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::~ExpandedGrouping()
{
}

bool Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_grouping.len(); index++)
    {
        if(extended_grouping[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::has_operation() const
{
    for (std::size_t index=0; index<extended_grouping.len(); index++)
    {
        if(extended_grouping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded-grouping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended_grouping")
    {
        auto ent_ = std::make_shared<Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping>();
        ent_->parent = this;
        extended_grouping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_grouping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended_grouping")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::ExtendedGrouping()
    :
    action{YType::enumeration, "action"},
    string{YType::str, "string"}
{

    yang_name = "extended_grouping"; yang_parent_name = "expanded-grouping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::~ExtendedGrouping()
{
}

bool Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| string.is_set;
}

bool Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended_grouping";
    ADD_KEY_TOKEN(action, "action");
    ADD_KEY_TOKEN(string, "string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "string")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
        ,
    expanded_grouping(std::make_shared<Native::Ip::CommunityList::Expanded::ExpandedGrouping>())
{
    expanded_grouping->parent = this;

    yang_name = "expanded"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::CommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::CommunityList::Expanded::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (expanded_grouping !=  nullptr && expanded_grouping->has_data());
}

bool Native::Ip::CommunityList::Expanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (expanded_grouping !=  nullptr && expanded_grouping->has_operation());
}

std::string Native::Ip::CommunityList::Expanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expanded-grouping")
    {
        if(expanded_grouping == nullptr)
        {
            expanded_grouping = std::make_shared<Native::Ip::CommunityList::Expanded::ExpandedGrouping>();
        }
        return expanded_grouping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expanded_grouping != nullptr)
    {
        _children["expanded-grouping"] = expanded_grouping;
    }

    return _children;
}

void Native::Ip::CommunityList::Expanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Expanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expanded-grouping" || name == "name")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExpandedGrouping()
    :
    extended_grouping(this, {"action", "string"})
{

    yang_name = "expanded-grouping"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::CommunityList::Expanded::ExpandedGrouping::~ExpandedGrouping()
{
}

bool Native::Ip::CommunityList::Expanded::ExpandedGrouping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_grouping.len(); index++)
    {
        if(extended_grouping[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::ExpandedGrouping::has_operation() const
{
    for (std::size_t index=0; index<extended_grouping.len(); index++)
    {
        if(extended_grouping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::CommunityList::Expanded::ExpandedGrouping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded-grouping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::ExpandedGrouping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::Expanded::ExpandedGrouping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended_grouping")
    {
        auto ent_ = std::make_shared<Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping>();
        ent_->parent = this;
        extended_grouping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::Expanded::ExpandedGrouping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_grouping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::CommunityList::Expanded::ExpandedGrouping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::CommunityList::Expanded::ExpandedGrouping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::CommunityList::Expanded::ExpandedGrouping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended_grouping")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::ExtendedGrouping()
    :
    action{YType::enumeration, "action"},
    string{YType::str, "string"}
{

    yang_name = "extended_grouping"; yang_parent_name = "expanded-grouping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::~ExtendedGrouping()
{
}

bool Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| string.is_set;
}

bool Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended_grouping";
    ADD_KEY_TOKEN(action, "action");
    ADD_KEY_TOKEN(string, "string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "string")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
        ,
    deny(std::make_shared<Native::Ip::CommunityList::Standard::Deny>())
    , permit(std::make_shared<Native::Ip::CommunityList::Standard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::CommunityList::Standard::~Standard()
{
}

bool Native::Ip::CommunityList::Standard::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Ip::CommunityList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::CommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Standard::Deny::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::CommunityList::Standard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::Standard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::CommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Standard::Permit::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::CommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::CommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::CommunityList::Standard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::Standard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::ExtcommunityList()
    :
    number_standard(this, {"no"})
    , number_expanded(this, {"no"})
    , expanded(this, {"name"})
    , standard(this, {"name"})
{

    yang_name = "extcommunity-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ExtcommunityList::~ExtcommunityList()
{
}

bool Native::Ip::ExtcommunityList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<number_standard.len(); index++)
    {
        if(number_standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.len(); index++)
    {
        if(number_expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<expanded.len(); index++)
    {
        if(expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.len(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::has_operation() const
{
    for (std::size_t index=0; index<number_standard.len(); index++)
    {
        if(number_standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.len(); index++)
    {
        if(number_expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<expanded.len(); index++)
    {
        if(expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.len(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:extcommunity-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number-standard")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard>();
        ent_->parent = this;
        number_standard.append(ent_);
        return ent_;
    }

    if(child_yang_name == "number-expanded")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded>();
        ent_->parent = this;
        number_expanded.append(ent_);
        return ent_;
    }

    if(child_yang_name == "expanded")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Expanded>();
        ent_->parent = this;
        expanded.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standard")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Standard>();
        ent_->parent = this;
        standard.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : number_standard.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : number_expanded.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : expanded.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standard.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-standard" || name == "number-expanded" || name == "expanded" || name == "standard")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
        ,
    deny(std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny>())
    , permit(std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ExtcommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_data() const
{
    if (is_presence_container) return true;
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::NumberStandard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard";
    ADD_KEY_TOKEN(no, "no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Deny()
    :
    rt(this, {"name"})
    , soo(this, {"name"})
    , vpn_distinguisher(this, {"name"})
{

    yang_name = "deny"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rt.len(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.len(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.len(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_operation() const
{
    for (std::size_t index=0; index<rt.len(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.len(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.len(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt>();
        ent_->parent = this;
        rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "soo")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo>();
        ent_->parent = this;
        soo.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher>();
        ent_->parent = this;
        vpn_distinguisher.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : soo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vpn_distinguisher.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Permit()
    :
    rt(this, {"name"})
    , soo(this, {"name"})
    , vpn_distinguisher(this, {"name"})
{

    yang_name = "permit"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rt.len(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.len(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.len(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_operation() const
{
    for (std::size_t index=0; index<rt.len(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.len(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.len(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt>();
        ent_->parent = this;
        rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "soo")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo>();
        ent_->parent = this;
        soo.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher>();
        ent_->parent = this;
        vpn_distinguisher.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : soo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vpn_distinguisher.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
        ,
    expanded_grouping(std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping>())
{
    expanded_grouping->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ExtcommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_data() const
{
    if (is_presence_container) return true;
    return no.is_set
	|| (expanded_grouping !=  nullptr && expanded_grouping->has_data());
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (expanded_grouping !=  nullptr && expanded_grouping->has_operation());
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded";
    ADD_KEY_TOKEN(no, "no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expanded-grouping")
    {
        if(expanded_grouping == nullptr)
        {
            expanded_grouping = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping>();
        }
        return expanded_grouping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expanded_grouping != nullptr)
    {
        _children["expanded-grouping"] = expanded_grouping;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberExpanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expanded-grouping" || name == "no")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExpandedGrouping()
    :
    extended_grouping(this, {"action", "string"})
{

    yang_name = "expanded-grouping"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::~ExpandedGrouping()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_grouping.len(); index++)
    {
        if(extended_grouping[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::has_operation() const
{
    for (std::size_t index=0; index<extended_grouping.len(); index++)
    {
        if(extended_grouping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded-grouping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended_grouping")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping>();
        ent_->parent = this;
        extended_grouping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_grouping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended_grouping")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::ExtendedGrouping()
    :
    action{YType::enumeration, "action"},
    string{YType::str, "string"}
{

    yang_name = "extended_grouping"; yang_parent_name = "expanded-grouping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::~ExtendedGrouping()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| string.is_set;
}

bool Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended_grouping";
    ADD_KEY_TOKEN(action, "action");
    ADD_KEY_TOKEN(string, "string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "string")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
        ,
    expanded_grouping(std::make_shared<Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping>())
{
    expanded_grouping->parent = this;

    yang_name = "expanded"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ExtcommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::ExtcommunityList::Expanded::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (expanded_grouping !=  nullptr && expanded_grouping->has_data());
}

bool Native::Ip::ExtcommunityList::Expanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (expanded_grouping !=  nullptr && expanded_grouping->has_operation());
}

std::string Native::Ip::ExtcommunityList::Expanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expanded-grouping")
    {
        if(expanded_grouping == nullptr)
        {
            expanded_grouping = std::make_shared<Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping>();
        }
        return expanded_grouping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expanded_grouping != nullptr)
    {
        _children["expanded-grouping"] = expanded_grouping;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::Expanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Expanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Expanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expanded-grouping" || name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExpandedGrouping()
    :
    extended_grouping(this, {"action", "string"})
{

    yang_name = "expanded-grouping"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::~ExpandedGrouping()
{
}

bool Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_grouping.len(); index++)
    {
        if(extended_grouping[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::has_operation() const
{
    for (std::size_t index=0; index<extended_grouping.len(); index++)
    {
        if(extended_grouping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded-grouping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended_grouping")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping>();
        ent_->parent = this;
        extended_grouping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_grouping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended_grouping")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::ExtendedGrouping()
    :
    action{YType::enumeration, "action"},
    string{YType::str, "string"}
{

    yang_name = "extended_grouping"; yang_parent_name = "expanded-grouping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::~ExtendedGrouping()
{
}

bool Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| string.is_set;
}

bool Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended_grouping";
    ADD_KEY_TOKEN(action, "action");
    ADD_KEY_TOKEN(string, "string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "string")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
        ,
    deny(std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny>())
    , permit(std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ExtcommunityList::Standard::~Standard()
{
}

bool Native::Ip::ExtcommunityList::Standard::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Deny()
    :
    rt(this, {"name"})
    , soo(this, {"name"})
    , vpn_distinguisher(this, {"name"})
{

    yang_name = "deny"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rt.len(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.len(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.len(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_operation() const
{
    for (std::size_t index=0; index<rt.len(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.len(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.len(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::Rt>();
        ent_->parent = this;
        rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "soo")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::Soo>();
        ent_->parent = this;
        soo.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher>();
        ent_->parent = this;
        vpn_distinguisher.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : soo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vpn_distinguisher.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::Standard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Standard::Deny::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Standard::Deny::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Permit()
    :
    rt(this, {"name"})
    , soo(this, {"name"})
    , vpn_distinguisher(this, {"name"})
{

    yang_name = "permit"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rt.len(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.len(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.len(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_operation() const
{
    for (std::size_t index=0; index<rt.len(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.len(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.len(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::Rt>();
        ent_->parent = this;
        rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "soo")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::Soo>();
        ent_->parent = this;
        soo.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        auto ent_ = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher>();
        ent_->parent = this;
        vpn_distinguisher.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : soo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vpn_distinguisher.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::Standard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Standard::Permit::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Standard::Permit::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Icmp::Icmp()
    :
    rate_limit(std::make_shared<Native::Ip::Icmp::RateLimit>())
{
    rate_limit->parent = this;

    yang_name = "icmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Icmp::~Icmp()
{
}

bool Native::Ip::Icmp::has_data() const
{
    if (is_presence_container) return true;
    return (rate_limit !=  nullptr && rate_limit->has_data());
}

bool Native::Ip::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (rate_limit !=  nullptr && rate_limit->has_operation());
}

std::string Native::Ip::Icmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-icmp:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Icmp::RateLimit>();
        }
        return rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate_limit != nullptr)
    {
        _children["rate-limit"] = rate_limit;
    }

    return _children;
}

void Native::Ip::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::RateLimit()
    :
    redirect{YType::enumeration, "redirect"}
        ,
    unreachable(std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable>())
{
    unreachable->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Icmp::RateLimit::~RateLimit()
{
}

bool Native::Ip::Icmp::RateLimit::has_data() const
{
    if (is_presence_container) return true;
    return redirect.is_set
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Native::Ip::Icmp::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Native::Ip::Icmp::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Icmp::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Icmp::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unreachable != nullptr)
    {
        _children["unreachable"] = unreachable;
    }

    return _children;
}

void Native::Ip::Icmp::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreachable" || name == "redirect")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::Unreachable()
    :
    time{YType::uint32, "time"}
        ,
    df(std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::DF>())
    , log(nullptr) // presence node
{
    df->parent = this;

    yang_name = "unreachable"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Icmp::RateLimit::Unreachable::~Unreachable()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| (df !=  nullptr && df->has_data())
	|| (log !=  nullptr && log->has_data());
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| (df !=  nullptr && df->has_operation())
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Icmp::RateLimit::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DF")
    {
        if(df == nullptr)
        {
            df = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::DF>();
        }
        return df;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Icmp::RateLimit::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(df != nullptr)
    {
        _children["DF"] = df;
    }

    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DF" || name == "log" || name == "time")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::DF::DF()
    :
    time{YType::uint32, "time"}
{

    yang_name = "DF"; yang_parent_name = "unreachable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Icmp::RateLimit::Unreachable::DF::~DF()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set;
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::DF::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/unreachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::DF::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DF";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::DF::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Icmp::RateLimit::Unreachable::DF::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Icmp::RateLimit::Unreachable::DF::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::DF::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::DF::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::Log::Log()
    :
    number_unreachables{YType::uint32, "number-unreachables"},
    log_message{YType::uint32, "log-message"}
{

    yang_name = "log"; yang_parent_name = "unreachable"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Icmp::RateLimit::Unreachable::Log::~Log()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_data() const
{
    if (is_presence_container) return true;
    return number_unreachables.is_set
	|| log_message.is_set;
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_unreachables.yfilter)
	|| ydk::is_set(log_message.yfilter);
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/unreachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_unreachables.is_set || is_set(number_unreachables.yfilter)) leaf_name_data.push_back(number_unreachables.get_name_leafdata());
    if (log_message.is_set || is_set(log_message.yfilter)) leaf_name_data.push_back(log_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Icmp::RateLimit::Unreachable::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Icmp::RateLimit::Unreachable::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-unreachables")
    {
        number_unreachables = value;
        number_unreachables.value_namespace = name_space;
        number_unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-message")
    {
        log_message = value;
        log_message.value_namespace = name_space;
        log_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-unreachables")
    {
        number_unreachables.yfilter = yfilter;
    }
    if(value_path == "log-message")
    {
        log_message.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-unreachables" || name == "log-message")
        return true;
    return false;
}

Native::Ip::Nat::Nat()
    :
    pool(this, {"id"})
    , inside(std::make_shared<Native::Ip::Nat::Inside>())
    , outside(std::make_shared<Native::Ip::Nat::Outside>())
    , translation(std::make_shared<Native::Ip::Nat::Translation>())
{
    inside->parent = this;
    outside->parent = this;
    translation->parent = this;

    yang_name = "nat"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::~Nat()
{
}

bool Native::Ip::Nat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return (inside !=  nullptr && inside->has_data())
	|| (outside !=  nullptr && outside->has_data())
	|| (translation !=  nullptr && translation->has_data());
}

bool Native::Ip::Nat::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (inside !=  nullptr && inside->has_operation())
	|| (outside !=  nullptr && outside->has_operation())
	|| (translation !=  nullptr && translation->has_operation());
}

std::string Native::Ip::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Ip::Nat::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "outside")
    {
        if(outside == nullptr)
        {
            outside = std::make_shared<Native::Ip::Nat::Outside>();
        }
        return outside;
    }

    if(child_yang_name == "translation")
    {
        if(translation == nullptr)
        {
            translation = std::make_shared<Native::Ip::Nat::Translation>();
        }
        return translation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inside != nullptr)
    {
        _children["inside"] = inside;
    }

    if(outside != nullptr)
    {
        _children["outside"] = outside;
    }

    if(translation != nullptr)
    {
        _children["translation"] = translation;
    }

    return _children;
}

void Native::Ip::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "inside" || name == "outside" || name == "translation")
        return true;
    return false;
}

Native::Ip::Nat::Pool::Pool()
    :
    id{YType::str, "id"},
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"},
    accounting{YType::str, "accounting"},
    arp_ping{YType::empty, "arp-ping"},
    type{YType::enumeration, "type"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "pool"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Pool::~Pool()
{
}

bool Native::Ip::Nat::Pool::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| start_address.is_set
	|| end_address.is_set
	|| netmask.is_set
	|| prefix_length.is_set
	|| accounting.is_set
	|| arp_ping.is_set
	|| type.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(arp_ping.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (arp_ping.is_set || is_set(arp_ping.yfilter)) leaf_name_data.push_back(arp_ping.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-ping")
    {
        arp_ping = value;
        arp_ping.value_namespace = name_space;
        arp_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "arp-ping")
    {
        arp_ping.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "start-address" || name == "end-address" || name == "netmask" || name == "prefix-length" || name == "accounting" || name == "arp-ping" || name == "type" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Inside()
    :
    source(std::make_shared<Native::Ip::Nat::Inside::Source>())
    , destination(std::make_shared<Native::Ip::Nat::Inside::Destination>())
{
    source->parent = this;
    destination->parent = this;

    yang_name = "inside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::~Inside()
{
}

bool Native::Ip::Nat::Inside::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ip::Nat::Inside::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ip::Nat::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Inside::Source>();
        }
        return source;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Nat::Inside::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::Ip::Nat::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Source()
    :
    list(this, {"id"})
    , route_map(this, {"route_map_name"})
    , static_(std::make_shared<Native::Ip::Nat::Inside::Source::Static>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::~Source()
{
}

bool Native::Ip::Nat::Inside::Source::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Inside::Source::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "route-map" || name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::List()
    :
    id{YType::str, "id"}
        ,
    pool(this, {"name"})
    , pool_with_vrf(std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf>())
    , interface(this, {"name"})
    , interface_with_vrf(std::make_shared<Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf>())
{
    pool_with_vrf->parent = this;
    interface_with_vrf->parent = this;

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::List::~List()
{
}

bool Native::Ip::Nat::Inside::Source::List::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return id.is_set
	|| (pool_with_vrf !=  nullptr && pool_with_vrf->has_data())
	|| (interface_with_vrf !=  nullptr && interface_with_vrf->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (pool_with_vrf !=  nullptr && pool_with_vrf->has_operation())
	|| (interface_with_vrf !=  nullptr && interface_with_vrf->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pool-with-vrf")
    {
        if(pool_with_vrf == nullptr)
        {
            pool_with_vrf = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf>();
        }
        return pool_with_vrf;
    }

    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "interface-with-vrf")
    {
        if(interface_with_vrf == nullptr)
        {
            interface_with_vrf = std::make_shared<Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf>();
        }
        return interface_with_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pool_with_vrf != nullptr)
    {
        _children["pool-with-vrf"] = pool_with_vrf;
    }

    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(interface_with_vrf != nullptr)
    {
        _children["interface-with-vrf"] = interface_with_vrf;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "pool-with-vrf" || name == "interface" || name == "interface-with-vrf" || name == "id")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Pool::Pool()
    :
    name{YType::str, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
        ,
    redundancy(this, {"name"})
{

    yang_name = "pool"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::List::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_data())
            return true;
    }
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Pool::has_operation() const
{
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::Pool::Redundancy>();
        ent_->parent = this;
        redundancy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redundancy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::Redundancy()
    :
    name{YType::uint8, "name"}
        ,
    mapping_id(this, {"name"})
{

    yang_name = "redundancy"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::~Redundancy()
{
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::has_operation() const
{
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-id")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId>();
        ent_->parent = this;
        mapping_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-id" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::MappingId()
    :
    name{YType::uint32, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "mapping-id"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::~MappingId()
{
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-id";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::PoolWithVrf()
    :
    pool(this, {"name"})
{

    yang_name = "pool-with-vrf"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::~PoolWithVrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-with-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Pool()
    :
    name{YType::str, "name"}
        ,
    redundancy(this, {"name"})
    , vrf(this, {"name"})
{

    yang_name = "pool"; yang_parent_name = "pool-with-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::has_operation() const
{
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy>();
        ent_->parent = this;
        redundancy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redundancy.entities())
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

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::Redundancy()
    :
    name{YType::uint8, "name"}
        ,
    mapping_id(this, {"name"})
{

    yang_name = "redundancy"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::~Redundancy()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::has_operation() const
{
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-id")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId>();
        ent_->parent = this;
        mapping_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-id" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::MappingId()
    :
    name{YType::uint32, "name"}
        ,
    vrf(this, {"name"})
{

    yang_name = "mapping-id"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::~MappingId()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-id";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::get_children() const
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

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::Vrf()
    :
    name{YType::str, "name"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    overload{YType::empty, "overload"}
{

    yang_name = "vrf"; yang_parent_name = "mapping-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_in_vrf.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-in-vrf" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::Vrf()
    :
    name{YType::str, "name"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    overload{YType::empty, "overload"}
{

    yang_name = "vrf"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_in_vrf.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-in-vrf" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::Interface()
    :
    name{YType::str, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "interface"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::InterfaceWithVrf()
    :
    interface(this, {"name"})
{

    yang_name = "interface-with-vrf"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::~InterfaceWithVrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-with-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Interface()
    :
    name{YType::str, "name"}
        ,
    vrf(this, {"vrf_name"})
{

    yang_name = "interface"; yang_parent_name = "interface-with-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "vrf"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::RouteMap()
    :
    route_map_name{YType::str, "route-map-name"}
        ,
    pool(this, {"pool_name"})
    , pool_with_vrf(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf>())
    , interface(this, {"name"})
    , interface_with_vrf(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf>())
{
    pool_with_vrf->parent = this;
    interface_with_vrf->parent = this;

    yang_name = "route-map"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return route_map_name.is_set
	|| (pool_with_vrf !=  nullptr && pool_with_vrf->has_data())
	|| (interface_with_vrf !=  nullptr && interface_with_vrf->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (pool_with_vrf !=  nullptr && pool_with_vrf->has_operation())
	|| (interface_with_vrf !=  nullptr && interface_with_vrf->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(route_map_name, "route-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pool-with-vrf")
    {
        if(pool_with_vrf == nullptr)
        {
            pool_with_vrf = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf>();
        }
        return pool_with_vrf;
    }

    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "interface-with-vrf")
    {
        if(interface_with_vrf == nullptr)
        {
            interface_with_vrf = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf>();
        }
        return interface_with_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pool_with_vrf != nullptr)
    {
        _children["pool-with-vrf"] = pool_with_vrf;
    }

    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(interface_with_vrf != nullptr)
    {
        _children["interface-with-vrf"] = interface_with_vrf;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "pool-with-vrf" || name == "interface" || name == "interface-with-vrf" || name == "route-map-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"},
    reversible{YType::empty, "reversible"}
        ,
    redundancy(this, {"name"})
{

    yang_name = "pool"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_data())
            return true;
    }
    return pool_name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set
	|| reversible.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_operation() const
{
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter)
	|| ydk::is_set(reversible.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(pool_name, "pool-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy>();
        ent_->parent = this;
        redundancy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redundancy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "pool-name" || name == "overload" || name == "extended" || name == "oer" || name == "reversible")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::Redundancy()
    :
    name{YType::uint8, "name"}
        ,
    mapping_id(this, {"name"})
{

    yang_name = "redundancy"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::~Redundancy()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::has_operation() const
{
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-id")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId>();
        ent_->parent = this;
        mapping_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-id" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::MappingId()
    :
    name{YType::uint32, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"},
    reversible{YType::empty, "reversible"}
{

    yang_name = "mapping-id"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::~MappingId()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set
	|| reversible.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter)
	|| ydk::is_set(reversible.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-id";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "overload" || name == "extended" || name == "oer" || name == "reversible")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::PoolWithVrf()
    :
    pool(this, {"name"})
{

    yang_name = "pool-with-vrf"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::~PoolWithVrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-with-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Pool()
    :
    name{YType::str, "name"}
        ,
    redundancy(this, {"name"})
    , vrf(this, {"name"})
{

    yang_name = "pool"; yang_parent_name = "pool-with-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::has_operation() const
{
    for (std::size_t index=0; index<redundancy.len(); index++)
    {
        if(redundancy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy>();
        ent_->parent = this;
        redundancy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redundancy.entities())
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

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::Redundancy()
    :
    name{YType::uint8, "name"}
        ,
    mapping_id(this, {"name"})
{

    yang_name = "redundancy"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::~Redundancy()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::has_operation() const
{
    for (std::size_t index=0; index<mapping_id.len(); index++)
    {
        if(mapping_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-id")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId>();
        ent_->parent = this;
        mapping_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-id" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::MappingId()
    :
    name{YType::uint32, "name"}
        ,
    vrf(this, {"name"})
{

    yang_name = "mapping-id"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::~MappingId()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-id";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::get_children() const
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

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::Vrf()
    :
    name{YType::str, "name"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    overload{YType::empty, "overload"}
{

    yang_name = "vrf"; yang_parent_name = "mapping-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_in_vrf.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-in-vrf" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::Vrf()
    :
    name{YType::str, "name"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    overload{YType::empty, "overload"}
{

    yang_name = "vrf"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_in_vrf.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-in-vrf" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::Interface()
    :
    name{YType::str, "name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "interface"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::InterfaceWithVrf()
    :
    interface(this, {"name"})
{

    yang_name = "interface-with-vrf"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::~InterfaceWithVrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-with-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Interface()
    :
    name{YType::str, "name"}
        ,
    vrf(this, {"vrf_name"})
{

    yang_name = "interface"; yang_parent_name = "interface-with-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "vrf"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| overload.is_set
	|| extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "overload" || name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::Static()
    :
    nat_static_transport_list_with_vrf(this, {"local_ip", "global_ip", "vrf"})
    , nat_static_transport_list(this, {"local_ip", "global_ip"})
    , nat_static_proto_transport_interface_list(this, {"proto", "local_ip", "local_port"})
    , nat_static_transport_interface_list(this, {"local_ip"})
{

    yang_name = "static"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::Static::~Static()
{
}

bool Native::Ip::Nat::Inside::Source::Static::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nat_static_transport_list_with_vrf.len(); index++)
    {
        if(nat_static_transport_list_with_vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_list.len(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nat_static_proto_transport_interface_list.len(); index++)
    {
        if(nat_static_proto_transport_interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_interface_list.len(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::Static::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_list_with_vrf.len(); index++)
    {
        if(nat_static_transport_list_with_vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_list.len(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nat_static_proto_transport_interface_list.len(); index++)
    {
        if(nat_static_proto_transport_interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_interface_list.len(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-list-with-vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf>();
        ent_->parent = this;
        nat_static_transport_list_with_vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nat-static-transport-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList>();
        ent_->parent = this;
        nat_static_transport_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nat-static-proto-transport-interface-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList>();
        ent_->parent = this;
        nat_static_proto_transport_interface_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nat-static-transport-interface-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList>();
        ent_->parent = this;
        nat_static_transport_interface_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nat_static_transport_list_with_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nat_static_transport_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nat_static_proto_transport_interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nat_static_transport_interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-list-with-vrf" || name == "nat-static-transport-list" || name == "nat-static-proto-transport-interface-list" || name == "nat-static-transport-interface-list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::NatStaticTransportListWithVrf()
    :
    local_ip{YType::str, "local-ip"},
    global_ip{YType::str, "global-ip"},
    vrf{YType::str, "vrf"},
    proto{YType::enumeration, "proto"},
    network{YType::empty, "network"},
    local_port{YType::uint16, "local-port"},
    mask{YType::str, "mask"},
    global_port{YType::uint16, "global-port"},
    extendable{YType::empty, "extendable"},
    no_alias{YType::empty, "no-alias"},
    no_payload{YType::empty, "no-payload"},
    route_map{YType::str, "route-map"},
    reversible{YType::empty, "reversible"},
    redundancy{YType::str, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    forced{YType::empty, "forced"},
    overload{YType::empty, "overload"}
{

    yang_name = "nat-static-transport-list-with-vrf"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::~NatStaticTransportListWithVrf()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::has_data() const
{
    if (is_presence_container) return true;
    return local_ip.is_set
	|| global_ip.is_set
	|| vrf.is_set
	|| proto.is_set
	|| network.is_set
	|| local_port.is_set
	|| mask.is_set
	|| global_port.is_set
	|| extendable.is_set
	|| no_alias.is_set
	|| no_payload.is_set
	|| route_map.is_set
	|| reversible.is_set
	|| redundancy.is_set
	|| mapping_id.is_set
	|| match_in_vrf.is_set
	|| forced.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_alias.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list-with-vrf";
    ADD_KEY_TOKEN(local_ip, "local-ip");
    ADD_KEY_TOKEN(global_ip, "global-ip");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_alias.is_set || is_set(no_alias.yfilter)) leaf_name_data.push_back(no_alias.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-alias")
    {
        no_alias = value;
        no_alias.value_namespace = name_space;
        no_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-alias")
    {
        no_alias.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ip" || name == "global-ip" || name == "vrf" || name == "proto" || name == "network" || name == "local-port" || name == "mask" || name == "global-port" || name == "extendable" || name == "no-alias" || name == "no-payload" || name == "route-map" || name == "reversible" || name == "redundancy" || name == "mapping-id" || name == "match-in-vrf" || name == "forced" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::NatStaticTransportList()
    :
    local_ip{YType::str, "local-ip"},
    global_ip{YType::str, "global-ip"},
    proto{YType::enumeration, "proto"},
    network{YType::empty, "network"},
    local_port{YType::uint16, "local-port"},
    mask{YType::str, "mask"},
    global_port{YType::uint16, "global-port"},
    extendable{YType::empty, "extendable"},
    no_alias{YType::empty, "no-alias"},
    no_payload{YType::empty, "no-payload"},
    route_map{YType::str, "route-map"},
    reversible{YType::empty, "reversible"},
    redundancy{YType::str, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"},
    forced{YType::empty, "forced"},
    overload{YType::empty, "overload"}
{

    yang_name = "nat-static-transport-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_data() const
{
    if (is_presence_container) return true;
    return local_ip.is_set
	|| global_ip.is_set
	|| proto.is_set
	|| network.is_set
	|| local_port.is_set
	|| mask.is_set
	|| global_port.is_set
	|| extendable.is_set
	|| no_alias.is_set
	|| no_payload.is_set
	|| route_map.is_set
	|| reversible.is_set
	|| redundancy.is_set
	|| mapping_id.is_set
	|| forced.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_alias.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list";
    ADD_KEY_TOKEN(local_ip, "local-ip");
    ADD_KEY_TOKEN(global_ip, "global-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_alias.is_set || is_set(no_alias.yfilter)) leaf_name_data.push_back(no_alias.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-alias")
    {
        no_alias = value;
        no_alias.value_namespace = name_space;
        no_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-alias")
    {
        no_alias.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ip" || name == "global-ip" || name == "proto" || name == "network" || name == "local-port" || name == "mask" || name == "global-port" || name == "extendable" || name == "no-alias" || name == "no-payload" || name == "route-map" || name == "reversible" || name == "redundancy" || name == "mapping-id" || name == "forced" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::NatStaticProtoTransportInterfaceList()
    :
    proto{YType::enumeration, "proto"},
    local_ip{YType::str, "local-ip"},
    local_port{YType::uint16, "local-port"},
    global_port{YType::uint16, "global-port"}
        ,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface>())
{
    interface->parent = this;

    yang_name = "nat-static-proto-transport-interface-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::~NatStaticProtoTransportInterfaceList()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| local_ip.is_set
	|| local_port.is_set
	|| global_port.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-proto-transport-interface-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(local_ip, "local-ip");
    ADD_KEY_TOKEN(local_port, "local-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "proto" || name == "local-ip" || name == "local-port" || name == "global-port")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "nat-static-proto-transport-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::has_operation() const
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

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::NatStaticTransportInterfaceList()
    :
    local_ip{YType::str, "local-ip"}
        ,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface>())
{
    interface->parent = this;

    yang_name = "nat-static-transport-interface-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::~NatStaticTransportInterfaceList()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    return local_ip.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-interface-list";
    ADD_KEY_TOKEN(local_ip, "local-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "local-ip")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "nat-static-transport-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_operation() const
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

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::Destination()
    :
    list(this, {"id"})
{

    yang_name = "destination"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Destination::~Destination()
{
}

bool Native::Ip::Nat::Inside::Destination::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Destination::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Inside::Destination::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Inside::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::List::List()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"}
{

    yang_name = "list"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Inside::Destination::List::~List()
{
}

bool Native::Ip::Nat::Inside::Destination::List::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| pool.is_set
	|| redundancy.is_set
	|| mapping_id.is_set;
}

bool Native::Ip::Nat::Inside::Destination::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/destination/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Destination::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Destination::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Inside::Destination::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Inside::Destination::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Inside::Destination::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Destination::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Destination::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "redundancy" || name == "mapping-id")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Outside()
    :
    source(std::make_shared<Native::Ip::Nat::Outside::Source>())
    , list(this, {"id"})
    , route_map(this, {"id"})
{
    source->parent = this;

    yang_name = "outside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Outside::~Outside()
{
}

bool Native::Ip::Nat::Outside::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (source !=  nullptr && source->has_data());
}

bool Native::Ip::Nat::Outside::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Nat::Outside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Outside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Outside::Source>();
        }
        return source;
    }

    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Outside::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Outside::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Outside::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Outside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "list" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Outside::Source::Static>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Outside::Source::~Source()
{
}

bool Native::Ip::Nat::Outside::Source::has_data() const
{
    if (is_presence_container) return true;
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Outside::Source::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Outside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Outside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Outside::Source::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Outside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Ip::Nat::Outside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static::Static()
    :
    nat_static_transport_list(this, {"global_ip", "local_ip"})
{

    yang_name = "static"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Outside::Source::Static::~Static()
{
}

bool Native::Ip::Nat::Outside::Source::Static::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nat_static_transport_list.len(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Outside::Source::Static::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_list.len(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Outside::Source::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList>();
        ent_->parent = this;
        nat_static_transport_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Outside::Source::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nat_static_transport_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Outside::Source::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-list")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::NatStaticTransportList()
    :
    global_ip{YType::str, "global-ip"},
    local_ip{YType::str, "local-ip"},
    vrf{YType::str, "vrf"},
    extendable{YType::empty, "extendable"},
    no_payload{YType::empty, "no-payload"}
{

    yang_name = "nat-static-transport-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_data() const
{
    if (is_presence_container) return true;
    return global_ip.is_set
	|| local_ip.is_set
	|| vrf.is_set
	|| extendable.is_set
	|| no_payload.is_set;
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_payload.yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list";
    ADD_KEY_TOKEN(global_ip, "global-ip");
    ADD_KEY_TOKEN(local_ip, "local-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ip" || name == "local-ip" || name == "vrf" || name == "extendable" || name == "no-payload")
        return true;
    return false;
}

Native::Ip::Nat::Outside::List::List()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    mapping_id{YType::uint32, "mapping-id"},
    vrf{YType::str, "vrf"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "list"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Outside::List::~List()
{
}

bool Native::Ip::Nat::Outside::List::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| pool.is_set
	|| mapping_id.is_set
	|| vrf.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Outside::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Outside::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Outside::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Outside::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Outside::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "mapping-id" || name == "vrf" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nat::Outside::RouteMap::RouteMap()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    mapping_id{YType::uint32, "mapping-id"},
    vrf{YType::str, "vrf"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "route-map"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Outside::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Outside::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| pool.is_set
	|| mapping_id.is_set
	|| vrf.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Outside::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Outside::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Outside::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Outside::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Outside::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "mapping-id" || name == "vrf" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nat::Translation::Translation()
    :
    dns_timeout(std::make_shared<Native::Ip::Nat::Translation::DnsTimeout>())
    , finrst_timeout(std::make_shared<Native::Ip::Nat::Translation::FinrstTimeout>())
    , icmp_timeout(std::make_shared<Native::Ip::Nat::Translation::IcmpTimeout>())
    , routemap_entry_timeout(std::make_shared<Native::Ip::Nat::Translation::RoutemapEntryTimeout>())
    , syn_timeout(std::make_shared<Native::Ip::Nat::Translation::SynTimeout>())
    , tcp_timeout(std::make_shared<Native::Ip::Nat::Translation::TcpTimeout>())
    , timeout(std::make_shared<Native::Ip::Nat::Translation::Timeout>())
    , udp_timeout(std::make_shared<Native::Ip::Nat::Translation::UdpTimeout>())
    , port_timeout(std::make_shared<Native::Ip::Nat::Translation::PortTimeout>())
    , max_entries(std::make_shared<Native::Ip::Nat::Translation::MaxEntries>())
{
    dns_timeout->parent = this;
    finrst_timeout->parent = this;
    icmp_timeout->parent = this;
    routemap_entry_timeout->parent = this;
    syn_timeout->parent = this;
    tcp_timeout->parent = this;
    timeout->parent = this;
    udp_timeout->parent = this;
    port_timeout->parent = this;
    max_entries->parent = this;

    yang_name = "translation"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::~Translation()
{
}

bool Native::Ip::Nat::Translation::has_data() const
{
    if (is_presence_container) return true;
    return (dns_timeout !=  nullptr && dns_timeout->has_data())
	|| (finrst_timeout !=  nullptr && finrst_timeout->has_data())
	|| (icmp_timeout !=  nullptr && icmp_timeout->has_data())
	|| (routemap_entry_timeout !=  nullptr && routemap_entry_timeout->has_data())
	|| (syn_timeout !=  nullptr && syn_timeout->has_data())
	|| (tcp_timeout !=  nullptr && tcp_timeout->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (udp_timeout !=  nullptr && udp_timeout->has_data())
	|| (port_timeout !=  nullptr && port_timeout->has_data())
	|| (max_entries !=  nullptr && max_entries->has_data());
}

bool Native::Ip::Nat::Translation::has_operation() const
{
    return is_set(yfilter)
	|| (dns_timeout !=  nullptr && dns_timeout->has_operation())
	|| (finrst_timeout !=  nullptr && finrst_timeout->has_operation())
	|| (icmp_timeout !=  nullptr && icmp_timeout->has_operation())
	|| (routemap_entry_timeout !=  nullptr && routemap_entry_timeout->has_operation())
	|| (syn_timeout !=  nullptr && syn_timeout->has_operation())
	|| (tcp_timeout !=  nullptr && tcp_timeout->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (udp_timeout !=  nullptr && udp_timeout->has_operation())
	|| (port_timeout !=  nullptr && port_timeout->has_operation())
	|| (max_entries !=  nullptr && max_entries->has_operation());
}

std::string Native::Ip::Nat::Translation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns-timeout")
    {
        if(dns_timeout == nullptr)
        {
            dns_timeout = std::make_shared<Native::Ip::Nat::Translation::DnsTimeout>();
        }
        return dns_timeout;
    }

    if(child_yang_name == "finrst-timeout")
    {
        if(finrst_timeout == nullptr)
        {
            finrst_timeout = std::make_shared<Native::Ip::Nat::Translation::FinrstTimeout>();
        }
        return finrst_timeout;
    }

    if(child_yang_name == "icmp-timeout")
    {
        if(icmp_timeout == nullptr)
        {
            icmp_timeout = std::make_shared<Native::Ip::Nat::Translation::IcmpTimeout>();
        }
        return icmp_timeout;
    }

    if(child_yang_name == "routemap-entry-timeout")
    {
        if(routemap_entry_timeout == nullptr)
        {
            routemap_entry_timeout = std::make_shared<Native::Ip::Nat::Translation::RoutemapEntryTimeout>();
        }
        return routemap_entry_timeout;
    }

    if(child_yang_name == "syn-timeout")
    {
        if(syn_timeout == nullptr)
        {
            syn_timeout = std::make_shared<Native::Ip::Nat::Translation::SynTimeout>();
        }
        return syn_timeout;
    }

    if(child_yang_name == "tcp-timeout")
    {
        if(tcp_timeout == nullptr)
        {
            tcp_timeout = std::make_shared<Native::Ip::Nat::Translation::TcpTimeout>();
        }
        return tcp_timeout;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Ip::Nat::Translation::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "udp-timeout")
    {
        if(udp_timeout == nullptr)
        {
            udp_timeout = std::make_shared<Native::Ip::Nat::Translation::UdpTimeout>();
        }
        return udp_timeout;
    }

    if(child_yang_name == "port-timeout")
    {
        if(port_timeout == nullptr)
        {
            port_timeout = std::make_shared<Native::Ip::Nat::Translation::PortTimeout>();
        }
        return port_timeout;
    }

    if(child_yang_name == "max-entries")
    {
        if(max_entries == nullptr)
        {
            max_entries = std::make_shared<Native::Ip::Nat::Translation::MaxEntries>();
        }
        return max_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns_timeout != nullptr)
    {
        _children["dns-timeout"] = dns_timeout;
    }

    if(finrst_timeout != nullptr)
    {
        _children["finrst-timeout"] = finrst_timeout;
    }

    if(icmp_timeout != nullptr)
    {
        _children["icmp-timeout"] = icmp_timeout;
    }

    if(routemap_entry_timeout != nullptr)
    {
        _children["routemap-entry-timeout"] = routemap_entry_timeout;
    }

    if(syn_timeout != nullptr)
    {
        _children["syn-timeout"] = syn_timeout;
    }

    if(tcp_timeout != nullptr)
    {
        _children["tcp-timeout"] = tcp_timeout;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    if(udp_timeout != nullptr)
    {
        _children["udp-timeout"] = udp_timeout;
    }

    if(port_timeout != nullptr)
    {
        _children["port-timeout"] = port_timeout;
    }

    if(max_entries != nullptr)
    {
        _children["max-entries"] = max_entries;
    }

    return _children;
}

void Native::Ip::Nat::Translation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-timeout" || name == "finrst-timeout" || name == "icmp-timeout" || name == "routemap-entry-timeout" || name == "syn-timeout" || name == "tcp-timeout" || name == "timeout" || name == "udp-timeout" || name == "port-timeout" || name == "max-entries")
        return true;
    return false;
}

Native::Ip::Nat::Translation::DnsTimeout::DnsTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "dns-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::DnsTimeout::~DnsTimeout()
{
}

bool Native::Ip::Nat::Translation::DnsTimeout::has_data() const
{
    if (is_presence_container) return true;
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::DnsTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::DnsTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::DnsTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::DnsTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::DnsTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::DnsTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::DnsTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::DnsTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::DnsTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::FinrstTimeout::FinrstTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "finrst-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::FinrstTimeout::~FinrstTimeout()
{
}

bool Native::Ip::Nat::Translation::FinrstTimeout::has_data() const
{
    if (is_presence_container) return true;
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::FinrstTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::FinrstTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::FinrstTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "finrst-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::FinrstTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::FinrstTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::FinrstTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::FinrstTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::FinrstTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::FinrstTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::IcmpTimeout::IcmpTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "icmp-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::IcmpTimeout::~IcmpTimeout()
{
}

bool Native::Ip::Nat::Translation::IcmpTimeout::has_data() const
{
    if (is_presence_container) return true;
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::IcmpTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::IcmpTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::IcmpTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::IcmpTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::IcmpTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::IcmpTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::IcmpTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::IcmpTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::IcmpTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::RoutemapEntryTimeout::RoutemapEntryTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "routemap-entry-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::RoutemapEntryTimeout::~RoutemapEntryTimeout()
{
}

bool Native::Ip::Nat::Translation::RoutemapEntryTimeout::has_data() const
{
    if (is_presence_container) return true;
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::RoutemapEntryTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routemap-entry-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::RoutemapEntryTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::RoutemapEntryTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::RoutemapEntryTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::SynTimeout::SynTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "syn-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::SynTimeout::~SynTimeout()
{
}

bool Native::Ip::Nat::Translation::SynTimeout::has_data() const
{
    if (is_presence_container) return true;
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::SynTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::SynTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::SynTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::SynTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::SynTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::SynTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::SynTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::SynTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::SynTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::TcpTimeout::TcpTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "tcp-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::TcpTimeout::~TcpTimeout()
{
}

bool Native::Ip::Nat::Translation::TcpTimeout::has_data() const
{
    if (is_presence_container) return true;
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::TcpTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::TcpTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::TcpTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::TcpTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::TcpTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::TcpTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::TcpTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::TcpTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::TcpTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::Timeout::Timeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::Timeout::~Timeout()
{
}

bool Native::Ip::Nat::Translation::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::Timeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::UdpTimeout::UdpTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "udp-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::UdpTimeout::~UdpTimeout()
{
}

bool Native::Ip::Nat::Translation::UdpTimeout::has_data() const
{
    if (is_presence_container) return true;
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::UdpTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::UdpTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::UdpTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::UdpTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::UdpTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::UdpTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::UdpTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::UdpTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::UdpTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::PortTimeout()
    :
    tcp(std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Tcp>())
    , udp(std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Udp>())
{
    tcp->parent = this;
    udp->parent = this;

    yang_name = "port-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::PortTimeout::~PortTimeout()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::has_data() const
{
    if (is_presence_container) return true;
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Ip::Nat::Translation::PortTimeout::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Ip::Nat::Translation::PortTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::PortTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::PortTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Ip::Nat::Translation::PortTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::PortTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::PortTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::Tcp::Tcp()
    :
    protocol(std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol>())
{
    protocol->parent = this;

    yang_name = "tcp"; yang_parent_name = "port-timeout"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::PortTimeout::Tcp::~Tcp()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Nat::Translation::PortTimeout::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/port-timeout/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::PortTimeout::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::PortTimeout::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    return _children;
}

void Native::Ip::Nat::Translation::PortTimeout::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::PortTimeout::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::Protocol()
    :
    port_numer{YType::uint16, "port-numer"},
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "protocol"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::~Protocol()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return port_numer.is_set
	|| time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_numer.yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/port-timeout/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_numer.is_set || is_set(port_numer.yfilter)) leaf_name_data.push_back(port_numer.get_name_leafdata());
    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-numer")
    {
        port_numer = value;
        port_numer.value_namespace = name_space;
        port_numer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-numer")
    {
        port_numer.yfilter = yfilter;
    }
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numer" || name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::Udp::Udp()
    :
    protocol(std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol>())
{
    protocol->parent = this;

    yang_name = "udp"; yang_parent_name = "port-timeout"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::PortTimeout::Udp::~Udp()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Nat::Translation::PortTimeout::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/port-timeout/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::PortTimeout::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::PortTimeout::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    return _children;
}

void Native::Ip::Nat::Translation::PortTimeout::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::PortTimeout::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::Protocol()
    :
    port_numer{YType::uint16, "port-numer"},
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "protocol"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::~Protocol()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return port_numer.is_set
	|| time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_numer.yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/port-timeout/udp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_numer.is_set || is_set(port_numer.yfilter)) leaf_name_data.push_back(port_numer.get_name_leafdata());
    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-numer")
    {
        port_numer = value;
        port_numer.value_namespace = name_space;
        port_numer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-numer")
    {
        port_numer.yfilter = yfilter;
    }
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numer" || name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::MaxEntries::MaxEntries()
    :
    host(this, {"host_ip"})
{

    yang_name = "max-entries"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::MaxEntries::~MaxEntries()
{
}

bool Native::Ip::Nat::Translation::MaxEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Translation::MaxEntries::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Translation::MaxEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::MaxEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::MaxEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::MaxEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Native::Ip::Nat::Translation::MaxEntries::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::MaxEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nat::Translation::MaxEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::MaxEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::MaxEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Ip::Nat::Translation::MaxEntries::Host::Host()
    :
    host_ip{YType::str, "host-ip"},
    number_of_entries{YType::uint32, "number-of-entries"}
{

    yang_name = "host"; yang_parent_name = "max-entries"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nat::Translation::MaxEntries::Host::~Host()
{
}

bool Native::Ip::Nat::Translation::MaxEntries::Host::has_data() const
{
    if (is_presence_container) return true;
    return host_ip.is_set
	|| number_of_entries.is_set;
}

bool Native::Ip::Nat::Translation::MaxEntries::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_ip.yfilter)
	|| ydk::is_set(number_of_entries.yfilter);
}

std::string Native::Ip::Nat::Translation::MaxEntries::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/max-entries/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::MaxEntries::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(host_ip, "host-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::MaxEntries::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_ip.is_set || is_set(host_ip.yfilter)) leaf_name_data.push_back(host_ip.get_name_leafdata());
    if (number_of_entries.is_set || is_set(number_of_entries.yfilter)) leaf_name_data.push_back(number_of_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nat::Translation::MaxEntries::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nat::Translation::MaxEntries::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nat::Translation::MaxEntries::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-ip")
    {
        host_ip = value;
        host_ip.value_namespace = name_space;
        host_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-entries")
    {
        number_of_entries = value;
        number_of_entries.value_namespace = name_space;
        number_of_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::MaxEntries::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-ip")
    {
        host_ip.yfilter = yfilter;
    }
    if(value_path == "number-of-entries")
    {
        number_of_entries.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::MaxEntries::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-ip" || name == "number-of-entries")
        return true;
    return false;
}

Native::Ip::Nbar::Nbar()
    :
    http_services{YType::empty, "http-services"}
        ,
    attribute(std::make_shared<Native::Ip::Nbar::Attribute>())
    , attribute_map(this, {"name"})
    , attribute_set(this, {"protocol_name"})
    , classification(std::make_shared<Native::Ip::Nbar::Classification>())
    , custom(this, {"name"})
    , protocol_pack(std::make_shared<Native::Ip::Nbar::ProtocolPack>())
{
    attribute->parent = this;
    classification->parent = this;
    protocol_pack->parent = this;

    yang_name = "nbar"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::~Nbar()
{
}

bool Native::Ip::Nbar::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_map.len(); index++)
    {
        if(attribute_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return http_services.is_set
	|| (attribute !=  nullptr && attribute->has_data())
	|| (classification !=  nullptr && classification->has_data())
	|| (protocol_pack !=  nullptr && protocol_pack->has_data());
}

bool Native::Ip::Nbar::has_operation() const
{
    for (std::size_t index=0; index<attribute_map.len(); index++)
    {
        if(attribute_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(http_services.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (classification !=  nullptr && classification->has_operation())
	|| (protocol_pack !=  nullptr && protocol_pack->has_operation());
}

std::string Native::Ip::Nbar::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http_services.is_set || is_set(http_services.yfilter)) leaf_name_data.push_back(http_services.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "attribute-map")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::AttributeMap>();
        ent_->parent = this;
        attribute_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "attribute-set")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::AttributeSet>();
        ent_->parent = this;
        attribute_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Ip::Nbar::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "custom")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom>();
        ent_->parent = this;
        custom.append(ent_);
        return ent_;
    }

    if(child_yang_name == "protocol-pack")
    {
        if(protocol_pack == nullptr)
        {
            protocol_pack = std::make_shared<Native::Ip::Nbar::ProtocolPack>();
        }
        return protocol_pack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    count_ = 0;
    for (auto ent_ : attribute_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : attribute_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(classification != nullptr)
    {
        _children["classification"] = classification;
    }

    count_ = 0;
    for (auto ent_ : custom.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(protocol_pack != nullptr)
    {
        _children["protocol-pack"] = protocol_pack;
    }

    return _children;
}

void Native::Ip::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "http-services")
    {
        http_services = value;
        http_services.value_namespace = name_space;
        http_services.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "http-services")
    {
        http_services.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "attribute-map" || name == "attribute-set" || name == "classification" || name == "custom" || name == "protocol-pack" || name == "http-services")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Attribute()
    :
    application_group(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>())
    , application_set(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet>())
    , category(std::make_shared<Native::Ip::Nbar::Attribute::Category>())
    , sub_category(std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>())
{
    application_group->parent = this;
    application_set->parent = this;
    category->parent = this;
    sub_category->parent = this;

    yang_name = "attribute"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return (application_group !=  nullptr && application_group->has_data())
	|| (application_set !=  nullptr && application_set->has_data())
	|| (category !=  nullptr && category->has_data())
	|| (sub_category !=  nullptr && sub_category->has_data());
}

bool Native::Ip::Nbar::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (application_set !=  nullptr && application_set->has_operation())
	|| (category !=  nullptr && category->has_operation())
	|| (sub_category !=  nullptr && sub_category->has_operation());
}

std::string Native::Ip::Nbar::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "application-set")
    {
        if(application_set == nullptr)
        {
            application_set = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet>();
        }
        return application_set;
    }

    if(child_yang_name == "category")
    {
        if(category == nullptr)
        {
            category = std::make_shared<Native::Ip::Nbar::Attribute::Category>();
        }
        return category;
    }

    if(child_yang_name == "sub-category")
    {
        if(sub_category == nullptr)
        {
            sub_category = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>();
        }
        return sub_category;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application_group != nullptr)
    {
        _children["application-group"] = application_group;
    }

    if(application_set != nullptr)
    {
        _children["application-set"] = application_set;
    }

    if(category != nullptr)
    {
        _children["category"] = category;
    }

    if(sub_category != nullptr)
    {
        _children["sub-category"] = sub_category;
    }

    return _children;
}

void Native::Ip::Nbar::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "category" || name == "sub-category")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::ApplicationGroup()
    :
    custom(this, {"name"})
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_operation() const
{
    for (std::size_t index=0; index<custom.len(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup::Custom>();
        ent_->parent = this;
        custom.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : custom.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::Icmp::RateLimit::Redirect::host {0, "host"};
const Enum::YLeaf Native::Ip::Icmp::RateLimit::Redirect::subnet {1, "subnet"};

const Enum::YLeaf Native::Ip::Nat::Pool::Type::match_host {0, "match-host"};
const Enum::YLeaf Native::Ip::Nat::Pool::Type::rotary {1, "rotary"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::Proto::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::Proto::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Proto::udp {1, "udp"};


}
}

