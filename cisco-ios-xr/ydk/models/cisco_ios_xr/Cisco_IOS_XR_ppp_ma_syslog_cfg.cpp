
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ppp_ma_syslog_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ppp_ma_syslog_cfg {

Ppp::Ppp()
    :
    syslog(std::make_shared<Ppp::Syslog>())
{
    syslog->parent = this;
    children["syslog"] = syslog;

    yang_name = "ppp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-syslog-cfg";
}

Ppp::~Ppp()
{
}

bool Ppp::has_data() const
{
    return (syslog !=  nullptr && syslog->has_data());
}

bool Ppp::has_operation() const
{
    return is_set(operation)
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-syslog-cfg:ppp";

    return path_buffer.str();

}

EntityPath Ppp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "syslog")
    {
        if(syslog != nullptr)
        {
            children["syslog"] = syslog;
        }
        else
        {
            syslog = std::make_shared<Ppp::Syslog>();
            syslog->parent = this;
            children["syslog"] = syslog;
        }
        return children.at("syslog");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ppp::get_children()
{
    if(children.find("syslog") == children.end())
    {
        if(syslog != nullptr)
        {
            children["syslog"] = syslog;
        }
    }

    return children;
}

void Ppp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ppp::clone_ptr() const
{
    return std::make_shared<Ppp>();
}

std::string Ppp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ppp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ppp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ppp::Syslog::Syslog()
    :
    enable_session_status{YType::empty, "enable-session-status"}
{
    yang_name = "syslog"; yang_parent_name = "ppp";
}

Ppp::Syslog::~Syslog()
{
}

bool Ppp::Syslog::has_data() const
{
    return enable_session_status.is_set;
}

bool Ppp::Syslog::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_session_status.operation);
}

std::string Ppp::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

EntityPath Ppp::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ppp-ma-syslog-cfg:ppp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_session_status.is_set || is_set(enable_session_status.operation)) leaf_name_data.push_back(enable_session_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ppp::Syslog::get_children()
{
    return children;
}

void Ppp::Syslog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-session-status")
    {
        enable_session_status = value;
    }
}


}
}

