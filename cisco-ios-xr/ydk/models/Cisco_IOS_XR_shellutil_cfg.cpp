
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_shellutil_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_shellutil_cfg {

HostNames::HostNames()
    :
    	host_name{YType::str, "host-name"}
{
    yang_name = "host-names"; yang_parent_name = "Cisco-IOS-XR-shellutil-cfg";
}

HostNames::~HostNames()
{
}

bool HostNames::has_data() const
{
    return host_name.is_set;
}

bool HostNames::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation);
}

std::string HostNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-cfg:host-names";

    return path_buffer.str();

}

EntityPath HostNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HostNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & HostNames::get_children()
{
    return children;
}

void HostNames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
}

std::unique_ptr<Entity> HostNames::clone_ptr()
{
    return std::make_unique<HostNames>();
}


}
}

