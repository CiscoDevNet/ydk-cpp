
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_test_trap_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_test_trap_act {

SnmpColdStart::SnmpColdStart()
{

    yang_name = "snmp-cold-start"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

SnmpColdStart::~SnmpColdStart()
{
}

bool SnmpColdStart::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool SnmpColdStart::has_operation() const
{
    return is_set(yfilter);
}

std::string SnmpColdStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:snmp-cold-start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SnmpColdStart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SnmpColdStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpColdStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SnmpColdStart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SnmpColdStart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SnmpColdStart::clone_ptr() const
{
    return std::make_shared<SnmpColdStart>();
}

std::string SnmpColdStart::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SnmpColdStart::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SnmpColdStart::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SnmpColdStart::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SnmpColdStart::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

SnmpWarmStart::SnmpWarmStart()
{

    yang_name = "snmp-warm-start"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

SnmpWarmStart::~SnmpWarmStart()
{
}

bool SnmpWarmStart::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool SnmpWarmStart::has_operation() const
{
    return is_set(yfilter);
}

std::string SnmpWarmStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:snmp-warm-start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SnmpWarmStart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SnmpWarmStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpWarmStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SnmpWarmStart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SnmpWarmStart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SnmpWarmStart::clone_ptr() const
{
    return std::make_shared<SnmpWarmStart>();
}

std::string SnmpWarmStart::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SnmpWarmStart::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SnmpWarmStart::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SnmpWarmStart::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SnmpWarmStart::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InterfaceLinkUp::InterfaceLinkUp()
    :
    input(std::make_shared<InterfaceLinkUp::Input>())
{
    input->parent = this;

    yang_name = "interface-link-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InterfaceLinkUp::~InterfaceLinkUp()
{
}

bool InterfaceLinkUp::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InterfaceLinkUp::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceLinkUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceLinkUp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceLinkUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceLinkUp::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceLinkUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceLinkUp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceLinkUp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InterfaceLinkUp::clone_ptr() const
{
    return std::make_shared<InterfaceLinkUp>();
}

std::string InterfaceLinkUp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InterfaceLinkUp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InterfaceLinkUp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InterfaceLinkUp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InterfaceLinkUp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InterfaceLinkUp::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{

    yang_name = "input"; yang_parent_name = "interface-link-up"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceLinkUp::Input::~Input()
{
}

bool InterfaceLinkUp::Input::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set;
}

bool InterfaceLinkUp::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter);
}

std::string InterfaceLinkUp::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-up/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceLinkUp::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceLinkUp::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceLinkUp::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceLinkUp::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceLinkUp::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceLinkUp::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
}

bool InterfaceLinkUp::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex")
        return true;
    return false;
}

InterfaceLinkDown::InterfaceLinkDown()
    :
    input(std::make_shared<InterfaceLinkDown::Input>())
{
    input->parent = this;

    yang_name = "interface-link-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InterfaceLinkDown::~InterfaceLinkDown()
{
}

bool InterfaceLinkDown::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InterfaceLinkDown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceLinkDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceLinkDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceLinkDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceLinkDown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceLinkDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceLinkDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceLinkDown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InterfaceLinkDown::clone_ptr() const
{
    return std::make_shared<InterfaceLinkDown>();
}

std::string InterfaceLinkDown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InterfaceLinkDown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InterfaceLinkDown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InterfaceLinkDown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InterfaceLinkDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InterfaceLinkDown::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{

    yang_name = "input"; yang_parent_name = "interface-link-down"; is_top_level_class = false; has_list_ancestor = false; 
}

InterfaceLinkDown::Input::~Input()
{
}

bool InterfaceLinkDown::Input::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set;
}

bool InterfaceLinkDown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter);
}

std::string InterfaceLinkDown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-down/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceLinkDown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceLinkDown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceLinkDown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceLinkDown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceLinkDown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceLinkDown::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
}

bool InterfaceLinkDown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex")
        return true;
    return false;
}

SonetSectionStatus::SonetSectionStatus()
    :
    input(std::make_shared<SonetSectionStatus::Input>())
{
    input->parent = this;

    yang_name = "sonet-section-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

SonetSectionStatus::~SonetSectionStatus()
{
}

bool SonetSectionStatus::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool SonetSectionStatus::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string SonetSectionStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-section-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SonetSectionStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SonetSectionStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<SonetSectionStatus::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetSectionStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void SonetSectionStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetSectionStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SonetSectionStatus::clone_ptr() const
{
    return std::make_shared<SonetSectionStatus>();
}

std::string SonetSectionStatus::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SonetSectionStatus::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SonetSectionStatus::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SonetSectionStatus::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SonetSectionStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

SonetSectionStatus::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{

    yang_name = "input"; yang_parent_name = "sonet-section-status"; is_top_level_class = false; has_list_ancestor = false; 
}

SonetSectionStatus::Input::~Input()
{
}

bool SonetSectionStatus::Input::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set;
}

bool SonetSectionStatus::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter);
}

std::string SonetSectionStatus::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-section-status/" << get_segment_path();
    return path_buffer.str();
}

std::string SonetSectionStatus::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SonetSectionStatus::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SonetSectionStatus::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetSectionStatus::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SonetSectionStatus::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
}

void SonetSectionStatus::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
}

bool SonetSectionStatus::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex")
        return true;
    return false;
}

SonetLineStatus::SonetLineStatus()
    :
    input(std::make_shared<SonetLineStatus::Input>())
{
    input->parent = this;

    yang_name = "sonet-line-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

SonetLineStatus::~SonetLineStatus()
{
}

bool SonetLineStatus::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool SonetLineStatus::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string SonetLineStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-line-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SonetLineStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SonetLineStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<SonetLineStatus::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetLineStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void SonetLineStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetLineStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SonetLineStatus::clone_ptr() const
{
    return std::make_shared<SonetLineStatus>();
}

std::string SonetLineStatus::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SonetLineStatus::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SonetLineStatus::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SonetLineStatus::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SonetLineStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

SonetLineStatus::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{

    yang_name = "input"; yang_parent_name = "sonet-line-status"; is_top_level_class = false; has_list_ancestor = false; 
}

SonetLineStatus::Input::~Input()
{
}

bool SonetLineStatus::Input::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set;
}

bool SonetLineStatus::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter);
}

std::string SonetLineStatus::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-line-status/" << get_segment_path();
    return path_buffer.str();
}

std::string SonetLineStatus::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SonetLineStatus::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SonetLineStatus::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetLineStatus::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SonetLineStatus::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
}

void SonetLineStatus::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
}

bool SonetLineStatus::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex")
        return true;
    return false;
}

SonetPathStatus::SonetPathStatus()
    :
    input(std::make_shared<SonetPathStatus::Input>())
{
    input->parent = this;

    yang_name = "sonet-path-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

SonetPathStatus::~SonetPathStatus()
{
}

bool SonetPathStatus::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool SonetPathStatus::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string SonetPathStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-path-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SonetPathStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SonetPathStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<SonetPathStatus::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetPathStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void SonetPathStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetPathStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SonetPathStatus::clone_ptr() const
{
    return std::make_shared<SonetPathStatus>();
}

std::string SonetPathStatus::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SonetPathStatus::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SonetPathStatus::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SonetPathStatus::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SonetPathStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

SonetPathStatus::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{

    yang_name = "input"; yang_parent_name = "sonet-path-status"; is_top_level_class = false; has_list_ancestor = false; 
}

SonetPathStatus::Input::~Input()
{
}

bool SonetPathStatus::Input::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set;
}

bool SonetPathStatus::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter);
}

std::string SonetPathStatus::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-path-status/" << get_segment_path();
    return path_buffer.str();
}

std::string SonetPathStatus::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SonetPathStatus::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SonetPathStatus::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetPathStatus::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SonetPathStatus::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
}

void SonetPathStatus::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
}

bool SonetPathStatus::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex")
        return true;
    return false;
}

InfraSyslogMessageGenerated::InfraSyslogMessageGenerated()
{

    yang_name = "infra-syslog-message-generated"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraSyslogMessageGenerated::~InfraSyslogMessageGenerated()
{
}

bool InfraSyslogMessageGenerated::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InfraSyslogMessageGenerated::has_operation() const
{
    return is_set(yfilter);
}

std::string InfraSyslogMessageGenerated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-syslog-message-generated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraSyslogMessageGenerated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InfraSyslogMessageGenerated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraSyslogMessageGenerated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InfraSyslogMessageGenerated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraSyslogMessageGenerated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InfraSyslogMessageGenerated::clone_ptr() const
{
    return std::make_shared<InfraSyslogMessageGenerated>();
}

std::string InfraSyslogMessageGenerated::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraSyslogMessageGenerated::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraSyslogMessageGenerated::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraSyslogMessageGenerated::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraSyslogMessageGenerated::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InfraFlashDeviceInserted::InfraFlashDeviceInserted()
{

    yang_name = "infra-flash-device-inserted"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraFlashDeviceInserted::~InfraFlashDeviceInserted()
{
}

bool InfraFlashDeviceInserted::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InfraFlashDeviceInserted::has_operation() const
{
    return is_set(yfilter);
}

std::string InfraFlashDeviceInserted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-flash-device-inserted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraFlashDeviceInserted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InfraFlashDeviceInserted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraFlashDeviceInserted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InfraFlashDeviceInserted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraFlashDeviceInserted::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InfraFlashDeviceInserted::clone_ptr() const
{
    return std::make_shared<InfraFlashDeviceInserted>();
}

std::string InfraFlashDeviceInserted::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraFlashDeviceInserted::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraFlashDeviceInserted::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraFlashDeviceInserted::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraFlashDeviceInserted::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InfraFlashDeviceRemoved::InfraFlashDeviceRemoved()
{

    yang_name = "infra-flash-device-removed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraFlashDeviceRemoved::~InfraFlashDeviceRemoved()
{
}

bool InfraFlashDeviceRemoved::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InfraFlashDeviceRemoved::has_operation() const
{
    return is_set(yfilter);
}

std::string InfraFlashDeviceRemoved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-flash-device-removed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraFlashDeviceRemoved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InfraFlashDeviceRemoved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraFlashDeviceRemoved::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InfraFlashDeviceRemoved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraFlashDeviceRemoved::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InfraFlashDeviceRemoved::clone_ptr() const
{
    return std::make_shared<InfraFlashDeviceRemoved>();
}

std::string InfraFlashDeviceRemoved::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraFlashDeviceRemoved::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraFlashDeviceRemoved::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraFlashDeviceRemoved::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraFlashDeviceRemoved::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InfraRedundancyProgression::InfraRedundancyProgression()
{

    yang_name = "infra-redundancy-progression"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraRedundancyProgression::~InfraRedundancyProgression()
{
}

bool InfraRedundancyProgression::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InfraRedundancyProgression::has_operation() const
{
    return is_set(yfilter);
}

std::string InfraRedundancyProgression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-redundancy-progression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraRedundancyProgression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InfraRedundancyProgression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraRedundancyProgression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InfraRedundancyProgression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraRedundancyProgression::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InfraRedundancyProgression::clone_ptr() const
{
    return std::make_shared<InfraRedundancyProgression>();
}

std::string InfraRedundancyProgression::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraRedundancyProgression::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraRedundancyProgression::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraRedundancyProgression::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraRedundancyProgression::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InfraRedundancySwitch::InfraRedundancySwitch()
{

    yang_name = "infra-redundancy-switch"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraRedundancySwitch::~InfraRedundancySwitch()
{
}

bool InfraRedundancySwitch::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InfraRedundancySwitch::has_operation() const
{
    return is_set(yfilter);
}

std::string InfraRedundancySwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-redundancy-switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraRedundancySwitch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InfraRedundancySwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraRedundancySwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InfraRedundancySwitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraRedundancySwitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InfraRedundancySwitch::clone_ptr() const
{
    return std::make_shared<InfraRedundancySwitch>();
}

std::string InfraRedundancySwitch::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraRedundancySwitch::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraRedundancySwitch::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraRedundancySwitch::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraRedundancySwitch::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InfraBridgeNewRoot::InfraBridgeNewRoot()
{

    yang_name = "infra-bridge-new-root"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraBridgeNewRoot::~InfraBridgeNewRoot()
{
}

bool InfraBridgeNewRoot::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InfraBridgeNewRoot::has_operation() const
{
    return is_set(yfilter);
}

std::string InfraBridgeNewRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-bridge-new-root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraBridgeNewRoot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InfraBridgeNewRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraBridgeNewRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InfraBridgeNewRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraBridgeNewRoot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InfraBridgeNewRoot::clone_ptr() const
{
    return std::make_shared<InfraBridgeNewRoot>();
}

std::string InfraBridgeNewRoot::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraBridgeNewRoot::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraBridgeNewRoot::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraBridgeNewRoot::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraBridgeNewRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InfraBridgeTopologyChange::InfraBridgeTopologyChange()
{

    yang_name = "infra-bridge-topology-change"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraBridgeTopologyChange::~InfraBridgeTopologyChange()
{
}

bool InfraBridgeTopologyChange::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InfraBridgeTopologyChange::has_operation() const
{
    return is_set(yfilter);
}

std::string InfraBridgeTopologyChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-bridge-topology-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraBridgeTopologyChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InfraBridgeTopologyChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraBridgeTopologyChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InfraBridgeTopologyChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraBridgeTopologyChange::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InfraBridgeTopologyChange::clone_ptr() const
{
    return std::make_shared<InfraBridgeTopologyChange>();
}

std::string InfraBridgeTopologyChange::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraBridgeTopologyChange::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraBridgeTopologyChange::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraBridgeTopologyChange::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraBridgeTopologyChange::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InfraConfigEvent::InfraConfigEvent()
{

    yang_name = "infra-config-event"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraConfigEvent::~InfraConfigEvent()
{
}

bool InfraConfigEvent::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InfraConfigEvent::has_operation() const
{
    return is_set(yfilter);
}

std::string InfraConfigEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-config-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraConfigEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InfraConfigEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraConfigEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InfraConfigEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraConfigEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> InfraConfigEvent::clone_ptr() const
{
    return std::make_shared<InfraConfigEvent>();
}

std::string InfraConfigEvent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraConfigEvent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraConfigEvent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraConfigEvent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraConfigEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

EntitySensorThresholdNotification::EntitySensorThresholdNotification()
    :
    input(std::make_shared<EntitySensorThresholdNotification::Input>())
{
    input->parent = this;

    yang_name = "entity-sensor-threshold-notification"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

EntitySensorThresholdNotification::~EntitySensorThresholdNotification()
{
}

bool EntitySensorThresholdNotification::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool EntitySensorThresholdNotification::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntitySensorThresholdNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-sensor-threshold-notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntitySensorThresholdNotification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EntitySensorThresholdNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntitySensorThresholdNotification::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorThresholdNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntitySensorThresholdNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntitySensorThresholdNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntitySensorThresholdNotification::clone_ptr() const
{
    return std::make_shared<EntitySensorThresholdNotification>();
}

std::string EntitySensorThresholdNotification::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntitySensorThresholdNotification::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntitySensorThresholdNotification::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntitySensorThresholdNotification::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EntitySensorThresholdNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

EntitySensorThresholdNotification::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{

    yang_name = "input"; yang_parent_name = "entity-sensor-threshold-notification"; is_top_level_class = false; has_list_ancestor = false; 
}

EntitySensorThresholdNotification::Input::~Input()
{
}

bool EntitySensorThresholdNotification::Input::has_data() const
{
    if (is_presence_container) return true;
    return entindex.is_set;
}

bool EntitySensorThresholdNotification::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entindex.yfilter);
}

std::string EntitySensorThresholdNotification::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-sensor-threshold-notification/" << get_segment_path();
    return path_buffer.str();
}

std::string EntitySensorThresholdNotification::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntitySensorThresholdNotification::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.yfilter)) leaf_name_data.push_back(entindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EntitySensorThresholdNotification::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorThresholdNotification::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EntitySensorThresholdNotification::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entindex")
    {
        entindex = value;
        entindex.value_namespace = name_space;
        entindex.value_namespace_prefix = name_space_prefix;
    }
}

void EntitySensorThresholdNotification::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entindex")
    {
        entindex.yfilter = yfilter;
    }
}

bool EntitySensorThresholdNotification::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entindex")
        return true;
    return false;
}

EntityFruPowerStatusChangeFailed::EntityFruPowerStatusChangeFailed()
    :
    input(std::make_shared<EntityFruPowerStatusChangeFailed::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-power-status-change-failed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

EntityFruPowerStatusChangeFailed::~EntityFruPowerStatusChangeFailed()
{
}

bool EntityFruPowerStatusChangeFailed::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool EntityFruPowerStatusChangeFailed::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruPowerStatusChangeFailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-power-status-change-failed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruPowerStatusChangeFailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruPowerStatusChangeFailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruPowerStatusChangeFailed::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruPowerStatusChangeFailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruPowerStatusChangeFailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntityFruPowerStatusChangeFailed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntityFruPowerStatusChangeFailed::clone_ptr() const
{
    return std::make_shared<EntityFruPowerStatusChangeFailed>();
}

std::string EntityFruPowerStatusChangeFailed::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruPowerStatusChangeFailed::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruPowerStatusChangeFailed::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntityFruPowerStatusChangeFailed::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EntityFruPowerStatusChangeFailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

EntityFruPowerStatusChangeFailed::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{

    yang_name = "input"; yang_parent_name = "entity-fru-power-status-change-failed"; is_top_level_class = false; has_list_ancestor = false; 
}

EntityFruPowerStatusChangeFailed::Input::~Input()
{
}

bool EntityFruPowerStatusChangeFailed::Input::has_data() const
{
    if (is_presence_container) return true;
    return entindex.is_set;
}

bool EntityFruPowerStatusChangeFailed::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entindex.yfilter);
}

std::string EntityFruPowerStatusChangeFailed::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-power-status-change-failed/" << get_segment_path();
    return path_buffer.str();
}

std::string EntityFruPowerStatusChangeFailed::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruPowerStatusChangeFailed::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.yfilter)) leaf_name_data.push_back(entindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruPowerStatusChangeFailed::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruPowerStatusChangeFailed::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EntityFruPowerStatusChangeFailed::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entindex")
    {
        entindex = value;
        entindex.value_namespace = name_space;
        entindex.value_namespace_prefix = name_space_prefix;
    }
}

void EntityFruPowerStatusChangeFailed::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entindex")
    {
        entindex.yfilter = yfilter;
    }
}

bool EntityFruPowerStatusChangeFailed::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entindex")
        return true;
    return false;
}

EntityFruModuleStatusChangeUp::EntityFruModuleStatusChangeUp()
    :
    input(std::make_shared<EntityFruModuleStatusChangeUp::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-module-status-change-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

EntityFruModuleStatusChangeUp::~EntityFruModuleStatusChangeUp()
{
}

bool EntityFruModuleStatusChangeUp::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool EntityFruModuleStatusChangeUp::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruModuleStatusChangeUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruModuleStatusChangeUp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruModuleStatusChangeUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruModuleStatusChangeUp::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruModuleStatusChangeUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruModuleStatusChangeUp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntityFruModuleStatusChangeUp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntityFruModuleStatusChangeUp::clone_ptr() const
{
    return std::make_shared<EntityFruModuleStatusChangeUp>();
}

std::string EntityFruModuleStatusChangeUp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruModuleStatusChangeUp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruModuleStatusChangeUp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntityFruModuleStatusChangeUp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EntityFruModuleStatusChangeUp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

EntityFruModuleStatusChangeUp::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{

    yang_name = "input"; yang_parent_name = "entity-fru-module-status-change-up"; is_top_level_class = false; has_list_ancestor = false; 
}

EntityFruModuleStatusChangeUp::Input::~Input()
{
}

bool EntityFruModuleStatusChangeUp::Input::has_data() const
{
    if (is_presence_container) return true;
    return entindex.is_set;
}

bool EntityFruModuleStatusChangeUp::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entindex.yfilter);
}

std::string EntityFruModuleStatusChangeUp::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-up/" << get_segment_path();
    return path_buffer.str();
}

std::string EntityFruModuleStatusChangeUp::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruModuleStatusChangeUp::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.yfilter)) leaf_name_data.push_back(entindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruModuleStatusChangeUp::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruModuleStatusChangeUp::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EntityFruModuleStatusChangeUp::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entindex")
    {
        entindex = value;
        entindex.value_namespace = name_space;
        entindex.value_namespace_prefix = name_space_prefix;
    }
}

void EntityFruModuleStatusChangeUp::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entindex")
    {
        entindex.yfilter = yfilter;
    }
}

bool EntityFruModuleStatusChangeUp::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entindex")
        return true;
    return false;
}

EntityFruModuleStatusChangeDown::EntityFruModuleStatusChangeDown()
    :
    input(std::make_shared<EntityFruModuleStatusChangeDown::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-module-status-change-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

EntityFruModuleStatusChangeDown::~EntityFruModuleStatusChangeDown()
{
}

bool EntityFruModuleStatusChangeDown::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool EntityFruModuleStatusChangeDown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruModuleStatusChangeDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruModuleStatusChangeDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruModuleStatusChangeDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruModuleStatusChangeDown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruModuleStatusChangeDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruModuleStatusChangeDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntityFruModuleStatusChangeDown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntityFruModuleStatusChangeDown::clone_ptr() const
{
    return std::make_shared<EntityFruModuleStatusChangeDown>();
}

std::string EntityFruModuleStatusChangeDown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruModuleStatusChangeDown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruModuleStatusChangeDown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntityFruModuleStatusChangeDown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EntityFruModuleStatusChangeDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

EntityFruModuleStatusChangeDown::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{

    yang_name = "input"; yang_parent_name = "entity-fru-module-status-change-down"; is_top_level_class = false; has_list_ancestor = false; 
}

EntityFruModuleStatusChangeDown::Input::~Input()
{
}

bool EntityFruModuleStatusChangeDown::Input::has_data() const
{
    if (is_presence_container) return true;
    return entindex.is_set;
}

bool EntityFruModuleStatusChangeDown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entindex.yfilter);
}

std::string EntityFruModuleStatusChangeDown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-down/" << get_segment_path();
    return path_buffer.str();
}

std::string EntityFruModuleStatusChangeDown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruModuleStatusChangeDown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.yfilter)) leaf_name_data.push_back(entindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruModuleStatusChangeDown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruModuleStatusChangeDown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EntityFruModuleStatusChangeDown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entindex")
    {
        entindex = value;
        entindex.value_namespace = name_space;
        entindex.value_namespace_prefix = name_space_prefix;
    }
}

void EntityFruModuleStatusChangeDown::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entindex")
    {
        entindex.yfilter = yfilter;
    }
}

bool EntityFruModuleStatusChangeDown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entindex")
        return true;
    return false;
}

EntityFruFanTrayOperStatusUp::EntityFruFanTrayOperStatusUp()
    :
    input(std::make_shared<EntityFruFanTrayOperStatusUp::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-fan-tray-oper-status-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

EntityFruFanTrayOperStatusUp::~EntityFruFanTrayOperStatusUp()
{
}

bool EntityFruFanTrayOperStatusUp::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool EntityFruFanTrayOperStatusUp::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruFanTrayOperStatusUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-oper-status-up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruFanTrayOperStatusUp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruFanTrayOperStatusUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruFanTrayOperStatusUp::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayOperStatusUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruFanTrayOperStatusUp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntityFruFanTrayOperStatusUp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntityFruFanTrayOperStatusUp::clone_ptr() const
{
    return std::make_shared<EntityFruFanTrayOperStatusUp>();
}

std::string EntityFruFanTrayOperStatusUp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruFanTrayOperStatusUp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruFanTrayOperStatusUp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntityFruFanTrayOperStatusUp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EntityFruFanTrayOperStatusUp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

EntityFruFanTrayOperStatusUp::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{

    yang_name = "input"; yang_parent_name = "entity-fru-fan-tray-oper-status-up"; is_top_level_class = false; has_list_ancestor = false; 
}

EntityFruFanTrayOperStatusUp::Input::~Input()
{
}

bool EntityFruFanTrayOperStatusUp::Input::has_data() const
{
    if (is_presence_container) return true;
    return entindex.is_set;
}

bool EntityFruFanTrayOperStatusUp::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entindex.yfilter);
}

std::string EntityFruFanTrayOperStatusUp::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-oper-status-up/" << get_segment_path();
    return path_buffer.str();
}

std::string EntityFruFanTrayOperStatusUp::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruFanTrayOperStatusUp::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.yfilter)) leaf_name_data.push_back(entindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruFanTrayOperStatusUp::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayOperStatusUp::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EntityFruFanTrayOperStatusUp::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entindex")
    {
        entindex = value;
        entindex.value_namespace = name_space;
        entindex.value_namespace_prefix = name_space_prefix;
    }
}

void EntityFruFanTrayOperStatusUp::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entindex")
    {
        entindex.yfilter = yfilter;
    }
}

bool EntityFruFanTrayOperStatusUp::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entindex")
        return true;
    return false;
}

EntityFruFanTrayInserted::EntityFruFanTrayInserted()
    :
    input(std::make_shared<EntityFruFanTrayInserted::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-fan-tray-inserted"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

EntityFruFanTrayInserted::~EntityFruFanTrayInserted()
{
}

bool EntityFruFanTrayInserted::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool EntityFruFanTrayInserted::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruFanTrayInserted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-inserted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruFanTrayInserted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruFanTrayInserted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruFanTrayInserted::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayInserted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruFanTrayInserted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntityFruFanTrayInserted::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntityFruFanTrayInserted::clone_ptr() const
{
    return std::make_shared<EntityFruFanTrayInserted>();
}

std::string EntityFruFanTrayInserted::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruFanTrayInserted::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruFanTrayInserted::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntityFruFanTrayInserted::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EntityFruFanTrayInserted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

EntityFruFanTrayInserted::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{

    yang_name = "input"; yang_parent_name = "entity-fru-fan-tray-inserted"; is_top_level_class = false; has_list_ancestor = false; 
}

EntityFruFanTrayInserted::Input::~Input()
{
}

bool EntityFruFanTrayInserted::Input::has_data() const
{
    if (is_presence_container) return true;
    return entindex.is_set;
}

bool EntityFruFanTrayInserted::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entindex.yfilter);
}

std::string EntityFruFanTrayInserted::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-inserted/" << get_segment_path();
    return path_buffer.str();
}

std::string EntityFruFanTrayInserted::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruFanTrayInserted::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.yfilter)) leaf_name_data.push_back(entindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruFanTrayInserted::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayInserted::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EntityFruFanTrayInserted::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entindex")
    {
        entindex = value;
        entindex.value_namespace = name_space;
        entindex.value_namespace_prefix = name_space_prefix;
    }
}

void EntityFruFanTrayInserted::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entindex")
    {
        entindex.yfilter = yfilter;
    }
}

bool EntityFruFanTrayInserted::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entindex")
        return true;
    return false;
}

EntityFruFanTrayRemoved::EntityFruFanTrayRemoved()
    :
    input(std::make_shared<EntityFruFanTrayRemoved::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-fan-tray-removed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

EntityFruFanTrayRemoved::~EntityFruFanTrayRemoved()
{
}

bool EntityFruFanTrayRemoved::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool EntityFruFanTrayRemoved::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruFanTrayRemoved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-removed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruFanTrayRemoved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruFanTrayRemoved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruFanTrayRemoved::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayRemoved::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruFanTrayRemoved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EntityFruFanTrayRemoved::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EntityFruFanTrayRemoved::clone_ptr() const
{
    return std::make_shared<EntityFruFanTrayRemoved>();
}

std::string EntityFruFanTrayRemoved::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruFanTrayRemoved::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruFanTrayRemoved::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EntityFruFanTrayRemoved::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EntityFruFanTrayRemoved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

EntityFruFanTrayRemoved::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{

    yang_name = "input"; yang_parent_name = "entity-fru-fan-tray-removed"; is_top_level_class = false; has_list_ancestor = false; 
}

EntityFruFanTrayRemoved::Input::~Input()
{
}

bool EntityFruFanTrayRemoved::Input::has_data() const
{
    if (is_presence_container) return true;
    return entindex.is_set;
}

bool EntityFruFanTrayRemoved::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entindex.yfilter);
}

std::string EntityFruFanTrayRemoved::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-removed/" << get_segment_path();
    return path_buffer.str();
}

std::string EntityFruFanTrayRemoved::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EntityFruFanTrayRemoved::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.yfilter)) leaf_name_data.push_back(entindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EntityFruFanTrayRemoved::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayRemoved::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EntityFruFanTrayRemoved::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entindex")
    {
        entindex = value;
        entindex.value_namespace = name_space;
        entindex.value_namespace_prefix = name_space_prefix;
    }
}

void EntityFruFanTrayRemoved::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entindex")
    {
        entindex.yfilter = yfilter;
    }
}

bool EntityFruFanTrayRemoved::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entindex")
        return true;
    return false;
}

PlatformHfrBundleDownedLink::PlatformHfrBundleDownedLink()
    :
    input(std::make_shared<PlatformHfrBundleDownedLink::Input>())
{
    input->parent = this;

    yang_name = "platform-hfr-bundle-downed-link"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

PlatformHfrBundleDownedLink::~PlatformHfrBundleDownedLink()
{
}

bool PlatformHfrBundleDownedLink::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool PlatformHfrBundleDownedLink::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string PlatformHfrBundleDownedLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-downed-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformHfrBundleDownedLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformHfrBundleDownedLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformHfrBundleDownedLink::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrBundleDownedLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void PlatformHfrBundleDownedLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformHfrBundleDownedLink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformHfrBundleDownedLink::clone_ptr() const
{
    return std::make_shared<PlatformHfrBundleDownedLink>();
}

std::string PlatformHfrBundleDownedLink::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformHfrBundleDownedLink::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformHfrBundleDownedLink::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformHfrBundleDownedLink::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformHfrBundleDownedLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

PlatformHfrBundleDownedLink::Input::Input()
    :
    bundle_name{YType::str, "bundle-name"}
{

    yang_name = "input"; yang_parent_name = "platform-hfr-bundle-downed-link"; is_top_level_class = false; has_list_ancestor = false; 
}

PlatformHfrBundleDownedLink::Input::~Input()
{
}

bool PlatformHfrBundleDownedLink::Input::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set;
}

bool PlatformHfrBundleDownedLink::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter);
}

std::string PlatformHfrBundleDownedLink::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-downed-link/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformHfrBundleDownedLink::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformHfrBundleDownedLink::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformHfrBundleDownedLink::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrBundleDownedLink::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformHfrBundleDownedLink::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformHfrBundleDownedLink::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool PlatformHfrBundleDownedLink::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name")
        return true;
    return false;
}

PlatformHfrBundleState::PlatformHfrBundleState()
    :
    input(std::make_shared<PlatformHfrBundleState::Input>())
{
    input->parent = this;

    yang_name = "platform-hfr-bundle-state"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

PlatformHfrBundleState::~PlatformHfrBundleState()
{
}

bool PlatformHfrBundleState::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool PlatformHfrBundleState::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string PlatformHfrBundleState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformHfrBundleState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformHfrBundleState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformHfrBundleState::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrBundleState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void PlatformHfrBundleState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformHfrBundleState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformHfrBundleState::clone_ptr() const
{
    return std::make_shared<PlatformHfrBundleState>();
}

std::string PlatformHfrBundleState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformHfrBundleState::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformHfrBundleState::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformHfrBundleState::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformHfrBundleState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

PlatformHfrBundleState::Input::Input()
    :
    bundle_name{YType::str, "bundle-name"}
{

    yang_name = "input"; yang_parent_name = "platform-hfr-bundle-state"; is_top_level_class = false; has_list_ancestor = false; 
}

PlatformHfrBundleState::Input::~Input()
{
}

bool PlatformHfrBundleState::Input::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set;
}

bool PlatformHfrBundleState::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter);
}

std::string PlatformHfrBundleState::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-state/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformHfrBundleState::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformHfrBundleState::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformHfrBundleState::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrBundleState::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformHfrBundleState::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformHfrBundleState::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool PlatformHfrBundleState::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name")
        return true;
    return false;
}

PlatformHfrPlaneState::PlatformHfrPlaneState()
    :
    input(std::make_shared<PlatformHfrPlaneState::Input>())
{
    input->parent = this;

    yang_name = "platform-hfr-plane-state"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

PlatformHfrPlaneState::~PlatformHfrPlaneState()
{
}

bool PlatformHfrPlaneState::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool PlatformHfrPlaneState::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string PlatformHfrPlaneState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-plane-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformHfrPlaneState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformHfrPlaneState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformHfrPlaneState::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrPlaneState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void PlatformHfrPlaneState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformHfrPlaneState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformHfrPlaneState::clone_ptr() const
{
    return std::make_shared<PlatformHfrPlaneState>();
}

std::string PlatformHfrPlaneState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformHfrPlaneState::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformHfrPlaneState::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformHfrPlaneState::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformHfrPlaneState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

PlatformHfrPlaneState::Input::Input()
    :
    plane_id{YType::uint32, "plane-id"}
{

    yang_name = "input"; yang_parent_name = "platform-hfr-plane-state"; is_top_level_class = false; has_list_ancestor = false; 
}

PlatformHfrPlaneState::Input::~Input()
{
}

bool PlatformHfrPlaneState::Input::has_data() const
{
    if (is_presence_container) return true;
    return plane_id.is_set;
}

bool PlatformHfrPlaneState::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plane_id.yfilter);
}

std::string PlatformHfrPlaneState::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-plane-state/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformHfrPlaneState::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformHfrPlaneState::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformHfrPlaneState::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrPlaneState::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformHfrPlaneState::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane-id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformHfrPlaneState::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane-id")
    {
        plane_id.yfilter = yfilter;
    }
}

bool PlatformHfrPlaneState::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane-id")
        return true;
    return false;
}

RoutingBgpEstablished::RoutingBgpEstablished()
{

    yang_name = "routing-bgp-established"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingBgpEstablished::~RoutingBgpEstablished()
{
}

bool RoutingBgpEstablished::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool RoutingBgpEstablished::has_operation() const
{
    return is_set(yfilter);
}

std::string RoutingBgpEstablished::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-established";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingBgpEstablished::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingBgpEstablished::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpEstablished::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingBgpEstablished::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingBgpEstablished::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingBgpEstablished::clone_ptr() const
{
    return std::make_shared<RoutingBgpEstablished>();
}

std::string RoutingBgpEstablished::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingBgpEstablished::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingBgpEstablished::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingBgpEstablished::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingBgpEstablished::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

RoutingBgpEstablishedRemotePeer::RoutingBgpEstablishedRemotePeer()
    :
    input(std::make_shared<RoutingBgpEstablishedRemotePeer::Input>())
{
    input->parent = this;

    yang_name = "routing-bgp-established-remote-peer"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingBgpEstablishedRemotePeer::~RoutingBgpEstablishedRemotePeer()
{
}

bool RoutingBgpEstablishedRemotePeer::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool RoutingBgpEstablishedRemotePeer::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingBgpEstablishedRemotePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-established-remote-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingBgpEstablishedRemotePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingBgpEstablishedRemotePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingBgpEstablishedRemotePeer::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpEstablishedRemotePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingBgpEstablishedRemotePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingBgpEstablishedRemotePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingBgpEstablishedRemotePeer::clone_ptr() const
{
    return std::make_shared<RoutingBgpEstablishedRemotePeer>();
}

std::string RoutingBgpEstablishedRemotePeer::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingBgpEstablishedRemotePeer::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingBgpEstablishedRemotePeer::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingBgpEstablishedRemotePeer::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingBgpEstablishedRemotePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RoutingBgpEstablishedRemotePeer::Input::Input()
    :
    address{YType::str, "address"}
{

    yang_name = "input"; yang_parent_name = "routing-bgp-established-remote-peer"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingBgpEstablishedRemotePeer::Input::~Input()
{
}

bool RoutingBgpEstablishedRemotePeer::Input::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool RoutingBgpEstablishedRemotePeer::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string RoutingBgpEstablishedRemotePeer::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-established-remote-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingBgpEstablishedRemotePeer::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingBgpEstablishedRemotePeer::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingBgpEstablishedRemotePeer::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpEstablishedRemotePeer::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingBgpEstablishedRemotePeer::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingBgpEstablishedRemotePeer::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool RoutingBgpEstablishedRemotePeer::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

RoutingBgpStateChange::RoutingBgpStateChange()
{

    yang_name = "routing-bgp-state-change"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingBgpStateChange::~RoutingBgpStateChange()
{
}

bool RoutingBgpStateChange::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool RoutingBgpStateChange::has_operation() const
{
    return is_set(yfilter);
}

std::string RoutingBgpStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingBgpStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingBgpStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingBgpStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingBgpStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingBgpStateChange::clone_ptr() const
{
    return std::make_shared<RoutingBgpStateChange>();
}

std::string RoutingBgpStateChange::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingBgpStateChange::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingBgpStateChange::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingBgpStateChange::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingBgpStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

RoutingBgpStateChangeRemotePeer::RoutingBgpStateChangeRemotePeer()
    :
    input(std::make_shared<RoutingBgpStateChangeRemotePeer::Input>())
{
    input->parent = this;

    yang_name = "routing-bgp-state-change-remote-peer"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingBgpStateChangeRemotePeer::~RoutingBgpStateChangeRemotePeer()
{
}

bool RoutingBgpStateChangeRemotePeer::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool RoutingBgpStateChangeRemotePeer::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingBgpStateChangeRemotePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-state-change-remote-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingBgpStateChangeRemotePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingBgpStateChangeRemotePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingBgpStateChangeRemotePeer::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpStateChangeRemotePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingBgpStateChangeRemotePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingBgpStateChangeRemotePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingBgpStateChangeRemotePeer::clone_ptr() const
{
    return std::make_shared<RoutingBgpStateChangeRemotePeer>();
}

std::string RoutingBgpStateChangeRemotePeer::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingBgpStateChangeRemotePeer::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingBgpStateChangeRemotePeer::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingBgpStateChangeRemotePeer::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingBgpStateChangeRemotePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RoutingBgpStateChangeRemotePeer::Input::Input()
    :
    address{YType::str, "address"}
{

    yang_name = "input"; yang_parent_name = "routing-bgp-state-change-remote-peer"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingBgpStateChangeRemotePeer::Input::~Input()
{
}

bool RoutingBgpStateChangeRemotePeer::Input::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool RoutingBgpStateChangeRemotePeer::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string RoutingBgpStateChangeRemotePeer::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-state-change-remote-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingBgpStateChangeRemotePeer::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingBgpStateChangeRemotePeer::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingBgpStateChangeRemotePeer::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpStateChangeRemotePeer::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingBgpStateChangeRemotePeer::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingBgpStateChangeRemotePeer::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool RoutingBgpStateChangeRemotePeer::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

RoutingOspfNeighborStateChange::RoutingOspfNeighborStateChange()
{

    yang_name = "routing-ospf-neighbor-state-change"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingOspfNeighborStateChange::~RoutingOspfNeighborStateChange()
{
}

bool RoutingOspfNeighborStateChange::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool RoutingOspfNeighborStateChange::has_operation() const
{
    return is_set(yfilter);
}

std::string RoutingOspfNeighborStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-ospf-neighbor-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingOspfNeighborStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingOspfNeighborStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingOspfNeighborStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingOspfNeighborStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingOspfNeighborStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingOspfNeighborStateChange::clone_ptr() const
{
    return std::make_shared<RoutingOspfNeighborStateChange>();
}

std::string RoutingOspfNeighborStateChange::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingOspfNeighborStateChange::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingOspfNeighborStateChange::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingOspfNeighborStateChange::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingOspfNeighborStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

RoutingOspfNeighborStateChangeAddress::RoutingOspfNeighborStateChangeAddress()
    :
    input(std::make_shared<RoutingOspfNeighborStateChangeAddress::Input>())
{
    input->parent = this;

    yang_name = "routing-ospf-neighbor-state-change-address"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingOspfNeighborStateChangeAddress::~RoutingOspfNeighborStateChangeAddress()
{
}

bool RoutingOspfNeighborStateChangeAddress::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool RoutingOspfNeighborStateChangeAddress::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingOspfNeighborStateChangeAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-ospf-neighbor-state-change-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingOspfNeighborStateChangeAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingOspfNeighborStateChangeAddress::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingOspfNeighborStateChangeAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingOspfNeighborStateChangeAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingOspfNeighborStateChangeAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeAddress::clone_ptr() const
{
    return std::make_shared<RoutingOspfNeighborStateChangeAddress>();
}

std::string RoutingOspfNeighborStateChangeAddress::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingOspfNeighborStateChangeAddress::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingOspfNeighborStateChangeAddress::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingOspfNeighborStateChangeAddress::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingOspfNeighborStateChangeAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RoutingOspfNeighborStateChangeAddress::Input::Input()
    :
    address{YType::str, "address"},
    ifindex{YType::uint32, "ifindex"}
{

    yang_name = "input"; yang_parent_name = "routing-ospf-neighbor-state-change-address"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingOspfNeighborStateChangeAddress::Input::~Input()
{
}

bool RoutingOspfNeighborStateChangeAddress::Input::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| ifindex.is_set;
}

bool RoutingOspfNeighborStateChangeAddress::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ifindex.yfilter);
}

std::string RoutingOspfNeighborStateChangeAddress::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-ospf-neighbor-state-change-address/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingOspfNeighborStateChangeAddress::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingOspfNeighborStateChangeAddress::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeAddress::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingOspfNeighborStateChangeAddress::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingOspfNeighborStateChangeAddress::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingOspfNeighborStateChangeAddress::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
}

bool RoutingOspfNeighborStateChangeAddress::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ifindex")
        return true;
    return false;
}

RoutingMplsLdpSessionDown::RoutingMplsLdpSessionDown()
{

    yang_name = "routing-mpls-ldp-session-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingMplsLdpSessionDown::~RoutingMplsLdpSessionDown()
{
}

bool RoutingMplsLdpSessionDown::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool RoutingMplsLdpSessionDown::has_operation() const
{
    return is_set(yfilter);
}

std::string RoutingMplsLdpSessionDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-ldp-session-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsLdpSessionDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsLdpSessionDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsLdpSessionDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingMplsLdpSessionDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingMplsLdpSessionDown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingMplsLdpSessionDown::clone_ptr() const
{
    return std::make_shared<RoutingMplsLdpSessionDown>();
}

std::string RoutingMplsLdpSessionDown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsLdpSessionDown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsLdpSessionDown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingMplsLdpSessionDown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingMplsLdpSessionDown::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

RoutingMplsLdpSessionDownEntityId::RoutingMplsLdpSessionDownEntityId()
    :
    input(std::make_shared<RoutingMplsLdpSessionDownEntityId::Input>())
{
    input->parent = this;

    yang_name = "routing-mpls-ldp-session-down-entity-id"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingMplsLdpSessionDownEntityId::~RoutingMplsLdpSessionDownEntityId()
{
}

bool RoutingMplsLdpSessionDownEntityId::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool RoutingMplsLdpSessionDownEntityId::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingMplsLdpSessionDownEntityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-ldp-session-down-entity-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsLdpSessionDownEntityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsLdpSessionDownEntityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingMplsLdpSessionDownEntityId::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsLdpSessionDownEntityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingMplsLdpSessionDownEntityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingMplsLdpSessionDownEntityId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingMplsLdpSessionDownEntityId::clone_ptr() const
{
    return std::make_shared<RoutingMplsLdpSessionDownEntityId>();
}

std::string RoutingMplsLdpSessionDownEntityId::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsLdpSessionDownEntityId::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsLdpSessionDownEntityId::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingMplsLdpSessionDownEntityId::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingMplsLdpSessionDownEntityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RoutingMplsLdpSessionDownEntityId::Input::Input()
    :
    entity_id{YType::str, "entity-id"},
    entity_index{YType::uint32, "entity-index"},
    peer_id{YType::str, "peer-id"}
{

    yang_name = "input"; yang_parent_name = "routing-mpls-ldp-session-down-entity-id"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingMplsLdpSessionDownEntityId::Input::~Input()
{
}

bool RoutingMplsLdpSessionDownEntityId::Input::has_data() const
{
    if (is_presence_container) return true;
    return entity_id.is_set
	|| entity_index.is_set
	|| peer_id.is_set;
}

bool RoutingMplsLdpSessionDownEntityId::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entity_id.yfilter)
	|| ydk::is_set(entity_index.yfilter)
	|| ydk::is_set(peer_id.yfilter);
}

std::string RoutingMplsLdpSessionDownEntityId::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-ldp-session-down-entity-id/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingMplsLdpSessionDownEntityId::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsLdpSessionDownEntityId::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_id.is_set || is_set(entity_id.yfilter)) leaf_name_data.push_back(entity_id.get_name_leafdata());
    if (entity_index.is_set || is_set(entity_index.yfilter)) leaf_name_data.push_back(entity_index.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsLdpSessionDownEntityId::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsLdpSessionDownEntityId::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingMplsLdpSessionDownEntityId::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entity-id")
    {
        entity_id = value;
        entity_id.value_namespace = name_space;
        entity_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-index")
    {
        entity_index = value;
        entity_index.value_namespace = name_space;
        entity_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingMplsLdpSessionDownEntityId::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entity-id")
    {
        entity_id.yfilter = yfilter;
    }
    if(value_path == "entity-index")
    {
        entity_index.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
}

bool RoutingMplsLdpSessionDownEntityId::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entity-id" || name == "entity-index" || name == "peer-id")
        return true;
    return false;
}

RoutingMplsTunnelReRouted::RoutingMplsTunnelReRouted()
{

    yang_name = "routing-mpls-tunnel-re-routed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingMplsTunnelReRouted::~RoutingMplsTunnelReRouted()
{
}

bool RoutingMplsTunnelReRouted::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool RoutingMplsTunnelReRouted::has_operation() const
{
    return is_set(yfilter);
}

std::string RoutingMplsTunnelReRouted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-routed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelReRouted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelReRouted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReRouted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingMplsTunnelReRouted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingMplsTunnelReRouted::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelReRouted::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelReRouted>();
}

std::string RoutingMplsTunnelReRouted::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelReRouted::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelReRouted::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingMplsTunnelReRouted::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingMplsTunnelReRouted::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

RoutingMplsTunnelReRoutedIndex::RoutingMplsTunnelReRoutedIndex()
    :
    input(std::make_shared<RoutingMplsTunnelReRoutedIndex::Input>())
{
    input->parent = this;

    yang_name = "routing-mpls-tunnel-re-routed-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingMplsTunnelReRoutedIndex::~RoutingMplsTunnelReRoutedIndex()
{
}

bool RoutingMplsTunnelReRoutedIndex::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool RoutingMplsTunnelReRoutedIndex::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingMplsTunnelReRoutedIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-routed-index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelReRoutedIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingMplsTunnelReRoutedIndex::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReRoutedIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingMplsTunnelReRoutedIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingMplsTunnelReRoutedIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedIndex::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelReRoutedIndex>();
}

std::string RoutingMplsTunnelReRoutedIndex::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelReRoutedIndex::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelReRoutedIndex::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingMplsTunnelReRoutedIndex::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingMplsTunnelReRoutedIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RoutingMplsTunnelReRoutedIndex::Input::Input()
    :
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "input"; yang_parent_name = "routing-mpls-tunnel-re-routed-index"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingMplsTunnelReRoutedIndex::Input::~Input()
{
}

bool RoutingMplsTunnelReRoutedIndex::Input::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| instance.is_set
	|| source.is_set
	|| destination.is_set;
}

bool RoutingMplsTunnelReRoutedIndex::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string RoutingMplsTunnelReRoutedIndex::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-routed-index/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingMplsTunnelReRoutedIndex::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelReRoutedIndex::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedIndex::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReRoutedIndex::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingMplsTunnelReRoutedIndex::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingMplsTunnelReRoutedIndex::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool RoutingMplsTunnelReRoutedIndex::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "instance" || name == "source" || name == "destination")
        return true;
    return false;
}

RoutingMplsTunnelReOptimized::RoutingMplsTunnelReOptimized()
{

    yang_name = "routing-mpls-tunnel-re-optimized"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingMplsTunnelReOptimized::~RoutingMplsTunnelReOptimized()
{
}

bool RoutingMplsTunnelReOptimized::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool RoutingMplsTunnelReOptimized::has_operation() const
{
    return is_set(yfilter);
}

std::string RoutingMplsTunnelReOptimized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-optimized";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelReOptimized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReOptimized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingMplsTunnelReOptimized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingMplsTunnelReOptimized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimized::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelReOptimized>();
}

std::string RoutingMplsTunnelReOptimized::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelReOptimized::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelReOptimized::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingMplsTunnelReOptimized::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingMplsTunnelReOptimized::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

RoutingMplsTunnelReOptimizedIndex::RoutingMplsTunnelReOptimizedIndex()
    :
    input(std::make_shared<RoutingMplsTunnelReOptimizedIndex::Input>())
{
    input->parent = this;

    yang_name = "routing-mpls-tunnel-re-optimized-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingMplsTunnelReOptimizedIndex::~RoutingMplsTunnelReOptimizedIndex()
{
}

bool RoutingMplsTunnelReOptimizedIndex::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool RoutingMplsTunnelReOptimizedIndex::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingMplsTunnelReOptimizedIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-optimized-index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelReOptimizedIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingMplsTunnelReOptimizedIndex::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReOptimizedIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingMplsTunnelReOptimizedIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingMplsTunnelReOptimizedIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedIndex::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelReOptimizedIndex>();
}

std::string RoutingMplsTunnelReOptimizedIndex::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelReOptimizedIndex::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelReOptimizedIndex::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingMplsTunnelReOptimizedIndex::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingMplsTunnelReOptimizedIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RoutingMplsTunnelReOptimizedIndex::Input::Input()
    :
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "input"; yang_parent_name = "routing-mpls-tunnel-re-optimized-index"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingMplsTunnelReOptimizedIndex::Input::~Input()
{
}

bool RoutingMplsTunnelReOptimizedIndex::Input::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| instance.is_set
	|| source.is_set
	|| destination.is_set;
}

bool RoutingMplsTunnelReOptimizedIndex::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string RoutingMplsTunnelReOptimizedIndex::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-optimized-index/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingMplsTunnelReOptimizedIndex::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelReOptimizedIndex::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedIndex::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReOptimizedIndex::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingMplsTunnelReOptimizedIndex::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingMplsTunnelReOptimizedIndex::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool RoutingMplsTunnelReOptimizedIndex::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "instance" || name == "source" || name == "destination")
        return true;
    return false;
}

RoutingMplsTunnelDown::RoutingMplsTunnelDown()
{

    yang_name = "routing-mpls-tunnel-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingMplsTunnelDown::~RoutingMplsTunnelDown()
{
}

bool RoutingMplsTunnelDown::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool RoutingMplsTunnelDown::has_operation() const
{
    return is_set(yfilter);
}

std::string RoutingMplsTunnelDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingMplsTunnelDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingMplsTunnelDown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelDown::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelDown>();
}

std::string RoutingMplsTunnelDown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelDown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelDown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingMplsTunnelDown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingMplsTunnelDown::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

RoutingMplsTunnelDownIndex::RoutingMplsTunnelDownIndex()
    :
    input(std::make_shared<RoutingMplsTunnelDownIndex::Input>())
{
    input->parent = this;

    yang_name = "routing-mpls-tunnel-down-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

RoutingMplsTunnelDownIndex::~RoutingMplsTunnelDownIndex()
{
}

bool RoutingMplsTunnelDownIndex::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool RoutingMplsTunnelDownIndex::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingMplsTunnelDownIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-down-index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelDownIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelDownIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingMplsTunnelDownIndex::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelDownIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingMplsTunnelDownIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingMplsTunnelDownIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelDownIndex::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelDownIndex>();
}

std::string RoutingMplsTunnelDownIndex::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelDownIndex::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelDownIndex::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingMplsTunnelDownIndex::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RoutingMplsTunnelDownIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RoutingMplsTunnelDownIndex::Input::Input()
    :
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "input"; yang_parent_name = "routing-mpls-tunnel-down-index"; is_top_level_class = false; has_list_ancestor = false; 
}

RoutingMplsTunnelDownIndex::Input::~Input()
{
}

bool RoutingMplsTunnelDownIndex::Input::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| instance.is_set
	|| source.is_set
	|| destination.is_set;
}

bool RoutingMplsTunnelDownIndex::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string RoutingMplsTunnelDownIndex::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-down-index/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingMplsTunnelDownIndex::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingMplsTunnelDownIndex::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingMplsTunnelDownIndex::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelDownIndex::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingMplsTunnelDownIndex::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingMplsTunnelDownIndex::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool RoutingMplsTunnelDownIndex::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "instance" || name == "source" || name == "destination")
        return true;
    return false;
}

All::All()
{

    yang_name = "all"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act"; is_top_level_class = true; has_list_ancestor = false; 
}

All::~All()
{
}

bool All::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool All::has_operation() const
{
    return is_set(yfilter);
}

std::string All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> All::clone_ptr() const
{
    return std::make_shared<All>();
}

std::string All::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string All::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function All::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> All::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool All::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

