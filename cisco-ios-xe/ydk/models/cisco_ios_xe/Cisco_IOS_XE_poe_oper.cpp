
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_poe_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_poe_oper {

PoeOperData::PoeOperData()
    :
    poe_port(this, {"intf_name"})
{

    yang_name = "poe-oper-data"; yang_parent_name = "Cisco-IOS-XE-poe-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PoeOperData::~PoeOperData()
{
}

bool PoeOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<poe_port.len(); index++)
    {
        if(poe_port[index]->has_data())
            return true;
    }
    return false;
}

bool PoeOperData::has_operation() const
{
    for (std::size_t index=0; index<poe_port.len(); index++)
    {
        if(poe_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PoeOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-poe-oper:poe-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PoeOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PoeOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poe-port")
    {
        auto c = std::make_shared<PoeOperData::PoePort>();
        c->parent = this;
        poe_port.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PoeOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : poe_port.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PoeOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PoeOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PoeOperData::clone_ptr() const
{
    return std::make_shared<PoeOperData>();
}

std::string PoeOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PoeOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PoeOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PoeOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool PoeOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poe-port")
        return true;
    return false;
}

PoeOperData::PoePort::PoePort()
    :
    intf_name{YType::str, "intf-name"},
    poe_intf_enabled{YType::boolean, "poe-intf-enabled"},
    power_used{YType::str, "power-used"},
    pd_class{YType::enumeration, "pd-class"}
{

    yang_name = "poe-port"; yang_parent_name = "poe-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

PoeOperData::PoePort::~PoePort()
{
}

bool PoeOperData::PoePort::has_data() const
{
    if (is_presence_container) return true;
    return intf_name.is_set
	|| poe_intf_enabled.is_set
	|| power_used.is_set
	|| pd_class.is_set;
}

bool PoeOperData::PoePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf_name.yfilter)
	|| ydk::is_set(poe_intf_enabled.yfilter)
	|| ydk::is_set(power_used.yfilter)
	|| ydk::is_set(pd_class.yfilter);
}

std::string PoeOperData::PoePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-poe-oper:poe-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PoeOperData::PoePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poe-port";
    ADD_KEY_TOKEN(intf_name, "intf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PoeOperData::PoePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (poe_intf_enabled.is_set || is_set(poe_intf_enabled.yfilter)) leaf_name_data.push_back(poe_intf_enabled.get_name_leafdata());
    if (power_used.is_set || is_set(power_used.yfilter)) leaf_name_data.push_back(power_used.get_name_leafdata());
    if (pd_class.is_set || is_set(pd_class.yfilter)) leaf_name_data.push_back(pd_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PoeOperData::PoePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PoeOperData::PoePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PoeOperData::PoePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf-name")
    {
        intf_name = value;
        intf_name.value_namespace = name_space;
        intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poe-intf-enabled")
    {
        poe_intf_enabled = value;
        poe_intf_enabled.value_namespace = name_space;
        poe_intf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-used")
    {
        power_used = value;
        power_used.value_namespace = name_space;
        power_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pd-class")
    {
        pd_class = value;
        pd_class.value_namespace = name_space;
        pd_class.value_namespace_prefix = name_space_prefix;
    }
}

void PoeOperData::PoePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf-name")
    {
        intf_name.yfilter = yfilter;
    }
    if(value_path == "poe-intf-enabled")
    {
        poe_intf_enabled.yfilter = yfilter;
    }
    if(value_path == "power-used")
    {
        power_used.yfilter = yfilter;
    }
    if(value_path == "pd-class")
    {
        pd_class.yfilter = yfilter;
    }
}

bool PoeOperData::PoePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-name" || name == "poe-intf-enabled" || name == "power-used" || name == "pd-class")
        return true;
    return false;
}

const Enum::YLeaf IlpowerPdClass::poe_null {0, "poe-null"};
const Enum::YLeaf IlpowerPdClass::poe_unknown {1, "poe-unknown"};
const Enum::YLeaf IlpowerPdClass::poe_cisco {2, "poe-cisco"};
const Enum::YLeaf IlpowerPdClass::poe_ieee0 {3, "poe-ieee0"};
const Enum::YLeaf IlpowerPdClass::poe_ieee1 {4, "poe-ieee1"};
const Enum::YLeaf IlpowerPdClass::poe_ieee2 {5, "poe-ieee2"};
const Enum::YLeaf IlpowerPdClass::poe_ieee3 {6, "poe-ieee3"};
const Enum::YLeaf IlpowerPdClass::poe_ieee4 {7, "poe-ieee4"};
const Enum::YLeaf IlpowerPdClass::poe_ieee5 {8, "poe-ieee5"};
const Enum::YLeaf IlpowerPdClass::poe_ieee_unknown_class {9, "poe-ieee-unknown-class"};


}
}

