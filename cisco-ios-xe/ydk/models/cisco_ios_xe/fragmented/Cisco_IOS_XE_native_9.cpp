
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4Addr()
    :
    ipv4_des{YType::str, "ipv4_des"}
        ,
    vrf(this, {"name", "ipv4_source"})
    , ipv4(this, {"ipv4_source"})
{

    yang_name = "ipv4_addr"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::~Ipv4Addr()
{
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return ipv4_des.is_set;
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_des.yfilter);
}

std::string Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4_addr";
    ADD_KEY_TOKEN(ipv4_des, "ipv4_des");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_des.is_set || is_set(ipv4_des.yfilter)) leaf_name_data.push_back(ipv4_des.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::get_children() const
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

void Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4_des")
    {
        ipv4_des = value;
        ipv4_des.value_namespace = name_space;
        ipv4_des.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4_des")
    {
        ipv4_des.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "ipv4" || name == "ipv4_des")
        return true;
    return false;
}

Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::Vrf_()
    :
    name{YType::str, "name"},
    ipv4_source{YType::str, "ipv4_source"},
    group{YType::str, "group"},
    passive{YType::empty, "passive"},
    log{YType::empty, "log"},
    unassociate{YType::empty, "unassociate"}
{

    yang_name = "vrf"; yang_parent_name = "ipv4_addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::~Vrf_()
{
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ipv4_source.is_set
	|| group.is_set
	|| passive.is_set
	|| log.is_set
	|| unassociate.is_set;
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv4_source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(unassociate.yfilter);
}

std::string Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(ipv4_source, "ipv4_source");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv4_source.is_set || is_set(ipv4_source.yfilter)) leaf_name_data.push_back(ipv4_source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (unassociate.is_set || is_set(unassociate.yfilter)) leaf_name_data.push_back(unassociate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4_source")
    {
        ipv4_source = value;
        ipv4_source.value_namespace = name_space;
        ipv4_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unassociate")
    {
        unassociate = value;
        unassociate.value_namespace = name_space;
        unassociate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv4_source")
    {
        ipv4_source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "unassociate")
    {
        unassociate.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ipv4_source" || name == "group" || name == "passive" || name == "log" || name == "unassociate")
        return true;
    return false;
}

Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::Ipv4()
    :
    ipv4_source{YType::str, "ipv4_source"},
    group{YType::str, "group"},
    passive{YType::empty, "passive"},
    log{YType::empty, "log"},
    unassociate{YType::empty, "unassociate"}
{

    yang_name = "ipv4"; yang_parent_name = "ipv4_addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::~Ipv4()
{
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_source.is_set
	|| group.is_set
	|| passive.is_set
	|| log.is_set
	|| unassociate.is_set;
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(unassociate.yfilter);
}

std::string Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_source, "ipv4_source");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_source.is_set || is_set(ipv4_source.yfilter)) leaf_name_data.push_back(ipv4_source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (unassociate.is_set || is_set(unassociate.yfilter)) leaf_name_data.push_back(unassociate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4_source")
    {
        ipv4_source = value;
        ipv4_source.value_namespace = name_space;
        ipv4_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unassociate")
    {
        unassociate = value;
        unassociate.value_namespace = name_space;
        unassociate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4_source")
    {
        ipv4_source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "unassociate")
    {
        unassociate.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4_source" || name == "group" || name == "passive" || name == "log" || name == "unassociate")
        return true;
    return false;
}

Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::InstallRoutesRecurseViaNexthop()
    :
    all{YType::empty, "all"},
    install_routes_recurse_via_nexthop{YType::empty, "install-routes-recurse-via-nexthop"}
        ,
    recurse_nexthop(std::make_shared<Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop>())
{
    recurse_nexthop->parent = this;

    yang_name = "install-routes-recurse-via-nexthop"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::~InstallRoutesRecurseViaNexthop()
{
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| install_routes_recurse_via_nexthop.is_set
	|| (recurse_nexthop !=  nullptr && recurse_nexthop->has_data());
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(install_routes_recurse_via_nexthop.yfilter)
	|| (recurse_nexthop !=  nullptr && recurse_nexthop->has_operation());
}

std::string Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-routes-recurse-via-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (install_routes_recurse_via_nexthop.is_set || is_set(install_routes_recurse_via_nexthop.yfilter)) leaf_name_data.push_back(install_routes_recurse_via_nexthop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recurse-nexthop")
    {
        if(recurse_nexthop == nullptr)
        {
            recurse_nexthop = std::make_shared<Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop>();
        }
        return recurse_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recurse_nexthop != nullptr)
    {
        _children["recurse-nexthop"] = recurse_nexthop;
    }

    return _children;
}

void Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-routes-recurse-via-nexthop")
    {
        install_routes_recurse_via_nexthop = value;
        install_routes_recurse_via_nexthop.value_namespace = name_space;
        install_routes_recurse_via_nexthop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "install-routes-recurse-via-nexthop")
    {
        install_routes_recurse_via_nexthop.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recurse-nexthop" || name == "all" || name == "install-routes-recurse-via-nexthop")
        return true;
    return false;
}

Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::RecurseNexthop()
    :
    route_map{YType::str, "route-map"},
    multicast{YType::empty, "multicast"}
        ,
    topology(this, {"topology_id"})
    , vrf(this, {"vrf_id"})
{

    yang_name = "recurse-nexthop"; yang_parent_name = "install-routes-recurse-via-nexthop"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::~RecurseNexthop()
{
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_map.is_set
	|| multicast.is_set;
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::has_operation() const
{
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/install-routes-recurse-via-nexthop/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recurse-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology>();
        ent_->parent = this;
        topology.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology.entities())
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

void Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "vrf" || name == "route-map" || name == "multicast")
        return true;
    return false;
}

Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::Topology()
    :
    topology_id{YType::str, "topology-id"},
    route_map{YType::str, "route-map"},
    multicast{YType::empty, "multicast"}
{

    yang_name = "topology"; yang_parent_name = "recurse-nexthop"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::~Topology()
{
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| route_map.is_set
	|| multicast.is_set;
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/install-routes-recurse-via-nexthop/recurse-nexthop/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    ADD_KEY_TOKEN(topology_id, "topology-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-id" || name == "route-map" || name == "multicast")
        return true;
    return false;
}

Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::Vrf()
    :
    vrf_id{YType::str, "vrf-id"},
    route_map{YType::str, "route-map"},
    multicast{YType::empty, "multicast"}
{

    yang_name = "vrf"; yang_parent_name = "recurse-nexthop"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::~Vrf()
{
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_id.is_set
	|| route_map.is_set
	|| multicast.is_set;
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/install-routes-recurse-via-nexthop/recurse-nexthop/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_id, "vrf-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-id" || name == "route-map" || name == "multicast")
        return true;
    return false;
}

Native::Ip::Route::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    topology(this, {"name"})
    , ip_route_interface_forwarding_list(this, {"prefix", "mask"})
{

    yang_name = "vrf"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Vrf::~Vrf()
{
}

bool Native::Ip::Route::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.len(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Route::Vrf::has_operation() const
{
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.len(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Route::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Vrf::Topology>();
        ent_->parent = this;
        topology.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList>();
        ent_->parent = this;
        ip_route_interface_forwarding_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip_route_interface_forwarding_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "ip-route-interface-forwarding-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Route::Vrf::Topology::Topology()
    :
    name{YType::str, "name"}
        ,
    ip_route_interface_forwarding_list(this, {"prefix", "mask"})
{

    yang_name = "topology"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Vrf::Topology::~Topology()
{
}

bool Native::Ip::Route::Vrf::Topology::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.len(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Route::Vrf::Topology::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.len(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Route::Vrf::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Vrf::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList>();
        ent_->parent = this;
        ip_route_interface_forwarding_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Vrf::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_route_interface_forwarding_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Vrf::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-route-interface-forwarding-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"}
        ,
    fwd_list(this, {"fwd"})
{

    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwd_list.len(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set
	|| dhcp.is_set
	|| metric.is_set;
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.len(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList>();
        ent_->parent = this;
        fwd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fwd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd-list" || name == "prefix" || name == "mask" || name == "dhcp" || name == "metric")
        return true;
    return false;
}

Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
        ,
    interface_next_hop(this, {"ip_address"})
{

    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_data())
            return true;
    }
    return fwd.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list";
    ADD_KEY_TOKEN(fwd, "fwd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-next-hop")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop>();
        ent_->parent = this;
        interface_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-next-hop" || name == "fwd" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::InterfaceNextHop()
    :
    ip_address{YType::str, "ip-address"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "interface-next-hop"; yang_parent_name = "fwd-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::~InterfaceNextHop()
{
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-next-hop";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"}
        ,
    fwd_list(this, {"fwd"})
{

    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwd_list.len(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set
	|| dhcp.is_set
	|| metric.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.len(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList>();
        ent_->parent = this;
        fwd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fwd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd-list" || name == "prefix" || name == "mask" || name == "dhcp" || name == "metric")
        return true;
    return false;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
        ,
    interface_next_hop(this, {"ip_address"})
{

    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_data())
            return true;
    }
    return fwd.is_set
	|| dhcp.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list";
    ADD_KEY_TOKEN(fwd, "fwd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-next-hop")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop>();
        ent_->parent = this;
        interface_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-next-hop" || name == "fwd" || name == "dhcp" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::InterfaceNextHop()
    :
    ip_address{YType::str, "ip-address"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "interface-next-hop"; yang_parent_name = "fwd-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::~InterfaceNextHop()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-next-hop";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Topology::Topology()
    :
    name{YType::str, "name"}
        ,
    ip_route_interface_forwarding_list(this, {"prefix", "mask"})
{

    yang_name = "topology"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Route::Topology::~Topology()
{
}

bool Native::Ip::Route::Topology::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.len(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Route::Topology::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.len(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Route::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Route::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Topology::IpRouteInterfaceForwardingList>();
        ent_->parent = this;
        ip_route_interface_forwarding_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_route_interface_forwarding_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-route-interface-forwarding-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"}
        ,
    fwd_list(this, {"fwd"})
{

    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwd_list.len(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set
	|| dhcp.is_set
	|| metric.is_set;
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.len(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList>();
        ent_->parent = this;
        fwd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fwd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwd-list" || name == "prefix" || name == "mask" || name == "dhcp" || name == "metric")
        return true;
    return false;
}

Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    dhcp{YType::empty, "dhcp"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
        ,
    interface_next_hop(this, {"ip_address"})
{

    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_data())
            return true;
    }
    return fwd.is_set
	|| dhcp.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list";
    ADD_KEY_TOKEN(fwd, "fwd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-next-hop")
    {
        auto ent_ = std::make_shared<Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop>();
        ent_->parent = this;
        interface_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-next-hop" || name == "fwd" || name == "dhcp" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::InterfaceNextHop()
    :
    ip_address{YType::str, "ip-address"},
    metric{YType::uint8, "metric"},
    global{YType::empty, "global"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    multicast{YType::empty, "multicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{

    yang_name = "interface-next-hop"; yang_parent_name = "fwd-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::~InterfaceNextHop()
{
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| metric.is_set
	|| global.is_set
	|| name.is_set
	|| permanent.is_set
	|| multicast.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-next-hop";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "metric" || name == "global" || name == "name" || name == "permanent" || name == "multicast" || name == "tag" || name == "track")
        return true;
    return false;
}

Native::Ip::Routing::Routing()
    :
    protocol(std::make_shared<Native::Ip::Routing::Protocol>())
{
    protocol->parent = this;

    yang_name = "routing"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Routing::~Routing()
{
}

bool Native::Ip::Routing::has_data() const
{
    if (is_presence_container) return true;
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Routing::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Routing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Routing::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    return _children;
}

void Native::Ip::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Ip::Routing::Protocol::Protocol()
    :
    purge(std::make_shared<Native::Ip::Routing::Protocol::Purge>())
{
    purge->parent = this;

    yang_name = "protocol"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Routing::Protocol::~Protocol()
{
}

bool Native::Ip::Routing::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return (purge !=  nullptr && purge->has_data());
}

bool Native::Ip::Routing::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (purge !=  nullptr && purge->has_operation());
}

std::string Native::Ip::Routing::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Routing::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "purge")
    {
        if(purge == nullptr)
        {
            purge = std::make_shared<Native::Ip::Routing::Protocol::Purge>();
        }
        return purge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Routing::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(purge != nullptr)
    {
        _children["purge"] = purge;
    }

    return _children;
}

void Native::Ip::Routing::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Routing::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Routing::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "purge")
        return true;
    return false;
}

Native::Ip::Routing::Protocol::Purge::Purge()
    :
    interface{YType::boolean, "interface"}
{

    yang_name = "purge"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Routing::Protocol::Purge::~Purge()
{
}

bool Native::Ip::Routing::Protocol::Purge::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::Ip::Routing::Protocol::Purge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Ip::Routing::Protocol::Purge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/routing/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Routing::Protocol::Purge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "purge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Routing::Protocol::Purge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Routing::Protocol::Purge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Routing::Protocol::Purge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Routing::Protocol::Purge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Routing::Protocol::Purge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Routing::Protocol::Purge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Ip::ExplicitPath::ExplicitPath()
    :
    identifier(this, {"pnum"})
    , name(this, {"pname"})
{

    yang_name = "explicit-path"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ExplicitPath::~ExplicitPath()
{
}

bool Native::Ip::ExplicitPath::has_data() const
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

bool Native::Ip::ExplicitPath::has_operation() const
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

std::string Native::Ip::ExplicitPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        auto ent_ = std::make_shared<Native::Ip::ExplicitPath::Identifier>();
        ent_->parent = this;
        identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "name")
    {
        auto ent_ = std::make_shared<Native::Ip::ExplicitPath::Name>();
        ent_->parent = this;
        name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExplicitPath::get_children() const
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

void Native::Ip::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Identifier::Identifier()
    :
    pnum{YType::uint16, "pnum"},
    mode{YType::enumeration, "mode"}
        ,
    index_(this, {"idx"})
{

    yang_name = "identifier"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ExplicitPath::Identifier::~Identifier()
{
}

bool Native::Ip::ExplicitPath::Identifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<index_.len(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return pnum.is_set
	|| mode.is_set;
}

bool Native::Ip::ExplicitPath::Identifier::has_operation() const
{
    for (std::size_t index=0; index<index_.len(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Ip::ExplicitPath::Identifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/explicit-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExplicitPath::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    ADD_KEY_TOKEN(pnum, "pnum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExplicitPath::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        auto ent_ = std::make_shared<Native::Ip::ExplicitPath::Identifier::Index>();
        ent_->parent = this;
        index_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExplicitPath::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : index_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExplicitPath::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "pnum" || name == "mode")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Identifier::Index::Index()
    :
    idx{YType::uint32, "idx"},
    next_label{YType::uint32, "next-label"},
    exclude_address{YType::str, "exclude-address"},
    exclude_srlg{YType::str, "exclude-srlg"}
        ,
    next_address(std::make_shared<Native::Ip::ExplicitPath::Identifier::Index::NextAddress>())
{
    next_address->parent = this;

    yang_name = "index"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExplicitPath::Identifier::Index::~Index()
{
}

bool Native::Ip::ExplicitPath::Identifier::Index::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| next_label.is_set
	|| exclude_address.is_set
	|| exclude_srlg.is_set
	|| (next_address !=  nullptr && next_address->has_data());
}

bool Native::Ip::ExplicitPath::Identifier::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(exclude_address.yfilter)
	|| ydk::is_set(exclude_srlg.yfilter)
	|| (next_address !=  nullptr && next_address->has_operation());
}

std::string Native::Ip::ExplicitPath::Identifier::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Identifier::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (exclude_address.is_set || is_set(exclude_address.yfilter)) leaf_name_data.push_back(exclude_address.get_name_leafdata());
    if (exclude_srlg.is_set || is_set(exclude_srlg.yfilter)) leaf_name_data.push_back(exclude_srlg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExplicitPath::Identifier::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-address")
    {
        if(next_address == nullptr)
        {
            next_address = std::make_shared<Native::Ip::ExplicitPath::Identifier::Index::NextAddress>();
        }
        return next_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExplicitPath::Identifier::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_address != nullptr)
    {
        _children["next-address"] = next_address;
    }

    return _children;
}

void Native::Ip::ExplicitPath::Identifier::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-address")
    {
        exclude_address = value;
        exclude_address.value_namespace = name_space;
        exclude_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg")
    {
        exclude_srlg = value;
        exclude_srlg.value_namespace = name_space;
        exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Identifier::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
    if(value_path == "exclude-address")
    {
        exclude_address.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg")
    {
        exclude_srlg.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Identifier::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-address" || name == "idx" || name == "next-label" || name == "exclude-address" || name == "exclude-srlg")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Identifier::Index::NextAddress::NextAddress()
    :
    loose{YType::empty, "loose"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "next-address"; yang_parent_name = "index"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExplicitPath::Identifier::Index::NextAddress::~NextAddress()
{
}

bool Native::Ip::ExplicitPath::Identifier::Index::NextAddress::has_data() const
{
    if (is_presence_container) return true;
    return loose.is_set
	|| ipv4.is_set;
}

bool Native::Ip::ExplicitPath::Identifier::Index::NextAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Ip::ExplicitPath::Identifier::Index::NextAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Identifier::Index::NextAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExplicitPath::Identifier::Index::NextAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExplicitPath::Identifier::Index::NextAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExplicitPath::Identifier::Index::NextAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Identifier::Index::NextAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Identifier::Index::NextAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose" || name == "ipv4")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Name::Name()
    :
    pname{YType::str, "pname"},
    mode{YType::enumeration, "mode"}
        ,
    index_(this, {"idx"})
{

    yang_name = "name"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::ExplicitPath::Name::~Name()
{
}

bool Native::Ip::ExplicitPath::Name::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<index_.len(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return pname.is_set
	|| mode.is_set;
}

bool Native::Ip::ExplicitPath::Name::has_operation() const
{
    for (std::size_t index=0; index<index_.len(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Ip::ExplicitPath::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/explicit-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExplicitPath::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(pname, "pname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExplicitPath::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        auto ent_ = std::make_shared<Native::Ip::ExplicitPath::Name::Index>();
        ent_->parent = this;
        index_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExplicitPath::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : index_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::ExplicitPath::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "pname" || name == "mode")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Name::Index::Index()
    :
    idx{YType::uint32, "idx"},
    next_label{YType::uint32, "next-label"},
    exclude_address{YType::str, "exclude-address"},
    exclude_srlg{YType::str, "exclude-srlg"}
        ,
    next_address(std::make_shared<Native::Ip::ExplicitPath::Name::Index::NextAddress>())
{
    next_address->parent = this;

    yang_name = "index"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExplicitPath::Name::Index::~Index()
{
}

bool Native::Ip::ExplicitPath::Name::Index::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| next_label.is_set
	|| exclude_address.is_set
	|| exclude_srlg.is_set
	|| (next_address !=  nullptr && next_address->has_data());
}

bool Native::Ip::ExplicitPath::Name::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(exclude_address.yfilter)
	|| ydk::is_set(exclude_srlg.yfilter)
	|| (next_address !=  nullptr && next_address->has_operation());
}

std::string Native::Ip::ExplicitPath::Name::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Name::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (exclude_address.is_set || is_set(exclude_address.yfilter)) leaf_name_data.push_back(exclude_address.get_name_leafdata());
    if (exclude_srlg.is_set || is_set(exclude_srlg.yfilter)) leaf_name_data.push_back(exclude_srlg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExplicitPath::Name::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-address")
    {
        if(next_address == nullptr)
        {
            next_address = std::make_shared<Native::Ip::ExplicitPath::Name::Index::NextAddress>();
        }
        return next_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExplicitPath::Name::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_address != nullptr)
    {
        _children["next-address"] = next_address;
    }

    return _children;
}

void Native::Ip::ExplicitPath::Name::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-address")
    {
        exclude_address = value;
        exclude_address.value_namespace = name_space;
        exclude_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg")
    {
        exclude_srlg = value;
        exclude_srlg.value_namespace = name_space;
        exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Name::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
    if(value_path == "exclude-address")
    {
        exclude_address.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg")
    {
        exclude_srlg.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Name::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-address" || name == "idx" || name == "next-label" || name == "exclude-address" || name == "exclude-srlg")
        return true;
    return false;
}

Native::Ip::ExplicitPath::Name::Index::NextAddress::NextAddress()
    :
    loose{YType::empty, "loose"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "next-address"; yang_parent_name = "index"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::ExplicitPath::Name::Index::NextAddress::~NextAddress()
{
}

bool Native::Ip::ExplicitPath::Name::Index::NextAddress::has_data() const
{
    if (is_presence_container) return true;
    return loose.is_set
	|| ipv4.is_set;
}

bool Native::Ip::ExplicitPath::Name::Index::NextAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Ip::ExplicitPath::Name::Index::NextAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExplicitPath::Name::Index::NextAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::ExplicitPath::Name::Index::NextAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::ExplicitPath::Name::Index::NextAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::ExplicitPath::Name::Index::NextAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExplicitPath::Name::Index::NextAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Ip::ExplicitPath::Name::Index::NextAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose" || name == "ipv4")
        return true;
    return false;
}

Native::Ip::Scp::Scp()
    :
    server(std::make_shared<Native::Ip::Scp::Server>())
{
    server->parent = this;

    yang_name = "scp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Scp::~Scp()
{
}

bool Native::Ip::Scp::has_data() const
{
    if (is_presence_container) return true;
    return (server !=  nullptr && server->has_data());
}

bool Native::Ip::Scp::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Scp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Scp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Scp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Scp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Scp::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Scp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Ip::Scp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Scp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Scp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Scp::Server::Server()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "server"; yang_parent_name = "scp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Scp::Server::~Server()
{
}

bool Native::Ip::Scp::Server::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Ip::Scp::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ip::Scp::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/scp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Scp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Scp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Scp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Scp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Scp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Scp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Scp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Ip::Spd::Spd()
    :
    mode{YType::enumeration, "mode"}
        ,
    queue(std::make_shared<Native::Ip::Spd::Queue>())
{
    queue->parent = this;

    yang_name = "spd"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Spd::~Spd()
{
}

bool Native::Ip::Spd::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Ip::Spd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Ip::Spd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Spd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Spd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Spd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Ip::Spd::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Spd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    return _children;
}

void Native::Ip::Spd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Spd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ip::Spd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "mode")
        return true;
    return false;
}

Native::Ip::Spd::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "spd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Spd::Queue::~Queue()
{
}

bool Native::Ip::Spd::Queue::has_data() const
{
    if (is_presence_container) return true;
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Ip::Spd::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::Ip::Spd::Queue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/spd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Spd::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Spd::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Spd::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Spd::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Spd::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Spd::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Spd::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::Ip::Bootp::Bootp()
    :
    server{YType::boolean, "server"}
{

    yang_name = "bootp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Bootp::~Bootp()
{
}

bool Native::Ip::Bootp::has_data() const
{
    if (is_presence_container) return true;
    return server.is_set;
}

bool Native::Ip::Bootp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Ip::Bootp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Bootp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Bootp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Bootp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Ip::Bootp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Ssh::Ssh()
    :
    authentication_retries{YType::uint8, "authentication-retries"},
    dscp{YType::uint8, "dscp"},
    precedence{YType::uint8, "precedence"},
    source_interface{YType::str, "source-interface"},
    time_out{YType::uint8, "time-out"},
    version{YType::uint8, "version"},
    maxstartups{YType::uint8, "maxstartups"}
        ,
    client(std::make_shared<Native::Ip::Ssh::Client>())
    , logging(std::make_shared<Native::Ip::Ssh::Logging>())
    , pubkey_chain(std::make_shared<Native::Ip::Ssh::PubkeyChain>())
    , rsa(std::make_shared<Native::Ip::Ssh::Rsa>())
    , server(std::make_shared<Native::Ip::Ssh::Server>())
    , port(this, {"port_no"})
{
    client->parent = this;
    logging->parent = this;
    pubkey_chain->parent = this;
    rsa->parent = this;
    server->parent = this;

    yang_name = "ssh"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::~Ssh()
{
}

bool Native::Ip::Ssh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return authentication_retries.is_set
	|| dscp.is_set
	|| precedence.is_set
	|| source_interface.is_set
	|| time_out.is_set
	|| version.is_set
	|| maxstartups.is_set
	|| (client !=  nullptr && client->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (rsa !=  nullptr && rsa->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ip::Ssh::has_operation() const
{
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authentication_retries.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(time_out.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(maxstartups.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_retries.is_set || is_set(authentication_retries.yfilter)) leaf_name_data.push_back(authentication_retries.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (time_out.is_set || is_set(time_out.yfilter)) leaf_name_data.push_back(time_out.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (maxstartups.is_set || is_set(maxstartups.yfilter)) leaf_name_data.push_back(maxstartups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Ip::Ssh::Client>();
        }
        return client;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Ssh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Ip::Ssh::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Ip::Ssh::Rsa>();
        }
        return rsa;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Ssh::Server>();
        }
        return server;
    }

    if(child_yang_name == "port")
    {
        auto ent_ = std::make_shared<Native::Ip::Ssh::Port>();
        ent_->parent = this;
        port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(pubkey_chain != nullptr)
    {
        _children["pubkey-chain"] = pubkey_chain;
    }

    if(rsa != nullptr)
    {
        _children["rsa"] = rsa;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    count_ = 0;
    for (auto ent_ : port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-retries")
    {
        authentication_retries = value;
        authentication_retries.value_namespace = name_space;
        authentication_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-out")
    {
        time_out = value;
        time_out.value_namespace = name_space;
        time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxstartups")
    {
        maxstartups = value;
        maxstartups.value_namespace = name_space;
        maxstartups.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-retries")
    {
        authentication_retries.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "time-out")
    {
        time_out.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "maxstartups")
    {
        maxstartups.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "logging" || name == "pubkey-chain" || name == "rsa" || name == "server" || name == "port" || name == "authentication-retries" || name == "dscp" || name == "precedence" || name == "source-interface" || name == "time-out" || name == "version" || name == "maxstartups")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Client()
    :
    algorithm(std::make_shared<Native::Ip::Ssh::Client::Algorithm>())
{
    algorithm->parent = this;

    yang_name = "client"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Client::~Client()
{
}

bool Native::Ip::Ssh::Client::has_data() const
{
    if (is_presence_container) return true;
    return (algorithm !=  nullptr && algorithm->has_data());
}

bool Native::Ip::Ssh::Client::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation());
}

std::string Native::Ip::Ssh::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Ssh::Client::Algorithm>();
        }
        return algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(algorithm != nullptr)
    {
        _children["algorithm"] = algorithm;
    }

    return _children;
}

void Native::Ip::Ssh::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Algorithm::Algorithm()
    :
    encryption(std::make_shared<Native::Ip::Ssh::Client::Algorithm::Encryption>())
{
    encryption->parent = this;

    yang_name = "algorithm"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Client::Algorithm::~Algorithm()
{
}

bool Native::Ip::Ssh::Client::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Ip::Ssh::Client::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Ip::Ssh::Client::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Client::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Ip::Ssh::Client::Algorithm::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Client::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    return _children;
}

void Native::Ip::Ssh::Client::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Client::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Client::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Algorithm::Encryption::Encryption()
    :
    aes128_ctr{YType::empty, "aes128-ctr"},
    aes192_ctr{YType::empty, "aes192-ctr"},
    aes256_ctr{YType::empty, "aes256-ctr"}
{

    yang_name = "encryption"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Client::Algorithm::Encryption::~Encryption()
{
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return aes128_ctr.is_set
	|| aes192_ctr.is_set
	|| aes256_ctr.is_set;
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes128_ctr.yfilter)
	|| ydk::is_set(aes192_ctr.yfilter)
	|| ydk::is_set(aes256_ctr.yfilter);
}

std::string Native::Ip::Ssh::Client::Algorithm::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/client/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::Algorithm::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::Algorithm::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes128_ctr.is_set || is_set(aes128_ctr.yfilter)) leaf_name_data.push_back(aes128_ctr.get_name_leafdata());
    if (aes192_ctr.is_set || is_set(aes192_ctr.yfilter)) leaf_name_data.push_back(aes192_ctr.get_name_leafdata());
    if (aes256_ctr.is_set || is_set(aes256_ctr.yfilter)) leaf_name_data.push_back(aes256_ctr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Client::Algorithm::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Client::Algorithm::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Client::Algorithm::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr = value;
        aes128_ctr.value_namespace = name_space;
        aes128_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr = value;
        aes192_ctr.value_namespace = name_space;
        aes192_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr = value;
        aes256_ctr.value_namespace = name_space;
        aes256_ctr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Client::Algorithm::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr.yfilter = yfilter;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr.yfilter = yfilter;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes128-ctr" || name == "aes192-ctr" || name == "aes256-ctr")
        return true;
    return false;
}

Native::Ip::Ssh::Logging::Logging()
    :
    events{YType::empty, "events"}
{

    yang_name = "logging"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Logging::~Logging()
{
}

bool Native::Ip::Ssh::Logging::has_data() const
{
    if (is_presence_container) return true;
    return events.is_set;
}

bool Native::Ip::Ssh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events.yfilter);
}

std::string Native::Ip::Ssh::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events.is_set || is_set(events.yfilter)) leaf_name_data.push_back(events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events")
    {
        events = value;
        events.value_namespace = name_space;
        events.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events")
    {
        events.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::PubkeyChain()
    :
    username(this, {"name"})
{

    yang_name = "pubkey-chain"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::PubkeyChain::~PubkeyChain()
{
}

bool Native::Ip::Ssh::PubkeyChain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Ssh::PubkeyChain::has_operation() const
{
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        auto ent_ = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username>();
        ent_->parent = this;
        username.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : username.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Ssh::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::Username::Username()
    :
    name{YType::str, "name"}
        ,
    key_hash(this, {"key_type", "key_hash_value"})
{

    yang_name = "username"; yang_parent_name = "pubkey-chain"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::PubkeyChain::Username::~Username()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key_hash.len(); index++)
    {
        if(key_hash[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_operation() const
{
    for (std::size_t index=0; index<key_hash.len(); index++)
    {
        if(key_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/pubkey-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::PubkeyChain::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-hash")
    {
        auto ent_ = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username::KeyHash>();
        ent_->parent = this;
        key_hash.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::PubkeyChain::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key_hash.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Ssh::PubkeyChain::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::PubkeyChain::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-hash" || name == "name")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyHash()
    :
    key_type{YType::enumeration, "key-type"},
    key_hash_value{YType::str, "key-hash-value"}
{

    yang_name = "key-hash"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Ssh::PubkeyChain::Username::KeyHash::~KeyHash()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_data() const
{
    if (is_presence_container) return true;
    return key_type.is_set
	|| key_hash_value.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(key_hash_value.yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-hash";
    ADD_KEY_TOKEN(key_type, "key-type");
    ADD_KEY_TOKEN(key_hash_value, "key-hash-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (key_hash_value.is_set || is_set(key_hash_value.yfilter)) leaf_name_data.push_back(key_hash_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::PubkeyChain::Username::KeyHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-hash-value")
    {
        key_hash_value = value;
        key_hash_value.value_namespace = name_space;
        key_hash_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::PubkeyChain::Username::KeyHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "key-hash-value")
    {
        key_hash_value.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-type" || name == "key-hash-value")
        return true;
    return false;
}

Native::Ip::Ssh::Rsa::Rsa()
    :
    keypair_name{YType::str, "keypair-name"}
{

    yang_name = "rsa"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Rsa::~Rsa()
{
}

bool Native::Ip::Ssh::Rsa::has_data() const
{
    if (is_presence_container) return true;
    return keypair_name.is_set;
}

bool Native::Ip::Ssh::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keypair_name.yfilter);
}

std::string Native::Ip::Ssh::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keypair_name.is_set || is_set(keypair_name.yfilter)) leaf_name_data.push_back(keypair_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keypair-name")
    {
        keypair_name = value;
        keypair_name.value_namespace = name_space;
        keypair_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keypair-name")
    {
        keypair_name.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keypair-name")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Server()
    :
    algorithm(std::make_shared<Native::Ip::Ssh::Server::Algorithm>())
    , peruser(std::make_shared<Native::Ip::Ssh::Server::Peruser>())
{
    algorithm->parent = this;
    peruser->parent = this;

    yang_name = "server"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::~Server()
{
}

bool Native::Ip::Ssh::Server::has_data() const
{
    if (is_presence_container) return true;
    return (algorithm !=  nullptr && algorithm->has_data())
	|| (peruser !=  nullptr && peruser->has_data());
}

bool Native::Ip::Ssh::Server::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (peruser !=  nullptr && peruser->has_operation());
}

std::string Native::Ip::Ssh::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Ssh::Server::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "peruser")
    {
        if(peruser == nullptr)
        {
            peruser = std::make_shared<Native::Ip::Ssh::Server::Peruser>();
        }
        return peruser;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(algorithm != nullptr)
    {
        _children["algorithm"] = algorithm;
    }

    if(peruser != nullptr)
    {
        _children["peruser"] = peruser;
    }

    return _children;
}

void Native::Ip::Ssh::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "peruser")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Algorithm::Algorithm()
    :
    encryption(std::make_shared<Native::Ip::Ssh::Server::Algorithm::Encryption>())
{
    encryption->parent = this;

    yang_name = "algorithm"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::Algorithm::~Algorithm()
{
}

bool Native::Ip::Ssh::Server::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Ip::Ssh::Server::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Ip::Ssh::Server::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Ip::Ssh::Server::Algorithm::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    return _children;
}

void Native::Ip::Ssh::Server::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Server::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Server::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Algorithm::Encryption::Encryption()
    :
    aes128_ctr{YType::empty, "aes128-ctr"},
    aes192_ctr{YType::empty, "aes192-ctr"},
    aes256_ctr{YType::empty, "aes256-ctr"}
{

    yang_name = "encryption"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::Algorithm::Encryption::~Encryption()
{
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return aes128_ctr.is_set
	|| aes192_ctr.is_set
	|| aes256_ctr.is_set;
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes128_ctr.yfilter)
	|| ydk::is_set(aes192_ctr.yfilter)
	|| ydk::is_set(aes256_ctr.yfilter);
}

std::string Native::Ip::Ssh::Server::Algorithm::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Algorithm::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Algorithm::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes128_ctr.is_set || is_set(aes128_ctr.yfilter)) leaf_name_data.push_back(aes128_ctr.get_name_leafdata());
    if (aes192_ctr.is_set || is_set(aes192_ctr.yfilter)) leaf_name_data.push_back(aes192_ctr.get_name_leafdata());
    if (aes256_ctr.is_set || is_set(aes256_ctr.yfilter)) leaf_name_data.push_back(aes256_ctr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::Algorithm::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::Algorithm::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Server::Algorithm::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr = value;
        aes128_ctr.value_namespace = name_space;
        aes128_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr = value;
        aes192_ctr.value_namespace = name_space;
        aes192_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr = value;
        aes256_ctr.value_namespace = name_space;
        aes256_ctr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Server::Algorithm::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr.yfilter = yfilter;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr.yfilter = yfilter;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes128-ctr" || name == "aes192-ctr" || name == "aes256-ctr")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Peruser::Peruser()
    :
    session(std::make_shared<Native::Ip::Ssh::Server::Peruser::Session>())
{
    session->parent = this;

    yang_name = "peruser"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::Peruser::~Peruser()
{
}

bool Native::Ip::Ssh::Server::Peruser::has_data() const
{
    if (is_presence_container) return true;
    return (session !=  nullptr && session->has_data());
}

bool Native::Ip::Ssh::Server::Peruser::has_operation() const
{
    return is_set(yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Ip::Ssh::Server::Peruser::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Peruser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peruser";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Peruser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::Peruser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Ip::Ssh::Server::Peruser::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::Peruser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void Native::Ip::Ssh::Server::Peruser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Server::Peruser::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Server::Peruser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Peruser::Session::Session()
    :
    limit{YType::uint8, "limit"}
{

    yang_name = "session"; yang_parent_name = "peruser"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Server::Peruser::Session::~Session()
{
}

bool Native::Ip::Ssh::Server::Peruser::Session::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::Ip::Ssh::Server::Peruser::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Ssh::Server::Peruser::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/peruser/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Peruser::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Peruser::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Server::Peruser::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Server::Peruser::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Server::Peruser::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Server::Peruser::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Server::Peruser::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Ip::Ssh::Port::Port()
    :
    port_no{YType::uint16, "port-no"},
    low_rotary{YType::uint8, "low-rotary"},
    high_rotary{YType::uint8, "high-rotary"}
{

    yang_name = "port"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Ssh::Port::~Port()
{
}

bool Native::Ip::Ssh::Port::has_data() const
{
    if (is_presence_container) return true;
    return port_no.is_set
	|| low_rotary.is_set
	|| high_rotary.is_set;
}

bool Native::Ip::Ssh::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_no.yfilter)
	|| ydk::is_set(low_rotary.yfilter)
	|| ydk::is_set(high_rotary.yfilter);
}

std::string Native::Ip::Ssh::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(port_no, "port-no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_no.is_set || is_set(port_no.yfilter)) leaf_name_data.push_back(port_no.get_name_leafdata());
    if (low_rotary.is_set || is_set(low_rotary.yfilter)) leaf_name_data.push_back(low_rotary.get_name_leafdata());
    if (high_rotary.is_set || is_set(high_rotary.yfilter)) leaf_name_data.push_back(high_rotary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Ssh::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Ssh::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Ssh::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-no")
    {
        port_no = value;
        port_no.value_namespace = name_space;
        port_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-rotary")
    {
        low_rotary = value;
        low_rotary.value_namespace = name_space;
        low_rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-rotary")
    {
        high_rotary = value;
        high_rotary.value_namespace = name_space;
        high_rotary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-no")
    {
        port_no.yfilter = yfilter;
    }
    if(value_path == "low-rotary")
    {
        low_rotary.yfilter = yfilter;
    }
    if(value_path == "high-rotary")
    {
        high_rotary.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-no" || name == "low-rotary" || name == "high-rotary")
        return true;
    return false;
}

Native::Ip::Tcp::Tcp()
    :
    selective_ack{YType::empty, "selective-ack"},
    synwait_time{YType::uint16, "synwait-time"},
    timestamp{YType::empty, "timestamp"},
    window_size{YType::uint32, "window-size"}
        ,
    path_mtu_discovery(nullptr) // presence node
{

    yang_name = "tcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tcp::~Tcp()
{
}

bool Native::Ip::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return selective_ack.is_set
	|| synwait_time.is_set
	|| timestamp.is_set
	|| window_size.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Ip::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selective_ack.yfilter)
	|| ydk::is_set(synwait_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Ip::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selective_ack.is_set || is_set(selective_ack.yfilter)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (synwait_time.is_set || is_set(synwait_time.yfilter)) leaf_name_data.push_back(synwait_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Ip::Tcp::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_mtu_discovery != nullptr)
    {
        _children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return _children;
}

void Native::Ip::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selective-ack")
    {
        selective_ack = value;
        selective_ack.value_namespace = name_space;
        selective_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synwait-time")
    {
        synwait_time = value;
        synwait_time.value_namespace = name_space;
        synwait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selective-ack")
    {
        selective_ack.yfilter = yfilter;
    }
    if(value_path == "synwait-time")
    {
        synwait_time.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "selective-ack" || name == "synwait-time" || name == "timestamp" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Tcp::PathMtuDiscovery::PathMtuDiscovery()
    :
    age_timer{YType::str, "age-timer"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Tcp::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return age_timer.is_set;
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age_timer.yfilter);
}

std::string Native::Ip::Tcp::PathMtuDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tcp::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tcp::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_timer.is_set || is_set(age_timer.yfilter)) leaf_name_data.push_back(age_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tcp::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tcp::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tcp::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age-timer")
    {
        age_timer = value;
        age_timer.value_namespace = name_space;
        age_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tcp::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age-timer")
    {
        age_timer.yfilter = yfilter;
    }
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age-timer")
        return true;
    return false;
}

Native::Ip::Tftp::Tftp()
    :
    blocksize{YType::uint16, "blocksize"}
        ,
    boot_interface(std::make_shared<Native::Ip::Tftp::BootInterface>())
    , source_interface(std::make_shared<Native::Ip::Tftp::SourceInterface>())
{
    boot_interface->parent = this;
    source_interface->parent = this;

    yang_name = "tftp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::~Tftp()
{
}

bool Native::Ip::Tftp::has_data() const
{
    if (is_presence_container) return true;
    return blocksize.is_set
	|| (boot_interface !=  nullptr && boot_interface->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Tftp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blocksize.yfilter)
	|| (boot_interface !=  nullptr && boot_interface->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Tftp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocksize.is_set || is_set(blocksize.yfilter)) leaf_name_data.push_back(blocksize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-interface")
    {
        if(boot_interface == nullptr)
        {
            boot_interface = std::make_shared<Native::Ip::Tftp::BootInterface>();
        }
        return boot_interface;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Tftp::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(boot_interface != nullptr)
    {
        _children["boot-interface"] = boot_interface;
    }

    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    return _children;
}

void Native::Ip::Tftp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "blocksize")
    {
        blocksize = value;
        blocksize.value_namespace = name_space;
        blocksize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "blocksize")
    {
        blocksize.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-interface" || name == "source-interface" || name == "blocksize")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::BootInterface()
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
    atm_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::BootInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "boot-interface"; yang_parent_name = "tftp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::~BootInterface()
{
}

bool Native::Ip::Tftp::BootInterface::has_data() const
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

bool Native::Ip::Tftp::BootInterface::has_operation() const
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

std::string Native::Ip::Tftp::BootInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tftp::BootInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::get_children() const
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

void Native::Ip::Tftp::BootInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Tftp::BootInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Tftp::BootInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::BootInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::BootInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::BootInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::BootInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::BootInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::SourceInterface()
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
    atm_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tftp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Tftp::SourceInterface::has_data() const
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

bool Native::Ip::Tftp::SourceInterface::has_operation() const
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

std::string Native::Ip::Tftp::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::get_children() const
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

void Native::Ip::Tftp::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Tftp::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Tftp::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::AccessList::AccessList()
    :
    match_local_traffic{YType::empty, "Cisco-IOS-XE-acl:match-local-traffic"},
    persistent{YType::empty, "Cisco-IOS-XE-acl:persistent"}
        ,
    standard(this, {"name"})
    , role_based(this, {"name"})
    , extended(this, {"name"})
    , helper(std::make_shared<Native::Ip::AccessList::Helper>())
    , log_update(std::make_shared<Native::Ip::AccessList::LogUpdate>())
    , logging(std::make_shared<Native::Ip::AccessList::Logging>())
    , resequence(std::make_shared<Native::Ip::AccessList::Resequence>())
{
    helper->parent = this;
    log_update->parent = this;
    logging->parent = this;
    resequence->parent = this;

    yang_name = "access-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::~AccessList()
{
}

bool Native::Ip::AccessList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<standard.len(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<role_based.len(); index++)
    {
        if(role_based[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended.len(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    return match_local_traffic.is_set
	|| persistent.is_set
	|| (helper !=  nullptr && helper->has_data())
	|| (log_update !=  nullptr && log_update->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (resequence !=  nullptr && resequence->has_data());
}

bool Native::Ip::AccessList::has_operation() const
{
    for (std::size_t index=0; index<standard.len(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<role_based.len(); index++)
    {
        if(role_based[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended.len(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(match_local_traffic.yfilter)
	|| ydk::is_set(persistent.yfilter)
	|| (helper !=  nullptr && helper->has_operation())
	|| (log_update !=  nullptr && log_update->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (resequence !=  nullptr && resequence->has_operation());
}

std::string Native::Ip::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_local_traffic.is_set || is_set(match_local_traffic.yfilter)) leaf_name_data.push_back(match_local_traffic.get_name_leafdata());
    if (persistent.is_set || is_set(persistent.yfilter)) leaf_name_data.push_back(persistent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-acl:standard")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Standard>();
        ent_->parent = this;
        standard.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:role-based")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::RoleBased>();
        ent_->parent = this;
        role_based.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:extended")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Extended>();
        ent_->parent = this;
        extended.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Ip::AccessList::Helper>();
        }
        return helper;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:log-update")
    {
        if(log_update == nullptr)
        {
            log_update = std::make_shared<Native::Ip::AccessList::LogUpdate>();
        }
        return log_update;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::AccessList::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:resequence")
    {
        if(resequence == nullptr)
        {
            resequence = std::make_shared<Native::Ip::AccessList::Resequence>();
        }
        return resequence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : standard.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : role_based.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(helper != nullptr)
    {
        _children["Cisco-IOS-XE-acl:helper"] = helper;
    }

    if(log_update != nullptr)
    {
        _children["Cisco-IOS-XE-acl:log-update"] = log_update;
    }

    if(logging != nullptr)
    {
        _children["Cisco-IOS-XE-acl:logging"] = logging;
    }

    if(resequence != nullptr)
    {
        _children["Cisco-IOS-XE-acl:resequence"] = resequence;
    }

    return _children;
}

void Native::Ip::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-acl:match-local-traffic")
    {
        match_local_traffic = value;
        match_local_traffic.value_namespace = name_space;
        match_local_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-acl:persistent")
    {
        persistent = value;
        persistent.value_namespace = name_space;
        persistent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-local-traffic")
    {
        match_local_traffic.yfilter = yfilter;
    }
    if(value_path == "persistent")
    {
        persistent.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard" || name == "role-based" || name == "extended" || name == "helper" || name == "log-update" || name == "logging" || name == "resequence" || name == "match-local-traffic" || name == "persistent")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Standard()
    :
    name{YType::str, "name"}
        ,
    access_list_seq_rule(this, {"sequence"})
    , default_(std::make_shared<Native::Ip::AccessList::Standard::Default>())
{
    default_->parent = this;

    yang_name = "standard"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Standard::~Standard()
{
}

bool Native::Ip::AccessList::Standard::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Standard::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:standard";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Standard::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
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

void Native::Ip::AccessList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    deny(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny>())
    , permit(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::get_children() const
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

void Native::Ip::AccessList::Standard::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_data() const
{
    if (is_presence_container) return true;
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(std_ace != nullptr)
    {
        _children["std-ace"] = std_ace;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_data() const
{
    if (is_presence_container) return true;
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(std_ace != nullptr)
    {
        _children["std-ace"] = std_ace;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::Default()
    :
    access_list_seq_rule(this, {"sequence"})
{

    yang_name = "default"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::~Default()
{
}

bool Native::Ip::AccessList::Standard::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Standard::Default::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::Standard::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    deny(std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny>())
    , permit(std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::get_children() const
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

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::has_data() const
{
    if (is_presence_container) return true;
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(std_ace != nullptr)
    {
        _children["std-ace"] = std_ace;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::has_data() const
{
    if (is_presence_container) return true;
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(std_ace != nullptr)
    {
        _children["std-ace"] = std_ace;
    }

    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    log{YType::empty, "log"}
{

    yang_name = "std-ace"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| log.is_set;
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "mask" || name == "any" || name == "host" || name == "log")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::RoleBased()
    :
    name{YType::str, "name"}
        ,
    access_list_seq_rule(this, {"sequence"})
    , default_(std::make_shared<Native::Ip::AccessList::RoleBased::Default>())
{
    default_->parent = this;

    yang_name = "role-based"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::RoleBased::~RoleBased()
{
}

bool Native::Ip::AccessList::RoleBased::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::RoleBased::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:role-based";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::RoleBased::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
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

void Native::Ip::AccessList::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    object_group_str{YType::str, "object-group-str"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    dscp{YType::str, "dscp"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    msg_type{YType::uint8, "msg-type"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
        ,
    ttl(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl>())
    , match_all(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>())
    , match_any(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>())
    , src(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src>())
    , dst(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;
    src->parent = this;
    dst->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| object_group_str.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| dscp.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| option.is_set
	|| precedence.is_set
	|| time_range.is_set
	|| tos.is_set
	|| msg_type.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set
	|| (ttl !=  nullptr && ttl->has_data())
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (src !=  nullptr && src->has_data())
	|| (dst !=  nullptr && dst->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| (ttl !=  nullptr && ttl->has_operation())
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (src !=  nullptr && src->has_operation())
	|| (dst !=  nullptr && dst->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "src")
    {
        if(src == nullptr)
        {
            src = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src>();
        }
        return src;
    }

    if(child_yang_name == "dst")
    {
        if(dst == nullptr)
        {
            dst = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst>();
        }
        return dst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        _children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        _children["match-any"] = match_any;
    }

    if(src != nullptr)
    {
        _children["src"] = src;
    }

    if(dst != nullptr)
    {
        _children["dst"] = dst;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "src" || name == "dst" || name == "action" || name == "protocol" || name == "object-group-str" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
        ,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    if (is_presence_container) return true;
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Src()
    :
    source_host{YType::str, "source-host"},
    source_address{YType::str, "source-address"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    source_prefix{YType::str, "source-prefix"},
    any{YType::empty, "any"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"}
        ,
    dst(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst>())
{
    dst->parent = this;

    yang_name = "src"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::~Src()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::has_data() const
{
    if (is_presence_container) return true;
    return source_host.is_set
	|| source_address.is_set
	|| source_wildcard_bits.is_set
	|| source_prefix.is_set
	|| any.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| (dst !=  nullptr && dst->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| (dst !=  nullptr && dst->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst")
    {
        if(dst == nullptr)
        {
            dst = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst>();
        }
        return dst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dst != nullptr)
    {
        _children["dst"] = dst;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst" || name == "source-host" || name == "source-address" || name == "source-wildcard-bits" || name == "source-prefix" || name == "any" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::Dst()
    :
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"}
{

    yang_name = "dst"; yang_parent_name = "src"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::~Dst()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::has_data() const
{
    if (is_presence_container) return true;
    return destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::Dst()
    :
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"}
{

    yang_name = "dst"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::~Dst()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::has_data() const
{
    if (is_presence_container) return true;
    return destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::Default()
    :
    access_list_seq_rule(this, {"sequence"})
{

    yang_name = "default"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::~Default()
{
}

bool Native::Ip::AccessList::RoleBased::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::RoleBased::Default::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::RoleBased::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::RoleBased::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    object_group_str{YType::str, "object-group-str"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    dscp{YType::str, "dscp"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    msg_type{YType::uint8, "msg-type"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
        ,
    ttl(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl>())
    , match_all(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll>())
    , match_any(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny>())
    , src(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src>())
    , dst(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;
    src->parent = this;
    dst->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| object_group_str.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| dscp.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| option.is_set
	|| precedence.is_set
	|| time_range.is_set
	|| tos.is_set
	|| msg_type.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set
	|| (ttl !=  nullptr && ttl->has_data())
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (src !=  nullptr && src->has_data())
	|| (dst !=  nullptr && dst->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| (ttl !=  nullptr && ttl->has_operation())
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (src !=  nullptr && src->has_operation())
	|| (dst !=  nullptr && dst->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "src")
    {
        if(src == nullptr)
        {
            src = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src>();
        }
        return src;
    }

    if(child_yang_name == "dst")
    {
        if(dst == nullptr)
        {
            dst = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst>();
        }
        return dst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        _children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        _children["match-any"] = match_any;
    }

    if(src != nullptr)
    {
        _children["src"] = src;
    }

    if(dst != nullptr)
    {
        _children["dst"] = dst;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "src" || name == "dst" || name == "action" || name == "protocol" || name == "object-group-str" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
        ,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    if (is_presence_container) return true;
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Src()
    :
    source_host{YType::str, "source-host"},
    source_address{YType::str, "source-address"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    source_prefix{YType::str, "source-prefix"},
    any{YType::empty, "any"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"}
        ,
    dst(std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst>())
{
    dst->parent = this;

    yang_name = "src"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::~Src()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::has_data() const
{
    if (is_presence_container) return true;
    return source_host.is_set
	|| source_address.is_set
	|| source_wildcard_bits.is_set
	|| source_prefix.is_set
	|| any.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| (dst !=  nullptr && dst->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| (dst !=  nullptr && dst->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst")
    {
        if(dst == nullptr)
        {
            dst = std::make_shared<Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst>();
        }
        return dst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dst != nullptr)
    {
        _children["dst"] = dst;
    }

    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst" || name == "source-host" || name == "source-address" || name == "source-wildcard-bits" || name == "source-prefix" || name == "any" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::Dst()
    :
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"}
{

    yang_name = "dst"; yang_parent_name = "src"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::~Dst()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::has_data() const
{
    if (is_presence_container) return true;
    return destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::Dst()
    :
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"}
{

    yang_name = "dst"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::~Dst()
{
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::has_data() const
{
    if (is_presence_container) return true;
    return destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Extended()
    :
    name{YType::str, "name"}
        ,
    access_list_seq_rule(this, {"sequence"})
    , default_(std::make_shared<Native::Ip::AccessList::Extended::Default>())
{
    default_->parent = this;

    yang_name = "extended"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Extended::~Extended()
{
}

bool Native::Ip::AccessList::Extended::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Extended::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:extended";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Extended::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
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

void Native::Ip::AccessList::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    object_group_str{YType::str, "object-group-str"},
    ipv4_address{YType::str, "ipv4-address"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    object_group{YType::str, "object-group"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    dest_ipv4_address{YType::str, "dest-ipv4-address"},
    dest_mask{YType::str, "dest-mask"},
    dst_any{YType::empty, "dst-any"},
    dst_host{YType::str, "dst-host"},
    dst_object_group{YType::str, "dst-object-group"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    dscp{YType::str, "dscp"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    msg_type{YType::uint8, "msg-type"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
        ,
    ttl(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl>())
    , match_all(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>())
    , match_any(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| object_group_str.is_set
	|| ipv4_address.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| object_group.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| dest_ipv4_address.is_set
	|| dest_mask.is_set
	|| dst_any.is_set
	|| dst_host.is_set
	|| dst_object_group.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| dscp.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| option.is_set
	|| precedence.is_set
	|| time_range.is_set
	|| tos.is_set
	|| msg_type.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set
	|| (ttl !=  nullptr && ttl->has_data())
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(object_group.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(dest_ipv4_address.yfilter)
	|| ydk::is_set(dest_mask.yfilter)
	|| ydk::is_set(dst_any.yfilter)
	|| ydk::is_set(dst_host.yfilter)
	|| ydk::is_set(dst_object_group.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| (ttl !=  nullptr && ttl->has_operation())
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (object_group.is_set || is_set(object_group.yfilter)) leaf_name_data.push_back(object_group.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (dest_ipv4_address.is_set || is_set(dest_ipv4_address.yfilter)) leaf_name_data.push_back(dest_ipv4_address.get_name_leafdata());
    if (dest_mask.is_set || is_set(dest_mask.yfilter)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (dst_any.is_set || is_set(dst_any.yfilter)) leaf_name_data.push_back(dst_any.get_name_leafdata());
    if (dst_host.is_set || is_set(dst_host.yfilter)) leaf_name_data.push_back(dst_host.get_name_leafdata());
    if (dst_object_group.is_set || is_set(dst_object_group.yfilter)) leaf_name_data.push_back(dst_object_group.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        _children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        _children["match-any"] = match_any;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group")
    {
        object_group = value;
        object_group.value_namespace = name_space;
        object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address = value;
        dest_ipv4_address.value_namespace = name_space;
        dest_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-mask")
    {
        dest_mask = value;
        dest_mask.value_namespace = name_space;
        dest_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-any")
    {
        dst_any = value;
        dst_any.value_namespace = name_space;
        dst_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-host")
    {
        dst_host = value;
        dst_host.value_namespace = name_space;
        dst_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group = value;
        dst_object_group.value_namespace = name_space;
        dst_object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "object-group")
    {
        object_group.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "dest-mask")
    {
        dest_mask.yfilter = yfilter;
    }
    if(value_path == "dst-any")
    {
        dst_any.yfilter = yfilter;
    }
    if(value_path == "dst-host")
    {
        dst_host.yfilter = yfilter;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "action" || name == "protocol" || name == "object-group-str" || name == "ipv4-address" || name == "mask" || name == "any" || name == "host" || name == "object-group" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "dest-ipv4-address" || name == "dest-mask" || name == "dst-any" || name == "dst-host" || name == "dst-object-group" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
        ,
    range(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    if (is_presence_container) return true;
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::Default()
    :
    access_list_seq_rule(this, {"sequence"})
{

    yang_name = "default"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::~Default()
{
}

bool Native::Ip::AccessList::Extended::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Extended::Default::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::Extended::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Extended::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Extended::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    object_group_str{YType::str, "object-group-str"},
    ipv4_address{YType::str, "ipv4-address"},
    mask{YType::str, "mask"},
    any{YType::empty, "any"},
    host{YType::str, "host"},
    object_group{YType::str, "object-group"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    dest_ipv4_address{YType::str, "dest-ipv4-address"},
    dest_mask{YType::str, "dest-mask"},
    dst_any{YType::empty, "dst-any"},
    dst_host{YType::str, "dst-host"},
    dst_object_group{YType::str, "dst-object-group"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    dscp{YType::str, "dscp"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    msg_type{YType::uint8, "msg-type"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
        ,
    ttl(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl>())
    , match_all(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll>())
    , match_any(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny>())
{
    ttl->parent = this;
    match_all->parent = this;
    match_any->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| object_group_str.is_set
	|| ipv4_address.is_set
	|| mask.is_set
	|| any.is_set
	|| host.is_set
	|| object_group.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| dest_ipv4_address.is_set
	|| dest_mask.is_set
	|| dst_any.is_set
	|| dst_host.is_set
	|| dst_object_group.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| dscp.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| option.is_set
	|| precedence.is_set
	|| time_range.is_set
	|| tos.is_set
	|| msg_type.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set
	|| (ttl !=  nullptr && ttl->has_data())
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data());
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(object_group.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(dest_ipv4_address.yfilter)
	|| ydk::is_set(dest_mask.yfilter)
	|| ydk::is_set(dst_any.yfilter)
	|| ydk::is_set(dst_host.yfilter)
	|| ydk::is_set(dst_object_group.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| (ttl !=  nullptr && ttl->has_operation())
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (object_group.is_set || is_set(object_group.yfilter)) leaf_name_data.push_back(object_group.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (dest_ipv4_address.is_set || is_set(dest_ipv4_address.yfilter)) leaf_name_data.push_back(dest_ipv4_address.get_name_leafdata());
    if (dest_mask.is_set || is_set(dest_mask.yfilter)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (dst_any.is_set || is_set(dst_any.yfilter)) leaf_name_data.push_back(dst_any.get_name_leafdata());
    if (dst_host.is_set || is_set(dst_host.yfilter)) leaf_name_data.push_back(dst_host.get_name_leafdata());
    if (dst_object_group.is_set || is_set(dst_object_group.yfilter)) leaf_name_data.push_back(dst_object_group.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    if(match_all != nullptr)
    {
        _children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        _children["match-any"] = match_any;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group")
    {
        object_group = value;
        object_group.value_namespace = name_space;
        object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address = value;
        dest_ipv4_address.value_namespace = name_space;
        dest_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-mask")
    {
        dest_mask = value;
        dest_mask.value_namespace = name_space;
        dest_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-any")
    {
        dst_any = value;
        dst_any.value_namespace = name_space;
        dst_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-host")
    {
        dst_host = value;
        dst_host.value_namespace = name_space;
        dst_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group = value;
        dst_object_group.value_namespace = name_space;
        dst_object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "object-group")
    {
        object_group.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "dest-mask")
    {
        dest_mask.yfilter = yfilter;
    }
    if(value_path == "dst-any")
    {
        dst_any.yfilter = yfilter;
    }
    if(value_path == "dst-host")
    {
        dst_host.yfilter = yfilter;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "match-all" || name == "match-any" || name == "action" || name == "protocol" || name == "object-group-str" || name == "ipv4-address" || name == "mask" || name == "any" || name == "host" || name == "object-group" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "dest-ipv4-address" || name == "dest-mask" || name == "dst-any" || name == "dst-host" || name == "dst-object-group" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "dscp" || name == "fragments" || name == "log" || name == "log-input" || name == "option" || name == "precedence" || name == "time-range" || name == "tos" || name == "msg-type" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
        ,
    range(std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    if (is_presence_container) return true;
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"},
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    if (is_presence_container) return true;
    return plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set
	|| minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set;
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());
    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg" || name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Helper::Helper()
    :
    egress{YType::empty, "egress"},
    check{YType::empty, "check"}
{

    yang_name = "helper"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Helper::~Helper()
{
}

bool Native::Ip::AccessList::Helper::has_data() const
{
    if (is_presence_container) return true;
    return egress.is_set
	|| check.is_set;
}

bool Native::Ip::AccessList::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(check.yfilter);
}

std::string Native::Ip::AccessList::Helper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress" || name == "check")
        return true;
    return false;
}

Native::Ip::AccessList::LogUpdate::LogUpdate()
    :
    threshold{YType::uint64, "threshold"}
{

    yang_name = "log-update"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::LogUpdate::~LogUpdate()
{
}

bool Native::Ip::AccessList::LogUpdate::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Ip::AccessList::LogUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::AccessList::LogUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::LogUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:log-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::LogUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::LogUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::LogUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::LogUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Ip::AccessList::Logging::Logging()
    :
    hash_generation{YType::empty, "hash-generation"},
    interval{YType::uint64, "interval"}
{

    yang_name = "logging"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Logging::~Logging()
{
}

bool Native::Ip::AccessList::Logging::has_data() const
{
    if (is_presence_container) return true;
    return hash_generation.is_set
	|| interval.is_set;
}

bool Native::Ip::AccessList::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_generation.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::AccessList::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_generation.is_set || is_set(hash_generation.yfilter)) leaf_name_data.push_back(hash_generation.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-generation")
    {
        hash_generation = value;
        hash_generation.value_namespace = name_space;
        hash_generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-generation")
    {
        hash_generation.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-generation" || name == "interval")
        return true;
    return false;
}

Native::Ip::AccessList::Resequence::Resequence()
    :
    numbers{YType::str, "numbers"},
    start_seq_no{YType::uint64, "start-seq-no"},
    step_seq_no{YType::uint64, "step-seq-no"}
{

    yang_name = "resequence"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::AccessList::Resequence::~Resequence()
{
}

bool Native::Ip::AccessList::Resequence::has_data() const
{
    if (is_presence_container) return true;
    return numbers.is_set
	|| start_seq_no.is_set
	|| step_seq_no.is_set;
}

bool Native::Ip::AccessList::Resequence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numbers.yfilter)
	|| ydk::is_set(start_seq_no.yfilter)
	|| ydk::is_set(step_seq_no.yfilter);
}

std::string Native::Ip::AccessList::Resequence::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Resequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:resequence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Resequence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numbers.is_set || is_set(numbers.yfilter)) leaf_name_data.push_back(numbers.get_name_leafdata());
    if (start_seq_no.is_set || is_set(start_seq_no.yfilter)) leaf_name_data.push_back(start_seq_no.get_name_leafdata());
    if (step_seq_no.is_set || is_set(step_seq_no.yfilter)) leaf_name_data.push_back(step_seq_no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::AccessList::Resequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::AccessList::Resequence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::AccessList::Resequence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numbers")
    {
        numbers = value;
        numbers.value_namespace = name_space;
        numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-seq-no")
    {
        start_seq_no = value;
        start_seq_no.value_namespace = name_space;
        start_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "step-seq-no")
    {
        step_seq_no = value;
        step_seq_no.value_namespace = name_space;
        step_seq_no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Resequence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numbers")
    {
        numbers.yfilter = yfilter;
    }
    if(value_path == "start-seq-no")
    {
        start_seq_no.yfilter = yfilter;
    }
    if(value_path == "step-seq-no")
    {
        step_seq_no.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Resequence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "numbers" || name == "start-seq-no" || name == "step-seq-no")
        return true;
    return false;
}

Native::Ip::Device::Device()
    :
    tracking(nullptr) // presence node
{

    yang_name = "device"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Device::~Device()
{
}

bool Native::Ip::Device::has_data() const
{
    if (is_presence_container) return true;
    return (tracking !=  nullptr && tracking->has_data());
}

bool Native::Ip::Device::has_operation() const
{
    return is_set(yfilter)
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::Ip::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-device-tracking:tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::Ip::Device::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tracking != nullptr)
    {
        _children["Cisco-IOS-XE-device-tracking:tracking"] = tracking;
    }

    return _children;
}

void Native::Ip::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Tracking()
    :
    trace_buffer{YType::empty, "trace-buffer"}
        ,
    probe(std::make_shared<Native::Ip::Device::Tracking::Probe>())
{
    probe->parent = this;

    yang_name = "tracking"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Device::Tracking::~Tracking()
{
}

bool Native::Ip::Device::Tracking::has_data() const
{
    if (is_presence_container) return true;
    return trace_buffer.is_set
	|| (probe !=  nullptr && probe->has_data());
}

bool Native::Ip::Device::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trace_buffer.yfilter)
	|| (probe !=  nullptr && probe->has_operation());
}

std::string Native::Ip::Device::Tracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_buffer.is_set || is_set(trace_buffer.yfilter)) leaf_name_data.push_back(trace_buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<Native::Ip::Device::Tracking::Probe>();
        }
        return probe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(probe != nullptr)
    {
        _children["probe"] = probe;
    }

    return _children;
}

void Native::Ip::Device::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trace-buffer")
    {
        trace_buffer = value;
        trace_buffer.value_namespace = name_space;
        trace_buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trace-buffer")
    {
        trace_buffer.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe" || name == "trace-buffer")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::Probe()
    :
    count{YType::uint8, "count"},
    delay{YType::uint8, "delay"},
    interval{YType::uint32, "interval"}
        ,
    auto_source(nullptr) // presence node
{

    yang_name = "probe"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Device::Tracking::Probe::~Probe()
{
}

bool Native::Ip::Device::Tracking::Probe::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| delay.is_set
	|| interval.is_set
	|| (auto_source !=  nullptr && auto_source->has_data());
}

bool Native::Ip::Device::Tracking::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (auto_source !=  nullptr && auto_source->has_operation());
}

std::string Native::Ip::Device::Tracking::Probe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::Tracking::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-source")
    {
        if(auto_source == nullptr)
        {
            auto_source = std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource>();
        }
        return auto_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::Tracking::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_source != nullptr)
    {
        _children["auto-source"] = auto_source;
    }

    return _children;
}

void Native::Ip::Device::Tracking::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-source" || name == "count" || name == "delay" || name == "interval")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::AutoSource()
    :
    override{YType::empty, "override"}
        ,
    fallback(std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource::Fallback>())
{
    fallback->parent = this;

    yang_name = "auto-source"; yang_parent_name = "probe"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Device::Tracking::Probe::AutoSource::~AutoSource()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_data() const
{
    if (is_presence_container) return true;
    return override.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::AutoSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::Tracking::Probe::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fallback != nullptr)
    {
        _children["fallback"] = fallback;
    }

    return _children;
}

void Native::Ip::Device::Tracking::Probe::AutoSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::AutoSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "override")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::Fallback()
    :
    src_ip{YType::str, "src-ip"},
    mask{YType::str, "mask"}
{

    yang_name = "fallback"; yang_parent_name = "auto-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::~Fallback()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_data() const
{
    if (is_presence_container) return true;
    return src_ip.is_set
	|| mask.is_set;
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_ip.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/probe/auto-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ip" || name == "mask")
        return true;
    return false;
}

Native::Ip::Msdp::Msdp()
    :
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
        ,
    peer(std::make_shared<Native::Ip::Msdp::Peer>())
    , default_peer(std::make_shared<Native::Ip::Msdp::DefaultPeer>())
    , description(std::make_shared<Native::Ip::Msdp::Description>())
    , filter_sa_request(std::make_shared<Native::Ip::Msdp::FilterSaRequest>())
    , keepalive(std::make_shared<Native::Ip::Msdp::Keepalive>())
    , mesh_group(std::make_shared<Native::Ip::Msdp::MeshGroup>())
    , password(std::make_shared<Native::Ip::Msdp::Password>())
    , redistribute(std::make_shared<Native::Ip::Msdp::Redistribute>())
    , sa_filter(std::make_shared<Native::Ip::Msdp::SaFilter>())
    , sa_limit(std::make_shared<Native::Ip::Msdp::SaLimit>())
    , shutdown(std::make_shared<Native::Ip::Msdp::Shutdown>())
    , ttl_threshold(std::make_shared<Native::Ip::Msdp::TtlThreshold>())
    , vrf(this, {"name"})
{
    peer->parent = this;
    default_peer->parent = this;
    description->parent = this;
    filter_sa_request->parent = this;
    keepalive->parent = this;
    mesh_group->parent = this;
    password->parent = this;
    redistribute->parent = this;
    sa_filter->parent = this;
    sa_limit->parent = this;
    shutdown->parent = this;
    ttl_threshold->parent = this;

    yang_name = "msdp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::~Msdp()
{
}

bool Native::Ip::Msdp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cache_rejected_sa.yfilter)
	|| ydk::is_set(cache_sa_state.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:msdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Password>();
        }
        return password;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::TtlThreshold>();
        }
        return ttl_threshold;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Msdp::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(default_peer != nullptr)
    {
        _children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        _children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        _children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        _children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        _children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        _children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        _children["ttl-threshold"] = ttl_threshold;
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

void Native::Ip::Msdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
        cache_rejected_sa.value_namespace = name_space;
        cache_rejected_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
        cache_sa_state.value_namespace = name_space;
        cache_sa_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa.yfilter = yfilter;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "vrf" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{

    yang_name = "peer"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Peer::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| ydk::is_set(remote_as.yfilter);
}

std::string Native::Ip::Msdp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "connect-source" || name == "remote-as")
        return true;
    return false;
}

Native::Ip::Msdp::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "default-peer"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::DefaultPeer::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::DefaultPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Ip::Msdp::DefaultPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::DefaultPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::DefaultPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::DefaultPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::DefaultPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Ip::Msdp::Description::Description()
    :
    name_addr{YType::str, "name-addr"},
    description{YType::str, "description"}
{

    yang_name = "description"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Description::~Description()
{
}

bool Native::Ip::Msdp::Description::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| description.is_set;
}

bool Native::Ip::Msdp::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::Msdp::Description::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Description::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "description")
        return true;
    return false;
}

Native::Ip::Msdp::FilterSaRequest::FilterSaRequest()
    :
    name_addr{YType::str, "name-addr"},
    list{YType::str, "list"}
{

    yang_name = "filter-sa-request"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::FilterSaRequest::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| list.is_set;
}

bool Native::Ip::Msdp::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Msdp::FilterSaRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::FilterSaRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "list")
        return true;
    return false;
}

Native::Ip::Msdp::Keepalive::Keepalive()
    :
    name_addr{YType::str, "name-addr"},
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"}
{

    yang_name = "keepalive"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| keepalive.is_set
	|| max_wait.is_set;
}

bool Native::Ip::Msdp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter);
}

std::string Native::Ip::Msdp::Keepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "keepalive" || name == "max-wait")
        return true;
    return false;
}

Native::Ip::Msdp::MeshGroup::MeshGroup()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"}
{

    yang_name = "mesh-group"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::MeshGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| addr.is_set;
}

bool Native::Ip::Msdp::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Native::Ip::Msdp::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "addr")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Password::~Password()
{
}

bool Native::Ip::Msdp::Password::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Password::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Ip::Msdp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "peer"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Password::Peer::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Password::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Msdp::Password::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Password::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Password::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Password::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Password::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Msdp::Redistribute::Redistribute()
    :
    list{YType::str, "list"},
    asn{YType::uint16, "asn"},
    route_map{YType::str, "route-map"}
{

    yang_name = "redistribute"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set
	|| asn.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Redistribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "asn" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::SaFilter::In>())
    , out(std::make_shared<Native::Ip::Msdp::SaFilter::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::SaFilter::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::SaFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Ip::Msdp::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "in"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::SaFilter::In::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::SaFilter::In::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::SaFilter::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaFilter::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaFilter::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "out"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::SaFilter::Out::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::SaFilter::Out::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::SaFilter::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaFilter::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaFilter::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaLimit::SaLimit()
    :
    name_addr{YType::str, "name-addr"},
    limit{YType::uint32, "limit"}
{

    yang_name = "sa-limit"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::SaLimit::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| limit.is_set;
}

bool Native::Ip::Msdp::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Msdp::SaLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "limit")
        return true;
    return false;
}

Native::Ip::Msdp::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{

    yang_name = "shutdown"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Shutdown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "ttl-threshold"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::TtlThreshold::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::TtlThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::Msdp::TtlThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::TtlThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::TtlThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::TtlThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::TtlThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "threshold")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Vrf()
    :
    name{YType::str, "name"},
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
        ,
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Peer>())
    , default_peer(std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>())
    , description(std::make_shared<Native::Ip::Msdp::Vrf::Description>())
    , filter_sa_request(std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>())
    , keepalive(std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>())
    , mesh_group(std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>())
    , password(std::make_shared<Native::Ip::Msdp::Vrf::Password>())
    , redistribute(std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>())
    , sa_filter(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>())
    , sa_limit(std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>())
    , shutdown(std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>())
    , ttl_threshold(std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>())
{
    peer->parent = this;
    default_peer->parent = this;
    description->parent = this;
    filter_sa_request->parent = this;
    keepalive->parent = this;
    mesh_group->parent = this;
    password->parent = this;
    redistribute->parent = this;
    sa_filter->parent = this;
    sa_limit->parent = this;
    shutdown->parent = this;
    ttl_threshold->parent = this;

    yang_name = "vrf"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Msdp::Vrf::~Vrf()
{
}

bool Native::Ip::Msdp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cache_rejected_sa.yfilter)
	|| ydk::is_set(cache_sa_state.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Vrf::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Vrf::Password>();
        }
        return password;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>();
        }
        return ttl_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(default_peer != nullptr)
    {
        _children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        _children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        _children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        _children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        _children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        _children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        _children["ttl-threshold"] = ttl_threshold;
    }

    return _children;
}

void Native::Ip::Msdp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
        cache_rejected_sa.value_namespace = name_space;
        cache_rejected_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
        cache_sa_state.value_namespace = name_space;
        cache_sa_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa.yfilter = yfilter;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "name" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{

    yang_name = "peer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Peer::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Vrf::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| ydk::is_set(remote_as.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "connect-source" || name == "remote-as")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "default-peer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Ip::Msdp::Vrf::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::DefaultPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Description::Description()
    :
    name_addr{YType::str, "name-addr"},
    description{YType::str, "description"}
{

    yang_name = "description"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Description::~Description()
{
}

bool Native::Ip::Msdp::Vrf::Description::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| description.is_set;
}

bool Native::Ip::Msdp::Vrf::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Description::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "description")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::FilterSaRequest::FilterSaRequest()
    :
    name_addr{YType::str, "name-addr"},
    list{YType::str, "list"}
{

    yang_name = "filter-sa-request"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| list.is_set;
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Msdp::Vrf::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::FilterSaRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "list")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Keepalive::Keepalive()
    :
    name_addr{YType::str, "name-addr"},
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"}
{

    yang_name = "keepalive"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| keepalive.is_set
	|| max_wait.is_set;
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "keepalive" || name == "max-wait")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::MeshGroup::MeshGroup()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"}
{

    yang_name = "mesh-group"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| addr.is_set;
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Password::~Password()
{
}

bool Native::Ip::Msdp::Vrf::Password::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Vrf::Password::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Vrf::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Ip::Msdp::Vrf::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Vrf::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Vrf::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "peer"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Password::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Redistribute::Redistribute()
    :
    list{YType::str, "list"},
    asn{YType::uint16, "asn"},
    route_map{YType::str, "route-map"}
{

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set
	|| asn.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "asn" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>())
    , out(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::Vrf::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Ip::Msdp::Vrf::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Vrf::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "in"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "out"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaLimit::SaLimit()
    :
    name_addr{YType::str, "name-addr"},
    limit{YType::uint32, "limit"}
{

    yang_name = "sa-limit"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| limit.is_set;
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "limit")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{

    yang_name = "shutdown"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "ttl-threshold"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Msdp::Vrf::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_data() const
{
    if (is_presence_container) return true;
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::Msdp::Vrf::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::TtlThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Msdp::Vrf::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Msdp::Vrf::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "threshold")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::ExplicitPath::Identifier::Mode::enable {0, "enable"};
const Enum::YLeaf Native::Ip::ExplicitPath::Identifier::Mode::disable {1, "disable"};

const Enum::YLeaf Native::Ip::ExplicitPath::Name::Mode::enable {0, "enable"};
const Enum::YLeaf Native::Ip::ExplicitPath::Name::Mode::disable {1, "disable"};

const Enum::YLeaf Native::Ip::Spd::Mode::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyType::ssh_rsa {0, "ssh-rsa"};

const Enum::YLeaf Native::Ip::Tcp::PathMtuDiscovery::AgeTimer::infinite {0, "infinite"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::Msdp::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Msdp::Vrf::Rpf::rfc3618 {0, "rfc3618"};


}
}

