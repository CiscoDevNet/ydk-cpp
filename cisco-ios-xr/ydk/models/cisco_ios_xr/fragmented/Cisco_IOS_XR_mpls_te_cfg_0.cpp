
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_0.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::MplsTe()
    :
    enable_traffic_engineering{YType::empty, "enable-traffic-engineering"}
    	,
    diff_serv_traffic_engineering(std::make_shared<MplsTe::DiffServTrafficEngineering>())
	,global_attributes(std::make_shared<MplsTe::GlobalAttributes>())
	,gmpls_nni(std::make_shared<MplsTe::GmplsNni>())
	,gmpls_uni(std::make_shared<MplsTe::GmplsUni>())
	,interfaces(std::make_shared<MplsTe::Interfaces>())
	,lcac(std::make_shared<MplsTe::Lcac>())
	,named_tunnels(std::make_shared<MplsTe::NamedTunnels>())
	,transport_profile(std::make_shared<MplsTe::TransportProfile>())
{
    diff_serv_traffic_engineering->parent = this;
    children["diff-serv-traffic-engineering"] = diff_serv_traffic_engineering;

    global_attributes->parent = this;
    children["global-attributes"] = global_attributes;

    gmpls_nni->parent = this;
    children["gmpls-nni"] = gmpls_nni;

    gmpls_uni->parent = this;
    children["gmpls-uni"] = gmpls_uni;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    lcac->parent = this;
    children["lcac"] = lcac;

    named_tunnels->parent = this;
    children["named-tunnels"] = named_tunnels;

    transport_profile->parent = this;
    children["transport-profile"] = transport_profile;

    yang_name = "mpls-te"; yang_parent_name = "Cisco-IOS-XR-mpls-te-cfg";
}

MplsTe::~MplsTe()
{
}

bool MplsTe::has_data() const
{
    return enable_traffic_engineering.is_set
	|| (diff_serv_traffic_engineering !=  nullptr && diff_serv_traffic_engineering->has_data())
	|| (global_attributes !=  nullptr && global_attributes->has_data())
	|| (gmpls_nni !=  nullptr && gmpls_nni->has_data())
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (lcac !=  nullptr && lcac->has_data())
	|| (named_tunnels !=  nullptr && named_tunnels->has_data())
	|| (transport_profile !=  nullptr && transport_profile->has_data());
}

bool MplsTe::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_traffic_engineering.operation)
	|| (diff_serv_traffic_engineering !=  nullptr && diff_serv_traffic_engineering->has_operation())
	|| (global_attributes !=  nullptr && global_attributes->has_operation())
	|| (gmpls_nni !=  nullptr && gmpls_nni->has_operation())
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (lcac !=  nullptr && lcac->has_operation())
	|| (named_tunnels !=  nullptr && named_tunnels->has_operation())
	|| (transport_profile !=  nullptr && transport_profile->has_operation());
}

std::string MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te";

    return path_buffer.str();

}

EntityPath MplsTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_traffic_engineering.is_set || is_set(enable_traffic_engineering.operation)) leaf_name_data.push_back(enable_traffic_engineering.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "diff-serv-traffic-engineering")
    {
        if(diff_serv_traffic_engineering != nullptr)
        {
            children["diff-serv-traffic-engineering"] = diff_serv_traffic_engineering;
        }
        else
        {
            diff_serv_traffic_engineering = std::make_shared<MplsTe::DiffServTrafficEngineering>();
            diff_serv_traffic_engineering->parent = this;
            children["diff-serv-traffic-engineering"] = diff_serv_traffic_engineering;
        }
        return children.at("diff-serv-traffic-engineering");
    }

    if(child_yang_name == "global-attributes")
    {
        if(global_attributes != nullptr)
        {
            children["global-attributes"] = global_attributes;
        }
        else
        {
            global_attributes = std::make_shared<MplsTe::GlobalAttributes>();
            global_attributes->parent = this;
            children["global-attributes"] = global_attributes;
        }
        return children.at("global-attributes");
    }

    if(child_yang_name == "gmpls-nni")
    {
        if(gmpls_nni != nullptr)
        {
            children["gmpls-nni"] = gmpls_nni;
        }
        else
        {
            gmpls_nni = std::make_shared<MplsTe::GmplsNni>();
            gmpls_nni->parent = this;
            children["gmpls-nni"] = gmpls_nni;
        }
        return children.at("gmpls-nni");
    }

    if(child_yang_name == "gmpls-uni")
    {
        if(gmpls_uni != nullptr)
        {
            children["gmpls-uni"] = gmpls_uni;
        }
        else
        {
            gmpls_uni = std::make_shared<MplsTe::GmplsUni>();
            gmpls_uni->parent = this;
            children["gmpls-uni"] = gmpls_uni;
        }
        return children.at("gmpls-uni");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<MplsTe::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "lcac")
    {
        if(lcac != nullptr)
        {
            children["lcac"] = lcac;
        }
        else
        {
            lcac = std::make_shared<MplsTe::Lcac>();
            lcac->parent = this;
            children["lcac"] = lcac;
        }
        return children.at("lcac");
    }

    if(child_yang_name == "named-tunnels")
    {
        if(named_tunnels != nullptr)
        {
            children["named-tunnels"] = named_tunnels;
        }
        else
        {
            named_tunnels = std::make_shared<MplsTe::NamedTunnels>();
            named_tunnels->parent = this;
            children["named-tunnels"] = named_tunnels;
        }
        return children.at("named-tunnels");
    }

    if(child_yang_name == "transport-profile")
    {
        if(transport_profile != nullptr)
        {
            children["transport-profile"] = transport_profile;
        }
        else
        {
            transport_profile = std::make_shared<MplsTe::TransportProfile>();
            transport_profile->parent = this;
            children["transport-profile"] = transport_profile;
        }
        return children.at("transport-profile");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::get_children()
{
    if(children.find("diff-serv-traffic-engineering") == children.end())
    {
        if(diff_serv_traffic_engineering != nullptr)
        {
            children["diff-serv-traffic-engineering"] = diff_serv_traffic_engineering;
        }
    }

    if(children.find("global-attributes") == children.end())
    {
        if(global_attributes != nullptr)
        {
            children["global-attributes"] = global_attributes;
        }
    }

    if(children.find("gmpls-nni") == children.end())
    {
        if(gmpls_nni != nullptr)
        {
            children["gmpls-nni"] = gmpls_nni;
        }
    }

    if(children.find("gmpls-uni") == children.end())
    {
        if(gmpls_uni != nullptr)
        {
            children["gmpls-uni"] = gmpls_uni;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("lcac") == children.end())
    {
        if(lcac != nullptr)
        {
            children["lcac"] = lcac;
        }
    }

    if(children.find("named-tunnels") == children.end())
    {
        if(named_tunnels != nullptr)
        {
            children["named-tunnels"] = named_tunnels;
        }
    }

    if(children.find("transport-profile") == children.end())
    {
        if(transport_profile != nullptr)
        {
            children["transport-profile"] = transport_profile;
        }
    }

    return children;
}

void MplsTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-traffic-engineering")
    {
        enable_traffic_engineering = value;
    }
}

std::shared_ptr<Entity> MplsTe::clone_ptr() const
{
    return std::make_shared<MplsTe>();
}

std::string MplsTe::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTe::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTe::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MplsTe::DiffServTrafficEngineering::DiffServTrafficEngineering()
    :
    bandwidth_constraint_model{YType::enumeration, "bandwidth-constraint-model"},
    mode_ietf{YType::enumeration, "mode-ietf"}
    	,
    classes(std::make_shared<MplsTe::DiffServTrafficEngineering::Classes>())
{
    classes->parent = this;
    children["classes"] = classes;

    yang_name = "diff-serv-traffic-engineering"; yang_parent_name = "mpls-te";
}

MplsTe::DiffServTrafficEngineering::~DiffServTrafficEngineering()
{
}

bool MplsTe::DiffServTrafficEngineering::has_data() const
{
    return bandwidth_constraint_model.is_set
	|| mode_ietf.is_set
	|| (classes !=  nullptr && classes->has_data());
}

bool MplsTe::DiffServTrafficEngineering::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_constraint_model.operation)
	|| is_set(mode_ietf.operation)
	|| (classes !=  nullptr && classes->has_operation());
}

std::string MplsTe::DiffServTrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-traffic-engineering";

    return path_buffer.str();

}

EntityPath MplsTe::DiffServTrafficEngineering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_constraint_model.is_set || is_set(bandwidth_constraint_model.operation)) leaf_name_data.push_back(bandwidth_constraint_model.get_name_leafdata());
    if (mode_ietf.is_set || is_set(mode_ietf.operation)) leaf_name_data.push_back(mode_ietf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
        else
        {
            classes = std::make_shared<MplsTe::DiffServTrafficEngineering::Classes>();
            classes->parent = this;
            children["classes"] = classes;
        }
        return children.at("classes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::DiffServTrafficEngineering::get_children()
{
    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
    }

    return children;
}

void MplsTe::DiffServTrafficEngineering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-constraint-model")
    {
        bandwidth_constraint_model = value;
    }
    if(value_path == "mode-ietf")
    {
        mode_ietf = value;
    }
}

MplsTe::DiffServTrafficEngineering::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "diff-serv-traffic-engineering";
}

MplsTe::DiffServTrafficEngineering::Classes::~Classes()
{
}

bool MplsTe::DiffServTrafficEngineering::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::DiffServTrafficEngineering::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::DiffServTrafficEngineering::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath MplsTe::DiffServTrafficEngineering::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/diff-serv-traffic-engineering/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::DiffServTrafficEngineering::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::DiffServTrafficEngineering::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::DiffServTrafficEngineering::Classes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::DiffServTrafficEngineering::Classes::Class_::Class_()
    :
    class_number{YType::uint32, "class-number"},
    class_priority{YType::uint32, "class-priority"},
    class_type{YType::uint32, "class-type"},
    unused{YType::boolean, "unused"}
{
    yang_name = "class"; yang_parent_name = "classes";
}

MplsTe::DiffServTrafficEngineering::Classes::Class_::~Class_()
{
}

bool MplsTe::DiffServTrafficEngineering::Classes::Class_::has_data() const
{
    return class_number.is_set
	|| class_priority.is_set
	|| class_type.is_set
	|| unused.is_set;
}

bool MplsTe::DiffServTrafficEngineering::Classes::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(class_number.operation)
	|| is_set(class_priority.operation)
	|| is_set(class_type.operation)
	|| is_set(unused.operation);
}

std::string MplsTe::DiffServTrafficEngineering::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-number='" <<class_number <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::DiffServTrafficEngineering::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/diff-serv-traffic-engineering/classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.operation)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_priority.is_set || is_set(class_priority.operation)) leaf_name_data.push_back(class_priority.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::DiffServTrafficEngineering::Classes::Class_::get_children()
{
    return children;
}

void MplsTe::DiffServTrafficEngineering::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-number")
    {
        class_number = value;
    }
    if(value_path == "class-priority")
    {
        class_priority = value;
    }
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "unused")
    {
        unused = value;
    }
}

MplsTe::NamedTunnels::NamedTunnels()
    :
    enable{YType::empty, "enable"}
    	,
    tunnels(std::make_shared<MplsTe::NamedTunnels::Tunnels>())
{
    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "named-tunnels"; yang_parent_name = "mpls-te";
}

MplsTe::NamedTunnels::~NamedTunnels()
{
}

bool MplsTe::NamedTunnels::has_data() const
{
    return enable.is_set
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsTe::NamedTunnels::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsTe::NamedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-tunnels";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<MplsTe::NamedTunnels::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::get_children()
{
    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "named-tunnels";
}

MplsTe::NamedTunnels::Tunnels::~Tunnels()
{
}

bool MplsTe::NamedTunnels::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::NamedTunnels::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/named-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::NamedTunnels::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    enable{YType::empty, "enable"}
    	,
    tunnel_attributes(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes>())
	,tunnel_id(nullptr) // presence node
{
    tunnel_attributes->parent = this;
    children["tunnel-attributes"] = tunnel_attributes;

    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| enable.is_set
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_data())
	|| (tunnel_id !=  nullptr && tunnel_id->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_type.operation)
	|| is_set(enable.operation)
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_operation())
	|| (tunnel_id !=  nullptr && tunnel_id->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[tunnel-type='" <<tunnel_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/named-tunnels/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.operation)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-attributes")
    {
        if(tunnel_attributes != nullptr)
        {
            children["tunnel-attributes"] = tunnel_attributes;
        }
        else
        {
            tunnel_attributes = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes>();
            tunnel_attributes->parent = this;
            children["tunnel-attributes"] = tunnel_attributes;
        }
        return children.at("tunnel-attributes");
    }

    if(child_yang_name == "tunnel-id")
    {
        if(tunnel_id != nullptr)
        {
            children["tunnel-id"] = tunnel_id;
        }
        else
        {
            tunnel_id = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId>();
            tunnel_id->parent = this;
            children["tunnel-id"] = tunnel_id;
        }
        return children.at("tunnel-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::get_children()
{
    if(children.find("tunnel-attributes") == children.end())
    {
        if(tunnel_attributes != nullptr)
        {
            children["tunnel-attributes"] = tunnel_attributes;
        }
    }

    if(children.find("tunnel-id") == children.end())
    {
        if(tunnel_id != nullptr)
        {
            children["tunnel-id"] = tunnel_id;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelAttributes()
    :
    destination{YType::str, "destination"},
    forward_class{YType::uint32, "forward-class"},
    load_share{YType::uint32, "load-share"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    record_route{YType::empty, "record-route"},
    shutdown{YType::empty, "shutdown"},
    soft_preemption{YType::empty, "soft-preemption"}
    	,
    auto_bandwidth(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth>())
	,autoroute(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute>())
	,bandwidth(nullptr) // presence node
	,fast_reroute(nullptr) // presence node
	,logging(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes>())
	,path_setups(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups>())
	,priority(nullptr) // presence node
	,tunnel_path_selection(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection>())
{
    auto_bandwidth->parent = this;
    children["auto-bandwidth"] = auto_bandwidth;

    autoroute->parent = this;
    children["autoroute"] = autoroute;

    logging->parent = this;
    children["logging"] = logging;

    new_style_affinity_affinity_types->parent = this;
    children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;

    path_setups->parent = this;
    children["path-setups"] = path_setups;

    tunnel_path_selection->parent = this;
    children["tunnel-path-selection"] = tunnel_path_selection;

    yang_name = "tunnel-attributes"; yang_parent_name = "tunnel";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::~TunnelAttributes()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::has_data() const
{
    return destination.is_set
	|| forward_class.is_set
	|| load_share.is_set
	|| path_selection_metric.is_set
	|| record_route.is_set
	|| shutdown.is_set
	|| soft_preemption.is_set
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_setups !=  nullptr && path_setups->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(forward_class.operation)
	|| is_set(load_share.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(record_route.operation)
	|| is_set(shutdown.operation)
	|| is_set(soft_preemption.operation)
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_setups !=  nullptr && path_setups->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelAttributes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.operation)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth != nullptr)
        {
            children["auto-bandwidth"] = auto_bandwidth;
        }
        else
        {
            auto_bandwidth = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth>();
            auto_bandwidth->parent = this;
            children["auto-bandwidth"] = auto_bandwidth;
        }
        return children.at("auto-bandwidth");
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
        else
        {
            autoroute = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute>();
            autoroute->parent = this;
            children["autoroute"] = autoroute;
        }
        return children.at("autoroute");
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        else
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes>();
            new_style_affinity_affinity_types->parent = this;
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        return children.at("new-style-affinity-affinity-types");
    }

    if(child_yang_name == "path-setups")
    {
        if(path_setups != nullptr)
        {
            children["path-setups"] = path_setups;
        }
        else
        {
            path_setups = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups>();
            path_setups->parent = this;
            children["path-setups"] = path_setups;
        }
        return children.at("path-setups");
    }

    if(child_yang_name == "priority")
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
        else
        {
            priority = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority>();
            priority->parent = this;
            children["priority"] = priority;
        }
        return children.at("priority");
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection != nullptr)
        {
            children["tunnel-path-selection"] = tunnel_path_selection;
        }
        else
        {
            tunnel_path_selection = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection>();
            tunnel_path_selection->parent = this;
            children["tunnel-path-selection"] = tunnel_path_selection;
        }
        return children.at("tunnel-path-selection");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_children()
{
    if(children.find("auto-bandwidth") == children.end())
    {
        if(auto_bandwidth != nullptr)
        {
            children["auto-bandwidth"] = auto_bandwidth;
        }
    }

    if(children.find("autoroute") == children.end())
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
    }

    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("new-style-affinity-affinity-types") == children.end())
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
    }

    if(children.find("path-setups") == children.end())
    {
        if(path_setups != nullptr)
        {
            children["path-setups"] = path_setups;
        }
    }

    if(children.find("priority") == children.end())
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
    }

    if(children.find("tunnel-path-selection") == children.end())
    {
        if(tunnel_path_selection != nullptr)
        {
            children["tunnel-path-selection"] = tunnel_path_selection;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetups()
{
    yang_name = "path-setups"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::~PathSetups()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::has_data() const
{
    for (std::size_t index=0; index<path_setup.size(); index++)
    {
        if(path_setup[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::has_operation() const
{
    for (std::size_t index=0; index<path_setup.size(); index++)
    {
        if(path_setup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setups";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSetups' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-setup")
    {
        for(auto const & c : path_setup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup>();
        c->parent = this;
        path_setup.push_back(std::move(c));
        children[segment_path] = path_setup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_children()
{
    for (auto const & c : path_setup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathSetup()
    :
    path_setup_name{YType::str, "path-setup-name"},
    enable{YType::empty, "enable"},
    preference{YType::int32, "preference"}
    	,
    path_computation(nullptr) // presence node
{
    yang_name = "path-setup"; yang_parent_name = "path-setups";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::~PathSetup()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::has_data() const
{
    return path_setup_name.is_set
	|| enable.is_set
	|| preference.is_set
	|| (path_computation !=  nullptr && path_computation->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::has_operation() const
{
    return is_set(operation)
	|| is_set(path_setup_name.operation)
	|| is_set(enable.operation)
	|| is_set(preference.operation)
	|| (path_computation !=  nullptr && path_computation->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setup" <<"[path-setup-name='" <<path_setup_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSetup' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_setup_name.is_set || is_set(path_setup_name.operation)) leaf_name_data.push_back(path_setup_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-computation")
    {
        if(path_computation != nullptr)
        {
            children["path-computation"] = path_computation;
        }
        else
        {
            path_computation = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation>();
            path_computation->parent = this;
            children["path-computation"] = path_computation;
        }
        return children.at("path-computation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_children()
{
    if(children.find("path-computation") == children.end())
    {
        if(path_computation != nullptr)
        {
            children["path-computation"] = path_computation;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-setup-name")
    {
        path_setup_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::PathComputation()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    path_computation_method{YType::enumeration, "path-computation-method"},
    path_computation_server{YType::str, "path-computation-server"}
{
    yang_name = "path-computation"; yang_parent_name = "path-setup";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::~PathComputation()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::has_data() const
{
    return explicit_path_name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(path_computation_method.operation)
	|| is_set(path_computation_server.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-computation";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathComputation' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.operation)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.operation)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::TunnelPathSelection()
    :
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"},
    path_selection_hop_limit{YType::uint32, "path-selection-hop-limit"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(nullptr) // presence node
{
    yang_name = "tunnel-path-selection"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::~TunnelPathSelection()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::has_data() const
{
    return path_selection_cost_limit.is_set
	|| path_selection_hop_limit.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(path_selection_cost_limit.operation)
	|| is_set(path_selection_hop_limit.operation)
	|| is_set(tiebreaker.operation)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelPathSelection' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.operation)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());
    if (path_selection_hop_limit.is_set || is_set(path_selection_hop_limit.operation)) leaf_name_data.push_back(path_selection_hop_limit.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.operation)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalidation")
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
        else
        {
            invalidation = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation>();
            invalidation->parent = this;
            children["invalidation"] = invalidation;
        }
        return children.at("invalidation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_children()
{
    if(children.find("invalidation") == children.end())
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit = value;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_action{YType::enumeration, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"}
{
    yang_name = "invalidation"; yang_parent_name = "tunnel-path-selection";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::has_data() const
{
    return path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::has_operation() const
{
    return is_set(operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalidation' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AutoBandwidth()
    :
    application_frequency{YType::uint32, "application-frequency"},
    collection_only{YType::empty, "collection-only"},
    enabled{YType::boolean, "enabled"},
    overflow_enable{YType::boolean, "overflow-enable"},
    underflow_enable{YType::boolean, "underflow-enable"}
    	,
    adjustment_threshold(nullptr) // presence node
	,bandwidth_limits(nullptr) // presence node
	,overflow(nullptr) // presence node
	,underflow(nullptr) // presence node
{
    yang_name = "auto-bandwidth"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::~AutoBandwidth()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::has_data() const
{
    return application_frequency.is_set
	|| collection_only.is_set
	|| enabled.is_set
	|| overflow_enable.is_set
	|| underflow_enable.is_set
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_data())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (underflow !=  nullptr && underflow->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(application_frequency.operation)
	|| is_set(collection_only.operation)
	|| is_set(enabled.operation)
	|| is_set(overflow_enable.operation)
	|| is_set(underflow_enable.operation)
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_operation())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (underflow !=  nullptr && underflow->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBandwidth' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_frequency.is_set || is_set(application_frequency.operation)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.operation)) leaf_name_data.push_back(collection_only.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_enable.is_set || is_set(overflow_enable.operation)) leaf_name_data.push_back(overflow_enable.get_name_leafdata());
    if (underflow_enable.is_set || is_set(underflow_enable.operation)) leaf_name_data.push_back(underflow_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjustment-threshold")
    {
        if(adjustment_threshold != nullptr)
        {
            children["adjustment-threshold"] = adjustment_threshold;
        }
        else
        {
            adjustment_threshold = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold>();
            adjustment_threshold->parent = this;
            children["adjustment-threshold"] = adjustment_threshold;
        }
        return children.at("adjustment-threshold");
    }

    if(child_yang_name == "bandwidth-limits")
    {
        if(bandwidth_limits != nullptr)
        {
            children["bandwidth-limits"] = bandwidth_limits;
        }
        else
        {
            bandwidth_limits = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits>();
            bandwidth_limits->parent = this;
            children["bandwidth-limits"] = bandwidth_limits;
        }
        return children.at("bandwidth-limits");
    }

    if(child_yang_name == "overflow")
    {
        if(overflow != nullptr)
        {
            children["overflow"] = overflow;
        }
        else
        {
            overflow = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow>();
            overflow->parent = this;
            children["overflow"] = overflow;
        }
        return children.at("overflow");
    }

    if(child_yang_name == "underflow")
    {
        if(underflow != nullptr)
        {
            children["underflow"] = underflow;
        }
        else
        {
            underflow = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow>();
            underflow->parent = this;
            children["underflow"] = underflow;
        }
        return children.at("underflow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_children()
{
    if(children.find("adjustment-threshold") == children.end())
    {
        if(adjustment_threshold != nullptr)
        {
            children["adjustment-threshold"] = adjustment_threshold;
        }
    }

    if(children.find("bandwidth-limits") == children.end())
    {
        if(bandwidth_limits != nullptr)
        {
            children["bandwidth-limits"] = bandwidth_limits;
        }
    }

    if(children.find("overflow") == children.end())
    {
        if(overflow != nullptr)
        {
            children["overflow"] = overflow;
        }
    }

    if(children.find("underflow") == children.end())
    {
        if(underflow != nullptr)
        {
            children["underflow"] = underflow;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-frequency")
    {
        application_frequency = value;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable = value;
    }
    if(value_path == "underflow-enable")
    {
        underflow_enable = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::Underflow()
    :
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"},
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"}
{
    yang_name = "underflow"; yang_parent_name = "auto-bandwidth";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::~Underflow()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::has_data() const
{
    return underflow_threshold_limit.is_set
	|| underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(operation)
	|| is_set(underflow_threshold_limit.operation)
	|| is_set(underflow_threshold_percent.operation)
	|| is_set(underflow_threshold_value.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Underflow' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.operation)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());
    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.operation)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.operation)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::Overflow()
    :
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"},
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"}
{
    yang_name = "overflow"; yang_parent_name = "auto-bandwidth";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::~Overflow()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::has_data() const
{
    return overflow_threshold_limit.is_set
	|| overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(operation)
	|| is_set(overflow_threshold_limit.operation)
	|| is_set(overflow_threshold_percent.operation)
	|| is_set(overflow_threshold_value.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Overflow' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.operation)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());
    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.operation)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.operation)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::BandwidthLimits()
    :
    bandwidth_max_limit{YType::uint32, "bandwidth-max-limit"},
    bandwidth_min_limit{YType::uint32, "bandwidth-min-limit"}
{
    yang_name = "bandwidth-limits"; yang_parent_name = "auto-bandwidth";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::~BandwidthLimits()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::has_data() const
{
    return bandwidth_max_limit.is_set
	|| bandwidth_min_limit.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_max_limit.operation)
	|| is_set(bandwidth_min_limit.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-limits";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthLimits' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_max_limit.is_set || is_set(bandwidth_max_limit.operation)) leaf_name_data.push_back(bandwidth_max_limit.get_name_leafdata());
    if (bandwidth_min_limit.is_set || is_set(bandwidth_min_limit.operation)) leaf_name_data.push_back(bandwidth_min_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit = value;
    }
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::AdjustmentThreshold()
    :
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"}
{
    yang_name = "adjustment-threshold"; yang_parent_name = "auto-bandwidth";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::~AdjustmentThreshold()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::has_data() const
{
    return adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_threshold_percent.operation)
	|| is_set(adjustment_threshold_value.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjustment-threshold";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjustmentThreshold' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.operation)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.operation)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::~Priority()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"}
{
    yang_name = "logging"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::~Logging()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| bfd_state_message.is_set
	|| insufficient_bw_message.is_set
	|| lsp_switch_over_change_message.is_set
	|| pcalc_failure_message.is_set
	|| record_route_messsage.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(bandwidth_change_message.operation)
	|| is_set(bfd_state_message.operation)
	|| is_set(insufficient_bw_message.operation)
	|| is_set(lsp_switch_over_change_message.operation)
	|| is_set(pcalc_failure_message.operation)
	|| is_set(record_route_messsage.operation)
	|| is_set(reoptimize_attempts_message.operation)
	|| is_set(reoptimized_message.operation)
	|| is_set(reroute_messsage.operation)
	|| is_set(state_message.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.operation)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.operation)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.operation)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.operation)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.operation)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.operation)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.operation)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.operation)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.operation)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.operation)) leaf_name_data.push_back(state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
    }
    if(value_path == "state-message")
    {
        state_message = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{
    yang_name = "bandwidth"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::~Bandwidth()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(class_or_pool_type.operation)
	|| is_set(dste_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.operation)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.operation)) leaf_name_data.push_back(dste_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Autoroute()
    :
    destination{YType::empty, "destination"}
    	,
    autoroute_announce(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce>())
	,destination_xr(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr>())
	,metric(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric>())
{
    autoroute_announce->parent = this;
    children["autoroute-announce"] = autoroute_announce;

    destination_xr->parent = this;
    children["destination-xr"] = destination_xr;

    metric->parent = this;
    children["metric"] = metric;

    yang_name = "autoroute"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::~Autoroute()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::has_data() const
{
    return destination.is_set
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_data())
	|| (destination_xr !=  nullptr && destination_xr->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_operation())
	|| (destination_xr !=  nullptr && destination_xr->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoroute' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "autoroute-announce")
    {
        if(autoroute_announce != nullptr)
        {
            children["autoroute-announce"] = autoroute_announce;
        }
        else
        {
            autoroute_announce = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce>();
            autoroute_announce->parent = this;
            children["autoroute-announce"] = autoroute_announce;
        }
        return children.at("autoroute-announce");
    }

    if(child_yang_name == "destination-xr")
    {
        if(destination_xr != nullptr)
        {
            children["destination-xr"] = destination_xr;
        }
        else
        {
            destination_xr = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr>();
            destination_xr->parent = this;
            children["destination-xr"] = destination_xr;
        }
        return children.at("destination-xr");
    }

    if(child_yang_name == "metric")
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
        else
        {
            metric = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric>();
            metric->parent = this;
            children["metric"] = metric;
        }
        return children.at("metric");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_children()
{
    if(children.find("autoroute-announce") == children.end())
    {
        if(autoroute_announce != nullptr)
        {
            children["autoroute-announce"] = autoroute_announce;
        }
    }

    if(children.find("destination-xr") == children.end())
    {
        if(destination_xr != nullptr)
        {
            children["destination-xr"] = destination_xr;
        }
    }

    if(children.find("metric") == children.end())
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::Metric()
    :
    absolute_metric{YType::uint32, "absolute-metric"},
    constant_metric{YType::uint32, "constant-metric"},
    metric_type{YType::enumeration, "metric-type"},
    relative_metric{YType::int32, "relative-metric"}
{
    yang_name = "metric"; yang_parent_name = "autoroute";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::~Metric()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::has_data() const
{
    return absolute_metric.is_set
	|| constant_metric.is_set
	|| metric_type.is_set
	|| relative_metric.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_metric.operation)
	|| is_set(constant_metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(relative_metric.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_metric.is_set || is_set(absolute_metric.operation)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.operation)) leaf_name_data.push_back(constant_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.operation)) leaf_name_data.push_back(relative_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::AutorouteAnnounce()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"}
    	,
    exclude_traffic(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>())
	,metric(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric>())
{
    exclude_traffic->parent = this;
    children["exclude-traffic"] = exclude_traffic;

    metric->parent = this;
    children["metric"] = metric;

    yang_name = "autoroute-announce"; yang_parent_name = "autoroute";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::~AutorouteAnnounce()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::has_data() const
{
    return enable.is_set
	|| include_ipv6.is_set
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(include_ipv6.operation)
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutorouteAnnounce' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.operation)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-traffic")
    {
        if(exclude_traffic != nullptr)
        {
            children["exclude-traffic"] = exclude_traffic;
        }
        else
        {
            exclude_traffic = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>();
            exclude_traffic->parent = this;
            children["exclude-traffic"] = exclude_traffic;
        }
        return children.at("exclude-traffic");
    }

    if(child_yang_name == "metric")
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
        else
        {
            metric = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric>();
            metric->parent = this;
            children["metric"] = metric;
        }
        return children.at("metric");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_children()
{
    if(children.find("exclude-traffic") == children.end())
    {
        if(exclude_traffic != nullptr)
        {
            children["exclude-traffic"] = exclude_traffic;
        }
    }

    if(children.find("metric") == children.end())
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::ExcludeTraffic()
    :
    segment_routing{YType::empty, "segment-routing"}
{
    yang_name = "exclude-traffic"; yang_parent_name = "autoroute-announce";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::~ExcludeTraffic()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_data() const
{
    return segment_routing.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_routing.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-traffic";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeTraffic' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::Metric()
    :
    absolute_metric{YType::uint32, "absolute-metric"},
    constant_metric{YType::uint32, "constant-metric"},
    metric_type{YType::enumeration, "metric-type"},
    relative_metric{YType::int32, "relative-metric"}
{
    yang_name = "metric"; yang_parent_name = "autoroute-announce";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::~Metric()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::has_data() const
{
    return absolute_metric.is_set
	|| constant_metric.is_set
	|| metric_type.is_set
	|| relative_metric.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_metric.operation)
	|| is_set(constant_metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(relative_metric.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_metric.is_set || is_set(absolute_metric.operation)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.operation)) leaf_name_data.push_back(constant_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.operation)) leaf_name_data.push_back(relative_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::DestinationXr()
{
    yang_name = "destination-xr"; yang_parent_name = "autoroute";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::~DestinationXr()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-xr";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationXr' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination>();
        c->parent = this;
        destination.push_back(std::move(c));
        children[segment_path] = destination.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::get_children()
{
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"}
{
    yang_name = "destination"; yang_parent_name = "destination-xr";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::~Destination()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::has_data() const
{
    return destination_address.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[destination-address='" <<destination_address <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{
    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_children()
{
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityType' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity1{YType::str, "affinity1"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity1.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity1{YType::str, "affinity1"},
    affinity10{YType::str, "affinity10"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity1.is_set
	|| affinity10.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity10.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity10='" <<affinity10 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.operation)) leaf_name_data.push_back(affinity10.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{
    yang_name = "fast-reroute"; yang_parent_name = "tunnel-attributes";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::~FastReroute()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_protection.operation)
	|| is_set(node_protection.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.operation)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.operation)) leaf_name_data.push_back(node_protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
    }
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::TunnelId()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_type{YType::enumeration, "tunnel-id-type"}
{
    yang_name = "tunnel-id"; yang_parent_name = "tunnel";
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::~TunnelId()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::has_data() const
{
    return tunnel_id.is_set
	|| tunnel_id_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_type.operation);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";

    return path_buffer.str();

}

EntityPath MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelId' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_type.is_set || is_set(tunnel_id_type.operation)) leaf_name_data.push_back(tunnel_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_children()
{
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-type")
    {
        tunnel_id_type = value;
    }
}

MplsTe::GmplsUni::GmplsUni()
    :
    controllers(std::make_shared<MplsTe::GmplsUni::Controllers>())
	,timers(std::make_shared<MplsTe::GmplsUni::Timers>())
{
    controllers->parent = this;
    children["controllers"] = controllers;

    timers->parent = this;
    children["timers"] = timers;

    yang_name = "gmpls-uni"; yang_parent_name = "mpls-te";
}

MplsTe::GmplsUni::~GmplsUni()
{
}

bool MplsTe::GmplsUni::has_data() const
{
    return (controllers !=  nullptr && controllers->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool MplsTe::GmplsUni::has_operation() const
{
    return is_set(operation)
	|| (controllers !=  nullptr && controllers->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string MplsTe::GmplsUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-uni";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controllers")
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers;
        }
        else
        {
            controllers = std::make_shared<MplsTe::GmplsUni::Controllers>();
            controllers->parent = this;
            children["controllers"] = controllers;
        }
        return children.at("controllers");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<MplsTe::GmplsUni::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::get_children()
{
    if(children.find("controllers") == children.end())
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    return children;
}

void MplsTe::GmplsUni::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsUni::Timers::Timers()
    :
    path_option_timers(std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers>())
{
    path_option_timers->parent = this;
    children["path-option-timers"] = path_option_timers;

    yang_name = "timers"; yang_parent_name = "gmpls-uni";
}

MplsTe::GmplsUni::Timers::~Timers()
{
}

bool MplsTe::GmplsUni::Timers::has_data() const
{
    return (path_option_timers !=  nullptr && path_option_timers->has_data());
}

bool MplsTe::GmplsUni::Timers::has_operation() const
{
    return is_set(operation)
	|| (path_option_timers !=  nullptr && path_option_timers->has_operation());
}

std::string MplsTe::GmplsUni::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-option-timers")
    {
        if(path_option_timers != nullptr)
        {
            children["path-option-timers"] = path_option_timers;
        }
        else
        {
            path_option_timers = std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers>();
            path_option_timers->parent = this;
            children["path-option-timers"] = path_option_timers;
        }
        return children.at("path-option-timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Timers::get_children()
{
    if(children.find("path-option-timers") == children.end())
    {
        if(path_option_timers != nullptr)
        {
            children["path-option-timers"] = path_option_timers;
        }
    }

    return children;
}

void MplsTe::GmplsUni::Timers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsUni::Timers::PathOptionTimers::PathOptionTimers()
    :
    holddown(std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown>())
{
    holddown->parent = this;
    children["holddown"] = holddown;

    yang_name = "path-option-timers"; yang_parent_name = "timers";
}

MplsTe::GmplsUni::Timers::PathOptionTimers::~PathOptionTimers()
{
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::has_data() const
{
    return (holddown !=  nullptr && holddown->has_data());
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::has_operation() const
{
    return is_set(operation)
	|| (holddown !=  nullptr && holddown->has_operation());
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-timers";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Timers::PathOptionTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::PathOptionTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "holddown")
    {
        if(holddown != nullptr)
        {
            children["holddown"] = holddown;
        }
        else
        {
            holddown = std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown>();
            holddown->parent = this;
            children["holddown"] = holddown;
        }
        return children.at("holddown");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Timers::PathOptionTimers::get_children()
{
    if(children.find("holddown") == children.end())
    {
        if(holddown != nullptr)
        {
            children["holddown"] = holddown;
        }
    }

    return children;
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::Holddown()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{
    yang_name = "holddown"; yang_parent_name = "path-option-timers";
}

MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::~Holddown()
{
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holddown";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/timers/path-option-timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_children()
{
    return children;
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

MplsTe::GmplsUni::Controllers::Controllers()
{
    yang_name = "controllers"; yang_parent_name = "gmpls-uni";
}

MplsTe::GmplsUni::Controllers::~Controllers()
{
}

bool MplsTe::GmplsUni::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsUni::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GmplsUni::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GmplsUni::Controllers::Controller>();
        c->parent = this;
        controller.push_back(std::move(c));
        children[segment_path] = controller.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::get_children()
{
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsUni::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    enable{YType::empty, "enable"}
    	,
    announce(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::Announce>())
	,controller_logging(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::ControllerLogging>())
	,gmpls_unitunnel_head(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead>())
{
    announce->parent = this;
    children["announce"] = announce;

    controller_logging->parent = this;
    children["controller-logging"] = controller_logging;

    gmpls_unitunnel_head->parent = this;
    children["gmpls-unitunnel-head"] = gmpls_unitunnel_head;

    yang_name = "controller"; yang_parent_name = "controllers";
}

MplsTe::GmplsUni::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| enable.is_set
	|| (announce !=  nullptr && announce->has_data())
	|| (controller_logging !=  nullptr && controller_logging->has_data())
	|| (gmpls_unitunnel_head !=  nullptr && gmpls_unitunnel_head->has_data());
}

bool MplsTe::GmplsUni::Controllers::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_name.operation)
	|| is_set(enable.operation)
	|| (announce !=  nullptr && announce->has_operation())
	|| (controller_logging !=  nullptr && controller_logging->has_operation())
	|| (gmpls_unitunnel_head !=  nullptr && gmpls_unitunnel_head->has_operation());
}

std::string MplsTe::GmplsUni::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/controllers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.operation)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "announce")
    {
        if(announce != nullptr)
        {
            children["announce"] = announce;
        }
        else
        {
            announce = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::Announce>();
            announce->parent = this;
            children["announce"] = announce;
        }
        return children.at("announce");
    }

    if(child_yang_name == "controller-logging")
    {
        if(controller_logging != nullptr)
        {
            children["controller-logging"] = controller_logging;
        }
        else
        {
            controller_logging = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::ControllerLogging>();
            controller_logging->parent = this;
            children["controller-logging"] = controller_logging;
        }
        return children.at("controller-logging");
    }

    if(child_yang_name == "gmpls-unitunnel-head")
    {
        if(gmpls_unitunnel_head != nullptr)
        {
            children["gmpls-unitunnel-head"] = gmpls_unitunnel_head;
        }
        else
        {
            gmpls_unitunnel_head = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead>();
            gmpls_unitunnel_head->parent = this;
            children["gmpls-unitunnel-head"] = gmpls_unitunnel_head;
        }
        return children.at("gmpls-unitunnel-head");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::get_children()
{
    if(children.find("announce") == children.end())
    {
        if(announce != nullptr)
        {
            children["announce"] = announce;
        }
    }

    if(children.find("controller-logging") == children.end())
    {
        if(controller_logging != nullptr)
        {
            children["controller-logging"] = controller_logging;
        }
    }

    if(children.find("gmpls-unitunnel-head") == children.end())
    {
        if(gmpls_unitunnel_head != nullptr)
        {
            children["gmpls-unitunnel-head"] = gmpls_unitunnel_head;
        }
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GmplsUni::Controllers::Controller::Announce::Announce()
    :
    srl_gs{YType::empty, "srl-gs"}
{
    yang_name = "announce"; yang_parent_name = "controller";
}

MplsTe::GmplsUni::Controllers::Controller::Announce::~Announce()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::Announce::has_data() const
{
    return srl_gs.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::Announce::has_operation() const
{
    return is_set(operation)
	|| is_set(srl_gs.operation);
}

std::string MplsTe::GmplsUni::Controllers::Controller::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::Announce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Announce' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srl_gs.is_set || is_set(srl_gs.operation)) leaf_name_data.push_back(srl_gs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::Announce::get_children()
{
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::Announce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srl-gs")
    {
        srl_gs = value;
    }
}

MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::ControllerLogging()
    :
    discovered_srlg_change_logging{YType::empty, "discovered-srlg-change-logging"}
{
    yang_name = "controller-logging"; yang_parent_name = "controller";
}

MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::~ControllerLogging()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::has_data() const
{
    return discovered_srlg_change_logging.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(discovered_srlg_change_logging.operation);
}

std::string MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-logging";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ControllerLogging' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discovered_srlg_change_logging.is_set || is_set(discovered_srlg_change_logging.operation)) leaf_name_data.push_back(discovered_srlg_change_logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_children()
{
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discovered-srlg-change-logging")
    {
        discovered_srlg_change_logging = value;
    }
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::GmplsUnitunnelHead()
    :
    destination{YType::str, "destination"},
    enable{YType::empty, "enable"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    tunnel_id{YType::uint32, "tunnel-id"}
    	,
    logging(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging>())
	,path_options(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions>())
	,priority(nullptr) // presence node
	,recording(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording>())
{
    logging->parent = this;
    children["logging"] = logging;

    path_options->parent = this;
    children["path-options"] = path_options;

    recording->parent = this;
    children["recording"] = recording;

    yang_name = "gmpls-unitunnel-head"; yang_parent_name = "controller";
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::~GmplsUnitunnelHead()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| tunnel_id.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (path_options !=  nullptr && path_options->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (recording !=  nullptr && recording->has_data());
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(record_route.operation)
	|| is_set(signalled_name.operation)
	|| is_set(tunnel_id.operation)
	|| (logging !=  nullptr && logging->has_operation())
	|| (path_options !=  nullptr && path_options->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (recording !=  nullptr && recording->has_operation());
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-unitunnel-head";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GmplsUnitunnelHead' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.operation)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "path-options")
    {
        if(path_options != nullptr)
        {
            children["path-options"] = path_options;
        }
        else
        {
            path_options = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions>();
            path_options->parent = this;
            children["path-options"] = path_options;
        }
        return children.at("path-options");
    }

    if(child_yang_name == "priority")
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
        else
        {
            priority = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority>();
            priority->parent = this;
            children["priority"] = priority;
        }
        return children.at("priority");
    }

    if(child_yang_name == "recording")
    {
        if(recording != nullptr)
        {
            children["recording"] = recording;
        }
        else
        {
            recording = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording>();
            recording->parent = this;
            children["recording"] = recording;
        }
        return children.at("recording");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_children()
{
    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("path-options") == children.end())
    {
        if(path_options != nullptr)
        {
            children["path-options"] = path_options;
        }
    }

    if(children.find("priority") == children.end())
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
    }

    if(children.find("recording") == children.end())
    {
        if(recording != nullptr)
        {
            children["recording"] = recording;
        }
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOptions()
{
    yang_name = "path-options"; yang_parent_name = "gmpls-unitunnel-head";
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::~PathOptions()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptions' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(std::move(c));
        children[segment_path] = path_option.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_children()
{
    for (auto const & c : path_option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    dwdm_channel{YType::uint32, "dwdm-channel"},
    lockdown{YType::enumeration, "lockdown"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    signaled_label{YType::enumeration, "signaled-label"},
    verbatim{YType::enumeration, "verbatim"},
    xro_attribute_set_name{YType::str, "xro-attribute-set-name"},
    xro_type{YType::empty, "xro-type"}
{
    yang_name = "path-option"; yang_parent_name = "path-options";
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::~PathOption()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| dwdm_channel.is_set
	|| lockdown.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| signaled_label.is_set
	|| verbatim.is_set
	|| xro_attribute_set_name.is_set
	|| xro_type.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::has_operation() const
{
    return is_set(operation)
	|| is_set(preference_level.operation)
	|| is_set(dwdm_channel.operation)
	|| is_set(lockdown.operation)
	|| is_set(path_id.operation)
	|| is_set(path_name.operation)
	|| is_set(path_type.operation)
	|| is_set(signaled_label.operation)
	|| is_set(verbatim.operation)
	|| is_set(xro_attribute_set_name.operation)
	|| is_set(xro_type.operation);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOption' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.operation)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (dwdm_channel.is_set || is_set(dwdm_channel.operation)) leaf_name_data.push_back(dwdm_channel.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.operation)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.operation)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (signaled_label.is_set || is_set(signaled_label.operation)) leaf_name_data.push_back(signaled_label.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.operation)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (xro_attribute_set_name.is_set || is_set(xro_attribute_set_name.operation)) leaf_name_data.push_back(xro_attribute_set_name.get_name_leafdata());
    if (xro_type.is_set || is_set(xro_type.operation)) leaf_name_data.push_back(xro_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_children()
{
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
    }
    if(value_path == "dwdm-channel")
    {
        dwdm_channel = value;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-name")
    {
        path_name = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
    if(value_path == "signaled-label")
    {
        signaled_label = value;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name = value;
    }
    if(value_path == "xro-type")
    {
        xro_type = value;
    }
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::Recording()
    :
    srlg{YType::empty, "srlg"}
{
    yang_name = "recording"; yang_parent_name = "gmpls-unitunnel-head";
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::~Recording()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::has_data() const
{
    return srlg.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg.operation);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recording";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recording' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg.is_set || is_set(srlg.operation)) leaf_name_data.push_back(srlg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_children()
{
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg")
    {
        srlg = value;
    }
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::Logging()
    :
    state_message{YType::empty, "state-message"}
{
    yang_name = "logging"; yang_parent_name = "gmpls-unitunnel-head";
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::~Logging()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::has_data() const
{
    return state_message.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(state_message.operation);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_message.is_set || is_set(state_message.operation)) leaf_name_data.push_back(state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_children()
{
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state-message")
    {
        state_message = value;
    }
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "gmpls-unitunnel-head";
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::~Priority()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_children()
{
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

MplsTe::GlobalAttributes::GlobalAttributes()
    :
    advertise_explicit_nulls{YType::empty, "advertise-explicit-nulls"},
    auto_bandwidth_collect_frequency{YType::uint32, "auto-bandwidth-collect-frequency"},
    disable_reoptimize_affinity_failure{YType::empty, "disable-reoptimize-affinity-failure"},
    enable_unequal_load_balancing{YType::empty, "enable-unequal-load-balancing"},
    fault_oam{YType::empty, "fault-oam"},
    graceful_preemption_on_bandwidth_reduction{YType::empty, "graceful-preemption-on-bandwidth-reduction"},
    link_holddown_timer{YType::uint32, "link-holddown-timer"},
    log_all{YType::empty, "log-all"},
    log_frr_protection{YType::enumeration, "log-frr-protection"},
    log_head{YType::empty, "log-head"},
    log_issu_status{YType::empty, "log-issu-status"},
    log_mid{YType::empty, "log-mid"},
    log_nsr_status{YType::empty, "log-nsr-status"},
    log_preemption{YType::empty, "log-preemption"},
    log_tail{YType::empty, "log-tail"},
    loose_path_retry_period{YType::uint32, "loose-path-retry-period"},
    maximum_tunnels{YType::uint32, "maximum-tunnels"},
    path_selection_ignore_overload{YType::empty, "path-selection-ignore-overload"},
    reopt_delay_path_protect_switchover_timer{YType::uint32, "reopt-delay-path-protect-switchover-timer"},
    reoptimize_delay_after_affinity_failure_timer{YType::uint32, "reoptimize-delay-after-affinity-failure-timer"},
    reoptimize_delay_after_frr_timer{YType::uint32, "reoptimize-delay-after-frr-timer"},
    reoptimize_delay_cleanup_timer{YType::uint32, "reoptimize-delay-cleanup-timer"},
    reoptimize_delay_install_timer{YType::uint32, "reoptimize-delay-install-timer"},
    reoptimize_link_up{YType::empty, "reoptimize-link-up"},
    reoptimize_load_balancing{YType::empty, "reoptimize-load-balancing"},
    reoptimize_timer_frequency{YType::uint32, "reoptimize-timer-frequency"}
    	,
    affinity_mappings(std::make_shared<MplsTe::GlobalAttributes::AffinityMappings>())
	,attribute_set(std::make_shared<MplsTe::GlobalAttributes::AttributeSet>())
	,auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel>())
	,bfd_over_lsp(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp>())
	,fast_reroute(std::make_shared<MplsTe::GlobalAttributes::FastReroute>())
	,hardware_out_of_resource(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource>())
	,lsp_out_of_resource(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource>())
	,mib(std::make_shared<MplsTe::GlobalAttributes::Mib>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::PathSelection>())
	,pce_attributes(std::make_shared<MplsTe::GlobalAttributes::PceAttributes>())
	,queues(std::make_shared<MplsTe::GlobalAttributes::Queues>())
	,secondary_router_ids(std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds>())
	,soft_preemption(std::make_shared<MplsTe::GlobalAttributes::SoftPreemption>())
	,srlg(std::make_shared<MplsTe::GlobalAttributes::Srlg>())
{
    affinity_mappings->parent = this;
    children["affinity-mappings"] = affinity_mappings;

    attribute_set->parent = this;
    children["attribute-set"] = attribute_set;

    auto_tunnel->parent = this;
    children["auto-tunnel"] = auto_tunnel;

    bfd_over_lsp->parent = this;
    children["bfd-over-lsp"] = bfd_over_lsp;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    hardware_out_of_resource->parent = this;
    children["hardware-out-of-resource"] = hardware_out_of_resource;

    lsp_out_of_resource->parent = this;
    children["lsp-out-of-resource"] = lsp_out_of_resource;

    mib->parent = this;
    children["mib"] = mib;

    path_selection->parent = this;
    children["path-selection"] = path_selection;

    pce_attributes->parent = this;
    children["pce-attributes"] = pce_attributes;

    queues->parent = this;
    children["queues"] = queues;

    secondary_router_ids->parent = this;
    children["secondary-router-ids"] = secondary_router_ids;

    soft_preemption->parent = this;
    children["soft-preemption"] = soft_preemption;

    srlg->parent = this;
    children["srlg"] = srlg;

    yang_name = "global-attributes"; yang_parent_name = "mpls-te";
}

MplsTe::GlobalAttributes::~GlobalAttributes()
{
}

bool MplsTe::GlobalAttributes::has_data() const
{
    return advertise_explicit_nulls.is_set
	|| auto_bandwidth_collect_frequency.is_set
	|| disable_reoptimize_affinity_failure.is_set
	|| enable_unequal_load_balancing.is_set
	|| fault_oam.is_set
	|| graceful_preemption_on_bandwidth_reduction.is_set
	|| link_holddown_timer.is_set
	|| log_all.is_set
	|| log_frr_protection.is_set
	|| log_head.is_set
	|| log_issu_status.is_set
	|| log_mid.is_set
	|| log_nsr_status.is_set
	|| log_preemption.is_set
	|| log_tail.is_set
	|| loose_path_retry_period.is_set
	|| maximum_tunnels.is_set
	|| path_selection_ignore_overload.is_set
	|| reopt_delay_path_protect_switchover_timer.is_set
	|| reoptimize_delay_after_affinity_failure_timer.is_set
	|| reoptimize_delay_after_frr_timer.is_set
	|| reoptimize_delay_cleanup_timer.is_set
	|| reoptimize_delay_install_timer.is_set
	|| reoptimize_link_up.is_set
	|| reoptimize_load_balancing.is_set
	|| reoptimize_timer_frequency.is_set
	|| (affinity_mappings !=  nullptr && affinity_mappings->has_data())
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (hardware_out_of_resource !=  nullptr && hardware_out_of_resource->has_data())
	|| (lsp_out_of_resource !=  nullptr && lsp_out_of_resource->has_data())
	|| (mib !=  nullptr && mib->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pce_attributes !=  nullptr && pce_attributes->has_data())
	|| (queues !=  nullptr && queues->has_data())
	|| (secondary_router_ids !=  nullptr && secondary_router_ids->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (srlg !=  nullptr && srlg->has_data());
}

bool MplsTe::GlobalAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_explicit_nulls.operation)
	|| is_set(auto_bandwidth_collect_frequency.operation)
	|| is_set(disable_reoptimize_affinity_failure.operation)
	|| is_set(enable_unequal_load_balancing.operation)
	|| is_set(fault_oam.operation)
	|| is_set(graceful_preemption_on_bandwidth_reduction.operation)
	|| is_set(link_holddown_timer.operation)
	|| is_set(log_all.operation)
	|| is_set(log_frr_protection.operation)
	|| is_set(log_head.operation)
	|| is_set(log_issu_status.operation)
	|| is_set(log_mid.operation)
	|| is_set(log_nsr_status.operation)
	|| is_set(log_preemption.operation)
	|| is_set(log_tail.operation)
	|| is_set(loose_path_retry_period.operation)
	|| is_set(maximum_tunnels.operation)
	|| is_set(path_selection_ignore_overload.operation)
	|| is_set(reopt_delay_path_protect_switchover_timer.operation)
	|| is_set(reoptimize_delay_after_affinity_failure_timer.operation)
	|| is_set(reoptimize_delay_after_frr_timer.operation)
	|| is_set(reoptimize_delay_cleanup_timer.operation)
	|| is_set(reoptimize_delay_install_timer.operation)
	|| is_set(reoptimize_link_up.operation)
	|| is_set(reoptimize_load_balancing.operation)
	|| is_set(reoptimize_timer_frequency.operation)
	|| (affinity_mappings !=  nullptr && affinity_mappings->has_operation())
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (hardware_out_of_resource !=  nullptr && hardware_out_of_resource->has_operation())
	|| (lsp_out_of_resource !=  nullptr && lsp_out_of_resource->has_operation())
	|| (mib !=  nullptr && mib->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pce_attributes !=  nullptr && pce_attributes->has_operation())
	|| (queues !=  nullptr && queues->has_operation())
	|| (secondary_router_ids !=  nullptr && secondary_router_ids->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation());
}

std::string MplsTe::GlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_explicit_nulls.is_set || is_set(advertise_explicit_nulls.operation)) leaf_name_data.push_back(advertise_explicit_nulls.get_name_leafdata());
    if (auto_bandwidth_collect_frequency.is_set || is_set(auto_bandwidth_collect_frequency.operation)) leaf_name_data.push_back(auto_bandwidth_collect_frequency.get_name_leafdata());
    if (disable_reoptimize_affinity_failure.is_set || is_set(disable_reoptimize_affinity_failure.operation)) leaf_name_data.push_back(disable_reoptimize_affinity_failure.get_name_leafdata());
    if (enable_unequal_load_balancing.is_set || is_set(enable_unequal_load_balancing.operation)) leaf_name_data.push_back(enable_unequal_load_balancing.get_name_leafdata());
    if (fault_oam.is_set || is_set(fault_oam.operation)) leaf_name_data.push_back(fault_oam.get_name_leafdata());
    if (graceful_preemption_on_bandwidth_reduction.is_set || is_set(graceful_preemption_on_bandwidth_reduction.operation)) leaf_name_data.push_back(graceful_preemption_on_bandwidth_reduction.get_name_leafdata());
    if (link_holddown_timer.is_set || is_set(link_holddown_timer.operation)) leaf_name_data.push_back(link_holddown_timer.get_name_leafdata());
    if (log_all.is_set || is_set(log_all.operation)) leaf_name_data.push_back(log_all.get_name_leafdata());
    if (log_frr_protection.is_set || is_set(log_frr_protection.operation)) leaf_name_data.push_back(log_frr_protection.get_name_leafdata());
    if (log_head.is_set || is_set(log_head.operation)) leaf_name_data.push_back(log_head.get_name_leafdata());
    if (log_issu_status.is_set || is_set(log_issu_status.operation)) leaf_name_data.push_back(log_issu_status.get_name_leafdata());
    if (log_mid.is_set || is_set(log_mid.operation)) leaf_name_data.push_back(log_mid.get_name_leafdata());
    if (log_nsr_status.is_set || is_set(log_nsr_status.operation)) leaf_name_data.push_back(log_nsr_status.get_name_leafdata());
    if (log_preemption.is_set || is_set(log_preemption.operation)) leaf_name_data.push_back(log_preemption.get_name_leafdata());
    if (log_tail.is_set || is_set(log_tail.operation)) leaf_name_data.push_back(log_tail.get_name_leafdata());
    if (loose_path_retry_period.is_set || is_set(loose_path_retry_period.operation)) leaf_name_data.push_back(loose_path_retry_period.get_name_leafdata());
    if (maximum_tunnels.is_set || is_set(maximum_tunnels.operation)) leaf_name_data.push_back(maximum_tunnels.get_name_leafdata());
    if (path_selection_ignore_overload.is_set || is_set(path_selection_ignore_overload.operation)) leaf_name_data.push_back(path_selection_ignore_overload.get_name_leafdata());
    if (reopt_delay_path_protect_switchover_timer.is_set || is_set(reopt_delay_path_protect_switchover_timer.operation)) leaf_name_data.push_back(reopt_delay_path_protect_switchover_timer.get_name_leafdata());
    if (reoptimize_delay_after_affinity_failure_timer.is_set || is_set(reoptimize_delay_after_affinity_failure_timer.operation)) leaf_name_data.push_back(reoptimize_delay_after_affinity_failure_timer.get_name_leafdata());
    if (reoptimize_delay_after_frr_timer.is_set || is_set(reoptimize_delay_after_frr_timer.operation)) leaf_name_data.push_back(reoptimize_delay_after_frr_timer.get_name_leafdata());
    if (reoptimize_delay_cleanup_timer.is_set || is_set(reoptimize_delay_cleanup_timer.operation)) leaf_name_data.push_back(reoptimize_delay_cleanup_timer.get_name_leafdata());
    if (reoptimize_delay_install_timer.is_set || is_set(reoptimize_delay_install_timer.operation)) leaf_name_data.push_back(reoptimize_delay_install_timer.get_name_leafdata());
    if (reoptimize_link_up.is_set || is_set(reoptimize_link_up.operation)) leaf_name_data.push_back(reoptimize_link_up.get_name_leafdata());
    if (reoptimize_load_balancing.is_set || is_set(reoptimize_load_balancing.operation)) leaf_name_data.push_back(reoptimize_load_balancing.get_name_leafdata());
    if (reoptimize_timer_frequency.is_set || is_set(reoptimize_timer_frequency.operation)) leaf_name_data.push_back(reoptimize_timer_frequency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-mappings")
    {
        if(affinity_mappings != nullptr)
        {
            children["affinity-mappings"] = affinity_mappings;
        }
        else
        {
            affinity_mappings = std::make_shared<MplsTe::GlobalAttributes::AffinityMappings>();
            affinity_mappings->parent = this;
            children["affinity-mappings"] = affinity_mappings;
        }
        return children.at("affinity-mappings");
    }

    if(child_yang_name == "attribute-set")
    {
        if(attribute_set != nullptr)
        {
            children["attribute-set"] = attribute_set;
        }
        else
        {
            attribute_set = std::make_shared<MplsTe::GlobalAttributes::AttributeSet>();
            attribute_set->parent = this;
            children["attribute-set"] = attribute_set;
        }
        return children.at("attribute-set");
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel != nullptr)
        {
            children["auto-tunnel"] = auto_tunnel;
        }
        else
        {
            auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel>();
            auto_tunnel->parent = this;
            children["auto-tunnel"] = auto_tunnel;
        }
        return children.at("auto-tunnel");
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp != nullptr)
        {
            children["bfd-over-lsp"] = bfd_over_lsp;
        }
        else
        {
            bfd_over_lsp = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp>();
            bfd_over_lsp->parent = this;
            children["bfd-over-lsp"] = bfd_over_lsp;
        }
        return children.at("bfd-over-lsp");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "hardware-out-of-resource")
    {
        if(hardware_out_of_resource != nullptr)
        {
            children["hardware-out-of-resource"] = hardware_out_of_resource;
        }
        else
        {
            hardware_out_of_resource = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource>();
            hardware_out_of_resource->parent = this;
            children["hardware-out-of-resource"] = hardware_out_of_resource;
        }
        return children.at("hardware-out-of-resource");
    }

    if(child_yang_name == "lsp-out-of-resource")
    {
        if(lsp_out_of_resource != nullptr)
        {
            children["lsp-out-of-resource"] = lsp_out_of_resource;
        }
        else
        {
            lsp_out_of_resource = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource>();
            lsp_out_of_resource->parent = this;
            children["lsp-out-of-resource"] = lsp_out_of_resource;
        }
        return children.at("lsp-out-of-resource");
    }

    if(child_yang_name == "mib")
    {
        if(mib != nullptr)
        {
            children["mib"] = mib;
        }
        else
        {
            mib = std::make_shared<MplsTe::GlobalAttributes::Mib>();
            mib->parent = this;
            children["mib"] = mib;
        }
        return children.at("mib");
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
        else
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::PathSelection>();
            path_selection->parent = this;
            children["path-selection"] = path_selection;
        }
        return children.at("path-selection");
    }

    if(child_yang_name == "pce-attributes")
    {
        if(pce_attributes != nullptr)
        {
            children["pce-attributes"] = pce_attributes;
        }
        else
        {
            pce_attributes = std::make_shared<MplsTe::GlobalAttributes::PceAttributes>();
            pce_attributes->parent = this;
            children["pce-attributes"] = pce_attributes;
        }
        return children.at("pce-attributes");
    }

    if(child_yang_name == "queues")
    {
        if(queues != nullptr)
        {
            children["queues"] = queues;
        }
        else
        {
            queues = std::make_shared<MplsTe::GlobalAttributes::Queues>();
            queues->parent = this;
            children["queues"] = queues;
        }
        return children.at("queues");
    }

    if(child_yang_name == "secondary-router-ids")
    {
        if(secondary_router_ids != nullptr)
        {
            children["secondary-router-ids"] = secondary_router_ids;
        }
        else
        {
            secondary_router_ids = std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds>();
            secondary_router_ids->parent = this;
            children["secondary-router-ids"] = secondary_router_ids;
        }
        return children.at("secondary-router-ids");
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
        else
        {
            soft_preemption = std::make_shared<MplsTe::GlobalAttributes::SoftPreemption>();
            soft_preemption->parent = this;
            children["soft-preemption"] = soft_preemption;
        }
        return children.at("soft-preemption");
    }

    if(child_yang_name == "srlg")
    {
        if(srlg != nullptr)
        {
            children["srlg"] = srlg;
        }
        else
        {
            srlg = std::make_shared<MplsTe::GlobalAttributes::Srlg>();
            srlg->parent = this;
            children["srlg"] = srlg;
        }
        return children.at("srlg");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::get_children()
{
    if(children.find("affinity-mappings") == children.end())
    {
        if(affinity_mappings != nullptr)
        {
            children["affinity-mappings"] = affinity_mappings;
        }
    }

    if(children.find("attribute-set") == children.end())
    {
        if(attribute_set != nullptr)
        {
            children["attribute-set"] = attribute_set;
        }
    }

    if(children.find("auto-tunnel") == children.end())
    {
        if(auto_tunnel != nullptr)
        {
            children["auto-tunnel"] = auto_tunnel;
        }
    }

    if(children.find("bfd-over-lsp") == children.end())
    {
        if(bfd_over_lsp != nullptr)
        {
            children["bfd-over-lsp"] = bfd_over_lsp;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("hardware-out-of-resource") == children.end())
    {
        if(hardware_out_of_resource != nullptr)
        {
            children["hardware-out-of-resource"] = hardware_out_of_resource;
        }
    }

    if(children.find("lsp-out-of-resource") == children.end())
    {
        if(lsp_out_of_resource != nullptr)
        {
            children["lsp-out-of-resource"] = lsp_out_of_resource;
        }
    }

    if(children.find("mib") == children.end())
    {
        if(mib != nullptr)
        {
            children["mib"] = mib;
        }
    }

    if(children.find("path-selection") == children.end())
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
    }

    if(children.find("pce-attributes") == children.end())
    {
        if(pce_attributes != nullptr)
        {
            children["pce-attributes"] = pce_attributes;
        }
    }

    if(children.find("queues") == children.end())
    {
        if(queues != nullptr)
        {
            children["queues"] = queues;
        }
    }

    if(children.find("secondary-router-ids") == children.end())
    {
        if(secondary_router_ids != nullptr)
        {
            children["secondary-router-ids"] = secondary_router_ids;
        }
    }

    if(children.find("soft-preemption") == children.end())
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
    }

    if(children.find("srlg") == children.end())
    {
        if(srlg != nullptr)
        {
            children["srlg"] = srlg;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-explicit-nulls")
    {
        advertise_explicit_nulls = value;
    }
    if(value_path == "auto-bandwidth-collect-frequency")
    {
        auto_bandwidth_collect_frequency = value;
    }
    if(value_path == "disable-reoptimize-affinity-failure")
    {
        disable_reoptimize_affinity_failure = value;
    }
    if(value_path == "enable-unequal-load-balancing")
    {
        enable_unequal_load_balancing = value;
    }
    if(value_path == "fault-oam")
    {
        fault_oam = value;
    }
    if(value_path == "graceful-preemption-on-bandwidth-reduction")
    {
        graceful_preemption_on_bandwidth_reduction = value;
    }
    if(value_path == "link-holddown-timer")
    {
        link_holddown_timer = value;
    }
    if(value_path == "log-all")
    {
        log_all = value;
    }
    if(value_path == "log-frr-protection")
    {
        log_frr_protection = value;
    }
    if(value_path == "log-head")
    {
        log_head = value;
    }
    if(value_path == "log-issu-status")
    {
        log_issu_status = value;
    }
    if(value_path == "log-mid")
    {
        log_mid = value;
    }
    if(value_path == "log-nsr-status")
    {
        log_nsr_status = value;
    }
    if(value_path == "log-preemption")
    {
        log_preemption = value;
    }
    if(value_path == "log-tail")
    {
        log_tail = value;
    }
    if(value_path == "loose-path-retry-period")
    {
        loose_path_retry_period = value;
    }
    if(value_path == "maximum-tunnels")
    {
        maximum_tunnels = value;
    }
    if(value_path == "path-selection-ignore-overload")
    {
        path_selection_ignore_overload = value;
    }
    if(value_path == "reopt-delay-path-protect-switchover-timer")
    {
        reopt_delay_path_protect_switchover_timer = value;
    }
    if(value_path == "reoptimize-delay-after-affinity-failure-timer")
    {
        reoptimize_delay_after_affinity_failure_timer = value;
    }
    if(value_path == "reoptimize-delay-after-frr-timer")
    {
        reoptimize_delay_after_frr_timer = value;
    }
    if(value_path == "reoptimize-delay-cleanup-timer")
    {
        reoptimize_delay_cleanup_timer = value;
    }
    if(value_path == "reoptimize-delay-install-timer")
    {
        reoptimize_delay_install_timer = value;
    }
    if(value_path == "reoptimize-link-up")
    {
        reoptimize_link_up = value;
    }
    if(value_path == "reoptimize-load-balancing")
    {
        reoptimize_load_balancing = value;
    }
    if(value_path == "reoptimize-timer-frequency")
    {
        reoptimize_timer_frequency = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup>())
	,mesh(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh>())
	,p2mp_auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel>())
	,p2p_auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel>())
	,pcc(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc>())
{
    backup->parent = this;
    children["backup"] = backup;

    mesh->parent = this;
    children["mesh"] = mesh;

    p2mp_auto_tunnel->parent = this;
    children["p2mp-auto-tunnel"] = p2mp_auto_tunnel;

    p2p_auto_tunnel->parent = this;
    children["p2p-auto-tunnel"] = p2p_auto_tunnel;

    pcc->parent = this;
    children["pcc"] = pcc;

    yang_name = "auto-tunnel"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::AutoTunnel::~AutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (p2mp_auto_tunnel !=  nullptr && p2mp_auto_tunnel->has_data())
	|| (p2p_auto_tunnel !=  nullptr && p2p_auto_tunnel->has_data())
	|| (pcc !=  nullptr && pcc->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::has_operation() const
{
    return is_set(operation)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (p2mp_auto_tunnel !=  nullptr && p2mp_auto_tunnel->has_operation())
	|| (p2p_auto_tunnel !=  nullptr && p2p_auto_tunnel->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup")
    {
        if(backup != nullptr)
        {
            children["backup"] = backup;
        }
        else
        {
            backup = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup>();
            backup->parent = this;
            children["backup"] = backup;
        }
        return children.at("backup");
    }

    if(child_yang_name == "mesh")
    {
        if(mesh != nullptr)
        {
            children["mesh"] = mesh;
        }
        else
        {
            mesh = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh>();
            mesh->parent = this;
            children["mesh"] = mesh;
        }
        return children.at("mesh");
    }

    if(child_yang_name == "p2mp-auto-tunnel")
    {
        if(p2mp_auto_tunnel != nullptr)
        {
            children["p2mp-auto-tunnel"] = p2mp_auto_tunnel;
        }
        else
        {
            p2mp_auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel>();
            p2mp_auto_tunnel->parent = this;
            children["p2mp-auto-tunnel"] = p2mp_auto_tunnel;
        }
        return children.at("p2mp-auto-tunnel");
    }

    if(child_yang_name == "p2p-auto-tunnel")
    {
        if(p2p_auto_tunnel != nullptr)
        {
            children["p2p-auto-tunnel"] = p2p_auto_tunnel;
        }
        else
        {
            p2p_auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel>();
            p2p_auto_tunnel->parent = this;
            children["p2p-auto-tunnel"] = p2p_auto_tunnel;
        }
        return children.at("p2p-auto-tunnel");
    }

    if(child_yang_name == "pcc")
    {
        if(pcc != nullptr)
        {
            children["pcc"] = pcc;
        }
        else
        {
            pcc = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc>();
            pcc->parent = this;
            children["pcc"] = pcc;
        }
        return children.at("pcc");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::get_children()
{
    if(children.find("backup") == children.end())
    {
        if(backup != nullptr)
        {
            children["backup"] = backup;
        }
    }

    if(children.find("mesh") == children.end())
    {
        if(mesh != nullptr)
        {
            children["mesh"] = mesh;
        }
    }

    if(children.find("p2mp-auto-tunnel") == children.end())
    {
        if(p2mp_auto_tunnel != nullptr)
        {
            children["p2mp-auto-tunnel"] = p2mp_auto_tunnel;
        }
    }

    if(children.find("p2p-auto-tunnel") == children.end())
    {
        if(p2p_auto_tunnel != nullptr)
        {
            children["p2p-auto-tunnel"] = p2p_auto_tunnel;
        }
    }

    if(children.find("pcc") == children.end())
    {
        if(pcc != nullptr)
        {
            children["pcc"] = pcc;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::Pcc()
    :
    tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange>())
{
    tunnel_range->parent = this;
    children["tunnel-range"] = tunnel_range;

    yang_name = "pcc"; yang_parent_name = "auto-tunnel";
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::~Pcc()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::has_data() const
{
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::has_operation() const
{
    return is_set(operation)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
        else
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange>();
            tunnel_range->parent = this;
            children["tunnel-range"] = tunnel_range;
        }
        return children.at("tunnel-range");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_children()
{
    if(children.find("tunnel-range") == children.end())
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{
    yang_name = "tunnel-range"; yang_parent_name = "pcc";
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::has_operation() const
{
    return is_set(operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/pcc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::P2PAutoTunnel()
    :
    tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange>())
{
    tunnel_range->parent = this;
    children["tunnel-range"] = tunnel_range;

    yang_name = "p2p-auto-tunnel"; yang_parent_name = "auto-tunnel";
}

MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::~P2PAutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::has_data() const
{
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::has_operation() const
{
    return is_set(operation)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-auto-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
        else
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange>();
            tunnel_range->parent = this;
            children["tunnel-range"] = tunnel_range;
        }
        return children.at("tunnel-range");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_children()
{
    if(children.find("tunnel-range") == children.end())
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{
    yang_name = "tunnel-range"; yang_parent_name = "p2p-auto-tunnel";
}

MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::has_operation() const
{
    return is_set(operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/p2p-auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Backup()
    :
    affinity_ignore{YType::empty, "affinity-ignore"}
    	,
    timers(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers>())
	,tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange>())
{
    timers->parent = this;
    children["timers"] = timers;

    tunnel_range->parent = this;
    children["tunnel-range"] = tunnel_range;

    yang_name = "backup"; yang_parent_name = "auto-tunnel";
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::~Backup()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::has_data() const
{
    return affinity_ignore.is_set
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_ignore.operation)
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_ignore.is_set || is_set(affinity_ignore.operation)) leaf_name_data.push_back(affinity_ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
        else
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange>();
            tunnel_range->parent = this;
            children["tunnel-range"] = tunnel_range;
        }
        return children.at("tunnel-range");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Backup::get_children()
{
    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tunnel-range") == children.end())
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-ignore")
    {
        affinity_ignore = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Timers()
    :
    removal(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal>())
{
    removal->parent = this;
    children["removal"] = removal;

    yang_name = "timers"; yang_parent_name = "backup";
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::has_operation() const
{
    return is_set(operation)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "removal")
    {
        if(removal != nullptr)
        {
            children["removal"] = removal;
        }
        else
        {
            removal = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal>();
            removal->parent = this;
            children["removal"] = removal;
        }
        return children.at("removal");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_children()
{
    if(children.find("removal") == children.end())
    {
        if(removal != nullptr)
        {
            children["removal"] = removal;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::Removal()
    :
    unused{YType::uint32, "unused"}
{
    yang_name = "removal"; yang_parent_name = "timers";
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::~Removal()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::has_data() const
{
    return unused.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::has_operation() const
{
    return is_set(operation)
	|| is_set(unused.operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unused")
    {
        unused = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{
    yang_name = "tunnel-range"; yang_parent_name = "backup";
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::has_operation() const
{
    return is_set(operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Mesh()
    :
    mesh_groups(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups>())
	,timers(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers>())
	,tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange>())
{
    mesh_groups->parent = this;
    children["mesh-groups"] = mesh_groups;

    timers->parent = this;
    children["timers"] = timers;

    tunnel_range->parent = this;
    children["tunnel-range"] = tunnel_range;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel";
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::~Mesh()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::has_data() const
{
    return (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::has_operation() const
{
    return is_set(operation)
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups != nullptr)
        {
            children["mesh-groups"] = mesh_groups;
        }
        else
        {
            mesh_groups = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups>();
            mesh_groups->parent = this;
            children["mesh-groups"] = mesh_groups;
        }
        return children.at("mesh-groups");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
        else
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange>();
            tunnel_range->parent = this;
            children["tunnel-range"] = tunnel_range;
        }
        return children.at("tunnel-range");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_children()
{
    if(children.find("mesh-groups") == children.end())
    {
        if(mesh_groups != nullptr)
        {
            children["mesh-groups"] = mesh_groups;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tunnel-range") == children.end())
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroups()
{
    yang_name = "mesh-groups"; yang_parent_name = "mesh";
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::~MeshGroups()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::has_data() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::has_operation() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mesh-group")
    {
        for(auto const & c : mesh_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup>();
        c->parent = this;
        mesh_group.push_back(std::move(c));
        children[segment_path] = mesh_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_children()
{
    for (auto const & c : mesh_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::MeshGroup()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    attribute_set{YType::str, "attribute-set"},
    create{YType::empty, "create"},
    destination_list{YType::str, "destination-list"},
    disable{YType::empty, "disable"},
    one_hop{YType::empty, "one-hop"}
{
    yang_name = "mesh-group"; yang_parent_name = "mesh-groups";
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::~MeshGroup()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_data() const
{
    return mesh_group_id.is_set
	|| attribute_set.is_set
	|| create.is_set
	|| destination_list.is_set
	|| disable.is_set
	|| one_hop.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(attribute_set.operation)
	|| is_set(create.operation)
	|| is_set(destination_list.operation)
	|| is_set(disable.operation)
	|| is_set(one_hop.operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group" <<"[mesh-group-id='" <<mesh_group_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/mesh-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.operation)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (attribute_set.is_set || is_set(attribute_set.operation)) leaf_name_data.push_back(attribute_set.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (destination_list.is_set || is_set(destination_list.operation)) leaf_name_data.push_back(destination_list.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (one_hop.is_set || is_set(one_hop.operation)) leaf_name_data.push_back(one_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
    }
    if(value_path == "attribute-set")
    {
        attribute_set = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "destination-list")
    {
        destination_list = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "one-hop")
    {
        one_hop = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Timers()
    :
    removal(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal>())
{
    removal->parent = this;
    children["removal"] = removal;

    yang_name = "timers"; yang_parent_name = "mesh";
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::has_operation() const
{
    return is_set(operation)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "removal")
    {
        if(removal != nullptr)
        {
            children["removal"] = removal;
        }
        else
        {
            removal = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal>();
            removal->parent = this;
            children["removal"] = removal;
        }
        return children.at("removal");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_children()
{
    if(children.find("removal") == children.end())
    {
        if(removal != nullptr)
        {
            children["removal"] = removal;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::Removal()
    :
    unused{YType::uint32, "unused"}
{
    yang_name = "removal"; yang_parent_name = "timers";
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::~Removal()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::has_data() const
{
    return unused.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::has_operation() const
{
    return is_set(operation)
	|| is_set(unused.operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unused")
    {
        unused = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{
    yang_name = "tunnel-range"; yang_parent_name = "mesh";
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::has_operation() const
{
    return is_set(operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
}

MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::P2MpAutoTunnel()
    :
    tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange>())
{
    tunnel_range->parent = this;
    children["tunnel-range"] = tunnel_range;

    yang_name = "p2mp-auto-tunnel"; yang_parent_name = "auto-tunnel";
}

MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::~P2MpAutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::has_data() const
{
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::has_operation() const
{
    return is_set(operation)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-auto-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
        else
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange>();
            tunnel_range->parent = this;
            children["tunnel-range"] = tunnel_range;
        }
        return children.at("tunnel-range");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_children()
{
    if(children.find("tunnel-range") == children.end())
    {
        if(tunnel_range != nullptr)
        {
            children["tunnel-range"] = tunnel_range;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{
    yang_name = "tunnel-range"; yang_parent_name = "p2mp-auto-tunnel";
}

MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::has_operation() const
{
    return is_set(operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/p2mp-auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
}

MplsTe::GlobalAttributes::HardwareOutOfResource::HardwareOutOfResource()
    :
    oor_green_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState>())
	,oor_red_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState>())
	,oor_yellow_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState>())
{
    oor_green_state->parent = this;
    children["oor-green-state"] = oor_green_state;

    oor_red_state->parent = this;
    children["oor-red-state"] = oor_red_state;

    oor_yellow_state->parent = this;
    children["oor-yellow-state"] = oor_yellow_state;

    yang_name = "hardware-out-of-resource"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::HardwareOutOfResource::~HardwareOutOfResource()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::has_data() const
{
    return (oor_green_state !=  nullptr && oor_green_state->has_data())
	|| (oor_red_state !=  nullptr && oor_red_state->has_data())
	|| (oor_yellow_state !=  nullptr && oor_yellow_state->has_data());
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::has_operation() const
{
    return is_set(operation)
	|| (oor_green_state !=  nullptr && oor_green_state->has_operation())
	|| (oor_red_state !=  nullptr && oor_red_state->has_operation())
	|| (oor_yellow_state !=  nullptr && oor_yellow_state->has_operation());
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resource";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::HardwareOutOfResource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oor-green-state")
    {
        if(oor_green_state != nullptr)
        {
            children["oor-green-state"] = oor_green_state;
        }
        else
        {
            oor_green_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState>();
            oor_green_state->parent = this;
            children["oor-green-state"] = oor_green_state;
        }
        return children.at("oor-green-state");
    }

    if(child_yang_name == "oor-red-state")
    {
        if(oor_red_state != nullptr)
        {
            children["oor-red-state"] = oor_red_state;
        }
        else
        {
            oor_red_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState>();
            oor_red_state->parent = this;
            children["oor-red-state"] = oor_red_state;
        }
        return children.at("oor-red-state");
    }

    if(child_yang_name == "oor-yellow-state")
    {
        if(oor_yellow_state != nullptr)
        {
            children["oor-yellow-state"] = oor_yellow_state;
        }
        else
        {
            oor_yellow_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState>();
            oor_yellow_state->parent = this;
            children["oor-yellow-state"] = oor_yellow_state;
        }
        return children.at("oor-yellow-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::HardwareOutOfResource::get_children()
{
    if(children.find("oor-green-state") == children.end())
    {
        if(oor_green_state != nullptr)
        {
            children["oor-green-state"] = oor_green_state;
        }
    }

    if(children.find("oor-red-state") == children.end())
    {
        if(oor_red_state != nullptr)
        {
            children["oor-red-state"] = oor_red_state;
        }
    }

    if(children.find("oor-yellow-state") == children.end())
    {
        if(oor_yellow_state != nullptr)
        {
            children["oor-yellow-state"] = oor_yellow_state;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::OorRedState()
    :
    oor_accept_lsp_min_bandwidth{YType::int32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_metric_te_penalty{YType::int32, "oor-metric-te-penalty"},
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"}
{
    yang_name = "oor-red-state"; yang_parent_name = "hardware-out-of-resource";
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::~OorRedState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::has_data() const
{
    return oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_metric_te_penalty.is_set
	|| oor_node_protection_disable.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::has_operation() const
{
    return is_set(operation)
	|| is_set(oor_accept_lsp_min_bandwidth.operation)
	|| is_set(oor_accept_reopt_lsp.operation)
	|| is_set(oor_available_bandwidth_percentage.operation)
	|| is_set(oor_metric_te_penalty.operation)
	|| is_set(oor_node_protection_disable.operation);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-red-state";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.operation)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.operation)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.operation)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.operation)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());
    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.operation)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
    }
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::OorYellowState()
    :
    oor_accept_lsp_min_bandwidth{YType::int32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_metric_te_penalty{YType::int32, "oor-metric-te-penalty"},
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"}
{
    yang_name = "oor-yellow-state"; yang_parent_name = "hardware-out-of-resource";
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::~OorYellowState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::has_data() const
{
    return oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_metric_te_penalty.is_set
	|| oor_node_protection_disable.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::has_operation() const
{
    return is_set(operation)
	|| is_set(oor_accept_lsp_min_bandwidth.operation)
	|| is_set(oor_accept_reopt_lsp.operation)
	|| is_set(oor_available_bandwidth_percentage.operation)
	|| is_set(oor_metric_te_penalty.operation)
	|| is_set(oor_node_protection_disable.operation);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-yellow-state";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.operation)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.operation)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.operation)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.operation)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());
    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.operation)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
    }
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::OorGreenState()
    :
    oor_accept_lsp_min_bandwidth{YType::int32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_metric_te_penalty{YType::int32, "oor-metric-te-penalty"},
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"},
    oor_recovery_duration{YType::uint32, "oor-recovery-duration"}
{
    yang_name = "oor-green-state"; yang_parent_name = "hardware-out-of-resource";
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::~OorGreenState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::has_data() const
{
    return oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_metric_te_penalty.is_set
	|| oor_node_protection_disable.is_set
	|| oor_recovery_duration.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::has_operation() const
{
    return is_set(operation)
	|| is_set(oor_accept_lsp_min_bandwidth.operation)
	|| is_set(oor_accept_reopt_lsp.operation)
	|| is_set(oor_available_bandwidth_percentage.operation)
	|| is_set(oor_metric_te_penalty.operation)
	|| is_set(oor_node_protection_disable.operation)
	|| is_set(oor_recovery_duration.operation);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-green-state";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.operation)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.operation)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.operation)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.operation)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());
    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.operation)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());
    if (oor_recovery_duration.is_set || is_set(oor_recovery_duration.operation)) leaf_name_data.push_back(oor_recovery_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
    }
    if(value_path == "oor-recovery-duration")
    {
        oor_recovery_duration = value;
    }
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterIds()
{
    yang_name = "secondary-router-ids"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::SecondaryRouterIds::~SecondaryRouterIds()
{
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::has_data() const
{
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::has_operation() const
{
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-ids";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::SecondaryRouterIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SecondaryRouterIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "secondary-router-id")
    {
        for(auto const & c : secondary_router_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.push_back(std::move(c));
        children[segment_path] = secondary_router_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::SecondaryRouterIds::get_children()
{
    for (auto const & c : secondary_router_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::SecondaryRouterId()
    :
    secondary_router_id_value{YType::str, "secondary-router-id-value"}
{
    yang_name = "secondary-router-id"; yang_parent_name = "secondary-router-ids";
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::has_data() const
{
    return secondary_router_id_value.is_set;
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(secondary_router_id_value.operation);
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id" <<"[secondary-router-id-value='" <<secondary_router_id_value <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/secondary-router-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_router_id_value.is_set || is_set(secondary_router_id_value.operation)) leaf_name_data.push_back(secondary_router_id_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "secondary-router-id-value")
    {
        secondary_router_id_value = value;
    }
}

MplsTe::GlobalAttributes::Srlg::Srlg()
    :
    default_admin_weight{YType::int32, "default-admin-weight"},
    enable{YType::empty, "enable"}
    	,
    names(std::make_shared<MplsTe::GlobalAttributes::Srlg::Names>())
	,values(std::make_shared<MplsTe::GlobalAttributes::Srlg::Values>())
{
    names->parent = this;
    children["names"] = names;

    values->parent = this;
    children["values"] = values;

    yang_name = "srlg"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::Srlg::~Srlg()
{
}

bool MplsTe::GlobalAttributes::Srlg::has_data() const
{
    return default_admin_weight.is_set
	|| enable.is_set
	|| (names !=  nullptr && names->has_data())
	|| (values !=  nullptr && values->has_data());
}

bool MplsTe::GlobalAttributes::Srlg::has_operation() const
{
    return is_set(operation)
	|| is_set(default_admin_weight.operation)
	|| is_set(enable.operation)
	|| (names !=  nullptr && names->has_operation())
	|| (values !=  nullptr && values->has_operation());
}

std::string MplsTe::GlobalAttributes::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_admin_weight.is_set || is_set(default_admin_weight.operation)) leaf_name_data.push_back(default_admin_weight.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "names")
    {
        if(names != nullptr)
        {
            children["names"] = names;
        }
        else
        {
            names = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names>();
            names->parent = this;
            children["names"] = names;
        }
        return children.at("names");
    }

    if(child_yang_name == "values")
    {
        if(values != nullptr)
        {
            children["values"] = values;
        }
        else
        {
            values = std::make_shared<MplsTe::GlobalAttributes::Srlg::Values>();
            values->parent = this;
            children["values"] = values;
        }
        return children.at("values");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::get_children()
{
    if(children.find("names") == children.end())
    {
        if(names != nullptr)
        {
            children["names"] = names;
        }
    }

    if(children.find("values") == children.end())
    {
        if(values != nullptr)
        {
            children["values"] = values;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-admin-weight")
    {
        default_admin_weight = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::Srlg::Names::Names()
{
    yang_name = "names"; yang_parent_name = "srlg";
}

MplsTe::GlobalAttributes::Srlg::Names::~Names()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Srlg::Names::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::Names::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/srlg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name>();
        c->parent = this;
        name.push_back(std::move(c));
        children[segment_path] = name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::Names::get_children()
{
    for (auto const & c : name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::Srlg::Names::Name::Name()
    :
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::int32, "admin-weight"}
    	,
    static_srlg_members(std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers>())
{
    static_srlg_members->parent = this;
    children["static-srlg-members"] = static_srlg_members;

    yang_name = "name"; yang_parent_name = "names";
}

MplsTe::GlobalAttributes::Srlg::Names::Name::~Name()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::has_data() const
{
    return srlg_name.is_set
	|| admin_weight.is_set
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_data());
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_name.operation)
	|| is_set(admin_weight.operation)
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_operation());
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[srlg-name='" <<srlg_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::Names::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/srlg/names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-srlg-members")
    {
        if(static_srlg_members != nullptr)
        {
            children["static-srlg-members"] = static_srlg_members;
        }
        else
        {
            static_srlg_members = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers>();
            static_srlg_members->parent = this;
            children["static-srlg-members"] = static_srlg_members;
        }
        return children.at("static-srlg-members");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::Names::Name::get_children()
{
    if(children.find("static-srlg-members") == children.end())
    {
        if(static_srlg_members != nullptr)
        {
            children["static-srlg-members"] = static_srlg_members;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMembers()
{
    yang_name = "static-srlg-members"; yang_parent_name = "name";
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::~StaticSrlgMembers()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::has_data() const
{
    for (std::size_t index=0; index<static_srlg_member.size(); index++)
    {
        if(static_srlg_member[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::has_operation() const
{
    for (std::size_t index=0; index<static_srlg_member.size(); index++)
    {
        if(static_srlg_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-members";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticSrlgMembers' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-srlg-member")
    {
        for(auto const & c : static_srlg_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember>();
        c->parent = this;
        static_srlg_member.push_back(std::move(c));
        children[segment_path] = static_srlg_member.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_children()
{
    for (auto const & c : static_srlg_member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::StaticSrlgMember()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{
    yang_name = "static-srlg-member"; yang_parent_name = "static-srlg-members";
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::~StaticSrlgMember()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::has_data() const
{
    return from_address.is_set
	|| to_address.is_set;
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::has_operation() const
{
    return is_set(operation)
	|| is_set(from_address.operation)
	|| is_set(to_address.operation);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-member" <<"[from-address='" <<from_address <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticSrlgMember' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.operation)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.operation)) leaf_name_data.push_back(to_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "from-address")
    {
        from_address = value;
    }
    if(value_path == "to-address")
    {
        to_address = value;
    }
}

MplsTe::GlobalAttributes::Srlg::Values::Values()
{
    yang_name = "values"; yang_parent_name = "srlg";
}

MplsTe::GlobalAttributes::Srlg::Values::~Values()
{
}

bool MplsTe::GlobalAttributes::Srlg::Values::has_data() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Srlg::Values::has_operation() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::Srlg::Values::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "values";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::Values::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/srlg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Values::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "value")
    {
        for(auto const & c : value_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::Srlg::Values::Value_>();
        c->parent = this;
        value_.push_back(std::move(c));
        children[segment_path] = value_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::Values::get_children()
{
    for (auto const & c : value_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Values::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::Srlg::Values::Value_::Value_()
    :
    srlg_number{YType::uint32, "srlg-number"},
    admin_weight{YType::int32, "admin-weight"}
    	,
    ipv4_address_maps(std::make_shared<MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps>())
{
    ipv4_address_maps->parent = this;
    children["ipv4-address-maps"] = ipv4_address_maps;

    yang_name = "value"; yang_parent_name = "values";
}

MplsTe::GlobalAttributes::Srlg::Values::Value_::~Value_()
{
}

bool MplsTe::GlobalAttributes::Srlg::Values::Value_::has_data() const
{
    return srlg_number.is_set
	|| admin_weight.is_set
	|| (ipv4_address_maps !=  nullptr && ipv4_address_maps->has_data());
}

bool MplsTe::GlobalAttributes::Srlg::Values::Value_::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_number.operation)
	|| is_set(admin_weight.operation)
	|| (ipv4_address_maps !=  nullptr && ipv4_address_maps->has_operation());
}

std::string MplsTe::GlobalAttributes::Srlg::Values::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value" <<"[srlg-number='" <<srlg_number <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::Values::Value_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/srlg/values/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.operation)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Values::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-maps")
    {
        if(ipv4_address_maps != nullptr)
        {
            children["ipv4-address-maps"] = ipv4_address_maps;
        }
        else
        {
            ipv4_address_maps = std::make_shared<MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps>();
            ipv4_address_maps->parent = this;
            children["ipv4-address-maps"] = ipv4_address_maps;
        }
        return children.at("ipv4-address-maps");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::Values::Value_::get_children()
{
    if(children.find("ipv4-address-maps") == children.end())
    {
        if(ipv4_address_maps != nullptr)
        {
            children["ipv4-address-maps"] = ipv4_address_maps;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Values::Value_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
}

MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMaps()
{
    yang_name = "ipv4-address-maps"; yang_parent_name = "value";
}

MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::~Ipv4AddressMaps()
{
}

bool MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::has_data() const
{
    for (std::size_t index=0; index<ipv4_address_map.size(); index++)
    {
        if(ipv4_address_map[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_map.size(); index++)
    {
        if(ipv4_address_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-maps";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddressMaps' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-map")
    {
        for(auto const & c : ipv4_address_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap>();
        c->parent = this;
        ipv4_address_map.push_back(std::move(c));
        children[segment_path] = ipv4_address_map.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::get_children()
{
    for (auto const & c : ipv4_address_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::Ipv4AddressMap()
    :
    outgoing_ipv4_address{YType::str, "outgoing-ipv4-address"},
    remote_ipv4_address{YType::str, "remote-ipv4-address"}
{
    yang_name = "ipv4-address-map"; yang_parent_name = "ipv4-address-maps";
}

MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::~Ipv4AddressMap()
{
}

bool MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::has_data() const
{
    return outgoing_ipv4_address.is_set
	|| remote_ipv4_address.is_set;
}

bool MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::has_operation() const
{
    return is_set(operation)
	|| is_set(outgoing_ipv4_address.operation)
	|| is_set(remote_ipv4_address.operation);
}

std::string MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-map" <<"[outgoing-ipv4-address='" <<outgoing_ipv4_address <<"']" <<"[remote-ipv4-address='" <<remote_ipv4_address <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddressMap' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_ipv4_address.is_set || is_set(outgoing_ipv4_address.operation)) leaf_name_data.push_back(outgoing_ipv4_address.get_name_leafdata());
    if (remote_ipv4_address.is_set || is_set(remote_ipv4_address.operation)) leaf_name_data.push_back(remote_ipv4_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outgoing-ipv4-address")
    {
        outgoing_ipv4_address = value;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address = value;
    }
}

MplsTe::GlobalAttributes::Queues::Queues()
{
    yang_name = "queues"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::Queues::~Queues()
{
}

bool MplsTe::GlobalAttributes::Queues::has_data() const
{
    for (std::size_t index=0; index<queue.size(); index++)
    {
        if(queue[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Queues::has_operation() const
{
    for (std::size_t index=0; index<queue.size(); index++)
    {
        if(queue[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::Queues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queues";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Queues::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Queues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "queue")
    {
        for(auto const & c : queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::Queues::Queue>();
        c->parent = this;
        queue.push_back(std::move(c));
        children[segment_path] = queue.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Queues::get_children()
{
    for (auto const & c : queue)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::Queues::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::Queues::Queue::Queue()
    :
    role{YType::enumeration, "role"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue"; yang_parent_name = "queues";
}

MplsTe::GlobalAttributes::Queues::Queue::~Queue()
{
}

bool MplsTe::GlobalAttributes::Queues::Queue::has_data() const
{
    return role.is_set
	|| value_.is_set;
}

bool MplsTe::GlobalAttributes::Queues::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| is_set(value_.operation);
}

std::string MplsTe::GlobalAttributes::Queues::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue" <<"[role='" <<role <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Queues::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/queues/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Queues::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Queues::Queue::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::Queues::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

MplsTe::GlobalAttributes::Mib::Mib()
    :
    midpoint_lsp_stats_collection_disable{YType::empty, "midpoint-lsp-stats-collection-disable"}
{
    yang_name = "mib"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::Mib::~Mib()
{
}

bool MplsTe::GlobalAttributes::Mib::has_data() const
{
    return midpoint_lsp_stats_collection_disable.is_set;
}

bool MplsTe::GlobalAttributes::Mib::has_operation() const
{
    return is_set(operation)
	|| is_set(midpoint_lsp_stats_collection_disable.operation);
}

std::string MplsTe::GlobalAttributes::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (midpoint_lsp_stats_collection_disable.is_set || is_set(midpoint_lsp_stats_collection_disable.operation)) leaf_name_data.push_back(midpoint_lsp_stats_collection_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::Mib::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::Mib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "midpoint-lsp-stats-collection-disable")
    {
        midpoint_lsp_stats_collection_disable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AttributeSet()
    :
    auto_backup_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes>())
	,auto_mesh_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes>())
	,otn_pp_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes>())
	,p2mpte_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes>())
	,p2p_te_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes>())
	,path_option_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes>())
	,xro_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes>())
{
    auto_backup_attributes->parent = this;
    children["auto-backup-attributes"] = auto_backup_attributes;

    auto_mesh_attributes->parent = this;
    children["auto-mesh-attributes"] = auto_mesh_attributes;

    otn_pp_attributes->parent = this;
    children["otn-pp-attributes"] = otn_pp_attributes;

    p2mpte_attributes->parent = this;
    children["p2mpte-attributes"] = p2mpte_attributes;

    p2p_te_attributes->parent = this;
    children["p2p-te-attributes"] = p2p_te_attributes;

    path_option_attributes->parent = this;
    children["path-option-attributes"] = path_option_attributes;

    xro_attributes->parent = this;
    children["xro-attributes"] = xro_attributes;

    yang_name = "attribute-set"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::AttributeSet::~AttributeSet()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::has_data() const
{
    return (auto_backup_attributes !=  nullptr && auto_backup_attributes->has_data())
	|| (auto_mesh_attributes !=  nullptr && auto_mesh_attributes->has_data())
	|| (otn_pp_attributes !=  nullptr && otn_pp_attributes->has_data())
	|| (p2mpte_attributes !=  nullptr && p2mpte_attributes->has_data())
	|| (p2p_te_attributes !=  nullptr && p2p_te_attributes->has_data())
	|| (path_option_attributes !=  nullptr && path_option_attributes->has_data())
	|| (xro_attributes !=  nullptr && xro_attributes->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::has_operation() const
{
    return is_set(operation)
	|| (auto_backup_attributes !=  nullptr && auto_backup_attributes->has_operation())
	|| (auto_mesh_attributes !=  nullptr && auto_mesh_attributes->has_operation())
	|| (otn_pp_attributes !=  nullptr && otn_pp_attributes->has_operation())
	|| (p2mpte_attributes !=  nullptr && p2mpte_attributes->has_operation())
	|| (p2p_te_attributes !=  nullptr && p2p_te_attributes->has_operation())
	|| (path_option_attributes !=  nullptr && path_option_attributes->has_operation())
	|| (xro_attributes !=  nullptr && xro_attributes->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-backup-attributes")
    {
        if(auto_backup_attributes != nullptr)
        {
            children["auto-backup-attributes"] = auto_backup_attributes;
        }
        else
        {
            auto_backup_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes>();
            auto_backup_attributes->parent = this;
            children["auto-backup-attributes"] = auto_backup_attributes;
        }
        return children.at("auto-backup-attributes");
    }

    if(child_yang_name == "auto-mesh-attributes")
    {
        if(auto_mesh_attributes != nullptr)
        {
            children["auto-mesh-attributes"] = auto_mesh_attributes;
        }
        else
        {
            auto_mesh_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes>();
            auto_mesh_attributes->parent = this;
            children["auto-mesh-attributes"] = auto_mesh_attributes;
        }
        return children.at("auto-mesh-attributes");
    }

    if(child_yang_name == "otn-pp-attributes")
    {
        if(otn_pp_attributes != nullptr)
        {
            children["otn-pp-attributes"] = otn_pp_attributes;
        }
        else
        {
            otn_pp_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes>();
            otn_pp_attributes->parent = this;
            children["otn-pp-attributes"] = otn_pp_attributes;
        }
        return children.at("otn-pp-attributes");
    }

    if(child_yang_name == "p2mpte-attributes")
    {
        if(p2mpte_attributes != nullptr)
        {
            children["p2mpte-attributes"] = p2mpte_attributes;
        }
        else
        {
            p2mpte_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes>();
            p2mpte_attributes->parent = this;
            children["p2mpte-attributes"] = p2mpte_attributes;
        }
        return children.at("p2mpte-attributes");
    }

    if(child_yang_name == "p2p-te-attributes")
    {
        if(p2p_te_attributes != nullptr)
        {
            children["p2p-te-attributes"] = p2p_te_attributes;
        }
        else
        {
            p2p_te_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes>();
            p2p_te_attributes->parent = this;
            children["p2p-te-attributes"] = p2p_te_attributes;
        }
        return children.at("p2p-te-attributes");
    }

    if(child_yang_name == "path-option-attributes")
    {
        if(path_option_attributes != nullptr)
        {
            children["path-option-attributes"] = path_option_attributes;
        }
        else
        {
            path_option_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes>();
            path_option_attributes->parent = this;
            children["path-option-attributes"] = path_option_attributes;
        }
        return children.at("path-option-attributes");
    }

    if(child_yang_name == "xro-attributes")
    {
        if(xro_attributes != nullptr)
        {
            children["xro-attributes"] = xro_attributes;
        }
        else
        {
            xro_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes>();
            xro_attributes->parent = this;
            children["xro-attributes"] = xro_attributes;
        }
        return children.at("xro-attributes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::get_children()
{
    if(children.find("auto-backup-attributes") == children.end())
    {
        if(auto_backup_attributes != nullptr)
        {
            children["auto-backup-attributes"] = auto_backup_attributes;
        }
    }

    if(children.find("auto-mesh-attributes") == children.end())
    {
        if(auto_mesh_attributes != nullptr)
        {
            children["auto-mesh-attributes"] = auto_mesh_attributes;
        }
    }

    if(children.find("otn-pp-attributes") == children.end())
    {
        if(otn_pp_attributes != nullptr)
        {
            children["otn-pp-attributes"] = otn_pp_attributes;
        }
    }

    if(children.find("p2mpte-attributes") == children.end())
    {
        if(p2mpte_attributes != nullptr)
        {
            children["p2mpte-attributes"] = p2mpte_attributes;
        }
    }

    if(children.find("p2p-te-attributes") == children.end())
    {
        if(p2p_te_attributes != nullptr)
        {
            children["p2p-te-attributes"] = p2p_te_attributes;
        }
    }

    if(children.find("path-option-attributes") == children.end())
    {
        if(path_option_attributes != nullptr)
        {
            children["path-option-attributes"] = path_option_attributes;
        }
    }

    if(children.find("xro-attributes") == children.end())
    {
        if(xro_attributes != nullptr)
        {
            children["xro-attributes"] = xro_attributes;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttributes()
{
    yang_name = "path-option-attributes"; yang_parent_name = "attribute-set";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::~PathOptionAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::has_data() const
{
    for (std::size_t index=0; index<path_option_attribute.size(); index++)
    {
        if(path_option_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::has_operation() const
{
    for (std::size_t index=0; index<path_option_attribute.size(); index++)
    {
        if(path_option_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-option-attribute")
    {
        for(auto const & c : path_option_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute>();
        c->parent = this;
        path_option_attribute.push_back(std::move(c));
        children[segment_path] = path_option_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_children()
{
    for (auto const & c : path_option_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::PathOptionAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
    	,
    affinity_mask(nullptr) // presence node
	,att_path_option_path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection>())
	,bandwidth(nullptr) // presence node
	,bfd_reverse_path(nullptr) // presence node
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes>())
	,pce(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce>())
{
    att_path_option_path_selection->parent = this;
    children["att-path-option-path-selection"] = att_path_option_path_selection;

    new_style_affinity_affinity_types->parent = this;
    children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;

    pce->parent = this;
    children["pce"] = pce;

    yang_name = "path-option-attribute"; yang_parent_name = "path-option-attributes";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::~PathOptionAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (att_path_option_path_selection !=  nullptr && att_path_option_path_selection->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (pce !=  nullptr && pce->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(enable.operation)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (att_path_option_path_selection !=  nullptr && att_path_option_path_selection->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (pce !=  nullptr && pce->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/path-option-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
        else
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask>();
            affinity_mask->parent = this;
            children["affinity-mask"] = affinity_mask;
        }
        return children.at("affinity-mask");
    }

    if(child_yang_name == "att-path-option-path-selection")
    {
        if(att_path_option_path_selection != nullptr)
        {
            children["att-path-option-path-selection"] = att_path_option_path_selection;
        }
        else
        {
            att_path_option_path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection>();
            att_path_option_path_selection->parent = this;
            children["att-path-option-path-selection"] = att_path_option_path_selection;
        }
        return children.at("att-path-option-path-selection");
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        else
        {
            bfd_reverse_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath>();
            bfd_reverse_path->parent = this;
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        return children.at("bfd-reverse-path");
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        else
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes>();
            new_style_affinity_affinity_types->parent = this;
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        return children.at("new-style-affinity-affinity-types");
    }

    if(child_yang_name == "pce")
    {
        if(pce != nullptr)
        {
            children["pce"] = pce;
        }
        else
        {
            pce = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce>();
            pce->parent = this;
            children["pce"] = pce;
        }
        return children.at("pce");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_children()
{
    if(children.find("affinity-mask") == children.end())
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
    }

    if(children.find("att-path-option-path-selection") == children.end())
    {
        if(att_path_option_path_selection != nullptr)
        {
            children["att-path-option-path-selection"] = att_path_option_path_selection;
        }
    }

    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("bfd-reverse-path") == children.end())
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
    }

    if(children.find("new-style-affinity-affinity-types") == children.end())
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
    }

    if(children.find("pce") == children.end())
    {
        if(pce != nullptr)
        {
            children["pce"] = pce;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::BfdReversePath()
    :
    bfd_reverse_path_type{YType::enumeration, "bfd-reverse-path-type"},
    binding_label{YType::uint32, "binding-label"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "path-option-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::has_data() const
{
    return bfd_reverse_path_type.is_set
	|| binding_label.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_reverse_path_type.operation)
	|| is_set(binding_label.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdReversePath' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_reverse_path_type.is_set || is_set(bfd_reverse_path_type.operation)) leaf_name_data.push_back(bfd_reverse_path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-reverse-path-type")
    {
        bfd_reverse_path_type = value;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::AttPathOptionPathSelection()
    :
    enable{YType::empty, "enable"},
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"},
    path_selection_exclude_list{YType::str, "path-selection-exclude-list"}
    	,
    invalidation(nullptr) // presence node
{
    yang_name = "att-path-option-path-selection"; yang_parent_name = "path-option-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::~AttPathOptionPathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::has_data() const
{
    return enable.is_set
	|| path_selection_cost_limit.is_set
	|| path_selection_exclude_list.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(path_selection_cost_limit.operation)
	|| is_set(path_selection_exclude_list.operation)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "att-path-option-path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttPathOptionPathSelection' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.operation)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());
    if (path_selection_exclude_list.is_set || is_set(path_selection_exclude_list.operation)) leaf_name_data.push_back(path_selection_exclude_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalidation")
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
        else
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation>();
            invalidation->parent = this;
            children["invalidation"] = invalidation;
        }
        return children.at("invalidation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_children()
{
    if(children.find("invalidation") == children.end())
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
    }
    if(value_path == "path-selection-exclude-list")
    {
        path_selection_exclude_list = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_action{YType::enumeration, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"}
{
    yang_name = "invalidation"; yang_parent_name = "att-path-option-path-selection";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::has_data() const
{
    return path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::has_operation() const
{
    return is_set(operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalidation' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Pce()
    :
    enable{YType::empty, "enable"}
    	,
    bidirectional(nullptr) // presence node
	,disjoint_path(nullptr) // presence node
{
    yang_name = "pce"; yang_parent_name = "path-option-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::~Pce()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::has_data() const
{
    return enable.is_set
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pce' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidirectional")
    {
        if(bidirectional != nullptr)
        {
            children["bidirectional"] = bidirectional;
        }
        else
        {
            bidirectional = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional>();
            bidirectional->parent = this;
            children["bidirectional"] = bidirectional;
        }
        return children.at("bidirectional");
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path != nullptr)
        {
            children["disjoint-path"] = disjoint_path;
        }
        else
        {
            disjoint_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath>();
            disjoint_path->parent = this;
            children["disjoint-path"] = disjoint_path;
        }
        return children.at("disjoint-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_children()
{
    if(children.find("bidirectional") == children.end())
    {
        if(bidirectional != nullptr)
        {
            children["bidirectional"] = bidirectional;
        }
    }

    if(children.find("disjoint-path") == children.end())
    {
        if(disjoint_path != nullptr)
        {
            children["disjoint-path"] = disjoint_path;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::Bidirectional()
    :
    bd_group_id{YType::uint32, "bd-group-id"},
    bd_source_address{YType::str, "bd-source-address"}
{
    yang_name = "bidirectional"; yang_parent_name = "pce";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::~Bidirectional()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::has_data() const
{
    return bd_group_id.is_set
	|| bd_source_address.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_group_id.operation)
	|| is_set(bd_source_address.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bidirectional' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_id.is_set || is_set(bd_group_id.operation)) leaf_name_data.push_back(bd_group_id.get_name_leafdata());
    if (bd_source_address.is_set || is_set(bd_source_address.operation)) leaf_name_data.push_back(bd_source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-group-id")
    {
        bd_group_id = value;
    }
    if(value_path == "bd-source-address")
    {
        bd_source_address = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::DisjointPath()
    :
    dp_group_id{YType::uint32, "dp-group-id"},
    dp_source_address{YType::str, "dp-source-address"},
    dp_type{YType::uint32, "dp-type"}
{
    yang_name = "disjoint-path"; yang_parent_name = "pce";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::~DisjointPath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::has_data() const
{
    return dp_group_id.is_set
	|| dp_source_address.is_set
	|| dp_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::has_operation() const
{
    return is_set(operation)
	|| is_set(dp_group_id.operation)
	|| is_set(dp_source_address.operation)
	|| is_set(dp_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DisjointPath' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_group_id.is_set || is_set(dp_group_id.operation)) leaf_name_data.push_back(dp_group_id.get_name_leafdata());
    if (dp_source_address.is_set || is_set(dp_source_address.operation)) leaf_name_data.push_back(dp_source_address.get_name_leafdata());
    if (dp_type.is_set || is_set(dp_type.operation)) leaf_name_data.push_back(dp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dp-group-id")
    {
        dp_group_id = value;
    }
    if(value_path == "dp-source-address")
    {
        dp_source_address = value;
    }
    if(value_path == "dp-type")
    {
        dp_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity-mask"; yang_parent_name = "path-option-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(mask.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMask' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{
    yang_name = "bandwidth"; yang_parent_name = "path-option-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(class_or_pool_type.operation)
	|| is_set(dste_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.operation)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.operation)) leaf_name_data.push_back(dste_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{
    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "path-option-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_children()
{
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityType' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity1{YType::str, "affinity1"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity1.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity1{YType::str, "affinity1"},
    affinity10{YType::str, "affinity10"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity1.is_set
	|| affinity10.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity10.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity10='" <<affinity10 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.operation)) leaf_name_data.push_back(affinity10.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttributes()
{
    yang_name = "p2mpte-attributes"; yang_parent_name = "attribute-set";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::~P2MpteAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::has_data() const
{
    for (std::size_t index=0; index<p2mpte_attribute.size(); index++)
    {
        if(p2mpte_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::has_operation() const
{
    for (std::size_t index=0; index<p2mpte_attribute.size(); index++)
    {
        if(p2mpte_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mpte-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mpte-attribute")
    {
        for(auto const & c : p2mpte_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute>();
        c->parent = this;
        p2mpte_attribute.push_back(std::move(c));
        children[segment_path] = p2mpte_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_children()
{
    for (auto const & c : p2mpte_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::P2MpteAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    record_route{YType::empty, "record-route"}
    	,
    affinity_mask(nullptr) // presence node
	,bandwidth(nullptr) // presence node
	,fast_reroute(nullptr) // presence node
	,logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection>())
	,priority(nullptr) // presence node
{
    logging->parent = this;
    children["logging"] = logging;

    new_style_affinity_affinity_types->parent = this;
    children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;

    path_selection->parent = this;
    children["path-selection"] = path_selection;

    yang_name = "p2mpte-attribute"; yang_parent_name = "p2mpte-attributes";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::~P2MpteAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| interface_bandwidth.is_set
	|| record_route.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(enable.operation)
	|| is_set(interface_bandwidth.operation)
	|| is_set(record_route.operation)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mpte-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/p2mpte-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.operation)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
        else
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask>();
            affinity_mask->parent = this;
            children["affinity-mask"] = affinity_mask;
        }
        return children.at("affinity-mask");
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        else
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes>();
            new_style_affinity_affinity_types->parent = this;
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        return children.at("new-style-affinity-affinity-types");
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
        else
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection>();
            path_selection->parent = this;
            children["path-selection"] = path_selection;
        }
        return children.at("path-selection");
    }

    if(child_yang_name == "priority")
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
        else
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority>();
            priority->parent = this;
            children["priority"] = priority;
        }
        return children.at("priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_children()
{
    if(children.find("affinity-mask") == children.end())
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
    }

    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("new-style-affinity-affinity-types") == children.end())
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
    }

    if(children.find("path-selection") == children.end())
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
    }

    if(children.find("priority") == children.end())
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "p2mpte-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity-mask"; yang_parent_name = "p2mpte-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(mask.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMask' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{
    yang_name = "bandwidth"; yang_parent_name = "p2mpte-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(class_or_pool_type.operation)
	|| is_set(dste_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.operation)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.operation)) leaf_name_data.push_back(dste_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "path-selection"; yang_parent_name = "p2mpte-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSelection' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{
    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "p2mpte-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::get_children()
{
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityType' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity1{YType::str, "affinity1"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity1.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity1{YType::str, "affinity1"},
    affinity10{YType::str, "affinity10"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity1.is_set
	|| affinity10.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity10.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity10='" <<affinity10 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.operation)) leaf_name_data.push_back(affinity10.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{
    yang_name = "fast-reroute"; yang_parent_name = "p2mpte-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_protection.operation)
	|| is_set(node_protection.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.operation)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.operation)) leaf_name_data.push_back(node_protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    sub_lsp_state_message{YType::empty, "sub-lsp-state-message"}
{
    yang_name = "logging"; yang_parent_name = "p2mpte-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| insufficient_bw_message.is_set
	|| pcalc_failure_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| sub_lsp_state_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(bandwidth_change_message.operation)
	|| is_set(insufficient_bw_message.operation)
	|| is_set(pcalc_failure_message.operation)
	|| is_set(reoptimize_attempts_message.operation)
	|| is_set(reoptimized_message.operation)
	|| is_set(reroute_messsage.operation)
	|| is_set(state_message.operation)
	|| is_set(sub_lsp_state_message.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.operation)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.operation)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.operation)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.operation)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.operation)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.operation)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.operation)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (sub_lsp_state_message.is_set || is_set(sub_lsp_state_message.operation)) leaf_name_data.push_back(sub_lsp_state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
    }
    if(value_path == "state-message")
    {
        state_message = value;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttributes()
{
    yang_name = "p2p-te-attributes"; yang_parent_name = "attribute-set";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::~P2PTeAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::has_data() const
{
    for (std::size_t index=0; index<p2p_te_attribute.size(); index++)
    {
        if(p2p_te_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::has_operation() const
{
    for (std::size_t index=0; index<p2p_te_attribute.size(); index++)
    {
        if(p2p_te_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-te-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2p-te-attribute")
    {
        for(auto const & c : p2p_te_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute>();
        c->parent = this;
        p2p_te_attribute.push_back(std::move(c));
        children[segment_path] = p2p_te_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_children()
{
    for (auto const & c : p2p_te_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::P2PTeAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
    	,
    affinity_mask(nullptr) // presence node
	,logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection>())
	,pce(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce>())
{
    logging->parent = this;
    children["logging"] = logging;

    new_style_affinity_affinity_types->parent = this;
    children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;

    path_selection->parent = this;
    children["path-selection"] = path_selection;

    pce->parent = this;
    children["pce"] = pce;

    yang_name = "p2p-te-attribute"; yang_parent_name = "p2p-te-attributes";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::~P2PTeAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pce !=  nullptr && pce->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(enable.operation)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pce !=  nullptr && pce->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-te-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/p2p-te-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
        else
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask>();
            affinity_mask->parent = this;
            children["affinity-mask"] = affinity_mask;
        }
        return children.at("affinity-mask");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        else
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes>();
            new_style_affinity_affinity_types->parent = this;
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        return children.at("new-style-affinity-affinity-types");
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
        else
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection>();
            path_selection->parent = this;
            children["path-selection"] = path_selection;
        }
        return children.at("path-selection");
    }

    if(child_yang_name == "pce")
    {
        if(pce != nullptr)
        {
            children["pce"] = pce;
        }
        else
        {
            pce = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce>();
            pce->parent = this;
            children["pce"] = pce;
        }
        return children.at("pce");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_children()
{
    if(children.find("affinity-mask") == children.end())
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("new-style-affinity-affinity-types") == children.end())
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
    }

    if(children.find("path-selection") == children.end())
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
    }

    if(children.find("pce") == children.end())
    {
        if(pce != nullptr)
        {
            children["pce"] = pce;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"}
    	,
    invalidation(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation>())
	,segment_routing_prepend(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend>())
{
    invalidation->parent = this;
    children["invalidation"] = invalidation;

    segment_routing_prepend->parent = this;
    children["segment-routing-prepend"] = segment_routing_prepend;

    yang_name = "path-selection"; yang_parent_name = "p2p-te-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::has_data() const
{
    return enable.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing_prepend !=  nullptr && segment_routing_prepend->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(path_selection_segment_routing_adjacency_protection.operation)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing_prepend !=  nullptr && segment_routing_prepend->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSelection' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.operation)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalidation")
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
        else
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation>();
            invalidation->parent = this;
            children["invalidation"] = invalidation;
        }
        return children.at("invalidation");
    }

    if(child_yang_name == "segment-routing-prepend")
    {
        if(segment_routing_prepend != nullptr)
        {
            children["segment-routing-prepend"] = segment_routing_prepend;
        }
        else
        {
            segment_routing_prepend = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend>();
            segment_routing_prepend->parent = this;
            children["segment-routing-prepend"] = segment_routing_prepend;
        }
        return children.at("segment-routing-prepend");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::get_children()
{
    if(children.find("invalidation") == children.end())
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
    }

    if(children.find("segment-routing-prepend") == children.end())
    {
        if(segment_routing_prepend != nullptr)
        {
            children["segment-routing-prepend"] = segment_routing_prepend;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::SegmentRoutingPrepend()
    :
    enable{YType::empty, "enable"}
    	,
    indexes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes>())
{
    indexes->parent = this;
    children["indexes"] = indexes;

    yang_name = "segment-routing-prepend"; yang_parent_name = "path-selection";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::~SegmentRoutingPrepend()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::has_data() const
{
    return enable.is_set
	|| (indexes !=  nullptr && indexes->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (indexes !=  nullptr && indexes->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-prepend";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRoutingPrepend' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "indexes")
    {
        if(indexes != nullptr)
        {
            children["indexes"] = indexes;
        }
        else
        {
            indexes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes>();
            indexes->parent = this;
            children["indexes"] = indexes;
        }
        return children.at("indexes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::get_children()
{
    if(children.find("indexes") == children.end())
    {
        if(indexes != nullptr)
        {
            children["indexes"] = indexes;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Indexes()
{
    yang_name = "indexes"; yang_parent_name = "segment-routing-prepend";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::~Indexes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Indexes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_>();
        c->parent = this;
        index_.push_back(std::move(c));
        children[segment_path] = index_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_children()
{
    for (auto const & c : index_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::Index_()
    :
    index_number{YType::uint32, "index-number"},
    mpls_label{YType::int32, "mpls-label"},
    prepend_type{YType::enumeration, "prepend-type"}
{
    yang_name = "index"; yang_parent_name = "indexes";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::~Index_()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::has_data() const
{
    return index_number.is_set
	|| mpls_label.is_set
	|| prepend_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::has_operation() const
{
    return is_set(operation)
	|| is_set(index_number.operation)
	|| is_set(mpls_label.operation)
	|| is_set(prepend_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[index-number='" <<index_number <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_number.is_set || is_set(index_number.operation)) leaf_name_data.push_back(index_number.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (prepend_type.is_set || is_set(prepend_type.operation)) leaf_name_data.push_back(prepend_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index-number")
    {
        index_number = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "prepend-type")
    {
        prepend_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::Invalidation()
    :
    invalidation_timer{YType::uint32, "invalidation-timer"},
    invalidation_timer_expire_type{YType::enumeration, "invalidation-timer-expire-type"}
{
    yang_name = "invalidation"; yang_parent_name = "path-selection";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::has_data() const
{
    return invalidation_timer.is_set
	|| invalidation_timer_expire_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::has_operation() const
{
    return is_set(operation)
	|| is_set(invalidation_timer.operation)
	|| is_set(invalidation_timer_expire_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalidation' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalidation_timer.is_set || is_set(invalidation_timer.operation)) leaf_name_data.push_back(invalidation_timer.get_name_leafdata());
    if (invalidation_timer_expire_type.is_set || is_set(invalidation_timer_expire_type.operation)) leaf_name_data.push_back(invalidation_timer_expire_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "invalidation-timer")
    {
        invalidation_timer = value;
    }
    if(value_path == "invalidation-timer-expire-type")
    {
        invalidation_timer_expire_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Pce()
    :
    enable{YType::empty, "enable"}
    	,
    bidirectional(nullptr) // presence node
	,disjoint_path(nullptr) // presence node
{
    yang_name = "pce"; yang_parent_name = "p2p-te-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::~Pce()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::has_data() const
{
    return enable.is_set
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pce' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidirectional")
    {
        if(bidirectional != nullptr)
        {
            children["bidirectional"] = bidirectional;
        }
        else
        {
            bidirectional = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional>();
            bidirectional->parent = this;
            children["bidirectional"] = bidirectional;
        }
        return children.at("bidirectional");
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path != nullptr)
        {
            children["disjoint-path"] = disjoint_path;
        }
        else
        {
            disjoint_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath>();
            disjoint_path->parent = this;
            children["disjoint-path"] = disjoint_path;
        }
        return children.at("disjoint-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::get_children()
{
    if(children.find("bidirectional") == children.end())
    {
        if(bidirectional != nullptr)
        {
            children["bidirectional"] = bidirectional;
        }
    }

    if(children.find("disjoint-path") == children.end())
    {
        if(disjoint_path != nullptr)
        {
            children["disjoint-path"] = disjoint_path;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::Bidirectional()
    :
    bd_group_id{YType::uint32, "bd-group-id"},
    bd_source_address{YType::str, "bd-source-address"}
{
    yang_name = "bidirectional"; yang_parent_name = "pce";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::~Bidirectional()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::has_data() const
{
    return bd_group_id.is_set
	|| bd_source_address.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_group_id.operation)
	|| is_set(bd_source_address.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bidirectional' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_id.is_set || is_set(bd_group_id.operation)) leaf_name_data.push_back(bd_group_id.get_name_leafdata());
    if (bd_source_address.is_set || is_set(bd_source_address.operation)) leaf_name_data.push_back(bd_source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-group-id")
    {
        bd_group_id = value;
    }
    if(value_path == "bd-source-address")
    {
        bd_source_address = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::DisjointPath()
    :
    dp_group_id{YType::uint32, "dp-group-id"},
    dp_source_address{YType::str, "dp-source-address"},
    dp_type{YType::uint32, "dp-type"}
{
    yang_name = "disjoint-path"; yang_parent_name = "pce";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::~DisjointPath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::has_data() const
{
    return dp_group_id.is_set
	|| dp_source_address.is_set
	|| dp_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::has_operation() const
{
    return is_set(operation)
	|| is_set(dp_group_id.operation)
	|| is_set(dp_source_address.operation)
	|| is_set(dp_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DisjointPath' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_group_id.is_set || is_set(dp_group_id.operation)) leaf_name_data.push_back(dp_group_id.get_name_leafdata());
    if (dp_source_address.is_set || is_set(dp_source_address.operation)) leaf_name_data.push_back(dp_source_address.get_name_leafdata());
    if (dp_type.is_set || is_set(dp_type.operation)) leaf_name_data.push_back(dp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dp-group-id")
    {
        dp_group_id = value;
    }
    if(value_path == "dp-source-address")
    {
        dp_source_address = value;
    }
    if(value_path == "dp-type")
    {
        dp_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity-mask"; yang_parent_name = "p2p-te-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(mask.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMask' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"}
{
    yang_name = "logging"; yang_parent_name = "p2p-te-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| bfd_state_message.is_set
	|| insufficient_bw_message.is_set
	|| lsp_switch_over_change_message.is_set
	|| pcalc_failure_message.is_set
	|| record_route_messsage.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(bandwidth_change_message.operation)
	|| is_set(bfd_state_message.operation)
	|| is_set(insufficient_bw_message.operation)
	|| is_set(lsp_switch_over_change_message.operation)
	|| is_set(pcalc_failure_message.operation)
	|| is_set(record_route_messsage.operation)
	|| is_set(reoptimize_attempts_message.operation)
	|| is_set(reoptimized_message.operation)
	|| is_set(reroute_messsage.operation)
	|| is_set(state_message.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.operation)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.operation)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.operation)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.operation)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.operation)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.operation)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.operation)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.operation)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.operation)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.operation)) leaf_name_data.push_back(state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
    }
    if(value_path == "state-message")
    {
        state_message = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{
    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "p2p-te-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::get_children()
{
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityType' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity1{YType::str, "affinity1"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity1.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

const Enum::YLeaf MplsTeBackupBandwidthClassEnum::class0 {0, "class0"};
const Enum::YLeaf MplsTeBackupBandwidthClassEnum::class1 {1, "class1"};
const Enum::YLeaf MplsTeBackupBandwidthClassEnum::any_class {9, "any-class"};

const Enum::YLeaf SrPrependEnum::none_type {0, "none-type"};
const Enum::YLeaf SrPrependEnum::next_label {1, "next-label"};
const Enum::YLeaf SrPrependEnum::bgp_n_hop {2, "bgp-n-hop"};

const Enum::YLeaf MplsTePathComputationMethodEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathComputationMethodEnum::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathComputationMethodEnum::pce {2, "pce"};
const Enum::YLeaf MplsTePathComputationMethodEnum::explicit_ {3, "explicit"};

const Enum::YLeaf OtnDestinationEnum::number_ed {0, "number-ed"};
const Enum::YLeaf OtnDestinationEnum::un_number_ed {1, "un-number-ed"};

const Enum::YLeaf MplsTeSwitchingCapEnum::psc1 {1, "psc1"};
const Enum::YLeaf MplsTeSwitchingCapEnum::lsc {150, "lsc"};
const Enum::YLeaf MplsTeSwitchingCapEnum::fsc {200, "fsc"};

const Enum::YLeaf MplsTeBfdSessionDownActionEnum::re_setup {1, "re-setup"};

const Enum::YLeaf RoutePriorityRoleEnum::route_priority_role_head_back_up {0, "route-priority-role-head-back-up"};
const Enum::YLeaf RoutePriorityRoleEnum::route_priority_role_head_primary {1, "route-priority-role-head-primary"};
const Enum::YLeaf RoutePriorityRoleEnum::route_priority_role_middle {2, "route-priority-role-middle"};

const Enum::YLeaf MplsTebfdSessionEnum::regular_bfd {1, "regular-bfd"};
const Enum::YLeaf MplsTebfdSessionEnum::sbfd {2, "sbfd"};
const Enum::YLeaf MplsTebfdSessionEnum::redundant_sbfd {3, "redundant-sbfd"};

const Enum::YLeaf MplsTeLogFrrProtectionEnum::frr_active_primary {1, "frr-active-primary"};
const Enum::YLeaf MplsTeLogFrrProtectionEnum::backup {256, "backup"};
const Enum::YLeaf MplsTeLogFrrProtectionEnum::frr_ready_primary {512, "frr-ready-primary"};
const Enum::YLeaf MplsTeLogFrrProtectionEnum::primary {513, "primary"};
const Enum::YLeaf MplsTeLogFrrProtectionEnum::all {769, "all"};

const Enum::YLeaf MplsTeTunnelAffinityEnum::include {1, "include"};
const Enum::YLeaf MplsTeTunnelAffinityEnum::include_strict {2, "include-strict"};
const Enum::YLeaf MplsTeTunnelAffinityEnum::exclude {3, "exclude"};
const Enum::YLeaf MplsTeTunnelAffinityEnum::exclude_all {4, "exclude-all"};
const Enum::YLeaf MplsTeTunnelAffinityEnum::ignore {5, "ignore"};

const Enum::YLeaf IetfModeEnum::standard {3, "standard"};

const Enum::YLeaf MplsTePathOptionPropertyEnum::none {0, "none"};
const Enum::YLeaf MplsTePathOptionPropertyEnum::lockdown {1, "lockdown"};
const Enum::YLeaf MplsTePathOptionPropertyEnum::verbatim {4, "verbatim"};
const Enum::YLeaf MplsTePathOptionPropertyEnum::pce {8, "pce"};
const Enum::YLeaf MplsTePathOptionPropertyEnum::segment_routing {16, "segment-routing"};

const Enum::YLeaf GmplsttiModeEnum::sm {1, "sm"};
const Enum::YLeaf GmplsttiModeEnum::pm {2, "pm"};
const Enum::YLeaf GmplsttiModeEnum::tcm {3, "tcm"};

const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpireEnum::tunnel_action_tear {1, "tunnel-action-tear"};
const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpireEnum::tunnel_action_drop {2, "tunnel-action-drop"};

const Enum::YLeaf MplsTeOtnApsProtectionEnum::Y_1plus1_unidir_no_aps {4, "1plus1-unidir-no-aps"};
const Enum::YLeaf MplsTeOtnApsProtectionEnum::Y_1plus1_unidir_aps {8, "1plus1-unidir-aps"};
const Enum::YLeaf MplsTeOtnApsProtectionEnum::Y_1plus1_bdir_aps {16, "1plus1-bdir-aps"};

const Enum::YLeaf MplsTeSwitchingEncodingEnum::packet {1, "packet"};
const Enum::YLeaf MplsTeSwitchingEncodingEnum::ethernet {2, "ethernet"};
const Enum::YLeaf MplsTeSwitchingEncodingEnum::sondet_sdh {5, "sondet-sdh"};

const Enum::YLeaf MplsTeSigNameOptionEnum::none {0, "none"};
const Enum::YLeaf MplsTeSigNameOptionEnum::address {1, "address"};
const Enum::YLeaf MplsTeSigNameOptionEnum::name {2, "name"};

const Enum::YLeaf OtnProtectionSwitchLockoutEnum::none {0, "none"};
const Enum::YLeaf OtnProtectionSwitchLockoutEnum::working {1, "working"};

const Enum::YLeaf MplsTeTunnelIdEnum::auto_ {0, "auto"};
const Enum::YLeaf MplsTeTunnelIdEnum::explicit_ {1, "explicit"};

const Enum::YLeaf MplsTeAffinityValueEnum::hex_value {1, "hex-value"};
const Enum::YLeaf MplsTeAffinityValueEnum::bit_position {2, "bit-position"};

const Enum::YLeaf OtnStaticUniEnum::unknown {0, "unknown"};
const Enum::YLeaf OtnStaticUniEnum::xc {1, "xc"};
const Enum::YLeaf OtnStaticUniEnum::termination {2, "termination"};

const Enum::YLeaf MplsTeOtnSncModeEnum::snc_n {1, "snc-n"};
const Enum::YLeaf MplsTeOtnSncModeEnum::snc_i {2, "snc-i"};
const Enum::YLeaf MplsTeOtnSncModeEnum::snc_s {3, "snc-s"};

const Enum::YLeaf OtnPayloadEnum::unknown {0, "unknown"};
const Enum::YLeaf OtnPayloadEnum::bmp {50, "bmp"};
const Enum::YLeaf OtnPayloadEnum::gfp_f {54, "gfp-f"};
const Enum::YLeaf OtnPayloadEnum::gmp {55, "gmp"};
const Enum::YLeaf OtnPayloadEnum::gfp_f_ext {70, "gfp-f-ext"};

const Enum::YLeaf OspfAreaModeEnum::ospf_int {0, "ospf-int"};
const Enum::YLeaf OspfAreaModeEnum::ospfip_addr {1, "ospfip-addr"};

const Enum::YLeaf MplsTeIgpProtocolEnum::none {0, "none"};
const Enum::YLeaf MplsTeIgpProtocolEnum::isis {1, "isis"};
const Enum::YLeaf MplsTeIgpProtocolEnum::ospf {2, "ospf"};

const Enum::YLeaf MplsTePathSelectionTiebreakerEnum::min_fill {1, "min-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreakerEnum::max_fill {2, "max-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreakerEnum::random {3, "random"};

const Enum::YLeaf MplsTePathOptionEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathOptionEnum::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathOptionEnum::explicit_name {3, "explicit-name"};
const Enum::YLeaf MplsTePathOptionEnum::explicit_number {4, "explicit-number"};
const Enum::YLeaf MplsTePathOptionEnum::no_ero {5, "no-ero"};
const Enum::YLeaf MplsTePathOptionEnum::sr {6, "sr"};

const Enum::YLeaf PathInvalidationActionEnum::tear {1, "tear"};
const Enum::YLeaf PathInvalidationActionEnum::drop {2, "drop"};

const Enum::YLeaf OtnSignaledBandwidthEnum::odu1 {1, "odu1"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu2 {2, "odu2"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu3 {3, "odu3"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu4 {4, "odu4"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu0 {10, "odu0"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu2e {11, "odu2e"};
const Enum::YLeaf OtnSignaledBandwidthEnum::od_uflex_cbr {20, "od-uflex-cbr"};
const Enum::YLeaf OtnSignaledBandwidthEnum::od_uflex_gfp_resize {21, "od-uflex-gfp-resize"};
const Enum::YLeaf OtnSignaledBandwidthEnum::od_uflex_gfp_not_resize {22, "od-uflex-gfp-not-resize"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu1e {23, "odu1e"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu1f {24, "odu1f"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu2f {25, "odu2f"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu3e1 {26, "odu3e1"};
const Enum::YLeaf OtnSignaledBandwidthEnum::odu3e2 {27, "odu3e2"};

const Enum::YLeaf MplsTeAutorouteMetricEnum::relative {1, "relative"};
const Enum::YLeaf MplsTeAutorouteMetricEnum::absolute {2, "absolute"};
const Enum::YLeaf MplsTeAutorouteMetricEnum::constant {3, "constant"};

const Enum::YLeaf BindingSegmentIdEnum::any_label {1, "any-label"};
const Enum::YLeaf BindingSegmentIdEnum::specified_label {2, "specified-label"};

const Enum::YLeaf MplsTesrlgExcludeEnum::mandatory {1, "mandatory"};
const Enum::YLeaf MplsTesrlgExcludeEnum::preferred {2, "preferred"};
const Enum::YLeaf MplsTesrlgExcludeEnum::weighted {3, "weighted"};

const Enum::YLeaf MplsTeSignaledLabelEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTeSignaledLabelEnum::dwdm {1, "dwdm"};

const Enum::YLeaf BandwidthConstraintEnum::bandwidth_constraint_maximum_allocation_model {1, "bandwidth-constraint-maximum-allocation-model"};

const Enum::YLeaf MplsTeSwitchingEncodeEnum::none {0, "none"};
const Enum::YLeaf MplsTeSwitchingEncodeEnum::packet {1, "packet"};
const Enum::YLeaf MplsTeSwitchingEncodeEnum::ethernet {2, "ethernet"};
const Enum::YLeaf MplsTeSwitchingEncodeEnum::sondet_sdh {5, "sondet-sdh"};

const Enum::YLeaf MplsTePathSelectionMetricEnum::igp {1, "igp"};
const Enum::YLeaf MplsTePathSelectionMetricEnum::te {2, "te"};
const Enum::YLeaf MplsTePathSelectionMetricEnum::delay {4, "delay"};

const Enum::YLeaf MplsTePathOptionProtectionEnum::active {0, "active"};
const Enum::YLeaf MplsTePathOptionProtectionEnum::protecting {1, "protecting"};

const Enum::YLeaf OtnSignaledBandwidthFlexFramingEnum::cbr {20, "cbr"};
const Enum::YLeaf OtnSignaledBandwidthFlexFramingEnum::framed_gfp_fixed {21, "framed-gfp-fixed"};
const Enum::YLeaf OtnSignaledBandwidthFlexFramingEnum::framed_gfp_resize {22, "framed-gfp-resize"};

const Enum::YLeaf MplsTeBandwidthLimitEnum::unlimited {64, "unlimited"};
const Enum::YLeaf MplsTeBandwidthLimitEnum::limited {128, "limited"};

const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::adj_unprotected {1, "adj-unprotected"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum::adj_protected {2, "adj-protected"};

const Enum::YLeaf LinkNextHopEnum::none {1, "none"};
const Enum::YLeaf LinkNextHopEnum::ipv4_address {2, "ipv4-address"};

const Enum::YLeaf MplsLcacFloodingIgpEnum::ospf {0, "ospf"};

const Enum::YLeaf BfdReversePathEnum::bfd_reverse_path_binding_label {1, "bfd-reverse-path-binding-label"};

const Enum::YLeaf MplsTeOtnApsRestorationStyleEnum::keep_failed_lsp {1, "keep-failed-lsp"};
const Enum::YLeaf MplsTeOtnApsRestorationStyleEnum::delete_failed_lsp {2, "delete-failed-lsp"};

const Enum::YLeaf MplsTeBandwidthDsteEnum::standard_dste {0, "standard-dste"};
const Enum::YLeaf MplsTeBandwidthDsteEnum::pre_standard_dste {1, "pre-standard-dste"};

const Enum::YLeaf MplsTePathDiversityConformanceEnum::strict {0, "strict"};
const Enum::YLeaf MplsTePathDiversityConformanceEnum::best_effort {1, "best-effort"};

const Enum::YLeaf MplsTeBackupBandwidthPoolEnum::any_pool {1, "any-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPoolEnum::global_pool {2, "global-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPoolEnum::sub_pool {4, "sub-pool"};

const Enum::YLeaf MplsTeOtnApsProtectionModeEnum::revertive {1, "revertive"};
const Enum::YLeaf MplsTeOtnApsProtectionModeEnum::non_revertive {2, "non-revertive"};

const Enum::YLeaf MplsTeSwitchingIndexEnum::link {255, "link"};

const Enum::YLeaf MplsTeConfigTunnelEnum::p2p {0, "p2p"};
const Enum::YLeaf MplsTeConfigTunnelEnum::p2mp {1, "p2mp"};


}
}

