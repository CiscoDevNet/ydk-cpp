
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"
#include "Cisco_IOS_XR_pmengine_oper_1.hpp"
#include "Cisco_IOS_XR_pmengine_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::PerformanceManagement()
    :
    dwdm(std::make_shared<PerformanceManagement::Dwdm>())
	,ethernet(std::make_shared<PerformanceManagement::Ethernet>())
	,ho_vc(std::make_shared<PerformanceManagement::HoVc>())
	,oc(std::make_shared<PerformanceManagement::Oc>())
	,odu(std::make_shared<PerformanceManagement::Odu>())
	,optics(std::make_shared<PerformanceManagement::Optics>())
	,otu(std::make_shared<PerformanceManagement::Otu>())
	,sonet(std::make_shared<PerformanceManagement::Sonet>())
	,stm(std::make_shared<PerformanceManagement::Stm>())
	,sts(std::make_shared<PerformanceManagement::Sts>())
{
    dwdm->parent = this;
    children["dwdm"] = dwdm;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    ho_vc->parent = this;
    children["ho-vc"] = ho_vc;

    oc->parent = this;
    children["oc"] = oc;

    odu->parent = this;
    children["odu"] = odu;

    optics->parent = this;
    children["optics"] = optics;

    otu->parent = this;
    children["otu"] = otu;

    sonet->parent = this;
    children["sonet"] = sonet;

    stm->parent = this;
    children["stm"] = stm;

    sts->parent = this;
    children["sts"] = sts;

    yang_name = "performance-management"; yang_parent_name = "Cisco-IOS-XR-pmengine-oper";
}

PerformanceManagement::~PerformanceManagement()
{
}

bool PerformanceManagement::has_data() const
{
    return (dwdm !=  nullptr && dwdm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (ho_vc !=  nullptr && ho_vc->has_data())
	|| (oc !=  nullptr && oc->has_data())
	|| (odu !=  nullptr && odu->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (sonet !=  nullptr && sonet->has_data())
	|| (stm !=  nullptr && stm->has_data())
	|| (sts !=  nullptr && sts->has_data());
}

bool PerformanceManagement::has_operation() const
{
    return is_set(operation)
	|| (dwdm !=  nullptr && dwdm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ho_vc !=  nullptr && ho_vc->has_operation())
	|| (oc !=  nullptr && oc->has_operation())
	|| (odu !=  nullptr && odu->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (sonet !=  nullptr && sonet->has_operation())
	|| (stm !=  nullptr && stm->has_operation())
	|| (sts !=  nullptr && sts->has_operation());
}

std::string PerformanceManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management";

    return path_buffer.str();

}

EntityPath PerformanceManagement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm")
    {
        if(dwdm != nullptr)
        {
            children["dwdm"] = dwdm;
        }
        else
        {
            dwdm = std::make_shared<PerformanceManagement::Dwdm>();
            dwdm->parent = this;
            children["dwdm"] = dwdm;
        }
        return children.at("dwdm");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<PerformanceManagement::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "ho-vc")
    {
        if(ho_vc != nullptr)
        {
            children["ho-vc"] = ho_vc;
        }
        else
        {
            ho_vc = std::make_shared<PerformanceManagement::HoVc>();
            ho_vc->parent = this;
            children["ho-vc"] = ho_vc;
        }
        return children.at("ho-vc");
    }

    if(child_yang_name == "oc")
    {
        if(oc != nullptr)
        {
            children["oc"] = oc;
        }
        else
        {
            oc = std::make_shared<PerformanceManagement::Oc>();
            oc->parent = this;
            children["oc"] = oc;
        }
        return children.at("oc");
    }

    if(child_yang_name == "odu")
    {
        if(odu != nullptr)
        {
            children["odu"] = odu;
        }
        else
        {
            odu = std::make_shared<PerformanceManagement::Odu>();
            odu->parent = this;
            children["odu"] = odu;
        }
        return children.at("odu");
    }

    if(child_yang_name == "optics")
    {
        if(optics != nullptr)
        {
            children["optics"] = optics;
        }
        else
        {
            optics = std::make_shared<PerformanceManagement::Optics>();
            optics->parent = this;
            children["optics"] = optics;
        }
        return children.at("optics");
    }

    if(child_yang_name == "otu")
    {
        if(otu != nullptr)
        {
            children["otu"] = otu;
        }
        else
        {
            otu = std::make_shared<PerformanceManagement::Otu>();
            otu->parent = this;
            children["otu"] = otu;
        }
        return children.at("otu");
    }

    if(child_yang_name == "sonet")
    {
        if(sonet != nullptr)
        {
            children["sonet"] = sonet;
        }
        else
        {
            sonet = std::make_shared<PerformanceManagement::Sonet>();
            sonet->parent = this;
            children["sonet"] = sonet;
        }
        return children.at("sonet");
    }

    if(child_yang_name == "stm")
    {
        if(stm != nullptr)
        {
            children["stm"] = stm;
        }
        else
        {
            stm = std::make_shared<PerformanceManagement::Stm>();
            stm->parent = this;
            children["stm"] = stm;
        }
        return children.at("stm");
    }

    if(child_yang_name == "sts")
    {
        if(sts != nullptr)
        {
            children["sts"] = sts;
        }
        else
        {
            sts = std::make_shared<PerformanceManagement::Sts>();
            sts->parent = this;
            children["sts"] = sts;
        }
        return children.at("sts");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::get_children()
{
    if(children.find("dwdm") == children.end())
    {
        if(dwdm != nullptr)
        {
            children["dwdm"] = dwdm;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("ho-vc") == children.end())
    {
        if(ho_vc != nullptr)
        {
            children["ho-vc"] = ho_vc;
        }
    }

    if(children.find("oc") == children.end())
    {
        if(oc != nullptr)
        {
            children["oc"] = oc;
        }
    }

    if(children.find("odu") == children.end())
    {
        if(odu != nullptr)
        {
            children["odu"] = odu;
        }
    }

    if(children.find("optics") == children.end())
    {
        if(optics != nullptr)
        {
            children["optics"] = optics;
        }
    }

    if(children.find("otu") == children.end())
    {
        if(otu != nullptr)
        {
            children["otu"] = otu;
        }
    }

    if(children.find("sonet") == children.end())
    {
        if(sonet != nullptr)
        {
            children["sonet"] = sonet;
        }
    }

    if(children.find("stm") == children.end())
    {
        if(stm != nullptr)
        {
            children["stm"] = stm;
        }
    }

    if(children.find("sts") == children.end())
    {
        if(sts != nullptr)
        {
            children["sts"] = sts;
        }
    }

    return children;
}

void PerformanceManagement::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> PerformanceManagement::clone_ptr() const
{
    return std::make_shared<PerformanceManagement>();
}

std::string PerformanceManagement::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerformanceManagement::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerformanceManagement::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

PerformanceManagement::HoVc::HoVc()
    :
    ho_vc_ports(std::make_shared<PerformanceManagement::HoVc::HoVcPorts>())
{
    ho_vc_ports->parent = this;
    children["ho-vc-ports"] = ho_vc_ports;

    yang_name = "ho-vc"; yang_parent_name = "performance-management";
}

PerformanceManagement::HoVc::~HoVc()
{
}

bool PerformanceManagement::HoVc::has_data() const
{
    return (ho_vc_ports !=  nullptr && ho_vc_ports->has_data());
}

bool PerformanceManagement::HoVc::has_operation() const
{
    return is_set(operation)
	|| (ho_vc_ports !=  nullptr && ho_vc_ports->has_operation());
}

std::string PerformanceManagement::HoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-ports")
    {
        if(ho_vc_ports != nullptr)
        {
            children["ho-vc-ports"] = ho_vc_ports;
        }
        else
        {
            ho_vc_ports = std::make_shared<PerformanceManagement::HoVc::HoVcPorts>();
            ho_vc_ports->parent = this;
            children["ho-vc-ports"] = ho_vc_ports;
        }
        return children.at("ho-vc-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::get_children()
{
    if(children.find("ho-vc-ports") == children.end())
    {
        if(ho_vc_ports != nullptr)
        {
            children["ho-vc-ports"] = ho_vc_ports;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPorts()
{
    yang_name = "ho-vc-ports"; yang_parent_name = "ho-vc";
}

PerformanceManagement::HoVc::HoVcPorts::~HoVcPorts()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::has_data() const
{
    for (std::size_t index=0; index<ho_vc_port.size(); index++)
    {
        if(ho_vc_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::HoVc::HoVcPorts::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_port.size(); index++)
    {
        if(ho_vc_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/ho-vc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-port")
    {
        for(auto const & c : ho_vc_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort>();
        c->parent = this;
        ho_vc_port.push_back(std::move(c));
        children[segment_path] = ho_vc_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::get_children()
{
    for (auto const & c : ho_vc_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcPort()
    :
    name{YType::str, "name"}
    	,
    ho_vc_current(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent>())
{
    ho_vc_current->parent = this;
    children["ho-vc-current"] = ho_vc_current;

    yang_name = "ho-vc-port"; yang_parent_name = "ho-vc-ports";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::~HoVcPort()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::has_data() const
{
    return name.is_set
	|| (ho_vc_current !=  nullptr && ho_vc_current->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (ho_vc_current !=  nullptr && ho_vc_current->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/ho-vc/ho-vc-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-current")
    {
        if(ho_vc_current != nullptr)
        {
            children["ho-vc-current"] = ho_vc_current;
        }
        else
        {
            ho_vc_current = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent>();
            ho_vc_current->parent = this;
            children["ho-vc-current"] = ho_vc_current;
        }
        return children.at("ho-vc-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::get_children()
{
    if(children.find("ho-vc-current") == children.end())
    {
        if(ho_vc_current != nullptr)
        {
            children["ho-vc-current"] = ho_vc_current;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcCurrent()
    :
    ho_vc_hour24(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24>())
	,ho_vc_minute15(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15>())
{
    ho_vc_hour24->parent = this;
    children["ho-vc-hour24"] = ho_vc_hour24;

    ho_vc_minute15->parent = this;
    children["ho-vc-minute15"] = ho_vc_minute15;

    yang_name = "ho-vc-current"; yang_parent_name = "ho-vc-port";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::~HoVcCurrent()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::has_data() const
{
    return (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_data())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::has_operation() const
{
    return is_set(operation)
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_operation())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-hour24")
    {
        if(ho_vc_hour24 != nullptr)
        {
            children["ho-vc-hour24"] = ho_vc_hour24;
        }
        else
        {
            ho_vc_hour24 = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24>();
            ho_vc_hour24->parent = this;
            children["ho-vc-hour24"] = ho_vc_hour24;
        }
        return children.at("ho-vc-hour24");
    }

    if(child_yang_name == "ho-vc-minute15")
    {
        if(ho_vc_minute15 != nullptr)
        {
            children["ho-vc-minute15"] = ho_vc_minute15;
        }
        else
        {
            ho_vc_minute15 = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15>();
            ho_vc_minute15->parent = this;
            children["ho-vc-minute15"] = ho_vc_minute15;
        }
        return children.at("ho-vc-minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::get_children()
{
    if(children.find("ho-vc-hour24") == children.end())
    {
        if(ho_vc_hour24 != nullptr)
        {
            children["ho-vc-hour24"] = ho_vc_hour24;
        }
    }

    if(children.find("ho-vc-minute15") == children.end())
    {
        if(ho_vc_minute15 != nullptr)
        {
            children["ho-vc-minute15"] = ho_vc_minute15;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24()
    :
    ho_vc_hour24_paths(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths>())
{
    ho_vc_hour24_paths->parent = this;
    children["ho-vc-hour24-paths"] = ho_vc_hour24_paths;

    yang_name = "ho-vc-hour24"; yang_parent_name = "ho-vc-current";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::~HoVcHour24()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::has_data() const
{
    return (ho_vc_hour24_paths !=  nullptr && ho_vc_hour24_paths->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::has_operation() const
{
    return is_set(operation)
	|| (ho_vc_hour24_paths !=  nullptr && ho_vc_hour24_paths->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-hour24-paths")
    {
        if(ho_vc_hour24_paths != nullptr)
        {
            children["ho-vc-hour24-paths"] = ho_vc_hour24_paths;
        }
        else
        {
            ho_vc_hour24_paths = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths>();
            ho_vc_hour24_paths->parent = this;
            children["ho-vc-hour24-paths"] = ho_vc_hour24_paths;
        }
        return children.at("ho-vc-hour24-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::get_children()
{
    if(children.find("ho-vc-hour24-paths") == children.end())
    {
        if(ho_vc_hour24_paths != nullptr)
        {
            children["ho-vc-hour24-paths"] = ho_vc_hour24_paths;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Paths()
{
    yang_name = "ho-vc-hour24-paths"; yang_parent_name = "ho-vc-hour24";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::~HoVcHour24Paths()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path.size(); index++)
    {
        if(ho_vc_hour24_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path.size(); index++)
    {
        if(ho_vc_hour24_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-paths";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24Paths' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-hour24-path")
    {
        for(auto const & c : ho_vc_hour24_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path>();
        c->parent = this;
        ho_vc_hour24_path.push_back(std::move(c));
        children[segment_path] = ho_vc_hour24_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::get_children()
{
    for (auto const & c : ho_vc_hour24_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::HoVcHour24Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath>())
	,path(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path>())
{
    fe_path->parent = this;
    children["fe-path"] = fe_path;

    path->parent = this;
    children["path"] = path;

    yang_name = "ho-vc-hour24-path"; yang_parent_name = "ho-vc-hour24-paths";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::~HoVcHour24Path()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_path !=  nullptr && fe_path->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_path !=  nullptr && fe_path->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
        else
        {
            fe_path = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath>();
            fe_path->parent = this;
            children["fe-path"] = fe_path;
        }
        return children.at("fe-path");
    }

    if(child_yang_name == "path")
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
        else
        {
            path = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path>();
            path->parent = this;
            children["path"] = path;
        }
        return children.at("path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::get_children()
{
    if(children.find("fe-path") == children.end())
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
    }

    if(children.find("path") == children.end())
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::Path()
    :
    path_status{YType::int32, "path-status"}
    	,
    path_bb_es(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs>())
	,path_bbe_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs>())
	,path_e_bs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs>())
	,path_e_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs>())
	,path_es_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs>())
	,path_se_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs>())
	,path_ses_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs>())
{
    path_bb_es->parent = this;
    children["path-bb-es"] = path_bb_es;

    path_bbe_rs->parent = this;
    children["path-bbe-rs"] = path_bbe_rs;

    path_e_bs->parent = this;
    children["path-e-bs"] = path_e_bs;

    path_e_ss->parent = this;
    children["path-e-ss"] = path_e_ss;

    path_es_rs->parent = this;
    children["path-es-rs"] = path_es_rs;

    path_se_ss->parent = this;
    children["path-se-ss"] = path_se_ss;

    path_ses_rs->parent = this;
    children["path-ses-rs"] = path_ses_rs;

    path_ua_ss->parent = this;
    children["path-ua-ss"] = path_ua_ss;

    yang_name = "path"; yang_parent_name = "ho-vc-hour24-path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::~Path()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::has_data() const
{
    return path_status.is_set
	|| (path_bb_es !=  nullptr && path_bb_es->has_data())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_data())
	|| (path_e_bs !=  nullptr && path_e_bs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_es_rs !=  nullptr && path_es_rs->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_status.operation)
	|| (path_bb_es !=  nullptr && path_bb_es->has_operation())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_operation())
	|| (path_e_bs !=  nullptr && path_e_bs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_es_rs !=  nullptr && path_es_rs->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.operation)) leaf_name_data.push_back(path_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-bb-es")
    {
        if(path_bb_es != nullptr)
        {
            children["path-bb-es"] = path_bb_es;
        }
        else
        {
            path_bb_es = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs>();
            path_bb_es->parent = this;
            children["path-bb-es"] = path_bb_es;
        }
        return children.at("path-bb-es");
    }

    if(child_yang_name == "path-bbe-rs")
    {
        if(path_bbe_rs != nullptr)
        {
            children["path-bbe-rs"] = path_bbe_rs;
        }
        else
        {
            path_bbe_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs>();
            path_bbe_rs->parent = this;
            children["path-bbe-rs"] = path_bbe_rs;
        }
        return children.at("path-bbe-rs");
    }

    if(child_yang_name == "path-e-bs")
    {
        if(path_e_bs != nullptr)
        {
            children["path-e-bs"] = path_e_bs;
        }
        else
        {
            path_e_bs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs>();
            path_e_bs->parent = this;
            children["path-e-bs"] = path_e_bs;
        }
        return children.at("path-e-bs");
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
        else
        {
            path_e_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs>();
            path_e_ss->parent = this;
            children["path-e-ss"] = path_e_ss;
        }
        return children.at("path-e-ss");
    }

    if(child_yang_name == "path-es-rs")
    {
        if(path_es_rs != nullptr)
        {
            children["path-es-rs"] = path_es_rs;
        }
        else
        {
            path_es_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs>();
            path_es_rs->parent = this;
            children["path-es-rs"] = path_es_rs;
        }
        return children.at("path-es-rs");
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
        else
        {
            path_se_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs>();
            path_se_ss->parent = this;
            children["path-se-ss"] = path_se_ss;
        }
        return children.at("path-se-ss");
    }

    if(child_yang_name == "path-ses-rs")
    {
        if(path_ses_rs != nullptr)
        {
            children["path-ses-rs"] = path_ses_rs;
        }
        else
        {
            path_ses_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs>();
            path_ses_rs->parent = this;
            children["path-ses-rs"] = path_ses_rs;
        }
        return children.at("path-ses-rs");
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
        else
        {
            path_ua_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs>();
            path_ua_ss->parent = this;
            children["path-ua-ss"] = path_ua_ss;
        }
        return children.at("path-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::get_children()
{
    if(children.find("path-bb-es") == children.end())
    {
        if(path_bb_es != nullptr)
        {
            children["path-bb-es"] = path_bb_es;
        }
    }

    if(children.find("path-bbe-rs") == children.end())
    {
        if(path_bbe_rs != nullptr)
        {
            children["path-bbe-rs"] = path_bbe_rs;
        }
    }

    if(children.find("path-e-bs") == children.end())
    {
        if(path_e_bs != nullptr)
        {
            children["path-e-bs"] = path_e_bs;
        }
    }

    if(children.find("path-e-ss") == children.end())
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
    }

    if(children.find("path-es-rs") == children.end())
    {
        if(path_es_rs != nullptr)
        {
            children["path-es-rs"] = path_es_rs;
        }
    }

    if(children.find("path-se-ss") == children.end())
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
    }

    if(children.find("path-ses-rs") == children.end())
    {
        if(path_ses_rs != nullptr)
        {
            children["path-ses-rs"] = path_ses_rs;
        }
    }

    if(children.find("path-ua-ss") == children.end())
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-status")
    {
        path_status = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-e-ss"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::PathEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "path-es-rs"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::~PathEsRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-es-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathEsRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-se-ss"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::PathSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "path-ses-rs"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::~PathSesRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ses-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSesRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::PathEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-e-bs"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::~PathEBs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-bs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathEBs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-ua-ss"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::PathBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-bb-es"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::~PathBbEs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bb-es";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathBbEs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::PathBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "path-bbe-rs"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::~PathBbeRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bbe-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathBbeRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{
    yang_name = "fe-path"; yang_parent_name = "ho-vc-hour24-path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::~FePath()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::has_operation() const
{
    return is_set(operation)
	|| is_set(far_end_path_c_vs.operation)
	|| is_set(far_end_path_e_ss.operation)
	|| is_set(far_end_path_se_ss.operation)
	|| is_set(far_end_path_ua_ss.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FePath' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.operation)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.operation)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.operation)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.operation)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss = value;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss = value;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15()
    :
    ho_vc_minute15_paths(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths>())
{
    ho_vc_minute15_paths->parent = this;
    children["ho-vc-minute15-paths"] = ho_vc_minute15_paths;

    yang_name = "ho-vc-minute15"; yang_parent_name = "ho-vc-current";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::~HoVcMinute15()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::has_data() const
{
    return (ho_vc_minute15_paths !=  nullptr && ho_vc_minute15_paths->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::has_operation() const
{
    return is_set(operation)
	|| (ho_vc_minute15_paths !=  nullptr && ho_vc_minute15_paths->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-minute15-paths")
    {
        if(ho_vc_minute15_paths != nullptr)
        {
            children["ho-vc-minute15-paths"] = ho_vc_minute15_paths;
        }
        else
        {
            ho_vc_minute15_paths = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths>();
            ho_vc_minute15_paths->parent = this;
            children["ho-vc-minute15-paths"] = ho_vc_minute15_paths;
        }
        return children.at("ho-vc-minute15-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::get_children()
{
    if(children.find("ho-vc-minute15-paths") == children.end())
    {
        if(ho_vc_minute15_paths != nullptr)
        {
            children["ho-vc-minute15-paths"] = ho_vc_minute15_paths;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Paths()
{
    yang_name = "ho-vc-minute15-paths"; yang_parent_name = "ho-vc-minute15";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::~HoVcMinute15Paths()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15_path.size(); index++)
    {
        if(ho_vc_minute15_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15_path.size(); index++)
    {
        if(ho_vc_minute15_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-paths";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15Paths' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-minute15-path")
    {
        for(auto const & c : ho_vc_minute15_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path>();
        c->parent = this;
        ho_vc_minute15_path.push_back(std::move(c));
        children[segment_path] = ho_vc_minute15_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::get_children()
{
    for (auto const & c : ho_vc_minute15_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::HoVcMinute15Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath>())
	,path(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path>())
{
    fe_path->parent = this;
    children["fe-path"] = fe_path;

    path->parent = this;
    children["path"] = path;

    yang_name = "ho-vc-minute15-path"; yang_parent_name = "ho-vc-minute15-paths";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::~HoVcMinute15Path()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_path !=  nullptr && fe_path->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_path !=  nullptr && fe_path->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-path" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
        else
        {
            fe_path = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath>();
            fe_path->parent = this;
            children["fe-path"] = fe_path;
        }
        return children.at("fe-path");
    }

    if(child_yang_name == "path")
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
        else
        {
            path = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path>();
            path->parent = this;
            children["path"] = path;
        }
        return children.at("path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::get_children()
{
    if(children.find("fe-path") == children.end())
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
    }

    if(children.find("path") == children.end())
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::Path()
    :
    path_status{YType::int32, "path-status"}
    	,
    path_bb_es(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs>())
	,path_bbe_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs>())
	,path_e_bs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs>())
	,path_e_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs>())
	,path_es_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs>())
	,path_se_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs>())
	,path_ses_rs(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs>())
{
    path_bb_es->parent = this;
    children["path-bb-es"] = path_bb_es;

    path_bbe_rs->parent = this;
    children["path-bbe-rs"] = path_bbe_rs;

    path_e_bs->parent = this;
    children["path-e-bs"] = path_e_bs;

    path_e_ss->parent = this;
    children["path-e-ss"] = path_e_ss;

    path_es_rs->parent = this;
    children["path-es-rs"] = path_es_rs;

    path_se_ss->parent = this;
    children["path-se-ss"] = path_se_ss;

    path_ses_rs->parent = this;
    children["path-ses-rs"] = path_ses_rs;

    path_ua_ss->parent = this;
    children["path-ua-ss"] = path_ua_ss;

    yang_name = "path"; yang_parent_name = "ho-vc-minute15-path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::~Path()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::has_data() const
{
    return path_status.is_set
	|| (path_bb_es !=  nullptr && path_bb_es->has_data())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_data())
	|| (path_e_bs !=  nullptr && path_e_bs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_es_rs !=  nullptr && path_es_rs->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_status.operation)
	|| (path_bb_es !=  nullptr && path_bb_es->has_operation())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_operation())
	|| (path_e_bs !=  nullptr && path_e_bs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_es_rs !=  nullptr && path_es_rs->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.operation)) leaf_name_data.push_back(path_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-bb-es")
    {
        if(path_bb_es != nullptr)
        {
            children["path-bb-es"] = path_bb_es;
        }
        else
        {
            path_bb_es = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs>();
            path_bb_es->parent = this;
            children["path-bb-es"] = path_bb_es;
        }
        return children.at("path-bb-es");
    }

    if(child_yang_name == "path-bbe-rs")
    {
        if(path_bbe_rs != nullptr)
        {
            children["path-bbe-rs"] = path_bbe_rs;
        }
        else
        {
            path_bbe_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs>();
            path_bbe_rs->parent = this;
            children["path-bbe-rs"] = path_bbe_rs;
        }
        return children.at("path-bbe-rs");
    }

    if(child_yang_name == "path-e-bs")
    {
        if(path_e_bs != nullptr)
        {
            children["path-e-bs"] = path_e_bs;
        }
        else
        {
            path_e_bs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs>();
            path_e_bs->parent = this;
            children["path-e-bs"] = path_e_bs;
        }
        return children.at("path-e-bs");
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
        else
        {
            path_e_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs>();
            path_e_ss->parent = this;
            children["path-e-ss"] = path_e_ss;
        }
        return children.at("path-e-ss");
    }

    if(child_yang_name == "path-es-rs")
    {
        if(path_es_rs != nullptr)
        {
            children["path-es-rs"] = path_es_rs;
        }
        else
        {
            path_es_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs>();
            path_es_rs->parent = this;
            children["path-es-rs"] = path_es_rs;
        }
        return children.at("path-es-rs");
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
        else
        {
            path_se_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs>();
            path_se_ss->parent = this;
            children["path-se-ss"] = path_se_ss;
        }
        return children.at("path-se-ss");
    }

    if(child_yang_name == "path-ses-rs")
    {
        if(path_ses_rs != nullptr)
        {
            children["path-ses-rs"] = path_ses_rs;
        }
        else
        {
            path_ses_rs = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs>();
            path_ses_rs->parent = this;
            children["path-ses-rs"] = path_ses_rs;
        }
        return children.at("path-ses-rs");
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
        else
        {
            path_ua_ss = std::make_shared<PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs>();
            path_ua_ss->parent = this;
            children["path-ua-ss"] = path_ua_ss;
        }
        return children.at("path-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::get_children()
{
    if(children.find("path-bb-es") == children.end())
    {
        if(path_bb_es != nullptr)
        {
            children["path-bb-es"] = path_bb_es;
        }
    }

    if(children.find("path-bbe-rs") == children.end())
    {
        if(path_bbe_rs != nullptr)
        {
            children["path-bbe-rs"] = path_bbe_rs;
        }
    }

    if(children.find("path-e-bs") == children.end())
    {
        if(path_e_bs != nullptr)
        {
            children["path-e-bs"] = path_e_bs;
        }
    }

    if(children.find("path-e-ss") == children.end())
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
    }

    if(children.find("path-es-rs") == children.end())
    {
        if(path_es_rs != nullptr)
        {
            children["path-es-rs"] = path_es_rs;
        }
    }

    if(children.find("path-se-ss") == children.end())
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
    }

    if(children.find("path-ses-rs") == children.end())
    {
        if(path_ses_rs != nullptr)
        {
            children["path-ses-rs"] = path_ses_rs;
        }
    }

    if(children.find("path-ua-ss") == children.end())
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-status")
    {
        path_status = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-e-ss"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::PathEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "path-es-rs"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::~PathEsRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-es-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathEsRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-se-ss"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::PathSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "path-ses-rs"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::~PathSesRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ses-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSesRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::PathEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-e-bs"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::~PathEBs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-bs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathEBs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-ua-ss"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::PathBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-bb-es"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::~PathBbEs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bb-es";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathBbEs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::PathBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "path-bbe-rs"; yang_parent_name = "path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::~PathBbeRs()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bbe-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathBbeRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{
    yang_name = "fe-path"; yang_parent_name = "ho-vc-minute15-path";
}

PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::~FePath()
{
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::has_operation() const
{
    return is_set(operation)
	|| is_set(far_end_path_c_vs.operation)
	|| is_set(far_end_path_e_ss.operation)
	|| is_set(far_end_path_se_ss.operation)
	|| is_set(far_end_path_ua_ss.operation);
}

std::string PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FePath' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.operation)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.operation)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.operation)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.operation)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::get_children()
{
    return children;
}

void PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss = value;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss = value;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
    }
}

PerformanceManagement::Odu::Odu()
    :
    odu_ports(std::make_shared<PerformanceManagement::Odu::OduPorts>())
{
    odu_ports->parent = this;
    children["odu-ports"] = odu_ports;

    yang_name = "odu"; yang_parent_name = "performance-management";
}

PerformanceManagement::Odu::~Odu()
{
}

bool PerformanceManagement::Odu::has_data() const
{
    return (odu_ports !=  nullptr && odu_ports->has_data());
}

bool PerformanceManagement::Odu::has_operation() const
{
    return is_set(operation)
	|| (odu_ports !=  nullptr && odu_ports->has_operation());
}

std::string PerformanceManagement::Odu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-ports")
    {
        if(odu_ports != nullptr)
        {
            children["odu-ports"] = odu_ports;
        }
        else
        {
            odu_ports = std::make_shared<PerformanceManagement::Odu::OduPorts>();
            odu_ports->parent = this;
            children["odu-ports"] = odu_ports;
        }
        return children.at("odu-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::get_children()
{
    if(children.find("odu-ports") == children.end())
    {
        if(odu_ports != nullptr)
        {
            children["odu-ports"] = odu_ports;
        }
    }

    return children;
}

void PerformanceManagement::Odu::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPorts()
{
    yang_name = "odu-ports"; yang_parent_name = "odu";
}

PerformanceManagement::Odu::OduPorts::~OduPorts()
{
}

bool PerformanceManagement::Odu::OduPorts::has_data() const
{
    for (std::size_t index=0; index<odu_port.size(); index++)
    {
        if(odu_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::has_operation() const
{
    for (std::size_t index=0; index<odu_port.size(); index++)
    {
        if(odu_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Odu::OduPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/odu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-port")
    {
        for(auto const & c : odu_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort>();
        c->parent = this;
        odu_port.push_back(std::move(c));
        children[segment_path] = odu_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::get_children()
{
    for (auto const & c : odu_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduPort()
    :
    name{YType::str, "name"}
    	,
    odu_current(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent>())
{
    odu_current->parent = this;
    children["odu-current"] = odu_current;

    yang_name = "odu-port"; yang_parent_name = "odu-ports";
}

PerformanceManagement::Odu::OduPorts::OduPort::~OduPort()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::has_data() const
{
    return name.is_set
	|| (odu_current !=  nullptr && odu_current->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (odu_current !=  nullptr && odu_current->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/odu/odu-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-current")
    {
        if(odu_current != nullptr)
        {
            children["odu-current"] = odu_current;
        }
        else
        {
            odu_current = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent>();
            odu_current->parent = this;
            children["odu-current"] = odu_current;
        }
        return children.at("odu-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::get_children()
{
    if(children.find("odu-current") == children.end())
    {
        if(odu_current != nullptr)
        {
            children["odu-current"] = odu_current;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduCurrent()
    :
    odu_hour24(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24>())
	,odu_minute15(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15>())
{
    odu_hour24->parent = this;
    children["odu-hour24"] = odu_hour24;

    odu_minute15->parent = this;
    children["odu-minute15"] = odu_minute15;

    yang_name = "odu-current"; yang_parent_name = "odu-port";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::~OduCurrent()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::has_data() const
{
    return (odu_hour24 !=  nullptr && odu_hour24->has_data())
	|| (odu_minute15 !=  nullptr && odu_minute15->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::has_operation() const
{
    return is_set(operation)
	|| (odu_hour24 !=  nullptr && odu_hour24->has_operation())
	|| (odu_minute15 !=  nullptr && odu_minute15->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-hour24")
    {
        if(odu_hour24 != nullptr)
        {
            children["odu-hour24"] = odu_hour24;
        }
        else
        {
            odu_hour24 = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24>();
            odu_hour24->parent = this;
            children["odu-hour24"] = odu_hour24;
        }
        return children.at("odu-hour24");
    }

    if(child_yang_name == "odu-minute15")
    {
        if(odu_minute15 != nullptr)
        {
            children["odu-minute15"] = odu_minute15;
        }
        else
        {
            odu_minute15 = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15>();
            odu_minute15->parent = this;
            children["odu-minute15"] = odu_minute15;
        }
        return children.at("odu-minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::get_children()
{
    if(children.find("odu-hour24") == children.end())
    {
        if(odu_hour24 != nullptr)
        {
            children["odu-hour24"] = odu_hour24;
        }
    }

    if(children.find("odu-minute15") == children.end())
    {
        if(odu_minute15 != nullptr)
        {
            children["odu-minute15"] = odu_minute15;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15()
    :
    odu_minute15gfps(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps>())
	,odu_minute15otns(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns>())
	,odu_minute15prbses(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses>())
{
    odu_minute15gfps->parent = this;
    children["odu-minute15gfps"] = odu_minute15gfps;

    odu_minute15otns->parent = this;
    children["odu-minute15otns"] = odu_minute15otns;

    odu_minute15prbses->parent = this;
    children["odu-minute15prbses"] = odu_minute15prbses;

    yang_name = "odu-minute15"; yang_parent_name = "odu-current";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::~OduMinute15()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::has_data() const
{
    return (odu_minute15gfps !=  nullptr && odu_minute15gfps->has_data())
	|| (odu_minute15otns !=  nullptr && odu_minute15otns->has_data())
	|| (odu_minute15prbses !=  nullptr && odu_minute15prbses->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::has_operation() const
{
    return is_set(operation)
	|| (odu_minute15gfps !=  nullptr && odu_minute15gfps->has_operation())
	|| (odu_minute15otns !=  nullptr && odu_minute15otns->has_operation())
	|| (odu_minute15prbses !=  nullptr && odu_minute15prbses->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-minute15gfps")
    {
        if(odu_minute15gfps != nullptr)
        {
            children["odu-minute15gfps"] = odu_minute15gfps;
        }
        else
        {
            odu_minute15gfps = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps>();
            odu_minute15gfps->parent = this;
            children["odu-minute15gfps"] = odu_minute15gfps;
        }
        return children.at("odu-minute15gfps");
    }

    if(child_yang_name == "odu-minute15otns")
    {
        if(odu_minute15otns != nullptr)
        {
            children["odu-minute15otns"] = odu_minute15otns;
        }
        else
        {
            odu_minute15otns = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns>();
            odu_minute15otns->parent = this;
            children["odu-minute15otns"] = odu_minute15otns;
        }
        return children.at("odu-minute15otns");
    }

    if(child_yang_name == "odu-minute15prbses")
    {
        if(odu_minute15prbses != nullptr)
        {
            children["odu-minute15prbses"] = odu_minute15prbses;
        }
        else
        {
            odu_minute15prbses = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses>();
            odu_minute15prbses->parent = this;
            children["odu-minute15prbses"] = odu_minute15prbses;
        }
        return children.at("odu-minute15prbses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::get_children()
{
    if(children.find("odu-minute15gfps") == children.end())
    {
        if(odu_minute15gfps != nullptr)
        {
            children["odu-minute15gfps"] = odu_minute15gfps;
        }
    }

    if(children.find("odu-minute15otns") == children.end())
    {
        if(odu_minute15otns != nullptr)
        {
            children["odu-minute15otns"] = odu_minute15otns;
        }
    }

    if(children.find("odu-minute15prbses") == children.end())
    {
        if(odu_minute15prbses != nullptr)
        {
            children["odu-minute15prbses"] = odu_minute15prbses;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfps()
{
    yang_name = "odu-minute15gfps"; yang_parent_name = "odu-minute15";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::~OduMinute15Gfps()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::has_data() const
{
    for (std::size_t index=0; index<odu_minute15gfp.size(); index++)
    {
        if(odu_minute15gfp[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15gfp.size(); index++)
    {
        if(odu_minute15gfp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15gfps";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduMinute15Gfps' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-minute15gfp")
    {
        for(auto const & c : odu_minute15gfp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp>();
        c->parent = this;
        odu_minute15gfp.push_back(std::move(c));
        children[segment_path] = odu_minute15gfp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::get_children()
{
    for (auto const & c : odu_minute15gfp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::OduMinute15Gfp()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    rx_bit_err(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr>())
	,rx_crc(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc>())
	,rx_csf(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf>())
	,rx_inv_typ(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp>())
	,rx_lfd(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd>())
{
    rx_bit_err->parent = this;
    children["rx-bit-err"] = rx_bit_err;

    rx_crc->parent = this;
    children["rx-crc"] = rx_crc;

    rx_csf->parent = this;
    children["rx-csf"] = rx_csf;

    rx_inv_typ->parent = this;
    children["rx-inv-typ"] = rx_inv_typ;

    rx_lfd->parent = this;
    children["rx-lfd"] = rx_lfd;

    yang_name = "odu-minute15gfp"; yang_parent_name = "odu-minute15gfps";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::~OduMinute15Gfp()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_data())
	|| (rx_crc !=  nullptr && rx_crc->has_data())
	|| (rx_csf !=  nullptr && rx_csf->has_data())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_data())
	|| (rx_lfd !=  nullptr && rx_lfd->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_operation())
	|| (rx_crc !=  nullptr && rx_crc->has_operation())
	|| (rx_csf !=  nullptr && rx_csf->has_operation())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_operation())
	|| (rx_lfd !=  nullptr && rx_lfd->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15gfp" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduMinute15Gfp' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-bit-err")
    {
        if(rx_bit_err != nullptr)
        {
            children["rx-bit-err"] = rx_bit_err;
        }
        else
        {
            rx_bit_err = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr>();
            rx_bit_err->parent = this;
            children["rx-bit-err"] = rx_bit_err;
        }
        return children.at("rx-bit-err");
    }

    if(child_yang_name == "rx-crc")
    {
        if(rx_crc != nullptr)
        {
            children["rx-crc"] = rx_crc;
        }
        else
        {
            rx_crc = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc>();
            rx_crc->parent = this;
            children["rx-crc"] = rx_crc;
        }
        return children.at("rx-crc");
    }

    if(child_yang_name == "rx-csf")
    {
        if(rx_csf != nullptr)
        {
            children["rx-csf"] = rx_csf;
        }
        else
        {
            rx_csf = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf>();
            rx_csf->parent = this;
            children["rx-csf"] = rx_csf;
        }
        return children.at("rx-csf");
    }

    if(child_yang_name == "rx-inv-typ")
    {
        if(rx_inv_typ != nullptr)
        {
            children["rx-inv-typ"] = rx_inv_typ;
        }
        else
        {
            rx_inv_typ = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp>();
            rx_inv_typ->parent = this;
            children["rx-inv-typ"] = rx_inv_typ;
        }
        return children.at("rx-inv-typ");
    }

    if(child_yang_name == "rx-lfd")
    {
        if(rx_lfd != nullptr)
        {
            children["rx-lfd"] = rx_lfd;
        }
        else
        {
            rx_lfd = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd>();
            rx_lfd->parent = this;
            children["rx-lfd"] = rx_lfd;
        }
        return children.at("rx-lfd");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::get_children()
{
    if(children.find("rx-bit-err") == children.end())
    {
        if(rx_bit_err != nullptr)
        {
            children["rx-bit-err"] = rx_bit_err;
        }
    }

    if(children.find("rx-crc") == children.end())
    {
        if(rx_crc != nullptr)
        {
            children["rx-crc"] = rx_crc;
        }
    }

    if(children.find("rx-csf") == children.end())
    {
        if(rx_csf != nullptr)
        {
            children["rx-csf"] = rx_csf;
        }
    }

    if(children.find("rx-inv-typ") == children.end())
    {
        if(rx_inv_typ != nullptr)
        {
            children["rx-inv-typ"] = rx_inv_typ;
        }
    }

    if(children.find("rx-lfd") == children.end())
    {
        if(rx_lfd != nullptr)
        {
            children["rx-lfd"] = rx_lfd;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::RxBitErr()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-bit-err"; yang_parent_name = "odu-minute15gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::~RxBitErr()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-bit-err";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxBitErr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::RxInvTyp()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-inv-typ"; yang_parent_name = "odu-minute15gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::~RxInvTyp()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-inv-typ";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxInvTyp' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::RxCrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-crc"; yang_parent_name = "odu-minute15gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::~RxCrc()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-crc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxCrc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::RxLfd()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-lfd"; yang_parent_name = "odu-minute15gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::~RxLfd()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lfd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxLfd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::RxCsf()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-csf"; yang_parent_name = "odu-minute15gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::~RxCsf()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-csf";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxCsf' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbses()
{
    yang_name = "odu-minute15prbses"; yang_parent_name = "odu-minute15";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::~OduMinute15Prbses()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::has_data() const
{
    for (std::size_t index=0; index<odu_minute15prbs.size(); index++)
    {
        if(odu_minute15prbs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15prbs.size(); index++)
    {
        if(odu_minute15prbs[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15prbses";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduMinute15Prbses' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-minute15prbs")
    {
        for(auto const & c : odu_minute15prbs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs>();
        c->parent = this;
        odu_minute15prbs.push_back(std::move(c));
        children[segment_path] = odu_minute15prbs.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::get_children()
{
    for (auto const & c : odu_minute15prbs)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::OduMinute15Prbs()
    :
    number{YType::int32, "number"},
    conf_patt{YType::enumeration, "conf-patt"},
    ebc{YType::uint64, "ebc"},
    found_at_time{YType::str, "found-at-time"},
    found_count{YType::uint32, "found-count"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    lost_at_time{YType::str, "lost-at-time"},
    lost_count{YType::uint32, "lost-count"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    rcv_patt(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt>())
{
    rcv_patt->parent = this;
    children["rcv-patt"] = rcv_patt;

    yang_name = "odu-minute15prbs"; yang_parent_name = "odu-minute15prbses";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::~OduMinute15Prbs()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::has_data() const
{
    return number.is_set
	|| conf_patt.is_set
	|| ebc.is_set
	|| found_at_time.is_set
	|| found_count.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| lost_at_time.is_set
	|| lost_count.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (rcv_patt !=  nullptr && rcv_patt->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(conf_patt.operation)
	|| is_set(ebc.operation)
	|| is_set(found_at_time.operation)
	|| is_set(found_count.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(lost_at_time.operation)
	|| is_set(lost_count.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15prbs" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduMinute15Prbs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.operation)) leaf_name_data.push_back(conf_patt.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.operation)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.operation)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.operation)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.operation)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.operation)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt != nullptr)
        {
            children["rcv-patt"] = rcv_patt;
        }
        else
        {
            rcv_patt = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt>();
            rcv_patt->parent = this;
            children["rcv-patt"] = rcv_patt;
        }
        return children.at("rcv-patt");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::get_children()
{
    if(children.find("rcv-patt") == children.end())
    {
        if(rcv_patt != nullptr)
        {
            children["rcv-patt"] = rcv_patt;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
    }
    if(value_path == "ebc")
    {
        ebc = value;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
    }
    if(value_path == "found-count")
    {
        found_count = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::RcvPatt()
    :
    rcv_patt{YType::enumeration, "rcv-patt"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rcv-patt"; yang_parent_name = "odu-minute15prbs";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::has_data() const
{
    return rcv_patt.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::has_operation() const
{
    return is_set(operation)
	|| is_set(rcv_patt.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RcvPatt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcv_patt.is_set || is_set(rcv_patt.operation)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otns()
{
    yang_name = "odu-minute15otns"; yang_parent_name = "odu-minute15";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::~OduMinute15Otns()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::has_data() const
{
    for (std::size_t index=0; index<odu_minute15otn.size(); index++)
    {
        if(odu_minute15otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::has_operation() const
{
    for (std::size_t index=0; index<odu_minute15otn.size(); index++)
    {
        if(odu_minute15otn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15otns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduMinute15Otns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-minute15otn")
    {
        for(auto const & c : odu_minute15otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn>();
        c->parent = this;
        odu_minute15otn.push_back(std::move(c));
        children[segment_path] = odu_minute15otn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::get_children()
{
    for (auto const & c : odu_minute15otn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::OduMinute15Otn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    bbe_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe>())
{
    bbe_fe->parent = this;
    children["bbe-fe"] = bbe_fe;

    bbe_ne->parent = this;
    children["bbe-ne"] = bbe_ne;

    bber_fe->parent = this;
    children["bber-fe"] = bber_fe;

    bber_ne->parent = this;
    children["bber-ne"] = bber_ne;

    es_fe->parent = this;
    children["es-fe"] = es_fe;

    es_ne->parent = this;
    children["es-ne"] = es_ne;

    esr_fe->parent = this;
    children["esr-fe"] = esr_fe;

    esr_ne->parent = this;
    children["esr-ne"] = esr_ne;

    fc_fe->parent = this;
    children["fc-fe"] = fc_fe;

    fc_ne->parent = this;
    children["fc-ne"] = fc_ne;

    lbc->parent = this;
    children["lbc"] = lbc;

    ses_fe->parent = this;
    children["ses-fe"] = ses_fe;

    ses_ne->parent = this;
    children["ses-ne"] = ses_ne;

    sesr_fe->parent = this;
    children["sesr-fe"] = sesr_fe;

    sesr_ne->parent = this;
    children["sesr-ne"] = sesr_ne;

    uas_fe->parent = this;
    children["uas-fe"] = uas_fe;

    uas_ne->parent = this;
    children["uas-ne"] = uas_ne;

    yang_name = "odu-minute15otn"; yang_parent_name = "odu-minute15otns";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::~OduMinute15Otn()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-minute15otn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduMinute15Otn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
        else
        {
            bbe_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe>();
            bbe_fe->parent = this;
            children["bbe-fe"] = bbe_fe;
        }
        return children.at("bbe-fe");
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
        else
        {
            bbe_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe>();
            bbe_ne->parent = this;
            children["bbe-ne"] = bbe_ne;
        }
        return children.at("bbe-ne");
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
        else
        {
            bber_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe>();
            bber_fe->parent = this;
            children["bber-fe"] = bber_fe;
        }
        return children.at("bber-fe");
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
        else
        {
            bber_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe>();
            bber_ne->parent = this;
            children["bber-ne"] = bber_ne;
        }
        return children.at("bber-ne");
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
        else
        {
            es_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe>();
            es_fe->parent = this;
            children["es-fe"] = es_fe;
        }
        return children.at("es-fe");
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
        else
        {
            es_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe>();
            es_ne->parent = this;
            children["es-ne"] = es_ne;
        }
        return children.at("es-ne");
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
        else
        {
            esr_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe>();
            esr_fe->parent = this;
            children["esr-fe"] = esr_fe;
        }
        return children.at("esr-fe");
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
        else
        {
            esr_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe>();
            esr_ne->parent = this;
            children["esr-ne"] = esr_ne;
        }
        return children.at("esr-ne");
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
        else
        {
            fc_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe>();
            fc_fe->parent = this;
            children["fc-fe"] = fc_fe;
        }
        return children.at("fc-fe");
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
        else
        {
            fc_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe>();
            fc_ne->parent = this;
            children["fc-ne"] = fc_ne;
        }
        return children.at("fc-ne");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
        else
        {
            ses_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe>();
            ses_fe->parent = this;
            children["ses-fe"] = ses_fe;
        }
        return children.at("ses-fe");
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
        else
        {
            ses_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe>();
            ses_ne->parent = this;
            children["ses-ne"] = ses_ne;
        }
        return children.at("ses-ne");
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
        else
        {
            sesr_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe>();
            sesr_fe->parent = this;
            children["sesr-fe"] = sesr_fe;
        }
        return children.at("sesr-fe");
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
        else
        {
            sesr_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe>();
            sesr_ne->parent = this;
            children["sesr-ne"] = sesr_ne;
        }
        return children.at("sesr-ne");
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
        else
        {
            uas_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe>();
            uas_fe->parent = this;
            children["uas-fe"] = uas_fe;
        }
        return children.at("uas-fe");
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
        else
        {
            uas_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe>();
            uas_ne->parent = this;
            children["uas-ne"] = uas_ne;
        }
        return children.at("uas-ne");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::get_children()
{
    if(children.find("bbe-fe") == children.end())
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
    }

    if(children.find("bbe-ne") == children.end())
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
    }

    if(children.find("bber-fe") == children.end())
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
    }

    if(children.find("bber-ne") == children.end())
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
    }

    if(children.find("es-fe") == children.end())
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
    }

    if(children.find("es-ne") == children.end())
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
    }

    if(children.find("esr-fe") == children.end())
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
    }

    if(children.find("esr-ne") == children.end())
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
    }

    if(children.find("fc-fe") == children.end())
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
    }

    if(children.find("fc-ne") == children.end())
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("ses-fe") == children.end())
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
    }

    if(children.find("ses-ne") == children.end())
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
    }

    if(children.find("sesr-fe") == children.end())
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
    }

    if(children.find("sesr-ne") == children.end())
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
    }

    if(children.find("uas-fe") == children.end())
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
    }

    if(children.find("uas-ne") == children.end())
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "lbc"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-ne"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-ne"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-ne"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-ne"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-ne"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-ne"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-ne"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-ne"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-fe"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-fe"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-fe"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-fe"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-fe"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-fe"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-fe"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-fe"; yang_parent_name = "odu-minute15otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24()
    :
    odu_hour24gfps(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps>())
	,odu_hour24otns(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns>())
	,odu_hour24prbses(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses>())
{
    odu_hour24gfps->parent = this;
    children["odu-hour24gfps"] = odu_hour24gfps;

    odu_hour24otns->parent = this;
    children["odu-hour24otns"] = odu_hour24otns;

    odu_hour24prbses->parent = this;
    children["odu-hour24prbses"] = odu_hour24prbses;

    yang_name = "odu-hour24"; yang_parent_name = "odu-current";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::~OduHour24()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::has_data() const
{
    return (odu_hour24gfps !=  nullptr && odu_hour24gfps->has_data())
	|| (odu_hour24otns !=  nullptr && odu_hour24otns->has_data())
	|| (odu_hour24prbses !=  nullptr && odu_hour24prbses->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::has_operation() const
{
    return is_set(operation)
	|| (odu_hour24gfps !=  nullptr && odu_hour24gfps->has_operation())
	|| (odu_hour24otns !=  nullptr && odu_hour24otns->has_operation())
	|| (odu_hour24prbses !=  nullptr && odu_hour24prbses->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-hour24gfps")
    {
        if(odu_hour24gfps != nullptr)
        {
            children["odu-hour24gfps"] = odu_hour24gfps;
        }
        else
        {
            odu_hour24gfps = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps>();
            odu_hour24gfps->parent = this;
            children["odu-hour24gfps"] = odu_hour24gfps;
        }
        return children.at("odu-hour24gfps");
    }

    if(child_yang_name == "odu-hour24otns")
    {
        if(odu_hour24otns != nullptr)
        {
            children["odu-hour24otns"] = odu_hour24otns;
        }
        else
        {
            odu_hour24otns = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns>();
            odu_hour24otns->parent = this;
            children["odu-hour24otns"] = odu_hour24otns;
        }
        return children.at("odu-hour24otns");
    }

    if(child_yang_name == "odu-hour24prbses")
    {
        if(odu_hour24prbses != nullptr)
        {
            children["odu-hour24prbses"] = odu_hour24prbses;
        }
        else
        {
            odu_hour24prbses = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses>();
            odu_hour24prbses->parent = this;
            children["odu-hour24prbses"] = odu_hour24prbses;
        }
        return children.at("odu-hour24prbses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::get_children()
{
    if(children.find("odu-hour24gfps") == children.end())
    {
        if(odu_hour24gfps != nullptr)
        {
            children["odu-hour24gfps"] = odu_hour24gfps;
        }
    }

    if(children.find("odu-hour24otns") == children.end())
    {
        if(odu_hour24otns != nullptr)
        {
            children["odu-hour24otns"] = odu_hour24otns;
        }
    }

    if(children.find("odu-hour24prbses") == children.end())
    {
        if(odu_hour24prbses != nullptr)
        {
            children["odu-hour24prbses"] = odu_hour24prbses;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbses()
{
    yang_name = "odu-hour24prbses"; yang_parent_name = "odu-hour24";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::~OduHour24Prbses()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::has_data() const
{
    for (std::size_t index=0; index<odu_hour24prbs.size(); index++)
    {
        if(odu_hour24prbs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24prbs.size(); index++)
    {
        if(odu_hour24prbs[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24prbses";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduHour24Prbses' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-hour24prbs")
    {
        for(auto const & c : odu_hour24prbs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs>();
        c->parent = this;
        odu_hour24prbs.push_back(std::move(c));
        children[segment_path] = odu_hour24prbs.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::get_children()
{
    for (auto const & c : odu_hour24prbs)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::OduHour24Prbs()
    :
    number{YType::int32, "number"},
    conf_patt{YType::enumeration, "conf-patt"},
    ebc{YType::uint64, "ebc"},
    found_at_time{YType::str, "found-at-time"},
    found_count{YType::uint32, "found-count"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    lost_at_time{YType::str, "lost-at-time"},
    lost_count{YType::uint32, "lost-count"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    rcv_patt(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt>())
{
    rcv_patt->parent = this;
    children["rcv-patt"] = rcv_patt;

    yang_name = "odu-hour24prbs"; yang_parent_name = "odu-hour24prbses";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::~OduHour24Prbs()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::has_data() const
{
    return number.is_set
	|| conf_patt.is_set
	|| ebc.is_set
	|| found_at_time.is_set
	|| found_count.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| lost_at_time.is_set
	|| lost_count.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (rcv_patt !=  nullptr && rcv_patt->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(conf_patt.operation)
	|| is_set(ebc.operation)
	|| is_set(found_at_time.operation)
	|| is_set(found_count.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(lost_at_time.operation)
	|| is_set(lost_count.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24prbs" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduHour24Prbs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.operation)) leaf_name_data.push_back(conf_patt.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.operation)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.operation)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.operation)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.operation)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.operation)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt != nullptr)
        {
            children["rcv-patt"] = rcv_patt;
        }
        else
        {
            rcv_patt = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt>();
            rcv_patt->parent = this;
            children["rcv-patt"] = rcv_patt;
        }
        return children.at("rcv-patt");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::get_children()
{
    if(children.find("rcv-patt") == children.end())
    {
        if(rcv_patt != nullptr)
        {
            children["rcv-patt"] = rcv_patt;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
    }
    if(value_path == "ebc")
    {
        ebc = value;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
    }
    if(value_path == "found-count")
    {
        found_count = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::RcvPatt()
    :
    rcv_patt{YType::enumeration, "rcv-patt"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rcv-patt"; yang_parent_name = "odu-hour24prbs";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::has_data() const
{
    return rcv_patt.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::has_operation() const
{
    return is_set(operation)
	|| is_set(rcv_patt.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RcvPatt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcv_patt.is_set || is_set(rcv_patt.operation)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfps()
{
    yang_name = "odu-hour24gfps"; yang_parent_name = "odu-hour24";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::~OduHour24Gfps()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::has_data() const
{
    for (std::size_t index=0; index<odu_hour24gfp.size(); index++)
    {
        if(odu_hour24gfp[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24gfp.size(); index++)
    {
        if(odu_hour24gfp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfps";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduHour24Gfps' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-hour24gfp")
    {
        for(auto const & c : odu_hour24gfp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp>();
        c->parent = this;
        odu_hour24gfp.push_back(std::move(c));
        children[segment_path] = odu_hour24gfp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::get_children()
{
    for (auto const & c : odu_hour24gfp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::OduHour24Gfp()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    rx_bit_err(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr>())
	,rx_crc(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc>())
	,rx_csf(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf>())
	,rx_inv_typ(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp>())
	,rx_lfd(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd>())
{
    rx_bit_err->parent = this;
    children["rx-bit-err"] = rx_bit_err;

    rx_crc->parent = this;
    children["rx-crc"] = rx_crc;

    rx_csf->parent = this;
    children["rx-csf"] = rx_csf;

    rx_inv_typ->parent = this;
    children["rx-inv-typ"] = rx_inv_typ;

    rx_lfd->parent = this;
    children["rx-lfd"] = rx_lfd;

    yang_name = "odu-hour24gfp"; yang_parent_name = "odu-hour24gfps";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::~OduHour24Gfp()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_data())
	|| (rx_crc !=  nullptr && rx_crc->has_data())
	|| (rx_csf !=  nullptr && rx_csf->has_data())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_data())
	|| (rx_lfd !=  nullptr && rx_lfd->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (rx_bit_err !=  nullptr && rx_bit_err->has_operation())
	|| (rx_crc !=  nullptr && rx_crc->has_operation())
	|| (rx_csf !=  nullptr && rx_csf->has_operation())
	|| (rx_inv_typ !=  nullptr && rx_inv_typ->has_operation())
	|| (rx_lfd !=  nullptr && rx_lfd->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24gfp" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduHour24Gfp' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-bit-err")
    {
        if(rx_bit_err != nullptr)
        {
            children["rx-bit-err"] = rx_bit_err;
        }
        else
        {
            rx_bit_err = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr>();
            rx_bit_err->parent = this;
            children["rx-bit-err"] = rx_bit_err;
        }
        return children.at("rx-bit-err");
    }

    if(child_yang_name == "rx-crc")
    {
        if(rx_crc != nullptr)
        {
            children["rx-crc"] = rx_crc;
        }
        else
        {
            rx_crc = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc>();
            rx_crc->parent = this;
            children["rx-crc"] = rx_crc;
        }
        return children.at("rx-crc");
    }

    if(child_yang_name == "rx-csf")
    {
        if(rx_csf != nullptr)
        {
            children["rx-csf"] = rx_csf;
        }
        else
        {
            rx_csf = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf>();
            rx_csf->parent = this;
            children["rx-csf"] = rx_csf;
        }
        return children.at("rx-csf");
    }

    if(child_yang_name == "rx-inv-typ")
    {
        if(rx_inv_typ != nullptr)
        {
            children["rx-inv-typ"] = rx_inv_typ;
        }
        else
        {
            rx_inv_typ = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp>();
            rx_inv_typ->parent = this;
            children["rx-inv-typ"] = rx_inv_typ;
        }
        return children.at("rx-inv-typ");
    }

    if(child_yang_name == "rx-lfd")
    {
        if(rx_lfd != nullptr)
        {
            children["rx-lfd"] = rx_lfd;
        }
        else
        {
            rx_lfd = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd>();
            rx_lfd->parent = this;
            children["rx-lfd"] = rx_lfd;
        }
        return children.at("rx-lfd");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::get_children()
{
    if(children.find("rx-bit-err") == children.end())
    {
        if(rx_bit_err != nullptr)
        {
            children["rx-bit-err"] = rx_bit_err;
        }
    }

    if(children.find("rx-crc") == children.end())
    {
        if(rx_crc != nullptr)
        {
            children["rx-crc"] = rx_crc;
        }
    }

    if(children.find("rx-csf") == children.end())
    {
        if(rx_csf != nullptr)
        {
            children["rx-csf"] = rx_csf;
        }
    }

    if(children.find("rx-inv-typ") == children.end())
    {
        if(rx_inv_typ != nullptr)
        {
            children["rx-inv-typ"] = rx_inv_typ;
        }
    }

    if(children.find("rx-lfd") == children.end())
    {
        if(rx_lfd != nullptr)
        {
            children["rx-lfd"] = rx_lfd;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::RxBitErr()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-bit-err"; yang_parent_name = "odu-hour24gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::~RxBitErr()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-bit-err";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxBitErr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::RxInvTyp()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-inv-typ"; yang_parent_name = "odu-hour24gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::~RxInvTyp()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-inv-typ";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxInvTyp' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::RxCrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-crc"; yang_parent_name = "odu-hour24gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::~RxCrc()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-crc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxCrc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::RxLfd()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-lfd"; yang_parent_name = "odu-hour24gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::~RxLfd()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-lfd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxLfd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::RxCsf()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "rx-csf"; yang_parent_name = "odu-hour24gfp";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::~RxCsf()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-csf";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxCsf' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otns()
{
    yang_name = "odu-hour24otns"; yang_parent_name = "odu-hour24";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::~OduHour24Otns()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::has_data() const
{
    for (std::size_t index=0; index<odu_hour24otn.size(); index++)
    {
        if(odu_hour24otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::has_operation() const
{
    for (std::size_t index=0; index<odu_hour24otn.size(); index++)
    {
        if(odu_hour24otn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduHour24Otns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-hour24otn")
    {
        for(auto const & c : odu_hour24otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn>();
        c->parent = this;
        odu_hour24otn.push_back(std::move(c));
        children[segment_path] = odu_hour24otn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::get_children()
{
    for (auto const & c : odu_hour24otn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::OduHour24Otn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    bbe_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe>())
{
    bbe_fe->parent = this;
    children["bbe-fe"] = bbe_fe;

    bbe_ne->parent = this;
    children["bbe-ne"] = bbe_ne;

    bber_fe->parent = this;
    children["bber-fe"] = bber_fe;

    bber_ne->parent = this;
    children["bber-ne"] = bber_ne;

    es_fe->parent = this;
    children["es-fe"] = es_fe;

    es_ne->parent = this;
    children["es-ne"] = es_ne;

    esr_fe->parent = this;
    children["esr-fe"] = esr_fe;

    esr_ne->parent = this;
    children["esr-ne"] = esr_ne;

    fc_fe->parent = this;
    children["fc-fe"] = fc_fe;

    fc_ne->parent = this;
    children["fc-ne"] = fc_ne;

    lbc->parent = this;
    children["lbc"] = lbc;

    ses_fe->parent = this;
    children["ses-fe"] = ses_fe;

    ses_ne->parent = this;
    children["ses-ne"] = ses_ne;

    sesr_fe->parent = this;
    children["sesr-fe"] = sesr_fe;

    sesr_ne->parent = this;
    children["sesr-ne"] = sesr_ne;

    uas_fe->parent = this;
    children["uas-fe"] = uas_fe;

    uas_ne->parent = this;
    children["uas-ne"] = uas_ne;

    yang_name = "odu-hour24otn"; yang_parent_name = "odu-hour24otns";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::~OduHour24Otn()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-hour24otn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduHour24Otn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
        else
        {
            bbe_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe>();
            bbe_fe->parent = this;
            children["bbe-fe"] = bbe_fe;
        }
        return children.at("bbe-fe");
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
        else
        {
            bbe_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe>();
            bbe_ne->parent = this;
            children["bbe-ne"] = bbe_ne;
        }
        return children.at("bbe-ne");
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
        else
        {
            bber_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe>();
            bber_fe->parent = this;
            children["bber-fe"] = bber_fe;
        }
        return children.at("bber-fe");
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
        else
        {
            bber_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe>();
            bber_ne->parent = this;
            children["bber-ne"] = bber_ne;
        }
        return children.at("bber-ne");
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
        else
        {
            es_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe>();
            es_fe->parent = this;
            children["es-fe"] = es_fe;
        }
        return children.at("es-fe");
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
        else
        {
            es_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe>();
            es_ne->parent = this;
            children["es-ne"] = es_ne;
        }
        return children.at("es-ne");
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
        else
        {
            esr_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe>();
            esr_fe->parent = this;
            children["esr-fe"] = esr_fe;
        }
        return children.at("esr-fe");
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
        else
        {
            esr_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe>();
            esr_ne->parent = this;
            children["esr-ne"] = esr_ne;
        }
        return children.at("esr-ne");
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
        else
        {
            fc_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe>();
            fc_fe->parent = this;
            children["fc-fe"] = fc_fe;
        }
        return children.at("fc-fe");
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
        else
        {
            fc_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe>();
            fc_ne->parent = this;
            children["fc-ne"] = fc_ne;
        }
        return children.at("fc-ne");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
        else
        {
            ses_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe>();
            ses_fe->parent = this;
            children["ses-fe"] = ses_fe;
        }
        return children.at("ses-fe");
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
        else
        {
            ses_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe>();
            ses_ne->parent = this;
            children["ses-ne"] = ses_ne;
        }
        return children.at("ses-ne");
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
        else
        {
            sesr_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe>();
            sesr_fe->parent = this;
            children["sesr-fe"] = sesr_fe;
        }
        return children.at("sesr-fe");
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
        else
        {
            sesr_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe>();
            sesr_ne->parent = this;
            children["sesr-ne"] = sesr_ne;
        }
        return children.at("sesr-ne");
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
        else
        {
            uas_fe = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe>();
            uas_fe->parent = this;
            children["uas-fe"] = uas_fe;
        }
        return children.at("uas-fe");
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
        else
        {
            uas_ne = std::make_shared<PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe>();
            uas_ne->parent = this;
            children["uas-ne"] = uas_ne;
        }
        return children.at("uas-ne");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::get_children()
{
    if(children.find("bbe-fe") == children.end())
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
    }

    if(children.find("bbe-ne") == children.end())
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
    }

    if(children.find("bber-fe") == children.end())
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
    }

    if(children.find("bber-ne") == children.end())
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
    }

    if(children.find("es-fe") == children.end())
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
    }

    if(children.find("es-ne") == children.end())
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
    }

    if(children.find("esr-fe") == children.end())
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
    }

    if(children.find("esr-ne") == children.end())
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
    }

    if(children.find("fc-fe") == children.end())
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
    }

    if(children.find("fc-ne") == children.end())
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("ses-fe") == children.end())
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
    }

    if(children.find("ses-ne") == children.end())
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
    }

    if(children.find("sesr-fe") == children.end())
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
    }

    if(children.find("sesr-ne") == children.end())
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
    }

    if(children.find("uas-fe") == children.end())
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
    }

    if(children.find("uas-ne") == children.end())
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
    }

    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "lbc"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-ne"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-ne"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-ne"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-ne"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-ne"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-ne"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-ne"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-ne"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-fe"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-fe"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-fe"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-fe"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-fe"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-fe"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-fe"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-fe"; yang_parent_name = "odu-hour24otn";
}

PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::get_children()
{
    return children;
}

void PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::Otu()
    :
    otu_ports(std::make_shared<PerformanceManagement::Otu::OtuPorts>())
{
    otu_ports->parent = this;
    children["otu-ports"] = otu_ports;

    yang_name = "otu"; yang_parent_name = "performance-management";
}

PerformanceManagement::Otu::~Otu()
{
}

bool PerformanceManagement::Otu::has_data() const
{
    return (otu_ports !=  nullptr && otu_ports->has_data());
}

bool PerformanceManagement::Otu::has_operation() const
{
    return is_set(operation)
	|| (otu_ports !=  nullptr && otu_ports->has_operation());
}

std::string PerformanceManagement::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-ports")
    {
        if(otu_ports != nullptr)
        {
            children["otu-ports"] = otu_ports;
        }
        else
        {
            otu_ports = std::make_shared<PerformanceManagement::Otu::OtuPorts>();
            otu_ports->parent = this;
            children["otu-ports"] = otu_ports;
        }
        return children.at("otu-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::get_children()
{
    if(children.find("otu-ports") == children.end())
    {
        if(otu_ports != nullptr)
        {
            children["otu-ports"] = otu_ports;
        }
    }

    return children;
}

void PerformanceManagement::Otu::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPorts()
{
    yang_name = "otu-ports"; yang_parent_name = "otu";
}

PerformanceManagement::Otu::OtuPorts::~OtuPorts()
{
}

bool PerformanceManagement::Otu::OtuPorts::has_data() const
{
    for (std::size_t index=0; index<otu_port.size(); index++)
    {
        if(otu_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::has_operation() const
{
    for (std::size_t index=0; index<otu_port.size(); index++)
    {
        if(otu_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Otu::OtuPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/otu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-port")
    {
        for(auto const & c : otu_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort>();
        c->parent = this;
        otu_port.push_back(std::move(c));
        children[segment_path] = otu_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::get_children()
{
    for (auto const & c : otu_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuPort()
    :
    name{YType::str, "name"}
    	,
    otu_current(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent>())
{
    otu_current->parent = this;
    children["otu-current"] = otu_current;

    yang_name = "otu-port"; yang_parent_name = "otu-ports";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::~OtuPort()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::has_data() const
{
    return name.is_set
	|| (otu_current !=  nullptr && otu_current->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (otu_current !=  nullptr && otu_current->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/otu/otu-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-current")
    {
        if(otu_current != nullptr)
        {
            children["otu-current"] = otu_current;
        }
        else
        {
            otu_current = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent>();
            otu_current->parent = this;
            children["otu-current"] = otu_current;
        }
        return children.at("otu-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::get_children()
{
    if(children.find("otu-current") == children.end())
    {
        if(otu_current != nullptr)
        {
            children["otu-current"] = otu_current;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuCurrent()
    :
    otu_hour24(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24>())
	,otu_minute15(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15>())
	,otu_second30(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30>())
{
    otu_hour24->parent = this;
    children["otu-hour24"] = otu_hour24;

    otu_minute15->parent = this;
    children["otu-minute15"] = otu_minute15;

    otu_second30->parent = this;
    children["otu-second30"] = otu_second30;

    yang_name = "otu-current"; yang_parent_name = "otu-port";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::~OtuCurrent()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::has_data() const
{
    return (otu_hour24 !=  nullptr && otu_hour24->has_data())
	|| (otu_minute15 !=  nullptr && otu_minute15->has_data())
	|| (otu_second30 !=  nullptr && otu_second30->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::has_operation() const
{
    return is_set(operation)
	|| (otu_hour24 !=  nullptr && otu_hour24->has_operation())
	|| (otu_minute15 !=  nullptr && otu_minute15->has_operation())
	|| (otu_second30 !=  nullptr && otu_second30->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-hour24")
    {
        if(otu_hour24 != nullptr)
        {
            children["otu-hour24"] = otu_hour24;
        }
        else
        {
            otu_hour24 = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24>();
            otu_hour24->parent = this;
            children["otu-hour24"] = otu_hour24;
        }
        return children.at("otu-hour24");
    }

    if(child_yang_name == "otu-minute15")
    {
        if(otu_minute15 != nullptr)
        {
            children["otu-minute15"] = otu_minute15;
        }
        else
        {
            otu_minute15 = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15>();
            otu_minute15->parent = this;
            children["otu-minute15"] = otu_minute15;
        }
        return children.at("otu-minute15");
    }

    if(child_yang_name == "otu-second30")
    {
        if(otu_second30 != nullptr)
        {
            children["otu-second30"] = otu_second30;
        }
        else
        {
            otu_second30 = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30>();
            otu_second30->parent = this;
            children["otu-second30"] = otu_second30;
        }
        return children.at("otu-second30");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::get_children()
{
    if(children.find("otu-hour24") == children.end())
    {
        if(otu_hour24 != nullptr)
        {
            children["otu-hour24"] = otu_hour24;
        }
    }

    if(children.find("otu-minute15") == children.end())
    {
        if(otu_minute15 != nullptr)
        {
            children["otu-minute15"] = otu_minute15;
        }
    }

    if(children.find("otu-second30") == children.end())
    {
        if(otu_second30 != nullptr)
        {
            children["otu-second30"] = otu_second30;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15()
    :
    otu_minute15fecs(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs>())
	,otu_minute15otns(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns>())
{
    otu_minute15fecs->parent = this;
    children["otu-minute15fecs"] = otu_minute15fecs;

    otu_minute15otns->parent = this;
    children["otu-minute15otns"] = otu_minute15otns;

    yang_name = "otu-minute15"; yang_parent_name = "otu-current";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::~OtuMinute15()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::has_data() const
{
    return (otu_minute15fecs !=  nullptr && otu_minute15fecs->has_data())
	|| (otu_minute15otns !=  nullptr && otu_minute15otns->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::has_operation() const
{
    return is_set(operation)
	|| (otu_minute15fecs !=  nullptr && otu_minute15fecs->has_operation())
	|| (otu_minute15otns !=  nullptr && otu_minute15otns->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-minute15fecs")
    {
        if(otu_minute15fecs != nullptr)
        {
            children["otu-minute15fecs"] = otu_minute15fecs;
        }
        else
        {
            otu_minute15fecs = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs>();
            otu_minute15fecs->parent = this;
            children["otu-minute15fecs"] = otu_minute15fecs;
        }
        return children.at("otu-minute15fecs");
    }

    if(child_yang_name == "otu-minute15otns")
    {
        if(otu_minute15otns != nullptr)
        {
            children["otu-minute15otns"] = otu_minute15otns;
        }
        else
        {
            otu_minute15otns = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns>();
            otu_minute15otns->parent = this;
            children["otu-minute15otns"] = otu_minute15otns;
        }
        return children.at("otu-minute15otns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::get_children()
{
    if(children.find("otu-minute15fecs") == children.end())
    {
        if(otu_minute15fecs != nullptr)
        {
            children["otu-minute15fecs"] = otu_minute15fecs;
        }
    }

    if(children.find("otu-minute15otns") == children.end())
    {
        if(otu_minute15otns != nullptr)
        {
            children["otu-minute15otns"] = otu_minute15otns;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fecs()
{
    yang_name = "otu-minute15fecs"; yang_parent_name = "otu-minute15";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::~OtuMinute15Fecs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::has_data() const
{
    for (std::size_t index=0; index<otu_minute15fec.size(); index++)
    {
        if(otu_minute15fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15fec.size(); index++)
    {
        if(otu_minute15fec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fecs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuMinute15Fecs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-minute15fec")
    {
        for(auto const & c : otu_minute15fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec>();
        c->parent = this;
        otu_minute15fec.push_back(std::move(c));
        children[segment_path] = otu_minute15fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::get_children()
{
    for (auto const & c : otu_minute15fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::OtuMinute15Fec()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ec_bits(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "otu-minute15fec"; yang_parent_name = "otu-minute15fecs";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::~OtuMinute15Fec()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuMinute15Fec' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "otu-minute15fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "otu-minute15fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "otu-minute15fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "otu-minute15fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "otu-minute15fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::~Q()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "otu-minute15fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otns()
{
    yang_name = "otu-minute15otns"; yang_parent_name = "otu-minute15";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::~OtuMinute15Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::has_data() const
{
    for (std::size_t index=0; index<otu_minute15otn.size(); index++)
    {
        if(otu_minute15otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn.size(); index++)
    {
        if(otu_minute15otn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuMinute15Otns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-minute15otn")
    {
        for(auto const & c : otu_minute15otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn>();
        c->parent = this;
        otu_minute15otn.push_back(std::move(c));
        children[segment_path] = otu_minute15otn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_children()
{
    for (auto const & c : otu_minute15otn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::OtuMinute15Otn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe>())
{
    bbe_fe->parent = this;
    children["bbe-fe"] = bbe_fe;

    bbe_ne->parent = this;
    children["bbe-ne"] = bbe_ne;

    bber_fe->parent = this;
    children["bber-fe"] = bber_fe;

    bber_ne->parent = this;
    children["bber-ne"] = bber_ne;

    es_fe->parent = this;
    children["es-fe"] = es_fe;

    es_ne->parent = this;
    children["es-ne"] = es_ne;

    esr_fe->parent = this;
    children["esr-fe"] = esr_fe;

    esr_ne->parent = this;
    children["esr-ne"] = esr_ne;

    fc_fe->parent = this;
    children["fc-fe"] = fc_fe;

    fc_ne->parent = this;
    children["fc-ne"] = fc_ne;

    lbc->parent = this;
    children["lbc"] = lbc;

    ses_fe->parent = this;
    children["ses-fe"] = ses_fe;

    ses_ne->parent = this;
    children["ses-ne"] = ses_ne;

    sesr_fe->parent = this;
    children["sesr-fe"] = sesr_fe;

    sesr_ne->parent = this;
    children["sesr-ne"] = sesr_ne;

    uas_fe->parent = this;
    children["uas-fe"] = uas_fe;

    uas_ne->parent = this;
    children["uas-ne"] = uas_ne;

    yang_name = "otu-minute15otn"; yang_parent_name = "otu-minute15otns";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::~OtuMinute15Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuMinute15Otn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
        else
        {
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe>();
            bbe_fe->parent = this;
            children["bbe-fe"] = bbe_fe;
        }
        return children.at("bbe-fe");
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
        else
        {
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe>();
            bbe_ne->parent = this;
            children["bbe-ne"] = bbe_ne;
        }
        return children.at("bbe-ne");
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
        else
        {
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe>();
            bber_fe->parent = this;
            children["bber-fe"] = bber_fe;
        }
        return children.at("bber-fe");
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
        else
        {
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe>();
            bber_ne->parent = this;
            children["bber-ne"] = bber_ne;
        }
        return children.at("bber-ne");
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
        else
        {
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe>();
            es_fe->parent = this;
            children["es-fe"] = es_fe;
        }
        return children.at("es-fe");
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
        else
        {
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe>();
            es_ne->parent = this;
            children["es-ne"] = es_ne;
        }
        return children.at("es-ne");
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
        else
        {
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe>();
            esr_fe->parent = this;
            children["esr-fe"] = esr_fe;
        }
        return children.at("esr-fe");
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
        else
        {
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe>();
            esr_ne->parent = this;
            children["esr-ne"] = esr_ne;
        }
        return children.at("esr-ne");
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
        else
        {
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe>();
            fc_fe->parent = this;
            children["fc-fe"] = fc_fe;
        }
        return children.at("fc-fe");
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
        else
        {
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe>();
            fc_ne->parent = this;
            children["fc-ne"] = fc_ne;
        }
        return children.at("fc-ne");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
        else
        {
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe>();
            ses_fe->parent = this;
            children["ses-fe"] = ses_fe;
        }
        return children.at("ses-fe");
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
        else
        {
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe>();
            ses_ne->parent = this;
            children["ses-ne"] = ses_ne;
        }
        return children.at("ses-ne");
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
        else
        {
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe>();
            sesr_fe->parent = this;
            children["sesr-fe"] = sesr_fe;
        }
        return children.at("sesr-fe");
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
        else
        {
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe>();
            sesr_ne->parent = this;
            children["sesr-ne"] = sesr_ne;
        }
        return children.at("sesr-ne");
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
        else
        {
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe>();
            uas_fe->parent = this;
            children["uas-fe"] = uas_fe;
        }
        return children.at("uas-fe");
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
        else
        {
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe>();
            uas_ne->parent = this;
            children["uas-ne"] = uas_ne;
        }
        return children.at("uas-ne");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_children()
{
    if(children.find("bbe-fe") == children.end())
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
    }

    if(children.find("bbe-ne") == children.end())
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
    }

    if(children.find("bber-fe") == children.end())
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
    }

    if(children.find("bber-ne") == children.end())
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
    }

    if(children.find("es-fe") == children.end())
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
    }

    if(children.find("es-ne") == children.end())
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
    }

    if(children.find("esr-fe") == children.end())
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
    }

    if(children.find("esr-ne") == children.end())
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
    }

    if(children.find("fc-fe") == children.end())
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
    }

    if(children.find("fc-ne") == children.end())
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("ses-fe") == children.end())
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
    }

    if(children.find("ses-ne") == children.end())
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
    }

    if(children.find("sesr-fe") == children.end())
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
    }

    if(children.find("sesr-ne") == children.end())
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
    }

    if(children.find("uas-fe") == children.end())
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
    }

    if(children.find("uas-ne") == children.end())
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "lbc"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-ne"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-ne"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-ne"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-ne"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-ne"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-ne"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-ne"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-ne"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-fe"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-fe"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-fe"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-fe"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-fe"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-fe"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-fe"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-fe"; yang_parent_name = "otu-minute15otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30()
    :
    otu_second30fecs(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs>())
	,otu_second30otns(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns>())
{
    otu_second30fecs->parent = this;
    children["otu-second30fecs"] = otu_second30fecs;

    otu_second30otns->parent = this;
    children["otu-second30otns"] = otu_second30otns;

    yang_name = "otu-second30"; yang_parent_name = "otu-current";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::~OtuSecond30()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::has_data() const
{
    return (otu_second30fecs !=  nullptr && otu_second30fecs->has_data())
	|| (otu_second30otns !=  nullptr && otu_second30otns->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::has_operation() const
{
    return is_set(operation)
	|| (otu_second30fecs !=  nullptr && otu_second30fecs->has_operation())
	|| (otu_second30otns !=  nullptr && otu_second30otns->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuSecond30' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-second30fecs")
    {
        if(otu_second30fecs != nullptr)
        {
            children["otu-second30fecs"] = otu_second30fecs;
        }
        else
        {
            otu_second30fecs = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs>();
            otu_second30fecs->parent = this;
            children["otu-second30fecs"] = otu_second30fecs;
        }
        return children.at("otu-second30fecs");
    }

    if(child_yang_name == "otu-second30otns")
    {
        if(otu_second30otns != nullptr)
        {
            children["otu-second30otns"] = otu_second30otns;
        }
        else
        {
            otu_second30otns = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns>();
            otu_second30otns->parent = this;
            children["otu-second30otns"] = otu_second30otns;
        }
        return children.at("otu-second30otns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_children()
{
    if(children.find("otu-second30fecs") == children.end())
    {
        if(otu_second30fecs != nullptr)
        {
            children["otu-second30fecs"] = otu_second30fecs;
        }
    }

    if(children.find("otu-second30otns") == children.end())
    {
        if(otu_second30otns != nullptr)
        {
            children["otu-second30otns"] = otu_second30otns;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fecs()
{
    yang_name = "otu-second30fecs"; yang_parent_name = "otu-second30";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::~OtuSecond30Fecs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::has_data() const
{
    for (std::size_t index=0; index<otu_second30fec.size(); index++)
    {
        if(otu_second30fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::has_operation() const
{
    for (std::size_t index=0; index<otu_second30fec.size(); index++)
    {
        if(otu_second30fec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fecs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuSecond30Fecs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-second30fec")
    {
        for(auto const & c : otu_second30fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec>();
        c->parent = this;
        otu_second30fec.push_back(std::move(c));
        children[segment_path] = otu_second30fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_children()
{
    for (auto const & c : otu_second30fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::OtuSecond30Fec()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ec_bits(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "otu-second30fec"; yang_parent_name = "otu-second30fecs";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::~OtuSecond30Fec()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuSecond30Fec' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "otu-second30fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "otu-second30fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "otu-second30fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "otu-second30fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "otu-second30fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::~Q()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "otu-second30fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otns()
{
    yang_name = "otu-second30otns"; yang_parent_name = "otu-second30";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::~OtuSecond30Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::has_data() const
{
    for (std::size_t index=0; index<otu_second30otn.size(); index++)
    {
        if(otu_second30otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn.size(); index++)
    {
        if(otu_second30otn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuSecond30Otns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-second30otn")
    {
        for(auto const & c : otu_second30otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn>();
        c->parent = this;
        otu_second30otn.push_back(std::move(c));
        children[segment_path] = otu_second30otn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_children()
{
    for (auto const & c : otu_second30otn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::OtuSecond30Otn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe>())
{
    bbe_fe->parent = this;
    children["bbe-fe"] = bbe_fe;

    bbe_ne->parent = this;
    children["bbe-ne"] = bbe_ne;

    bber_fe->parent = this;
    children["bber-fe"] = bber_fe;

    bber_ne->parent = this;
    children["bber-ne"] = bber_ne;

    es_fe->parent = this;
    children["es-fe"] = es_fe;

    es_ne->parent = this;
    children["es-ne"] = es_ne;

    esr_fe->parent = this;
    children["esr-fe"] = esr_fe;

    esr_ne->parent = this;
    children["esr-ne"] = esr_ne;

    fc_fe->parent = this;
    children["fc-fe"] = fc_fe;

    fc_ne->parent = this;
    children["fc-ne"] = fc_ne;

    lbc->parent = this;
    children["lbc"] = lbc;

    ses_fe->parent = this;
    children["ses-fe"] = ses_fe;

    ses_ne->parent = this;
    children["ses-ne"] = ses_ne;

    sesr_fe->parent = this;
    children["sesr-fe"] = sesr_fe;

    sesr_ne->parent = this;
    children["sesr-ne"] = sesr_ne;

    uas_fe->parent = this;
    children["uas-fe"] = uas_fe;

    uas_ne->parent = this;
    children["uas-ne"] = uas_ne;

    yang_name = "otu-second30otn"; yang_parent_name = "otu-second30otns";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::~OtuSecond30Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuSecond30Otn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
        else
        {
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe>();
            bbe_fe->parent = this;
            children["bbe-fe"] = bbe_fe;
        }
        return children.at("bbe-fe");
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
        else
        {
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe>();
            bbe_ne->parent = this;
            children["bbe-ne"] = bbe_ne;
        }
        return children.at("bbe-ne");
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
        else
        {
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe>();
            bber_fe->parent = this;
            children["bber-fe"] = bber_fe;
        }
        return children.at("bber-fe");
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
        else
        {
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe>();
            bber_ne->parent = this;
            children["bber-ne"] = bber_ne;
        }
        return children.at("bber-ne");
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
        else
        {
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe>();
            es_fe->parent = this;
            children["es-fe"] = es_fe;
        }
        return children.at("es-fe");
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
        else
        {
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe>();
            es_ne->parent = this;
            children["es-ne"] = es_ne;
        }
        return children.at("es-ne");
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
        else
        {
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe>();
            esr_fe->parent = this;
            children["esr-fe"] = esr_fe;
        }
        return children.at("esr-fe");
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
        else
        {
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe>();
            esr_ne->parent = this;
            children["esr-ne"] = esr_ne;
        }
        return children.at("esr-ne");
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
        else
        {
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe>();
            fc_fe->parent = this;
            children["fc-fe"] = fc_fe;
        }
        return children.at("fc-fe");
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
        else
        {
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe>();
            fc_ne->parent = this;
            children["fc-ne"] = fc_ne;
        }
        return children.at("fc-ne");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
        else
        {
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe>();
            ses_fe->parent = this;
            children["ses-fe"] = ses_fe;
        }
        return children.at("ses-fe");
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
        else
        {
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe>();
            ses_ne->parent = this;
            children["ses-ne"] = ses_ne;
        }
        return children.at("ses-ne");
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
        else
        {
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe>();
            sesr_fe->parent = this;
            children["sesr-fe"] = sesr_fe;
        }
        return children.at("sesr-fe");
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
        else
        {
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe>();
            sesr_ne->parent = this;
            children["sesr-ne"] = sesr_ne;
        }
        return children.at("sesr-ne");
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
        else
        {
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe>();
            uas_fe->parent = this;
            children["uas-fe"] = uas_fe;
        }
        return children.at("uas-fe");
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
        else
        {
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe>();
            uas_ne->parent = this;
            children["uas-ne"] = uas_ne;
        }
        return children.at("uas-ne");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_children()
{
    if(children.find("bbe-fe") == children.end())
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
    }

    if(children.find("bbe-ne") == children.end())
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
    }

    if(children.find("bber-fe") == children.end())
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
    }

    if(children.find("bber-ne") == children.end())
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
    }

    if(children.find("es-fe") == children.end())
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
    }

    if(children.find("es-ne") == children.end())
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
    }

    if(children.find("esr-fe") == children.end())
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
    }

    if(children.find("esr-ne") == children.end())
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
    }

    if(children.find("fc-fe") == children.end())
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
    }

    if(children.find("fc-ne") == children.end())
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("ses-fe") == children.end())
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
    }

    if(children.find("ses-ne") == children.end())
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
    }

    if(children.find("sesr-fe") == children.end())
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
    }

    if(children.find("sesr-ne") == children.end())
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
    }

    if(children.find("uas-fe") == children.end())
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
    }

    if(children.find("uas-ne") == children.end())
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "lbc"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-ne"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-ne"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-ne"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-ne"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-ne"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-ne"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-ne"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-ne"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-fe"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-fe"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-fe"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

const Enum::YLeaf PmSonetPathWidthEnumEnum::none {0, "none"};
const Enum::YLeaf PmSonetPathWidthEnumEnum::sts1 {1, "sts1"};
const Enum::YLeaf PmSonetPathWidthEnumEnum::sts3c_stm1 {2, "sts3c-stm1"};
const Enum::YLeaf PmSonetPathWidthEnumEnum::sts12c_stm4 {3, "sts12c-stm4"};
const Enum::YLeaf PmSonetPathWidthEnumEnum::sts24c {4, "sts24c"};
const Enum::YLeaf PmSonetPathWidthEnumEnum::sts48c_stm16 {5, "sts48c-stm16"};
const Enum::YLeaf PmSonetPathWidthEnumEnum::sts192c_stm64 {6, "sts192c-stm64"};
const Enum::YLeaf PmSonetPathWidthEnumEnum::sts768c_stm256 {7, "sts768c-stm256"};

const Enum::YLeaf PmPrbsPatternEtEnum::prbs_none {0, "prbs-none"};
const Enum::YLeaf PmPrbsPatternEtEnum::pn31 {1, "pn31"};
const Enum::YLeaf PmPrbsPatternEtEnum::pn23 {2, "pn23"};
const Enum::YLeaf PmPrbsPatternEtEnum::pn11 {4, "pn11"};
const Enum::YLeaf PmPrbsPatternEtEnum::inv_pn31 {8, "inv-pn31"};
const Enum::YLeaf PmPrbsPatternEtEnum::inv_pn11 {16, "inv-pn11"};


}
}

