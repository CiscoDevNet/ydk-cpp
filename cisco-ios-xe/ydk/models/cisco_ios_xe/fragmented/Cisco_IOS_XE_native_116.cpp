
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_116.hpp"
#include "Cisco_IOS_XE_native_117.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::CommunityWellKnown()
    :
    community_list{YType::str, "community-list"}
{

    yang_name = "community-well-known"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::~CommunityWellKnown()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::has_operation() const
{
    for (auto const & leaf : community_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(community_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-well-known";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto community_list_name_datas = community_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_list_name_datas.begin(), community_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-list")
    {
        community_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-list")
    {
        community_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::CommList()
    :
    comm_list_standard{YType::uint16, "comm-list-standard"},
    comm_list_expanded{YType::uint16, "comm-list-expanded"},
    comm_list_name{YType::str, "comm-list-name"},
    delete_{YType::empty, "delete"}
{

    yang_name = "comm-list"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::~CommList()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::has_data() const
{
    if (is_presence_container) return true;
    return comm_list_standard.is_set
	|| comm_list_expanded.is_set
	|| comm_list_name.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comm_list_standard.yfilter)
	|| ydk::is_set(comm_list_expanded.yfilter)
	|| ydk::is_set(comm_list_name.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "comm-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm_list_standard.is_set || is_set(comm_list_standard.yfilter)) leaf_name_data.push_back(comm_list_standard.get_name_leafdata());
    if (comm_list_expanded.is_set || is_set(comm_list_expanded.yfilter)) leaf_name_data.push_back(comm_list_expanded.get_name_leafdata());
    if (comm_list_name.is_set || is_set(comm_list_name.yfilter)) leaf_name_data.push_back(comm_list_name.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comm-list-standard")
    {
        comm_list_standard = value;
        comm_list_standard.value_namespace = name_space;
        comm_list_standard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-list-expanded")
    {
        comm_list_expanded = value;
        comm_list_expanded.value_namespace = name_space;
        comm_list_expanded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-list-name")
    {
        comm_list_name = value;
        comm_list_name.value_namespace = name_space;
        comm_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comm-list-standard")
    {
        comm_list_standard.yfilter = yfilter;
    }
    if(value_path == "comm-list-expanded")
    {
        comm_list_expanded.yfilter = yfilter;
    }
    if(value_path == "comm-list-name")
    {
        comm_list_name.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comm-list-standard" || name == "comm-list-expanded" || name == "comm-list-name" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::Dampening()
    :
    dampening_list(this, {"half_life_penalty", "restart_penalty", "suppress_penalty", "max_suppress_penalty"})
{

    yang_name = "dampening"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::~Dampening()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dampening_list.len(); index++)
    {
        if(dampening_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::has_operation() const
{
    for (std::size_t index=0; index<dampening_list.len(); index++)
    {
        if(dampening_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening-list")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList>();
        c->parent = this;
        dampening_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dampening_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::DampeningList()
    :
    half_life_penalty{YType::uint8, "half-life-penalty"},
    restart_penalty{YType::uint16, "restart-penalty"},
    suppress_penalty{YType::uint16, "suppress-penalty"},
    max_suppress_penalty{YType::uint8, "max-suppress-penalty"}
{

    yang_name = "dampening-list"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::~DampeningList()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::has_data() const
{
    if (is_presence_container) return true;
    return half_life_penalty.is_set
	|| restart_penalty.is_set
	|| suppress_penalty.is_set
	|| max_suppress_penalty.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_penalty.yfilter)
	|| ydk::is_set(restart_penalty.yfilter)
	|| ydk::is_set(suppress_penalty.yfilter)
	|| ydk::is_set(max_suppress_penalty.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-list";
    ADD_KEY_TOKEN(half_life_penalty, "half-life-penalty");
    ADD_KEY_TOKEN(restart_penalty, "restart-penalty");
    ADD_KEY_TOKEN(suppress_penalty, "suppress-penalty");
    ADD_KEY_TOKEN(max_suppress_penalty, "max-suppress-penalty");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_penalty.is_set || is_set(half_life_penalty.yfilter)) leaf_name_data.push_back(half_life_penalty.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (suppress_penalty.is_set || is_set(suppress_penalty.yfilter)) leaf_name_data.push_back(suppress_penalty.get_name_leafdata());
    if (max_suppress_penalty.is_set || is_set(max_suppress_penalty.yfilter)) leaf_name_data.push_back(max_suppress_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-penalty")
    {
        half_life_penalty = value;
        half_life_penalty.value_namespace = name_space;
        half_life_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty = value;
        suppress_penalty.value_namespace = name_space;
        suppress_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-penalty")
    {
        max_suppress_penalty = value;
        max_suppress_penalty.value_namespace = name_space;
        max_suppress_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-penalty")
    {
        half_life_penalty.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty.yfilter = yfilter;
    }
    if(value_path == "max-suppress-penalty")
    {
        max_suppress_penalty.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening::DampeningList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-penalty" || name == "restart-penalty" || name == "suppress-penalty" || name == "max-suppress-penalty")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Default()
    :
    interface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface>())
{
    interface->parent = this;

    yang_name = "default"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::~Default()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::has_data() const
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::has_operation() const
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

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::get_children() const
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtcommList()
    :
    ext_range(this, {"comm_list_num"})
    , excomm_list_name(this, {"name"})
{

    yang_name = "extcomm-list"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::~ExtcommList()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_range.len(); index++)
    {
        if(ext_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<excomm_list_name.len(); index++)
    {
        if(excomm_list_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::has_operation() const
{
    for (std::size_t index=0; index<ext_range.len(); index++)
    {
        if(ext_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<excomm_list_name.len(); index++)
    {
        if(excomm_list_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcomm-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-range")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange>();
        c->parent = this;
        ext_range.append(c);
        return c;
    }

    if(child_yang_name == "excomm-list-name")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName>();
        c->parent = this;
        excomm_list_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ext_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : excomm_list_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-range" || name == "excomm-list-name")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::ExtRange()
    :
    comm_list_num{YType::uint16, "comm-list-num"},
    delete_{YType::empty, "delete"}
{

    yang_name = "ext-range"; yang_parent_name = "extcomm-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::~ExtRange()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::has_data() const
{
    if (is_presence_container) return true;
    return comm_list_num.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comm_list_num.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-range";
    ADD_KEY_TOKEN(comm_list_num, "comm-list-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm_list_num.is_set || is_set(comm_list_num.yfilter)) leaf_name_data.push_back(comm_list_num.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comm-list-num")
    {
        comm_list_num = value;
        comm_list_num.value_namespace = name_space;
        comm_list_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comm-list-num")
    {
        comm_list_num.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExtRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comm-list-num" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::ExcommListName()
    :
    name{YType::str, "name"},
    delete_{YType::empty, "delete"}
{

    yang_name = "excomm-list-name"; yang_parent_name = "extcomm-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::~ExcommListName()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excomm-list-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList::ExcommListName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Extcommunity()
    :
    cost(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost>())
    , rt(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt>())
    , soo(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo>())
    , vpn_distinguisher(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher>())
{
    cost->parent = this;
    rt->parent = this;
    soo->parent = this;
    vpn_distinguisher->parent = this;

    yang_name = "extcommunity"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::~Extcommunity()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::has_data() const
{
    if (is_presence_container) return true;
    return (cost !=  nullptr && cost->has_data())
	|| (rt !=  nullptr && rt->has_data())
	|| (soo !=  nullptr && soo->has_data())
	|| (vpn_distinguisher !=  nullptr && vpn_distinguisher->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::has_operation() const
{
    return is_set(yfilter)
	|| (cost !=  nullptr && cost->has_operation())
	|| (rt !=  nullptr && rt->has_operation())
	|| (soo !=  nullptr && soo->has_operation())
	|| (vpn_distinguisher !=  nullptr && vpn_distinguisher->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcommunity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "rt")
    {
        if(rt == nullptr)
        {
            rt = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt>();
        }
        return rt;
    }

    if(child_yang_name == "soo")
    {
        if(soo == nullptr)
        {
            soo = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo>();
        }
        return soo;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        if(vpn_distinguisher == nullptr)
        {
            vpn_distinguisher = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher>();
        }
        return vpn_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(rt != nullptr)
    {
        children["rt"] = rt;
    }

    if(soo != nullptr)
    {
        children["soo"] = soo;
    }

    if(vpn_distinguisher != nullptr)
    {
        children["vpn-distinguisher"] = vpn_distinguisher;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Cost()
    :
    community_id(this, {"community_id", "cost_value"})
    , igp(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp>())
    , pre_bestpath(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath>())
{
    igp->parent = this;
    pre_bestpath->parent = this;

    yang_name = "cost"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::~Cost()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return (igp !=  nullptr && igp->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::has_operation() const
{
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (igp !=  nullptr && igp->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId>();
        c->parent = this;
        community_id.append(c);
        return c;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : community_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(pre_bestpath != nullptr)
    {
        children["pre-bestpath"] = pre_bestpath;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "igp" || name == "pre-bestpath")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::has_data() const
{
    if (is_presence_container) return true;
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id";
    ADD_KEY_TOKEN(community_id, "community-id");
    ADD_KEY_TOKEN(cost_value, "cost-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::Igp()
    :
    community_id(this, {"community_id", "cost_value"})
{

    yang_name = "igp"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::~Igp()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::has_operation() const
{
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId>();
        c->parent = this;
        community_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : community_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_data() const
{
    if (is_presence_container) return true;
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id";
    ADD_KEY_TOKEN(community_id, "community-id");
    ADD_KEY_TOKEN(cost_value, "cost-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::PreBestpath()
    :
    community_id(this, {"community_id", "cost_value"})
{

    yang_name = "pre-bestpath"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::~PreBestpath()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::has_operation() const
{
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId>();
        c->parent = this;
        community_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : community_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "pre-bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_data() const
{
    if (is_presence_container) return true;
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id";
    ADD_KEY_TOKEN(community_id, "community-id");
    ADD_KEY_TOKEN(cost_value, "cost-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Rt()
    :
    asn_nn{YType::str, "asn-nn"}
        ,
    range(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range>())
{
    range->parent = this;

    yang_name = "rt"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::~Rt()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : asn_nn.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::has_operation() const
{
    for (auto const & leaf : asn_nn.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto asn_nn_name_datas = asn_nn.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), asn_nn_name_datas.begin(), asn_nn_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::Range()
    :
    lower_limit{YType::str, "lower-limit"},
    high_limit{YType::str, "high-limit"},
    additive{YType::empty, "additive"}
{

    yang_name = "range"; yang_parent_name = "rt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::~Range()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| high_limit.is_set
	|| additive.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(high_limit.yfilter)
	|| ydk::is_set(additive.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (high_limit.is_set || is_set(high_limit.yfilter)) leaf_name_data.push_back(high_limit.get_name_leafdata());
    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-limit")
    {
        high_limit = value;
        high_limit.value_namespace = name_space;
        high_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "high-limit")
    {
        high_limit.yfilter = yfilter;
    }
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "high-limit" || name == "additive")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::Soo()
    :
    asn_nn{YType::str, "asn-nn"}
{

    yang_name = "soo"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::~Soo()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::has_data() const
{
    if (is_presence_container) return true;
    return asn_nn.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_nn.is_set || is_set(asn_nn.yfilter)) leaf_name_data.push_back(asn_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn = value;
        asn_nn.value_namespace = name_space;
        asn_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::VpnDistinguisher()
    :
    asn_nn{YType::str, "asn-nn"}
        ,
    range(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range>())
{
    range->parent = this;

    yang_name = "vpn-distinguisher"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return asn_nn.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_nn.is_set || is_set(asn_nn.yfilter)) leaf_name_data.push_back(asn_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn = value;
        asn_nn.value_namespace = name_space;
        asn_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::Range()
    :
    lower_limit{YType::str, "lower-limit"},
    high_limit{YType::str, "high-limit"},
    additive{YType::empty, "additive"}
{

    yang_name = "range"; yang_parent_name = "vpn-distinguisher"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::~Range()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| high_limit.is_set
	|| additive.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(high_limit.yfilter)
	|| ydk::is_set(additive.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (high_limit.is_set || is_set(high_limit.yfilter)) leaf_name_data.push_back(high_limit.get_name_leafdata());
    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-limit")
    {
        high_limit = value;
        high_limit.value_namespace = name_space;
        high_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "high-limit")
    {
        high_limit.yfilter = yfilter;
    }
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::VpnDistinguisher::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "high-limit" || name == "additive")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::has_data() const
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::has_operation() const
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

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::get_children() const
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Ip()
    :
    df{YType::uint8, "df"}
        ,
    address(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address>())
    , default_(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default>())
    , global(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop>())
    , precedence(nullptr) // presence node
    , qos_group(nullptr) // presence node
    , tos(nullptr) // presence node
    , vrf(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf>())
{
    address->parent = this;
    default_->parent = this;
    global->parent = this;
    next_hop->parent = this;
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::~Ip()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::has_data() const
{
    if (is_presence_container) return true;
    return df.is_set
	|| (address !=  nullptr && address->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df.is_set || is_set(df.yfilter)) leaf_name_data.push_back(df.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default>();
        }
        return default_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup>();
        }
        return qos_group;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    if(qos_group != nullptr)
    {
        children["qos-group"] = qos_group;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df")
    {
        df = value;
        df.value_namespace = name_space;
        df.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df")
    {
        df.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "global" || name == "next-hop" || name == "precedence" || name == "qos-group" || name == "tos" || name == "vrf" || name == "df")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::Address()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::~Address()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Default()
    :
    global(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop>())
    , vrf(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf>())
{
    global->parent = this;
    next_hop->parent = this;
    vrf->parent = this;

    yang_name = "default"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::~Default()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::~Global()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrf()
    :
    vrfs(this, {"vrf"})
{

    yang_name = "vrf"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs>();
        c->parent = this;
        vrfs.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrfs.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"}
        ,
    next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop>())
{
    next_hop->parent = this;

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::~Global()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::NextHop()
    :
    address{YType::str, "address"},
    peer_address{YType::empty, "peer-address"},
    self{YType::empty, "self"}
        ,
    dynamic(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic>())
    , encapsulate(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate>())
    , recursive(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive>())
    , verify_availability(nullptr) // presence node
{
    dynamic->parent = this;
    encapsulate->parent = this;
    recursive->parent = this;

    yang_name = "next-hop"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| peer_address.is_set
	|| self.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (encapsulate !=  nullptr && encapsulate->has_data())
	|| (recursive !=  nullptr && recursive->has_data())
	|| (verify_availability !=  nullptr && verify_availability->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(self.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (encapsulate !=  nullptr && encapsulate->has_operation())
	|| (recursive !=  nullptr && recursive->has_operation())
	|| (verify_availability !=  nullptr && verify_availability->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (self.is_set || is_set(self.yfilter)) leaf_name_data.push_back(self.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "encapsulate")
    {
        if(encapsulate == nullptr)
        {
            encapsulate = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate>();
        }
        return encapsulate;
    }

    if(child_yang_name == "recursive")
    {
        if(recursive == nullptr)
        {
            recursive = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive>();
        }
        return recursive;
    }

    if(child_yang_name == "verify-availability")
    {
        if(verify_availability == nullptr)
        {
            verify_availability = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability>();
        }
        return verify_availability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    if(encapsulate != nullptr)
    {
        children["encapsulate"] = encapsulate;
    }

    if(recursive != nullptr)
    {
        children["recursive"] = recursive;
    }

    if(verify_availability != nullptr)
    {
        children["verify-availability"] = verify_availability;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self")
    {
        self = value;
        self.value_namespace = name_space;
        self.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "self")
    {
        self.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "encapsulate" || name == "recursive" || name == "verify-availability" || name == "address" || name == "peer-address" || name == "self")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::Dynamic()
    :
    dhcp{YType::empty, "dhcp"}
{

    yang_name = "dynamic"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::~Dynamic()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return dhcp.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::Encapsulate()
    :
    l3vpn{YType::str, "l3vpn"}
{

    yang_name = "encapsulate"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::~Encapsulate()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::has_data() const
{
    if (is_presence_container) return true;
    return l3vpn.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l3vpn.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3vpn.is_set || is_set(l3vpn.yfilter)) leaf_name_data.push_back(l3vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3vpn")
    {
        l3vpn = value;
        l3vpn.value_namespace = name_space;
        l3vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3vpn")
    {
        l3vpn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Encapsulate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l3vpn")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Recursive()
    :
    ipv4{YType::str, "ipv4"},
    global{YType::str, "global"}
        ,
    vrf(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf>())
{
    vrf->parent = this;

    yang_name = "recursive"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::~Recursive()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| global.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(global.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "ipv4" || name == "global")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrf()
    :
    vrfs(this, {"vrf"})
{

    yang_name = "vrf"; yang_parent_name = "recursive"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs>();
        c->parent = this;
        vrfs.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrfs.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| ipv4.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::VerifyAvailability()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "verify-availability"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::~VerifyAvailability()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-availability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4>();
        c->parent = this;
        ipv4.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    range{YType::uint16, "range"},
    track{YType::uint16, "track"}
{

    yang_name = "ipv4"; yang_parent_name = "verify-availability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::~Ipv4()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| range.is_set
	|| track.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "range" || name == "track")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::Precedence()
    :
    precedence_value{YType::uint8, "precedence-value"},
    precedence_fields{YType::enumeration, "precedence-fields"}
{

    yang_name = "precedence"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::~Precedence()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::has_data() const
{
    if (is_presence_container) return true;
    return precedence_value.is_set
	|| precedence_fields.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(precedence_value.yfilter)
	|| ydk::is_set(precedence_fields.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence_value.is_set || is_set(precedence_value.yfilter)) leaf_name_data.push_back(precedence_value.get_name_leafdata());
    if (precedence_fields.is_set || is_set(precedence_fields.yfilter)) leaf_name_data.push_back(precedence_fields.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence-value")
    {
        precedence_value = value;
        precedence_value.value_namespace = name_space;
        precedence_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-fields")
    {
        precedence_fields = value;
        precedence_fields.value_namespace = name_space;
        precedence_fields.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence-value")
    {
        precedence_value.yfilter = yfilter;
    }
    if(value_path == "precedence-fields")
    {
        precedence_fields.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence-value" || name == "precedence-fields")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::QosGroup()
    :
    qos_id{YType::uint8, "qos-id"}
{

    yang_name = "qos-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::~QosGroup()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::has_data() const
{
    if (is_presence_container) return true;
    return qos_id.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_id.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_id.is_set || is_set(qos_id.yfilter)) leaf_name_data.push_back(qos_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-id")
    {
        qos_id = value;
        qos_id.value_namespace = name_space;
        qos_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-id")
    {
        qos_id.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::QosGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::Tos()
    :
    service_value{YType::uint8, "service-value"},
    tos_fields{YType::enumeration, "tos-fields"}
{

    yang_name = "tos"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::~Tos()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::has_data() const
{
    if (is_presence_container) return true;
    return service_value.is_set
	|| tos_fields.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_value.yfilter)
	|| ydk::is_set(tos_fields.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_value.is_set || is_set(service_value.yfilter)) leaf_name_data.push_back(service_value.get_name_leafdata());
    if (tos_fields.is_set || is_set(tos_fields.yfilter)) leaf_name_data.push_back(tos_fields.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-value")
    {
        service_value = value;
        service_value.value_namespace = name_space;
        service_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-fields")
    {
        tos_fields = value;
        tos_fields.value_namespace = name_space;
        tos_fields.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-value")
    {
        service_value.yfilter = yfilter;
    }
    if(value_path == "tos-fields")
    {
        tos_fields.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-value" || name == "tos-fields")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrf()
    :
    vrfs(this, {"vrf"})
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs>();
        c->parent = this;
        vrfs.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrfs.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"}
        ,
    next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop>())
{
    next_hop->parent = this;

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Vrf::Vrfs::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Ipv6()
    :
    precedence{YType::uint8, "precedence"}
        ,
    address(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address>())
    , default_(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default>())
    , global(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop>())
    , bvrf(this, {"bvrf"})
{
    address->parent = this;
    default_->parent = this;
    global->parent = this;
    next_hop->parent = this;

    yang_name = "ipv6"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::~Ipv6()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bvrf.len(); index++)
    {
        if(bvrf[index]->has_data())
            return true;
    }
    return precedence.is_set
	|| (address !=  nullptr && address->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<bvrf.len(); index++)
    {
        if(bvrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default>();
        }
        return default_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "bvrf")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf>();
        c->parent = this;
        bvrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    count = 0;
    for (auto c : bvrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "global" || name == "next-hop" || name == "bvrf" || name == "precedence")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::Address()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::~Address()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Default()
    :
    global(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop>())
    , dvrf(this, {"dvrf"})
{
    global->parent = this;
    next_hop->parent = this;

    yang_name = "default"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::~Default()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dvrf.len(); index++)
    {
        if(dvrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::has_operation() const
{
    for (std::size_t index=0; index<dvrf.len(); index++)
    {
        if(dvrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "dvrf")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf>();
        c->parent = this;
        dvrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    count = 0;
    for (auto c : dvrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "next-hop" || name == "dvrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::Global()
    :
    next_hop{YType::str, "next-hop"}
{

    yang_name = "global"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::~Global()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"}
        ,
    ipv6s(this, {"ipv6"})
{

    yang_name = "next-hop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6s.len(); index++)
    {
        if(ipv6s[index]->has_data())
            return true;
    }
    return next_hop_address.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::has_operation() const
{
    for (std::size_t index=0; index<ipv6s.len(); index++)
    {
        if(ipv6s[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6s")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s>();
        c->parent = this;
        ipv6s.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv6s.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6s" || name == "next-hop-address")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::Ipv6s()
    :
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ipv6s"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::~Ipv6s()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6s";
    ADD_KEY_TOKEN(ipv6, "ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::NextHop::Ipv6s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf()
    :
    dvrf{YType::str, "dvrf"}
        ,
    dvrf0(this, {"dvrf0"})
{

    yang_name = "dvrf"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::~Dvrf()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dvrf0.len(); index++)
    {
        if(dvrf0[index]->has_data())
            return true;
    }
    return dvrf.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::has_operation() const
{
    for (std::size_t index=0; index<dvrf0.len(); index++)
    {
        if(dvrf0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dvrf.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvrf";
    ADD_KEY_TOKEN(dvrf, "dvrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dvrf.is_set || is_set(dvrf.yfilter)) leaf_name_data.push_back(dvrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dvrf0")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0>();
        c->parent = this;
        dvrf0.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dvrf0.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dvrf")
    {
        dvrf = value;
        dvrf.value_namespace = name_space;
        dvrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dvrf")
    {
        dvrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dvrf0" || name == "dvrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::Dvrf0()
    :
    dvrf0{YType::str, "dvrf0"},
    next_hop{YType::empty, "next-hop"}
{

    yang_name = "dvrf0"; yang_parent_name = "dvrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::~Dvrf0()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::has_data() const
{
    if (is_presence_container) return true;
    return dvrf0.is_set
	|| next_hop.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dvrf0.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvrf0";
    ADD_KEY_TOKEN(dvrf0, "dvrf0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dvrf0.is_set || is_set(dvrf0.yfilter)) leaf_name_data.push_back(dvrf0.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dvrf0")
    {
        dvrf0 = value;
        dvrf0.value_namespace = name_space;
        dvrf0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dvrf0")
    {
        dvrf0.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Default::Dvrf::Dvrf0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dvrf0" || name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::~Global()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NextHop()
    :
    verify_availability{YType::str, "verify-availability"}
        ,
    nh_ipv6(this, {"nh_ipv6"})
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nh_ipv6.len(); index++)
    {
        if(nh_ipv6[index]->has_data())
            return true;
    }
    return verify_availability.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::has_operation() const
{
    for (std::size_t index=0; index<nh_ipv6.len(); index++)
    {
        if(nh_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(verify_availability.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verify_availability.is_set || is_set(verify_availability.yfilter)) leaf_name_data.push_back(verify_availability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-ipv6")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6>();
        c->parent = this;
        nh_ipv6.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nh_ipv6.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "verify-availability")
    {
        verify_availability = value;
        verify_availability.value_namespace = name_space;
        verify_availability.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "verify-availability")
    {
        verify_availability.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-ipv6" || name == "verify-availability")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::NhIpv6()
    :
    nh_ipv6{YType::str, "nh-ipv6"},
    nh_ipv60{YType::str, "nh-ipv60"}
{

    yang_name = "nh-ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::~NhIpv6()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_data() const
{
    if (is_presence_container) return true;
    return nh_ipv6.is_set
	|| nh_ipv60.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_ipv6.yfilter)
	|| ydk::is_set(nh_ipv60.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-ipv6";
    ADD_KEY_TOKEN(nh_ipv6, "nh-ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_ipv6.is_set || is_set(nh_ipv6.yfilter)) leaf_name_data.push_back(nh_ipv6.get_name_leafdata());
    if (nh_ipv60.is_set || is_set(nh_ipv60.yfilter)) leaf_name_data.push_back(nh_ipv60.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-ipv6")
    {
        nh_ipv6 = value;
        nh_ipv6.value_namespace = name_space;
        nh_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-ipv60")
    {
        nh_ipv60 = value;
        nh_ipv60.value_namespace = name_space;
        nh_ipv60.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-ipv6")
    {
        nh_ipv6.yfilter = yfilter;
    }
    if(value_path == "nh-ipv60")
    {
        nh_ipv60.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-ipv6" || name == "nh-ipv60")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NextHop()
    :
    peer_address{YType::empty, "peer-address"},
    recursive{YType::str, "recursive"}
        ,
    nha_ipv6(this, {"nha_ipv6"})
    , encapsulate(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate>())
    , verify_availability(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability>())
{
    encapsulate->parent = this;
    verify_availability->parent = this;

    yang_name = "next-hop"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nha_ipv6.len(); index++)
    {
        if(nha_ipv6[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| recursive.is_set
	|| (encapsulate !=  nullptr && encapsulate->has_data())
	|| (verify_availability !=  nullptr && verify_availability->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::has_operation() const
{
    for (std::size_t index=0; index<nha_ipv6.len(); index++)
    {
        if(nha_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(recursive.yfilter)
	|| (encapsulate !=  nullptr && encapsulate->has_operation())
	|| (verify_availability !=  nullptr && verify_availability->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (recursive.is_set || is_set(recursive.yfilter)) leaf_name_data.push_back(recursive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nha-ipv6")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6>();
        c->parent = this;
        nha_ipv6.append(c);
        return c;
    }

    if(child_yang_name == "encapsulate")
    {
        if(encapsulate == nullptr)
        {
            encapsulate = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate>();
        }
        return encapsulate;
    }

    if(child_yang_name == "verify-availability")
    {
        if(verify_availability == nullptr)
        {
            verify_availability = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability>();
        }
        return verify_availability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nha_ipv6.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(encapsulate != nullptr)
    {
        children["encapsulate"] = encapsulate;
    }

    if(verify_availability != nullptr)
    {
        children["verify-availability"] = verify_availability;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive")
    {
        recursive = value;
        recursive.value_namespace = name_space;
        recursive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "recursive")
    {
        recursive.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nha-ipv6" || name == "encapsulate" || name == "verify-availability" || name == "peer-address" || name == "recursive")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv6()
    :
    nha_ipv6{YType::str, "nha-ipv6"}
        ,
    nha_ipv60(this, {"nha_ipv60"})
{

    yang_name = "nha-ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::~NhaIpv6()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nha_ipv60.len(); index++)
    {
        if(nha_ipv60[index]->has_data())
            return true;
    }
    return nha_ipv6.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::has_operation() const
{
    for (std::size_t index=0; index<nha_ipv60.len(); index++)
    {
        if(nha_ipv60[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nha_ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nha-ipv6";
    ADD_KEY_TOKEN(nha_ipv6, "nha-ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nha_ipv6.is_set || is_set(nha_ipv6.yfilter)) leaf_name_data.push_back(nha_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nha-ipv60")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60>();
        c->parent = this;
        nha_ipv60.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nha_ipv60.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nha-ipv6")
    {
        nha_ipv6 = value;
        nha_ipv6.value_namespace = name_space;
        nha_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nha-ipv6")
    {
        nha_ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nha-ipv60" || name == "nha-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::NhaIpv60()
    :
    nha_ipv60{YType::str, "nha-ipv60"},
    nh_ipv6{YType::str, "nh-ipv6"}
{

    yang_name = "nha-ipv60"; yang_parent_name = "nha-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::~NhaIpv60()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_data() const
{
    if (is_presence_container) return true;
    return nha_ipv60.is_set
	|| nh_ipv6.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nha_ipv60.yfilter)
	|| ydk::is_set(nh_ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nha-ipv60";
    ADD_KEY_TOKEN(nha_ipv60, "nha-ipv60");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nha_ipv60.is_set || is_set(nha_ipv60.yfilter)) leaf_name_data.push_back(nha_ipv60.get_name_leafdata());
    if (nh_ipv6.is_set || is_set(nh_ipv6.yfilter)) leaf_name_data.push_back(nh_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nha-ipv60")
    {
        nha_ipv60 = value;
        nha_ipv60.value_namespace = name_space;
        nha_ipv60.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-ipv6")
    {
        nh_ipv6 = value;
        nh_ipv6.value_namespace = name_space;
        nh_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nha-ipv60")
    {
        nha_ipv60.yfilter = yfilter;
    }
    if(value_path == "nh-ipv6")
    {
        nh_ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nha-ipv60" || name == "nh-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::Encapsulate()
    :
    l3vpn{YType::str, "l3vpn"}
{

    yang_name = "encapsulate"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::~Encapsulate()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::has_data() const
{
    if (is_presence_container) return true;
    return l3vpn.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l3vpn.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3vpn.is_set || is_set(l3vpn.yfilter)) leaf_name_data.push_back(l3vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3vpn")
    {
        l3vpn = value;
        l3vpn.value_namespace = name_space;
        l3vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3vpn")
    {
        l3vpn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::Encapsulate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l3vpn")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VerifyAvailability()
    :
    va_ipv6(this, {"va_ipv6"})
{

    yang_name = "verify-availability"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::~VerifyAvailability()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<va_ipv6.len(); index++)
    {
        if(va_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::has_operation() const
{
    for (std::size_t index=0; index<va_ipv6.len(); index++)
    {
        if(va_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-availability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "va-ipv6")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6>();
        c->parent = this;
        va_ipv6.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : va_ipv6.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "va-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::VaIpv6()
    :
    va_ipv6{YType::str, "va-ipv6"},
    seq_nh{YType::uint16, "seq-nh"}
{

    yang_name = "va-ipv6"; yang_parent_name = "verify-availability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::~VaIpv6()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_data() const
{
    if (is_presence_container) return true;
    return va_ipv6.is_set
	|| seq_nh.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(va_ipv6.yfilter)
	|| ydk::is_set(seq_nh.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "va-ipv6";
    ADD_KEY_TOKEN(va_ipv6, "va-ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (va_ipv6.is_set || is_set(va_ipv6.yfilter)) leaf_name_data.push_back(va_ipv6.get_name_leafdata());
    if (seq_nh.is_set || is_set(seq_nh.yfilter)) leaf_name_data.push_back(seq_nh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "va-ipv6")
    {
        va_ipv6 = value;
        va_ipv6.value_namespace = name_space;
        va_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-nh")
    {
        seq_nh = value;
        seq_nh.value_namespace = name_space;
        seq_nh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "va-ipv6")
    {
        va_ipv6.yfilter = yfilter;
    }
    if(value_path == "seq-nh")
    {
        seq_nh.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "va-ipv6" || name == "seq-nh")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf()
    :
    bvrf{YType::str, "bvrf"}
        ,
    bvrf0(this, {"bvrf0"})
{

    yang_name = "bvrf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::~Bvrf()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bvrf0.len(); index++)
    {
        if(bvrf0[index]->has_data())
            return true;
    }
    return bvrf.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::has_operation() const
{
    for (std::size_t index=0; index<bvrf0.len(); index++)
    {
        if(bvrf0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bvrf.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvrf";
    ADD_KEY_TOKEN(bvrf, "bvrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvrf.is_set || is_set(bvrf.yfilter)) leaf_name_data.push_back(bvrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bvrf0")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0>();
        c->parent = this;
        bvrf0.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bvrf0.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvrf")
    {
        bvrf = value;
        bvrf.value_namespace = name_space;
        bvrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvrf")
    {
        bvrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bvrf0" || name == "bvrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::Bvrf0()
    :
    bvrf0{YType::str, "bvrf0"}
        ,
    next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bvrf0"; yang_parent_name = "bvrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::~Bvrf0()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::has_data() const
{
    if (is_presence_container) return true;
    return bvrf0.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bvrf0.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvrf0";
    ADD_KEY_TOKEN(bvrf0, "bvrf0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvrf0.is_set || is_set(bvrf0.yfilter)) leaf_name_data.push_back(bvrf0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvrf0")
    {
        bvrf0 = value;
        bvrf0.value_namespace = name_space;
        bvrf0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvrf0")
    {
        bvrf0.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "bvrf0")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::NextHop()
    :
    bipv6{YType::str, "bipv6"},
    verify_availability{YType::empty, "verify-availability"}
{

    yang_name = "next-hop"; yang_parent_name = "bvrf0"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return bipv6.is_set
	|| verify_availability.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bipv6.yfilter)
	|| ydk::is_set(verify_availability.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bipv6.is_set || is_set(bipv6.yfilter)) leaf_name_data.push_back(bipv6.get_name_leafdata());
    if (verify_availability.is_set || is_set(verify_availability.yfilter)) leaf_name_data.push_back(verify_availability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bipv6")
    {
        bipv6 = value;
        bipv6.value_namespace = name_space;
        bipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-availability")
    {
        verify_availability = value;
        verify_availability.value_namespace = name_space;
        verify_availability.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bipv6")
    {
        bipv6.yfilter = yfilter;
    }
    if(value_path == "verify-availability")
    {
        verify_availability.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bipv6" || name == "verify-availability")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::Level()
    :
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "level"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::~Level()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::has_data() const
{
    if (is_presence_container) return true;
    return level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| nssa_only.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_1_2.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.yfilter)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
        level_1_2.value_namespace = name_space;
        level_1_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-1-2")
    {
        level_1_2.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-1-2" || name == "level-2" || name == "nssa-only")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::Lisp()
    :
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::~Lisp()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Metric()
    :
    metric_change{YType::str, "metric-change"}
        ,
    values(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values>())
{
    values->parent = this;

    yang_name = "metric"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::~Metric()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_change.is_set
	|| (values !=  nullptr && values->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_change.yfilter)
	|| (values !=  nullptr && values->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_change.is_set || is_set(metric_change.yfilter)) leaf_name_data.push_back(metric_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "values")
    {
        if(values == nullptr)
        {
            values = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values>();
        }
        return values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(values != nullptr)
    {
        children["values"] = values;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-change")
    {
        metric_change = value;
        metric_change.value_namespace = name_space;
        metric_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-change")
    {
        metric_change.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "values" || name == "metric-change")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::Values()
    :
    value_{YType::uint32, "value"},
    delay{YType::str, "delay"},
    reliability{YType::uint8, "reliability"},
    loading{YType::uint8, "loading"},
    mtu{YType::uint32, "MTU"}
{

    yang_name = "values"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::~Values()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| delay.is_set
	|| reliability.is_set
	|| loading.is_set
	|| mtu.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(loading.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (loading.is_set || is_set(loading.yfilter)) leaf_name_data.push_back(loading.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loading")
    {
        loading = value;
        loading.value_namespace = name_space;
        loading.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "MTU")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "loading")
    {
        loading.yfilter = yfilter;
    }
    if(value_path == "MTU")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric::Values::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "delay" || name == "reliability" || name == "loading" || name == "MTU")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::Origin()
    :
    origin_value{YType::enumeration, "origin-value"},
    egp{YType::uint32, "egp"}
{

    yang_name = "origin"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::~Origin()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::has_data() const
{
    if (is_presence_container) return true;
    return origin_value.is_set
	|| egp.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(origin_value.yfilter)
	|| ydk::is_set(egp.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_value.is_set || is_set(origin_value.yfilter)) leaf_name_data.push_back(origin_value.get_name_leafdata());
    if (egp.is_set || is_set(egp.yfilter)) leaf_name_data.push_back(egp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-value")
    {
        origin_value = value;
        origin_value.value_namespace = name_space;
        origin_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egp")
    {
        egp = value;
        egp.value_namespace = name_space;
        egp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-value")
    {
        origin_value.yfilter = yfilter;
    }
    if(value_path == "egp")
    {
        egp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "origin-value" || name == "egp")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::Tag()
    :
    tag_val{YType::uint32, "tag-val"},
    tag_ipv4{YType::str, "tag-ipv4"}
{

    yang_name = "tag"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::has_data() const
{
    if (is_presence_container) return true;
    return tag_val.is_set
	|| tag_ipv4.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag_val.yfilter)
	|| ydk::is_set(tag_ipv4.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_val.is_set || is_set(tag_val.yfilter)) leaf_name_data.push_back(tag_val.get_name_leafdata());
    if (tag_ipv4.is_set || is_set(tag_ipv4.yfilter)) leaf_name_data.push_back(tag_ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-val")
    {
        tag_val = value;
        tag_val.value_namespace = name_space;
        tag_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-ipv4")
    {
        tag_ipv4 = value;
        tag_ipv4.value_namespace = name_space;
        tag_ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-val")
    {
        tag_val.yfilter = yfilter;
    }
    if(value_path == "tag-ipv4")
    {
        tag_ipv4.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-val" || name == "tag-ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Match()
    :
    mpls_label{YType::empty, "mpls-label"},
    track{YType::uint16, "track"}
        ,
    additional_paths(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths>())
    , as_path(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath>())
    , clns(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns>())
    , community(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community>())
    , extcommunity(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity>())
    , interface(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface>())
    , ip(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip>())
    , ipv6(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6>())
    , length(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length>())
    , local_preference(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference>())
    , mdt_group(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup>())
    , metric(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric>())
    , policy_list(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList>())
    , route_type(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType>())
    , rpki(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki>())
    , source_protocol(nullptr) // presence node
    , tag(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag>())
{
    additional_paths->parent = this;
    as_path->parent = this;
    clns->parent = this;
    community->parent = this;
    extcommunity->parent = this;
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    length->parent = this;
    local_preference->parent = this;
    mdt_group->parent = this;
    metric->parent = this;
    policy_list->parent = this;
    route_type->parent = this;
    rpki->parent = this;
    tag->parent = this;

    yang_name = "match"; yang_parent_name = "route-map-without-order-seq"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::~Match()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| track.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (clns !=  nullptr && clns->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (extcommunity !=  nullptr && extcommunity->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (local_preference !=  nullptr && local_preference->has_data())
	|| (mdt_group !=  nullptr && mdt_group->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (policy_list !=  nullptr && policy_list->has_data())
	|| (route_type !=  nullptr && route_type->has_data())
	|| (rpki !=  nullptr && rpki->has_data())
	|| (source_protocol !=  nullptr && source_protocol->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(track.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (clns !=  nullptr && clns->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (extcommunity !=  nullptr && extcommunity->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (local_preference !=  nullptr && local_preference->has_operation())
	|| (mdt_group !=  nullptr && mdt_group->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (policy_list !=  nullptr && policy_list->has_operation())
	|| (route_type !=  nullptr && route_type->has_operation())
	|| (rpki !=  nullptr && rpki->has_operation())
	|| (source_protocol !=  nullptr && source_protocol->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community>();
        }
        return community;
    }

    if(child_yang_name == "extcommunity")
    {
        if(extcommunity == nullptr)
        {
            extcommunity = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity>();
        }
        return extcommunity;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length>();
        }
        return length;
    }

    if(child_yang_name == "local-preference")
    {
        if(local_preference == nullptr)
        {
            local_preference = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference>();
        }
        return local_preference;
    }

    if(child_yang_name == "mdt-group")
    {
        if(mdt_group == nullptr)
        {
            mdt_group = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup>();
        }
        return mdt_group;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "policy-list")
    {
        if(policy_list == nullptr)
        {
            policy_list = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList>();
        }
        return policy_list;
    }

    if(child_yang_name == "route-type")
    {
        if(route_type == nullptr)
        {
            route_type = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType>();
        }
        return route_type;
    }

    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki>();
        }
        return rpki;
    }

    if(child_yang_name == "source-protocol")
    {
        if(source_protocol == nullptr)
        {
            source_protocol = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol>();
        }
        return source_protocol;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(extcommunity != nullptr)
    {
        children["extcommunity"] = extcommunity;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(length != nullptr)
    {
        children["length"] = length;
    }

    if(local_preference != nullptr)
    {
        children["local-preference"] = local_preference;
    }

    if(mdt_group != nullptr)
    {
        children["mdt-group"] = mdt_group;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(policy_list != nullptr)
    {
        children["policy-list"] = policy_list;
    }

    if(route_type != nullptr)
    {
        children["route-type"] = route_type;
    }

    if(rpki != nullptr)
    {
        children["rpki"] = rpki;
    }

    if(source_protocol != nullptr)
    {
        children["source-protocol"] = source_protocol;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "as-path" || name == "clns" || name == "community" || name == "extcommunity" || name == "interface" || name == "ip" || name == "ipv6" || name == "length" || name == "local-preference" || name == "mdt-group" || name == "metric" || name == "policy-list" || name == "route-type" || name == "rpki" || name == "source-protocol" || name == "tag" || name == "mpls-label" || name == "track")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdditionalPaths()
    :
    advertise_set(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet>())
{
    advertise_set->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return (advertise_set !=  nullptr && advertise_set->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| (advertise_set !=  nullptr && advertise_set->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-set")
    {
        if(advertise_set == nullptr)
        {
            advertise_set = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet>();
        }
        return advertise_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(advertise_set != nullptr)
    {
        children["advertise-set"] = advertise_set;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-set")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::AdvertiseSet()
    :
    all(nullptr) // presence node
    , best(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best>())
    , best_range(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange>())
    , group_best(nullptr) // presence node
{
    best->parent = this;
    best_range->parent = this;

    yang_name = "advertise-set"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::~AdvertiseSet()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_range !=  nullptr && best_range->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_range !=  nullptr && best_range->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-range")
    {
        if(best_range == nullptr)
        {
            best_range = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange>();
        }
        return best_range;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_range != nullptr)
    {
        children["best-range"] = best_range;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "best-range" || name == "group-best")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::All()
    :
    best{YType::uint8, "best"},
    best_range{YType::uint8, "best-range"}
        ,
    group_best(nullptr) // presence node
{

    yang_name = "all"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::~All()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set
	|| best_range.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::GroupBest()
    :
    best{YType::empty, "best"},
    best_range{YType::empty, "best-range"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::~GroupBest()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set
	|| best_range.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::Best()
    :
    best_range(this, {"best_range"})
{

    yang_name = "best"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::~Best()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange>();
        c->parent = this;
        best_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : best_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::BestRange()
    :
    best_range{YType::uint8, "best-range"},
    all{YType::empty, "all"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::~BestRange()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_data() const
{
    if (is_presence_container) return true;
    return best_range.is_set
	|| all.is_set
	|| group_best.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    ADD_KEY_TOKEN(best_range, "best-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range" || name == "all" || name == "group-best")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::BestRange()
    :
    adv_path(this, {"adv_path"})
{

    yang_name = "best-range"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::~BestRange()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adv_path.len(); index++)
    {
        if(adv_path[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_operation() const
{
    for (std::size_t index=0; index<adv_path.len(); index++)
    {
        if(adv_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adv-path")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath>();
        c->parent = this;
        adv_path.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adv_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-path")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::AdvPath()
    :
    adv_path{YType::uint8, "adv-path"},
    adv_path0{YType::uint8, "adv-path0"}
{

    yang_name = "adv-path"; yang_parent_name = "best-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::~AdvPath()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_data() const
{
    if (is_presence_container) return true;
    return adv_path.is_set
	|| adv_path0.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_path.yfilter)
	|| ydk::is_set(adv_path0.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-path";
    ADD_KEY_TOKEN(adv_path, "adv-path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_path.is_set || is_set(adv_path.yfilter)) leaf_name_data.push_back(adv_path.get_name_leafdata());
    if (adv_path0.is_set || is_set(adv_path0.yfilter)) leaf_name_data.push_back(adv_path0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-path")
    {
        adv_path = value;
        adv_path.value_namespace = name_space;
        adv_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-path0")
    {
        adv_path0 = value;
        adv_path0.value_namespace = name_space;
        adv_path0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-path")
    {
        adv_path.yfilter = yfilter;
    }
    if(value_path == "adv-path0")
    {
        adv_path0.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-path" || name == "adv-path0")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"},
    best_range{YType::uint8, "best-range"}
{

    yang_name = "group-best"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::~GroupBest()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| best.is_set
	|| best_range.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::AsPath()
    :
    access_list{YType::uint16, "access-list"}
{

    yang_name = "as-path"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::~AsPath()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::Clns()
    :
    name{YType::str, "name"}
{

    yang_name = "clns"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::~Clns()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::Community()
    :
    name{YType::str, "name"}
{

    yang_name = "community"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::~Community()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::Extcommunity()
    :
    name{YType::str, "name"}
{

    yang_name = "extcommunity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::~Extcommunity()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcommunity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Extcommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::Interface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "interface"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Ip()
    :
    address(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address>())
    , flowspec(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop>())
    , redistribution_source(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource>())
    , route_source(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource>())
{
    address->parent = this;
    flowspec->parent = this;
    next_hop->parent = this;
    redistribution_source->parent = this;
    route_source->parent = this;

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::~Ip()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (flowspec !=  nullptr && flowspec->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (redistribution_source !=  nullptr && redistribution_source->has_data())
	|| (route_source !=  nullptr && route_source->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (flowspec !=  nullptr && flowspec->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (redistribution_source !=  nullptr && redistribution_source->has_operation())
	|| (route_source !=  nullptr && route_source->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "flowspec")
    {
        if(flowspec == nullptr)
        {
            flowspec = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec>();
        }
        return flowspec;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "redistribution-source")
    {
        if(redistribution_source == nullptr)
        {
            redistribution_source = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource>();
        }
        return redistribution_source;
    }

    if(child_yang_name == "route-source")
    {
        if(route_source == nullptr)
        {
            route_source = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource>();
        }
        return route_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(flowspec != nullptr)
    {
        children["flowspec"] = flowspec;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(redistribution_source != nullptr)
    {
        children["redistribution-source"] = redistribution_source;
    }

    if(route_source != nullptr)
    {
        children["route-source"] = route_source;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "flowspec" || name == "next-hop" || name == "redistribution-source" || name == "route-source")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::Address()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::~Address()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::Flowspec()
    :
    dest_pfx(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx>())
    , src_pfx(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx>())
{
    dest_pfx->parent = this;
    src_pfx->parent = this;

    yang_name = "flowspec"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::~Flowspec()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::has_data() const
{
    if (is_presence_container) return true;
    return (dest_pfx !=  nullptr && dest_pfx->has_data())
	|| (src_pfx !=  nullptr && src_pfx->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::has_operation() const
{
    return is_set(yfilter)
	|| (dest_pfx !=  nullptr && dest_pfx->has_operation())
	|| (src_pfx !=  nullptr && src_pfx->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-pfx")
    {
        if(dest_pfx == nullptr)
        {
            dest_pfx = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx>();
        }
        return dest_pfx;
    }

    if(child_yang_name == "src-pfx")
    {
        if(src_pfx == nullptr)
        {
            src_pfx = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx>();
        }
        return src_pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dest_pfx != nullptr)
    {
        children["dest-pfx"] = dest_pfx;
    }

    if(src_pfx != nullptr)
    {
        children["src-pfx"] = src_pfx;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-pfx" || name == "src-pfx")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::DestPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "dest-pfx"; yang_parent_name = "flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::~DestPfx()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::DestPfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::SrcPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "src-pfx"; yang_parent_name = "flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::~SrcPfx()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::Flowspec::SrcPfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::NextHop()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "next-hop"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::RedistributionSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "redistribution-source"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::~RedistributionSource()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RedistributionSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::RouteSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "route-source"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::~RouteSource()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ip::RouteSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Ipv6()
    :
    address(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address>())
    , flowspec(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop>())
    , route_source(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource>())
{
    address->parent = this;
    flowspec->parent = this;
    next_hop->parent = this;
    route_source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::~Ipv6()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (flowspec !=  nullptr && flowspec->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (route_source !=  nullptr && route_source->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (flowspec !=  nullptr && flowspec->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (route_source !=  nullptr && route_source->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "flowspec")
    {
        if(flowspec == nullptr)
        {
            flowspec = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec>();
        }
        return flowspec;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "route-source")
    {
        if(route_source == nullptr)
        {
            route_source = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource>();
        }
        return route_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(flowspec != nullptr)
    {
        children["flowspec"] = flowspec;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(route_source != nullptr)
    {
        children["route-source"] = route_source;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "flowspec" || name == "next-hop" || name == "route-source")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::Address()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::~Address()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::Flowspec()
    :
    dest_pfx(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx>())
    , src_pfx(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx>())
{
    dest_pfx->parent = this;
    src_pfx->parent = this;

    yang_name = "flowspec"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::~Flowspec()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::has_data() const
{
    if (is_presence_container) return true;
    return (dest_pfx !=  nullptr && dest_pfx->has_data())
	|| (src_pfx !=  nullptr && src_pfx->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::has_operation() const
{
    return is_set(yfilter)
	|| (dest_pfx !=  nullptr && dest_pfx->has_operation())
	|| (src_pfx !=  nullptr && src_pfx->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-pfx")
    {
        if(dest_pfx == nullptr)
        {
            dest_pfx = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx>();
        }
        return dest_pfx;
    }

    if(child_yang_name == "src-pfx")
    {
        if(src_pfx == nullptr)
        {
            src_pfx = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx>();
        }
        return src_pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dest_pfx != nullptr)
    {
        children["dest-pfx"] = dest_pfx;
    }

    if(src_pfx != nullptr)
    {
        children["src-pfx"] = src_pfx;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-pfx" || name == "src-pfx")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::DestPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "dest-pfx"; yang_parent_name = "flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::~DestPfx()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::DestPfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::SrcPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "src-pfx"; yang_parent_name = "flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::~SrcPfx()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::Flowspec::SrcPfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::NextHop()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "next-hop"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::RouteSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "route-source"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::~RouteSource()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Ipv6::RouteSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Length()
    :
    lengths(this, {"min_len", "max_len"})
{

    yang_name = "length"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::~Length()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lengths.len(); index++)
    {
        if(lengths[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::has_operation() const
{
    for (std::size_t index=0; index<lengths.len(); index++)
    {
        if(lengths[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lengths")
    {
        auto c = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths>();
        c->parent = this;
        lengths.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lengths.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lengths")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::Lengths()
    :
    min_len{YType::uint32, "min-len"},
    max_len{YType::uint32, "max-len"}
{

    yang_name = "lengths"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::~Lengths()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::has_data() const
{
    if (is_presence_container) return true;
    return min_len.is_set
	|| max_len.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_len.yfilter)
	|| ydk::is_set(max_len.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lengths";
    ADD_KEY_TOKEN(min_len, "min-len");
    ADD_KEY_TOKEN(max_len, "max-len");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_len.is_set || is_set(min_len.yfilter)) leaf_name_data.push_back(min_len.get_name_leafdata());
    if (max_len.is_set || is_set(max_len.yfilter)) leaf_name_data.push_back(max_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-len")
    {
        min_len = value;
        min_len.value_namespace = name_space;
        min_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-len")
    {
        max_len = value;
        max_len.value_namespace = name_space;
        max_len.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-len")
    {
        min_len.yfilter = yfilter;
    }
    if(value_path == "max-len")
    {
        max_len.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Length::Lengths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-len" || name == "max-len")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::LocalPreference()
    :
    values{YType::uint32, "values"}
{

    yang_name = "local-preference"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::~LocalPreference()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::has_operation() const
{
    for (auto const & leaf : values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(values.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto values_name_datas = values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), values_name_datas.begin(), values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "values")
    {
        values.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "values")
    {
        values.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "values")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::MdtGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "mdt-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::~MdtGroup()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::Metric()
    :
    metric_value{YType::str, "metric-value"},
    external{YType::str, "external"}
{

    yang_name = "metric"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::~Metric()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_value.is_set
	|| external.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(external.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "external")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::PolicyList()
    :
    policy_map_names{YType::str, "policy-map-names"}
{

    yang_name = "policy-list"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::~PolicyList()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : policy_map_names.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::has_operation() const
{
    for (auto const & leaf : policy_map_names.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_map_names.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_map_names_name_datas = policy_map_names.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_map_names_name_datas.begin(), policy_map_names_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-names")
    {
        policy_map_names.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-names")
    {
        policy_map_names.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-names")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::RouteType()
    :
    internal{YType::empty, "internal"},
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    local{YType::empty, "local"}
        ,
    external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "route-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::~RouteType()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::has_data() const
{
    if (is_presence_container) return true;
    return internal.is_set
	|| level_1.is_set
	|| level_2.is_set
	|| local.is_set
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "nssa-external" || name == "internal" || name == "level-1" || name == "level-2" || name == "local")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::External()
    :
    type_1{YType::empty, "type-1"},
    type_2{YType::empty, "type-2"}
{

    yang_name = "external"; yang_parent_name = "route-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::~External()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::has_data() const
{
    if (is_presence_container) return true;
    return type_1.is_set
	|| type_2.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_1.yfilter)
	|| ydk::is_set(type_2.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_1.is_set || is_set(type_1.yfilter)) leaf_name_data.push_back(type_1.get_name_leafdata());
    if (type_2.is_set || is_set(type_2.yfilter)) leaf_name_data.push_back(type_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-1")
    {
        type_1 = value;
        type_1.value_namespace = name_space;
        type_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-2")
    {
        type_2 = value;
        type_2.value_namespace = name_space;
        type_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-1")
    {
        type_1.yfilter = yfilter;
    }
    if(value_path == "type-2")
    {
        type_2.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-1" || name == "type-2")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::NssaExternal()
    :
    type_1{YType::empty, "type-1"},
    type_2{YType::empty, "type-2"}
{

    yang_name = "nssa-external"; yang_parent_name = "route-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::~NssaExternal()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return type_1.is_set
	|| type_2.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_1.yfilter)
	|| ydk::is_set(type_2.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_1.is_set || is_set(type_1.yfilter)) leaf_name_data.push_back(type_1.get_name_leafdata());
    if (type_2.is_set || is_set(type_2.yfilter)) leaf_name_data.push_back(type_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-1")
    {
        type_1 = value;
        type_1.value_namespace = name_space;
        type_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-2")
    {
        type_2 = value;
        type_2.value_namespace = name_space;
        type_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-1")
    {
        type_1.yfilter = yfilter;
    }
    if(value_path == "type-2")
    {
        type_2.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-1" || name == "type-2")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::Rpki()
    :
    invalid{YType::empty, "invalid"},
    not_found{YType::empty, "not-found"},
    valid{YType::empty, "valid"}
{

    yang_name = "rpki"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::~Rpki()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::has_data() const
{
    if (is_presence_container) return true;
    return invalid.is_set
	|| not_found.is_set
	|| valid.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(not_found.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (not_found.is_set || is_set(not_found.yfilter)) leaf_name_data.push_back(not_found.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-found")
    {
        not_found = value;
        not_found.value_namespace = name_space;
        not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "not-found")
    {
        not_found.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "not-found" || name == "valid")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::SourceProtocol()
    :
    bgp{YType::str, "bgp"},
    connected{YType::empty, "connected"},
    eigrp{YType::str, "eigrp"},
    isis{YType::empty, "isis"},
    lisp{YType::empty, "lisp"},
    mobile{YType::empty, "mobile"},
    ospf{YType::str, "ospf"},
    ospfv3{YType::str, "ospfv3"},
    rip{YType::empty, "rip"},
    static_{YType::empty, "static"}
{

    yang_name = "source-protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::~SourceProtocol()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bgp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : eigrp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ospf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ospfv3.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return connected.is_set
	|| isis.is_set
	|| lisp.is_set
	|| mobile.is_set
	|| rip.is_set
	|| static_.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::has_operation() const
{
    for (auto const & leaf : bgp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : eigrp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ospf.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ospfv3.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(mobile.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(ospfv3.yfilter)
	|| ydk::is_set(rip.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (mobile.is_set || is_set(mobile.yfilter)) leaf_name_data.push_back(mobile.get_name_leafdata());
    if (rip.is_set || is_set(rip.yfilter)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    auto bgp_name_datas = bgp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bgp_name_datas.begin(), bgp_name_datas.end());
    auto eigrp_name_datas = eigrp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), eigrp_name_datas.begin(), eigrp_name_datas.end());
    auto ospf_name_datas = ospf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ospf_name_datas.begin(), ospf_name_datas.end());
    auto ospfv3_name_datas = ospfv3.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ospfv3_name_datas.begin(), ospfv3_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp.append(value);
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp.append(value);
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile")
    {
        mobile = value;
        mobile.value_namespace = name_space;
        mobile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf.append(value);
    }
    if(value_path == "ospfv3")
    {
        ospfv3.append(value);
    }
    if(value_path == "rip")
    {
        rip = value;
        rip.value_namespace = name_space;
        rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "lisp")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "mobile")
    {
        mobile.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "ospfv3")
    {
        ospfv3.yfilter = yfilter;
    }
    if(value_path == "rip")
    {
        rip.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "lisp" || name == "mobile" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::Tag()
    :
    tag_value{YType::uint32, "tag_value"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    list(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List>())
{
    list->parent = this;

    yang_name = "tag"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (list !=  nullptr && list->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::has_operation() const
{
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv4_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag_value.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag_value_name_datas = tag_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_value_name_datas.begin(), tag_value_name_datas.end());
    auto ipv4_address_name_datas = ipv4_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_address_name_datas.begin(), ipv4_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag_value")
    {
        tag_value.append(value);
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag_value")
    {
        tag_value.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "tag_value" || name == "ipv4-address")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::List()
    :
    tag_names{YType::str, "tag-names"}
{

    yang_name = "list"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::~List()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag_names.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::has_operation() const
{
    for (auto const & leaf : tag_names.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag_names.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag_names_name_datas = tag_names.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_names_name_datas.begin(), tag_names_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-names")
    {
        tag_names.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-names")
    {
        tag_names.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-names")
        return true;
    return false;
}

Native::RouteTag::RouteTag()
    :
    list(std::make_shared<Native::RouteTag::List>())
    , notation(std::make_shared<Native::RouteTag::Notation>())
{
    list->parent = this;
    notation->parent = this;

    yang_name = "route-tag"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RouteTag::~RouteTag()
{
}

bool Native::RouteTag::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data())
	|| (notation !=  nullptr && notation->has_data());
}

bool Native::RouteTag::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (notation !=  nullptr && notation->has_operation());
}

std::string Native::RouteTag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-eigrp:list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::RouteTag::List>();
        }
        return list;
    }

    if(child_yang_name == "Cisco-IOS-XE-eigrp:notation")
    {
        if(notation == nullptr)
        {
            notation = std::make_shared<Native::RouteTag::Notation>();
        }
        return notation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["Cisco-IOS-XE-eigrp:list"] = list;
    }

    if(notation != nullptr)
    {
        children["Cisco-IOS-XE-eigrp:notation"] = notation;
    }

    return children;
}

void Native::RouteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "notation")
        return true;
    return false;
}

Native::RouteTag::List::List()
    :
    rt_name(this, {"rt_name"})
{

    yang_name = "list"; yang_parent_name = "route-tag"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RouteTag::List::~List()
{
}

bool Native::RouteTag::List::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rt_name.len(); index++)
    {
        if(rt_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::has_operation() const
{
    for (std::size_t index=0; index<rt_name.len(); index++)
    {
        if(rt_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteTag::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/route-tag/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteTag::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-name")
    {
        auto c = std::make_shared<Native::RouteTag::List::RtName>();
        c->parent = this;
        rt_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rt_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteTag::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-name")
        return true;
    return false;
}

Native::RouteTag::List::RtName::RtName()
    :
    rt_name{YType::str, "rt-name"}
        ,
    deny(std::make_shared<Native::RouteTag::List::RtName::Deny>())
    , permit(std::make_shared<Native::RouteTag::List::RtName::Permit>())
    , seq(std::make_shared<Native::RouteTag::List::RtName::Seq>())
{
    deny->parent = this;
    permit->parent = this;
    seq->parent = this;

    yang_name = "rt-name"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RouteTag::List::RtName::~RtName()
{
}

bool Native::RouteTag::List::RtName::has_data() const
{
    if (is_presence_container) return true;
    return rt_name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data())
	|| (seq !=  nullptr && seq->has_data());
}

bool Native::RouteTag::List::RtName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation())
	|| (seq !=  nullptr && seq->has_operation());
}

std::string Native::RouteTag::List::RtName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/route-tag/Cisco-IOS-XE-eigrp:list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteTag::List::RtName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-name";
    ADD_KEY_TOKEN(rt_name, "rt-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_name.is_set || is_set(rt_name.yfilter)) leaf_name_data.push_back(rt_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::RouteTag::List::RtName::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::RouteTag::List::RtName::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "seq")
    {
        if(seq == nullptr)
        {
            seq = std::make_shared<Native::RouteTag::List::RtName::Seq>();
        }
        return seq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    if(seq != nullptr)
    {
        children["seq"] = seq;
    }

    return children;
}

void Native::RouteTag::List::RtName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-name")
    {
        rt_name = value;
        rt_name.value_namespace = name_space;
        rt_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::List::RtName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-name")
    {
        rt_name.yfilter = yfilter;
    }
}

bool Native::RouteTag::List::RtName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "seq" || name == "rt-name")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Deny::Deny()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "deny"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Deny::~Deny()
{
}

bool Native::RouteTag::List::RtName::Deny::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Deny::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteTag::List::RtName::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::RouteTag::List::RtName::Deny::Ipv4>();
        c->parent = this;
        ipv4.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteTag::List::RtName::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::List::RtName::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::List::RtName::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Deny::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Deny::Ipv4::~Ipv4()
{
}

bool Native::RouteTag::List::RtName::Deny::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Deny::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::RouteTag::List::RtName::Deny::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Deny::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Deny::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Deny::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteTag::List::RtName::Deny::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::List::RtName::Deny::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::RouteTag::List::RtName::Deny::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Permit::Permit()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "permit"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Permit::~Permit()
{
}

bool Native::RouteTag::List::RtName::Permit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Permit::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteTag::List::RtName::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::RouteTag::List::RtName::Permit::Ipv4>();
        c->parent = this;
        ipv4.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::RouteTag::List::RtName::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::List::RtName::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::List::RtName::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Permit::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Permit::Ipv4::~Ipv4()
{
}

bool Native::RouteTag::List::RtName::Permit::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Permit::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::RouteTag::List::RtName::Permit::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Permit::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Permit::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Permit::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteTag::List::RtName::Permit::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::List::RtName::Permit::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::RouteTag::List::RtName::Permit::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Seq::Seq()
    :
    seq_num(this, {"seq_num"})
{

    yang_name = "seq"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Seq::~Seq()
{
}

bool Native::RouteTag::List::RtName::Seq::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<seq_num.len(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Seq::has_operation() const
{
    for (std::size_t index=0; index<seq_num.len(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteTag::List::RtName::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        auto c = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum>();
        c->parent = this;
        seq_num.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::get_children() const
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

void Native::RouteTag::List::RtName::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::List::RtName::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::List::RtName::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-num")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Seq::SeqNum::SeqNum()
    :
    seq_num{YType::uint32, "seq-num"}
        ,
    deny(std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Deny>())
    , permit(std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "seq-num"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Seq::SeqNum::~SeqNum()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::has_data() const
{
    if (is_presence_container) return true;
    return seq_num.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num";
    ADD_KEY_TOKEN(seq_num, "seq-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::SeqNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::List::RtName::Seq::SeqNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "seq-num")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Seq::SeqNum::Deny::Deny()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "deny"; yang_parent_name = "seq-num"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Seq::SeqNum::Deny::~Deny()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Deny::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::List::RtName::Seq::SeqNum::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Seq::SeqNum::Permit::Permit()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "permit"; yang_parent_name = "seq-num"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Seq::SeqNum::Permit::~Permit()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Permit::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::List::RtName::Seq::SeqNum::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::RouteTag::Notation::Notation()
    :
    dotted_decimal{YType::empty, "dotted-decimal"}
{

    yang_name = "notation"; yang_parent_name = "route-tag"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RouteTag::Notation::~Notation()
{
}

bool Native::RouteTag::Notation::has_data() const
{
    if (is_presence_container) return true;
    return dotted_decimal.is_set;
}

bool Native::RouteTag::Notation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dotted_decimal.yfilter);
}

std::string Native::RouteTag::Notation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/route-tag/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteTag::Notation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:notation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::Notation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dotted_decimal.is_set || is_set(dotted_decimal.yfilter)) leaf_name_data.push_back(dotted_decimal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::Notation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::Notation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::RouteTag::Notation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dotted-decimal")
    {
        dotted_decimal = value;
        dotted_decimal.value_namespace = name_space;
        dotted_decimal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::Notation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dotted-decimal")
    {
        dotted_decimal.yfilter = yfilter;
    }
}

bool Native::RouteTag::Notation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dotted-decimal")
        return true;
    return false;
}

Native::TableMap::TableMap()
    :
    name{YType::str, "name"},
    default_{YType::str, "Cisco-IOS-XE-qos:default"}
        ,
    map(this, {"from", "to"})
{

    yang_name = "table-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TableMap::~TableMap()
{
}

bool Native::TableMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return name.is_set
	|| default_.is_set;
}

bool Native::TableMap::has_operation() const
{
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::TableMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TableMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TableMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TableMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-qos:map")
    {
        auto c = std::make_shared<Native::TableMap::Map>();
        c->parent = this;
        map.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TableMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : map.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::TableMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-qos:default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TableMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::TableMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "name" || name == "default")
        return true;
    return false;
}

Native::TableMap::Map::Map()
    :
    from{YType::uint8, "from"},
    to{YType::uint8, "to"}
{

    yang_name = "map"; yang_parent_name = "table-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::TableMap::Map::~Map()
{
}

bool Native::TableMap::Map::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set;
}

bool Native::TableMap::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::TableMap::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:map";
    ADD_KEY_TOKEN(from, "from");
    ADD_KEY_TOKEN(to, "to");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TableMap::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TableMap::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TableMap::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::TableMap::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::TableMap::Map::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::TableMap::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to")
        return true;
    return false;
}

Native::Sdm::Sdm()
    :
    prefer(nullptr) // presence node
{

    yang_name = "sdm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Sdm::~Sdm()
{
}

bool Native::Sdm::has_data() const
{
    if (is_presence_container) return true;
    return (prefer !=  nullptr && prefer->has_data());
}

bool Native::Sdm::has_operation() const
{
    return is_set(yfilter)
	|| (prefer !=  nullptr && prefer->has_operation());
}

std::string Native::Sdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-switch:prefer")
    {
        if(prefer == nullptr)
        {
            prefer = std::make_shared<Native::Sdm::Prefer>();
        }
        return prefer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefer != nullptr)
    {
        children["Cisco-IOS-XE-switch:prefer"] = prefer;
    }

    return children;
}

void Native::Sdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Sdm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Sdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer")
        return true;
    return false;
}

Native::Sdm::Prefer::Prefer()
    :
    default_{YType::empty, "default"},
    qos{YType::empty, "qos"}
{

    yang_name = "prefer"; yang_parent_name = "sdm"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Sdm::Prefer::~Prefer()
{
}

bool Native::Sdm::Prefer::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| qos.is_set;
}

bool Native::Sdm::Prefer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(qos.yfilter);
}

std::string Native::Sdm::Prefer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/sdm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sdm::Prefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:prefer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sdm::Prefer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (qos.is_set || is_set(qos.yfilter)) leaf_name_data.push_back(qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sdm::Prefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sdm::Prefer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Sdm::Prefer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos")
    {
        qos = value;
        qos.value_namespace = name_space;
        qos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sdm::Prefer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "qos")
    {
        qos.yfilter = yfilter;
    }
}

bool Native::Sdm::Prefer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "qos")
        return true;
    return false;
}

Native::Mls::Mls()
{

    yang_name = "mls"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mls::~Mls()
{
}

bool Native::Mls::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Mls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Mls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::ObjectGroup::ObjectGroup()
    :
    network(this, {"name"})
    , security(this, {"name"})
    , service(this, {"name"})
{

    yang_name = "object-group"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ObjectGroup::~ObjectGroup()
{
}

bool Native::ObjectGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<security.len(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::has_operation() const
{
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<security.len(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ObjectGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ObjectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-object-group:network")
    {
        auto c = std::make_shared<Native::ObjectGroup::Network>();
        c->parent = this;
        network.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-object-group:security")
    {
        auto c = std::make_shared<Native::ObjectGroup::Security>();
        c->parent = this;
        security.append(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-object-group:service")
    {
        auto c = std::make_shared<Native::ObjectGroup::Service>();
        c->parent = this;
        service.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : network.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : security.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : service.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::ObjectGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ObjectGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ObjectGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "security" || name == "service")
        return true;
    return false;
}

Native::ObjectGroup::Network::Network()
    :
    name{YType::str, "name"}
        ,
    obj_mode_config_network_group(std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup>())
{
    obj_mode_config_network_group->parent = this;

    yang_name = "network"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ObjectGroup::Network::~Network()
{
}

bool Native::ObjectGroup::Network::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (obj_mode_config_network_group !=  nullptr && obj_mode_config_network_group->has_data());
}

bool Native::ObjectGroup::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (obj_mode_config_network_group !=  nullptr && obj_mode_config_network_group->has_operation());
}

std::string Native::ObjectGroup::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/object-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ObjectGroup::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-object-group:network";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-Mode-config-network-group")
    {
        if(obj_mode_config_network_group == nullptr)
        {
            obj_mode_config_network_group = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup>();
        }
        return obj_mode_config_network_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(obj_mode_config_network_group != nullptr)
    {
        children["obj-Mode-config-network-group"] = obj_mode_config_network_group;
    }

    return children;
}

void Native::ObjectGroup::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-Mode-config-network-group" || name == "name")
        return true;
    return false;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::ObjModeConfigNetworkGroup()
    :
    description{YType::str, "description"},
    group_object{YType::str, "group-object"}
        ,
    network_address(this, {"ipv4_addr", "ipv4_mask"})
    , host(this, {"ipv4_host"})
    , range(std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range>())
{
    range->parent = this;

    yang_name = "obj-Mode-config-network-group"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::~ObjModeConfigNetworkGroup()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_address.len(); index++)
    {
        if(network_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return description.is_set
	|| group_object.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_operation() const
{
    for (std::size_t index=0; index<network_address.len(); index++)
    {
        if(network_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(group_object.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-Mode-config-network-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.yfilter)) leaf_name_data.push_back(group_object.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network_address")
    {
        auto c = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress>();
        c->parent = this;
        network_address.append(c);
        return c;
    }

    if(child_yang_name == "host")
    {
        auto c = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host>();
        c->parent = this;
        host.append(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : network_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : host.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-object")
    {
        group_object = value;
        group_object.value_namespace = name_space;
        group_object.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "group-object")
    {
        group_object.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network_address" || name == "host" || name == "range" || name == "description" || name == "group-object")
        return true;
    return false;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::NetworkAddress()
    :
    ipv4_addr{YType::str, "ipv4_addr"},
    ipv4_mask{YType::str, "ipv4_mask"}
{

    yang_name = "network_address"; yang_parent_name = "obj-Mode-config-network-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::~NetworkAddress()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network_address";
    ADD_KEY_TOKEN(ipv4_addr, "ipv4_addr");
    ADD_KEY_TOKEN(ipv4_mask, "ipv4_mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4_addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4_mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4_addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4_mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4_addr" || name == "ipv4_mask")
        return true;
    return false;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::Host()
    :
    ipv4_host{YType::str, "ipv4-host"}
{

    yang_name = "host"; yang_parent_name = "obj-Mode-config-network-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::~Host()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_host.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter);
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(ipv4_host, "ipv4-host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host")
        return true;
    return false;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::Range()
    :
    ip_addr_min{YType::str, "ip-addr-min"},
    ip_addr_max{YType::str, "ip-addr-max"}
{

    yang_name = "range"; yang_parent_name = "obj-Mode-config-network-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::~Range()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr_min.is_set
	|| ip_addr_max.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr_min.yfilter)
	|| ydk::is_set(ip_addr_max.yfilter);
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr_min.is_set || is_set(ip_addr_min.yfilter)) leaf_name_data.push_back(ip_addr_min.get_name_leafdata());
    if (ip_addr_max.is_set || is_set(ip_addr_max.yfilter)) leaf_name_data.push_back(ip_addr_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr-min")
    {
        ip_addr_min = value;
        ip_addr_min.value_namespace = name_space;
        ip_addr_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr-max")
    {
        ip_addr_max = value;
        ip_addr_max.value_namespace = name_space;
        ip_addr_max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr-min")
    {
        ip_addr_min.yfilter = yfilter;
    }
    if(value_path == "ip-addr-max")
    {
        ip_addr_max.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr-min" || name == "ip-addr-max")
        return true;
    return false;
}

Native::ObjectGroup::Security::Security()
    :
    name{YType::str, "name"}
        ,
    security_group(std::make_shared<Native::ObjectGroup::Security::SecurityGroup>())
{
    security_group->parent = this;

    yang_name = "security"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ObjectGroup::Security::~Security()
{
}

bool Native::ObjectGroup::Security::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (security_group !=  nullptr && security_group->has_data());
}

bool Native::ObjectGroup::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (security_group !=  nullptr && security_group->has_operation());
}

std::string Native::ObjectGroup::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/object-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ObjectGroup::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-object-group:security";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::ObjectGroup::Security::SecurityGroup>();
        }
        return security_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    return children;
}

void Native::ObjectGroup::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "name")
        return true;
    return false;
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup()
    :
    description{YType::str, "description"},
    group_object{YType::str, "group-object"}
        ,
    security_group(std::make_shared<Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_>())
{
    security_group->parent = this;

    yang_name = "security-group"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Security::SecurityGroup::~SecurityGroup()
{
}

bool Native::ObjectGroup::Security::SecurityGroup::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| group_object.is_set
	|| (security_group !=  nullptr && security_group->has_data());
}

bool Native::ObjectGroup::Security::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(group_object.yfilter)
	|| (security_group !=  nullptr && security_group->has_operation());
}

std::string Native::ObjectGroup::Security::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Security::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.yfilter)) leaf_name_data.push_back(group_object.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_>();
        }
        return security_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    return children;
}

void Native::ObjectGroup::Security::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-object")
    {
        group_object = value;
        group_object.value_namespace = name_space;
        group_object.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Security::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "group-object")
    {
        group_object.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Security::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "description" || name == "group-object")
        return true;
    return false;
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::SecurityGroup_()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "security-group"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::~SecurityGroup_()
{
}

bool Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity::Rt::AsnNn::additive {0, "additive"};

const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::PrecedenceFields::critical {0, "critical"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::PrecedenceFields::flash {1, "flash"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::PrecedenceFields::flash_override {2, "flash-override"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::PrecedenceFields::immediate {3, "immediate"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::PrecedenceFields::internet {4, "internet"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::PrecedenceFields::network {5, "network"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::PrecedenceFields::priority {6, "priority"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Precedence::PrecedenceFields::routine {7, "routine"};

const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::TosFields::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::TosFields::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::TosFields::min_delay {2, "min-delay"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::TosFields::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip::Tos::TosFields::normal {4, "normal"};

const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::OriginValue::igp {0, "igp"};
const Enum::YLeaf Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin::OriginValue::incomplete {1, "incomplete"};

const Enum::YLeaf Native::TableMap::Default_::copy {0, "copy"};
const Enum::YLeaf Native::TableMap::Default_::ignore {1, "ignore"};


}
}

