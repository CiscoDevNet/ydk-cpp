
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_lldp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_lldp_cfg {

Lldp::Lldp()
    :
    enable{YType::boolean, "enable"},
    enable_subintf{YType::boolean, "enable-subintf"},
    extended_show_width{YType::boolean, "extended-show-width"},
    holdtime{YType::uint32, "holdtime"},
    reinit{YType::uint32, "reinit"},
    timer{YType::uint32, "timer"}
    	,
    tlv_select(nullptr) // presence node
{
    yang_name = "lldp"; yang_parent_name = "Cisco-IOS-XR-ethernet-lldp-cfg";
}

Lldp::~Lldp()
{
}

bool Lldp::has_data() const
{
    return enable.is_set
	|| enable_subintf.is_set
	|| extended_show_width.is_set
	|| holdtime.is_set
	|| reinit.is_set
	|| timer.is_set
	|| (tlv_select !=  nullptr && tlv_select->has_data());
}

bool Lldp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(enable_subintf.operation)
	|| is_set(extended_show_width.operation)
	|| is_set(holdtime.operation)
	|| is_set(reinit.operation)
	|| is_set(timer.operation)
	|| (tlv_select !=  nullptr && tlv_select->has_operation());
}

std::string Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp";

    return path_buffer.str();

}

EntityPath Lldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (enable_subintf.is_set || is_set(enable_subintf.operation)) leaf_name_data.push_back(enable_subintf.get_name_leafdata());
    if (extended_show_width.is_set || is_set(extended_show_width.operation)) leaf_name_data.push_back(extended_show_width.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (reinit.is_set || is_set(reinit.operation)) leaf_name_data.push_back(reinit.get_name_leafdata());
    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tlv-select")
    {
        if(tlv_select != nullptr)
        {
            children["tlv-select"] = tlv_select;
        }
        else
        {
            tlv_select = std::make_shared<Lldp::TlvSelect>();
            tlv_select->parent = this;
            children["tlv-select"] = tlv_select;
        }
        return children.at("tlv-select");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Lldp::get_children()
{
    if(children.find("tlv-select") == children.end())
    {
        if(tlv_select != nullptr)
        {
            children["tlv-select"] = tlv_select;
        }
    }

    return children;
}

void Lldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "enable-subintf")
    {
        enable_subintf = value;
    }
    if(value_path == "extended-show-width")
    {
        extended_show_width = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "reinit")
    {
        reinit = value;
    }
    if(value_path == "timer")
    {
        timer = value;
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

Lldp::TlvSelect::TlvSelect()
    :
    tlv_select_enter{YType::boolean, "tlv-select-enter"}
    	,
    management_address(std::make_shared<Lldp::TlvSelect::ManagementAddress>())
	,port_description(std::make_shared<Lldp::TlvSelect::PortDescription>())
	,system_capabilities(std::make_shared<Lldp::TlvSelect::SystemCapabilities>())
	,system_description(std::make_shared<Lldp::TlvSelect::SystemDescription>())
	,system_name(std::make_shared<Lldp::TlvSelect::SystemName>())
{
    management_address->parent = this;
    children["management-address"] = management_address;

    port_description->parent = this;
    children["port-description"] = port_description;

    system_capabilities->parent = this;
    children["system-capabilities"] = system_capabilities;

    system_description->parent = this;
    children["system-description"] = system_description;

    system_name->parent = this;
    children["system-name"] = system_name;

    yang_name = "tlv-select"; yang_parent_name = "lldp";
}

Lldp::TlvSelect::~TlvSelect()
{
}

bool Lldp::TlvSelect::has_data() const
{
    return tlv_select_enter.is_set
	|| (management_address !=  nullptr && management_address->has_data())
	|| (port_description !=  nullptr && port_description->has_data())
	|| (system_capabilities !=  nullptr && system_capabilities->has_data())
	|| (system_description !=  nullptr && system_description->has_data())
	|| (system_name !=  nullptr && system_name->has_data());
}

bool Lldp::TlvSelect::has_operation() const
{
    return is_set(operation)
	|| is_set(tlv_select_enter.operation)
	|| (management_address !=  nullptr && management_address->has_operation())
	|| (port_description !=  nullptr && port_description->has_operation())
	|| (system_capabilities !=  nullptr && system_capabilities->has_operation())
	|| (system_description !=  nullptr && system_description->has_operation())
	|| (system_name !=  nullptr && system_name->has_operation());
}

std::string Lldp::TlvSelect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-select";

    return path_buffer.str();

}

EntityPath Lldp::TlvSelect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_select_enter.is_set || is_set(tlv_select_enter.operation)) leaf_name_data.push_back(tlv_select_enter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lldp::TlvSelect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "management-address")
    {
        if(management_address != nullptr)
        {
            children["management-address"] = management_address;
        }
        else
        {
            management_address = std::make_shared<Lldp::TlvSelect::ManagementAddress>();
            management_address->parent = this;
            children["management-address"] = management_address;
        }
        return children.at("management-address");
    }

    if(child_yang_name == "port-description")
    {
        if(port_description != nullptr)
        {
            children["port-description"] = port_description;
        }
        else
        {
            port_description = std::make_shared<Lldp::TlvSelect::PortDescription>();
            port_description->parent = this;
            children["port-description"] = port_description;
        }
        return children.at("port-description");
    }

    if(child_yang_name == "system-capabilities")
    {
        if(system_capabilities != nullptr)
        {
            children["system-capabilities"] = system_capabilities;
        }
        else
        {
            system_capabilities = std::make_shared<Lldp::TlvSelect::SystemCapabilities>();
            system_capabilities->parent = this;
            children["system-capabilities"] = system_capabilities;
        }
        return children.at("system-capabilities");
    }

    if(child_yang_name == "system-description")
    {
        if(system_description != nullptr)
        {
            children["system-description"] = system_description;
        }
        else
        {
            system_description = std::make_shared<Lldp::TlvSelect::SystemDescription>();
            system_description->parent = this;
            children["system-description"] = system_description;
        }
        return children.at("system-description");
    }

    if(child_yang_name == "system-name")
    {
        if(system_name != nullptr)
        {
            children["system-name"] = system_name;
        }
        else
        {
            system_name = std::make_shared<Lldp::TlvSelect::SystemName>();
            system_name->parent = this;
            children["system-name"] = system_name;
        }
        return children.at("system-name");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Lldp::TlvSelect::get_children()
{
    if(children.find("management-address") == children.end())
    {
        if(management_address != nullptr)
        {
            children["management-address"] = management_address;
        }
    }

    if(children.find("port-description") == children.end())
    {
        if(port_description != nullptr)
        {
            children["port-description"] = port_description;
        }
    }

    if(children.find("system-capabilities") == children.end())
    {
        if(system_capabilities != nullptr)
        {
            children["system-capabilities"] = system_capabilities;
        }
    }

    if(children.find("system-description") == children.end())
    {
        if(system_description != nullptr)
        {
            children["system-description"] = system_description;
        }
    }

    if(children.find("system-name") == children.end())
    {
        if(system_name != nullptr)
        {
            children["system-name"] = system_name;
        }
    }

    return children;
}

void Lldp::TlvSelect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tlv-select-enter")
    {
        tlv_select_enter = value;
    }
}

Lldp::TlvSelect::SystemName::SystemName()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "system-name"; yang_parent_name = "tlv-select";
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
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Lldp::TlvSelect::SystemName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-name";

    return path_buffer.str();

}

EntityPath Lldp::TlvSelect::SystemName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lldp::TlvSelect::SystemName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Lldp::TlvSelect::SystemName::get_children()
{
    return children;
}

void Lldp::TlvSelect::SystemName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Lldp::TlvSelect::PortDescription::PortDescription()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "port-description"; yang_parent_name = "tlv-select";
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
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Lldp::TlvSelect::PortDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-description";

    return path_buffer.str();

}

EntityPath Lldp::TlvSelect::PortDescription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lldp::TlvSelect::PortDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Lldp::TlvSelect::PortDescription::get_children()
{
    return children;
}

void Lldp::TlvSelect::PortDescription::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Lldp::TlvSelect::SystemDescription::SystemDescription()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "system-description"; yang_parent_name = "tlv-select";
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
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Lldp::TlvSelect::SystemDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-description";

    return path_buffer.str();

}

EntityPath Lldp::TlvSelect::SystemDescription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lldp::TlvSelect::SystemDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Lldp::TlvSelect::SystemDescription::get_children()
{
    return children;
}

void Lldp::TlvSelect::SystemDescription::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Lldp::TlvSelect::SystemCapabilities::SystemCapabilities()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "system-capabilities"; yang_parent_name = "tlv-select";
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
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Lldp::TlvSelect::SystemCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-capabilities";

    return path_buffer.str();

}

EntityPath Lldp::TlvSelect::SystemCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lldp::TlvSelect::SystemCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Lldp::TlvSelect::SystemCapabilities::get_children()
{
    return children;
}

void Lldp::TlvSelect::SystemCapabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Lldp::TlvSelect::ManagementAddress::ManagementAddress()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "management-address"; yang_parent_name = "tlv-select";
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
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Lldp::TlvSelect::ManagementAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "management-address";

    return path_buffer.str();

}

EntityPath Lldp::TlvSelect::ManagementAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp/tlv-select/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lldp::TlvSelect::ManagementAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Lldp::TlvSelect::ManagementAddress::get_children()
{
    return children;
}

void Lldp::TlvSelect::ManagementAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}


}
}

