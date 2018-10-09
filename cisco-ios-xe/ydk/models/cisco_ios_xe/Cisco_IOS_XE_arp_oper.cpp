
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_arp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_arp_oper {

ArpData::ArpData()
    :
    arp_vrf(this, {"vrf"})
{

    yang_name = "arp-data"; yang_parent_name = "Cisco-IOS-XE-arp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ArpData::~ArpData()
{
}

bool ArpData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<arp_vrf.len(); index++)
    {
        if(arp_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool ArpData::has_operation() const
{
    for (std::size_t index=0; index<arp_vrf.len(); index++)
    {
        if(arp_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-arp-oper:arp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-vrf")
    {
        auto c = std::make_shared<ArpData::ArpVrf>();
        c->parent = this;
        arp_vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : arp_vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ArpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ArpData::clone_ptr() const
{
    return std::make_shared<ArpData>();
}

std::string ArpData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ArpData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ArpData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ArpData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ArpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-vrf")
        return true;
    return false;
}

ArpData::ArpVrf::ArpVrf()
    :
    vrf{YType::str, "vrf"}
        ,
    arp_oper(this, {"address"})
{

    yang_name = "arp-vrf"; yang_parent_name = "arp-data"; is_top_level_class = false; has_list_ancestor = false; 
}

ArpData::ArpVrf::~ArpVrf()
{
}

bool ArpData::ArpVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<arp_oper.len(); index++)
    {
        if(arp_oper[index]->has_data())
            return true;
    }
    return vrf.is_set;
}

bool ArpData::ArpVrf::has_operation() const
{
    for (std::size_t index=0; index<arp_oper.len(); index++)
    {
        if(arp_oper[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string ArpData::ArpVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-arp-oper:arp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string ArpData::ArpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-vrf";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpData::ArpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpData::ArpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-oper")
    {
        auto c = std::make_shared<ArpData::ArpVrf::ArpOper>();
        c->parent = this;
        arp_oper.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpData::ArpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : arp_oper.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ArpData::ArpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void ArpData::ArpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool ArpData::ArpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-oper" || name == "vrf")
        return true;
    return false;
}

ArpData::ArpVrf::ArpOper::ArpOper()
    :
    address{YType::str, "address"},
    enctype{YType::enumeration, "enctype"},
    interface{YType::str, "interface"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    hwtype{YType::enumeration, "hwtype"},
    hardware{YType::str, "hardware"},
    time{YType::str, "time"}
{

    yang_name = "arp-oper"; yang_parent_name = "arp-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

ArpData::ArpVrf::ArpOper::~ArpOper()
{
}

bool ArpData::ArpVrf::ArpOper::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| enctype.is_set
	|| interface.is_set
	|| type.is_set
	|| mode.is_set
	|| hwtype.is_set
	|| hardware.is_set
	|| time.is_set;
}

bool ArpData::ArpVrf::ArpOper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(hwtype.yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string ArpData::ArpVrf::ArpOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-oper";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpData::ArpVrf::ArpOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (hwtype.is_set || is_set(hwtype.yfilter)) leaf_name_data.push_back(hwtype.get_name_leafdata());
    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpData::ArpVrf::ArpOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpData::ArpVrf::ArpOper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ArpData::ArpVrf::ArpOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwtype")
    {
        hwtype = value;
        hwtype.value_namespace = name_space;
        hwtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void ArpData::ArpVrf::ArpOper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "hwtype")
    {
        hwtype.yfilter = yfilter;
    }
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool ArpData::ArpVrf::ArpOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "enctype" || name == "interface" || name == "type" || name == "mode" || name == "hwtype" || name == "hardware" || name == "time")
        return true;
    return false;
}

const Enum::YLeaf IosArpMode::ios_arp_mode_null {0, "ios-arp-mode-null"};
const Enum::YLeaf IosArpMode::ios_arp_mode_dynamic {1, "ios-arp-mode-dynamic"};
const Enum::YLeaf IosArpMode::ios_arp_mode_incomplete {2, "ios-arp-mode-incomplete"};
const Enum::YLeaf IosArpMode::ios_arp_mode_interface {3, "ios-arp-mode-interface"};
const Enum::YLeaf IosArpMode::ios_arp_mode_static {4, "ios-arp-mode-static"};
const Enum::YLeaf IosArpMode::ios_arp_mode_alias {5, "ios-arp-mode-alias"};
const Enum::YLeaf IosArpMode::ios_arp_mode_app_simple {6, "ios-arp-mode-app-simple"};
const Enum::YLeaf IosArpMode::ios_arp_mode_app_alias {7, "ios-arp-mode-app-alias"};
const Enum::YLeaf IosArpMode::ios_arp_mode_app_timer {8, "ios-arp-mode-app-timer"};


}
}

