
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_lldp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_lldp_cfg {

Lldp::Lldp()
    :
    holdtime{YType::uint32, "holdtime"},
    extended_show_width{YType::boolean, "extended-show-width"},
    enable_subintf{YType::boolean, "enable-subintf"},
    timer{YType::uint32, "timer"},
    reinit{YType::uint32, "reinit"},
    enable{YType::boolean, "enable"}
    	,
    tlv_select(nullptr) // presence node
{

    yang_name = "lldp"; yang_parent_name = "Cisco-IOS-XR-ethernet-lldp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Lldp::~Lldp()
{
}

bool Lldp::has_data() const
{
    return holdtime.is_set
	|| extended_show_width.is_set
	|| enable_subintf.is_set
	|| timer.is_set
	|| reinit.is_set
	|| enable.is_set
	|| (tlv_select !=  nullptr && tlv_select->has_data());
}

bool Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(extended_show_width.yfilter)
	|| ydk::is_set(enable_subintf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(reinit.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tlv_select !=  nullptr && tlv_select->has_operation());
}

std::string Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (extended_show_width.is_set || is_set(extended_show_width.yfilter)) leaf_name_data.push_back(extended_show_width.get_name_leafdata());
    if (enable_subintf.is_set || is_set(enable_subintf.yfilter)) leaf_name_data.push_back(enable_subintf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (reinit.is_set || is_set(reinit.yfilter)) leaf_name_data.push_back(reinit.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-select")
    {
        if(tlv_select == nullptr)
        {
            tlv_select = std::make_shared<Lldp::TlvSelect>();
        }
        return tlv_select;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_select != nullptr)
    {
        children["tlv-select"] = tlv_select;
    }

    return children;
}

void Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-show-width")
    {
        extended_show_width = value;
        extended_show_width.value_namespace = name_space;
        extended_show_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-subintf")
    {
        enable_subintf = value;
        enable_subintf.value_namespace = name_space;
        enable_subintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reinit")
    {
        reinit = value;
        reinit.value_namespace = name_space;
        reinit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "extended-show-width")
    {
        extended_show_width.yfilter = yfilter;
    }
    if(value_path == "enable-subintf")
    {
        enable_subintf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "reinit")
    {
        reinit.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Lldp::clone_ptr() const
{
    return std::make_shared<Lldp>();
}

std::string Lldp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Lldp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Lldp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Lldp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-select" || name == "holdtime" || name == "extended-show-width" || name == "enable-subintf" || name == "timer" || name == "reinit" || name == "enable")
        return true;
    return false;
}

Lldp::TlvSelect::TlvSelect()
    :
    tlv_select_enter{YType::boolean, "tlv-select-enter"}
    	,
    system_name(std::make_shared<Lldp::TlvSelect::SystemName>())
	,port_description(std::make_shared<Lldp::TlvSelect::PortDescription>())
	,system_description(std::make_shared<Lldp::TlvSelect::SystemDescription>())
	,system_capabilities(std::make_shared<Lldp::TlvSelect::SystemCapabilities>())
	,management_address(std::make_shared<Lldp::TlvSelect::ManagementAddress>())
{
    system_name->parent = this;
    port_description->parent = this;
    system_description->parent = this;
    system_capabilities->parent = this;
    management_address->parent = this;

    yang_name = "tlv-select"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::TlvSelect::~TlvSelect()
{
}

bool Lldp::TlvSelect::has_data() const
{
    return tlv_select_enter.is_set
	|| (system_name !=  nullptr && system_name->has_data())
	|| (port_description !=  nullptr && port_description->has_data())
	|| (system_description !=  nullptr && system_description->has_data())
	|| (system_capabilities !=  nullptr && system_capabilities->has_data())
	|| (management_address !=  nullptr && management_address->has_data());
}

bool Lldp::TlvSelect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_select_enter.yfilter)
	|| (system_name !=  nullptr && system_name->has_operation())
	|| (port_description !=  nullptr && port_description->has_operation())
	|| (system_description !=  nullptr && system_description->has_operation())
	|| (system_capabilities !=  nullptr && system_capabilities->has_operation())
	|| (management_address !=  nullptr && management_address->has_operation());
}

std::string Lldp::TlvSelect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::TlvSelect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::TlvSelect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_select_enter.is_set || is_set(tlv_select_enter.yfilter)) leaf_name_data.push_back(tlv_select_enter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::TlvSelect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-name")
    {
        if(system_name == nullptr)
        {
            system_name = std::make_shared<Lldp::TlvSelect::SystemName>();
        }
        return system_name;
    }

    if(child_yang_name == "port-description")
    {
        if(port_description == nullptr)
        {
            port_description = std::make_shared<Lldp::TlvSelect::PortDescription>();
        }
        return port_description;
    }

    if(child_yang_name == "system-description")
    {
        if(system_description == nullptr)
        {
            system_description = std::make_shared<Lldp::TlvSelect::SystemDescription>();
        }
        return system_description;
    }

    if(child_yang_name == "system-capabilities")
    {
        if(system_capabilities == nullptr)
        {
            system_capabilities = std::make_shared<Lldp::TlvSelect::SystemCapabilities>();
        }
        return system_capabilities;
    }

    if(child_yang_name == "management-address")
    {
        if(management_address == nullptr)
        {
            management_address = std::make_shared<Lldp::TlvSelect::ManagementAddress>();
        }
        return management_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::TlvSelect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_name != nullptr)
    {
        children["system-name"] = system_name;
    }

    if(port_description != nullptr)
    {
        children["port-description"] = port_description;
    }

    if(system_description != nullptr)
    {
        children["system-description"] = system_description;
    }

    if(system_capabilities != nullptr)
    {
        children["system-capabilities"] = system_capabilities;
    }

    if(management_address != nullptr)
    {
        children["management-address"] = management_address;
    }

    return children;
}

void Lldp::TlvSelect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-select-enter")
    {
        tlv_select_enter = value;
        tlv_select_enter.value_namespace = name_space;
        tlv_select_enter.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::TlvSelect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-select-enter")
    {
        tlv_select_enter.yfilter = yfilter;
    }
}

bool Lldp::TlvSelect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-name" || name == "port-description" || name == "system-description" || name == "system-capabilities" || name == "management-address" || name == "tlv-select-enter")
        return true;
    return false;
}

Lldp::TlvSelect::SystemName::SystemName()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "system-name"; yang_parent_name = "tlv-select"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::TlvSelect::SystemName::~SystemName()
{
}

bool Lldp::TlvSelect::SystemName::has_data() const
{
    return disable.is_set;
}

bool Lldp::TlvSelect::SystemName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Lldp::TlvSelect::SystemName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::TlvSelect::SystemName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::TlvSelect::SystemName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::TlvSelect::SystemName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::TlvSelect::SystemName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::TlvSelect::SystemName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::TlvSelect::SystemName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Lldp::TlvSelect::SystemName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Lldp::TlvSelect::PortDescription::PortDescription()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "port-description"; yang_parent_name = "tlv-select"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::TlvSelect::PortDescription::~PortDescription()
{
}

bool Lldp::TlvSelect::PortDescription::has_data() const
{
    return disable.is_set;
}

bool Lldp::TlvSelect::PortDescription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Lldp::TlvSelect::PortDescription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::TlvSelect::PortDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::TlvSelect::PortDescription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::TlvSelect::PortDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::TlvSelect::PortDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::TlvSelect::PortDescription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::TlvSelect::PortDescription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Lldp::TlvSelect::PortDescription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Lldp::TlvSelect::SystemDescription::SystemDescription()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "system-description"; yang_parent_name = "tlv-select"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::TlvSelect::SystemDescription::~SystemDescription()
{
}

bool Lldp::TlvSelect::SystemDescription::has_data() const
{
    return disable.is_set;
}

bool Lldp::TlvSelect::SystemDescription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Lldp::TlvSelect::SystemDescription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::TlvSelect::SystemDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::TlvSelect::SystemDescription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::TlvSelect::SystemDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::TlvSelect::SystemDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::TlvSelect::SystemDescription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::TlvSelect::SystemDescription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Lldp::TlvSelect::SystemDescription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Lldp::TlvSelect::SystemCapabilities::SystemCapabilities()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "system-capabilities"; yang_parent_name = "tlv-select"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::TlvSelect::SystemCapabilities::~SystemCapabilities()
{
}

bool Lldp::TlvSelect::SystemCapabilities::has_data() const
{
    return disable.is_set;
}

bool Lldp::TlvSelect::SystemCapabilities::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Lldp::TlvSelect::SystemCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::TlvSelect::SystemCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::TlvSelect::SystemCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::TlvSelect::SystemCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::TlvSelect::SystemCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::TlvSelect::SystemCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::TlvSelect::SystemCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Lldp::TlvSelect::SystemCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Lldp::TlvSelect::ManagementAddress::ManagementAddress()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "management-address"; yang_parent_name = "tlv-select"; is_top_level_class = false; has_list_ancestor = false;
}

Lldp::TlvSelect::ManagementAddress::~ManagementAddress()
{
}

bool Lldp::TlvSelect::ManagementAddress::has_data() const
{
    return disable.is_set;
}

bool Lldp::TlvSelect::ManagementAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Lldp::TlvSelect::ManagementAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    return path_buffer.str();
}

std::string Lldp::TlvSelect::ManagementAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "management-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lldp::TlvSelect::ManagementAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lldp::TlvSelect::ManagementAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lldp::TlvSelect::ManagementAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Lldp::TlvSelect::ManagementAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Lldp::TlvSelect::ManagementAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Lldp::TlvSelect::ManagementAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}


}
}

