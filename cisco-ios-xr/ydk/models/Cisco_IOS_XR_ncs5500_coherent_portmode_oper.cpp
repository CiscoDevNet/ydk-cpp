
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ncs5500_coherent_portmode_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs5500_coherent_portmode_oper {

ControllerPortMode::OpticsName::PortModeInfo::PortModeInfo()
    :
    	diff{YType::str, "diff"},
	 fec{YType::str, "fec"},
	 intf_name{YType::str, "intf-name"},
	 modulation{YType::str, "modulation"},
	 speed{YType::str, "speed"}
{
    yang_name = "port-mode-info"; yang_parent_name = "optics-name";
}

ControllerPortMode::OpticsName::PortModeInfo::~PortModeInfo()
{
}

bool ControllerPortMode::OpticsName::PortModeInfo::has_data() const
{
    return diff.is_set
	|| fec.is_set
	|| intf_name.is_set
	|| modulation.is_set
	|| speed.is_set;
}

bool ControllerPortMode::OpticsName::PortModeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(diff.operation)
	|| is_set(fec.operation)
	|| is_set(intf_name.operation)
	|| is_set(modulation.operation)
	|| is_set(speed.operation);
}

std::string ControllerPortMode::OpticsName::PortModeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-mode-info";

    return path_buffer.str();

}

EntityPath ControllerPortMode::OpticsName::PortModeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diff.is_set || is_set(diff.operation)) leaf_name_data.push_back(diff.get_name_leafdata());
    if (fec.is_set || is_set(fec.operation)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.operation)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (modulation.is_set || is_set(modulation.operation)) leaf_name_data.push_back(modulation.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ControllerPortMode::OpticsName::PortModeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ControllerPortMode::OpticsName::PortModeInfo::get_children()
{
    return children;
}

void ControllerPortMode::OpticsName::PortModeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diff")
    {
        diff = value;
    }
    if(value_path == "fec")
    {
        fec = value;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
    }
    if(value_path == "modulation")
    {
        modulation = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

ControllerPortMode::OpticsName::OpticsName()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    port_mode_info(std::make_unique<ControllerPortMode::OpticsName::PortModeInfo>())
{
    port_mode_info->parent = this;
    children["port-mode-info"] = port_mode_info.get();

    yang_name = "optics-name"; yang_parent_name = "controller-port-mode";
}

ControllerPortMode::OpticsName::~OpticsName()
{
}

bool ControllerPortMode::OpticsName::has_data() const
{
    return interface_name.is_set
	|| (port_mode_info !=  nullptr && port_mode_info->has_data());
}

bool ControllerPortMode::OpticsName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (port_mode_info !=  nullptr && port_mode_info->has_operation());
}

std::string ControllerPortMode::OpticsName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-name" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ControllerPortMode::OpticsName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs5500-coherent-portmode-oper:controller-port-mode/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ControllerPortMode::OpticsName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-mode-info")
    {
        if(port_mode_info != nullptr)
        {
            children["port-mode-info"] = port_mode_info.get();
        }
        else
        {
            port_mode_info = std::make_unique<ControllerPortMode::OpticsName::PortModeInfo>();
            port_mode_info->parent = this;
            children["port-mode-info"] = port_mode_info.get();
        }
        return children.at("port-mode-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ControllerPortMode::OpticsName::get_children()
{
    if(children.find("port-mode-info") == children.end())
    {
        if(port_mode_info != nullptr)
        {
            children["port-mode-info"] = port_mode_info.get();
        }
    }

    return children;
}

void ControllerPortMode::OpticsName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ControllerPortMode::ControllerPortMode()
{
    yang_name = "controller-port-mode"; yang_parent_name = "Cisco-IOS-XR-ncs5500-coherent-portmode-oper";
}

ControllerPortMode::~ControllerPortMode()
{
}

bool ControllerPortMode::has_data() const
{
    for (std::size_t index=0; index<optics_name.size(); index++)
    {
        if(optics_name[index]->has_data())
            return true;
    }
    return false;
}

bool ControllerPortMode::has_operation() const
{
    for (std::size_t index=0; index<optics_name.size(); index++)
    {
        if(optics_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControllerPortMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-portmode-oper:controller-port-mode";

    return path_buffer.str();

}

EntityPath ControllerPortMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ControllerPortMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-name")
    {
        for(auto const & c : optics_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ControllerPortMode::OpticsName>();
        c->parent = this;
        optics_name.push_back(std::move(c));
        children[segment_path] = optics_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ControllerPortMode::get_children()
{
    for (auto const & c : optics_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ControllerPortMode::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ControllerPortMode::clone_ptr()
{
    return std::make_unique<ControllerPortMode>();
}


}
}

