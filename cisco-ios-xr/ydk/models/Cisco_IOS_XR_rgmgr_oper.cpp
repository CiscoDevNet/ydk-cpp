
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_rgmgr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_rgmgr_oper {

RedundancyGroupManager::Controllers::Controller::Controller()
    :
    	controller_name{YType::str, "controller-name"},
	 backup_interface_handle{YType::str, "backup-interface-handle"},
	 backup_interface_name{YType::str, "backup-interface-name"},
	 backup_interface_next_hop_ip_address{YType::str, "backup-interface-next-hop-ip-address"},
	 controller_handle{YType::str, "controller-handle"},
	 controller_name_xr{YType::str, "controller-name-xr"},
	 inter_chassis_group_state{YType::str, "inter-chassis-group-state"},
	 multi_router_aps_group_number{YType::str, "multi-router-aps-group-number"}
{
    yang_name = "controller"; yang_parent_name = "controllers";
}

RedundancyGroupManager::Controllers::Controller::~Controller()
{
}

bool RedundancyGroupManager::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| backup_interface_handle.is_set
	|| backup_interface_name.is_set
	|| backup_interface_next_hop_ip_address.is_set
	|| controller_handle.is_set
	|| controller_name_xr.is_set
	|| inter_chassis_group_state.is_set
	|| multi_router_aps_group_number.is_set;
}

bool RedundancyGroupManager::Controllers::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_name.operation)
	|| is_set(backup_interface_handle.operation)
	|| is_set(backup_interface_name.operation)
	|| is_set(backup_interface_next_hop_ip_address.operation)
	|| is_set(controller_handle.operation)
	|| is_set(controller_name_xr.operation)
	|| is_set(inter_chassis_group_state.operation)
	|| is_set(multi_router_aps_group_number.operation);
}

std::string RedundancyGroupManager::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Controllers::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-oper:redundancy-group-manager/controllers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.operation)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (backup_interface_handle.is_set || is_set(backup_interface_handle.operation)) leaf_name_data.push_back(backup_interface_handle.get_name_leafdata());
    if (backup_interface_name.is_set || is_set(backup_interface_name.operation)) leaf_name_data.push_back(backup_interface_name.get_name_leafdata());
    if (backup_interface_next_hop_ip_address.is_set || is_set(backup_interface_next_hop_ip_address.operation)) leaf_name_data.push_back(backup_interface_next_hop_ip_address.get_name_leafdata());
    if (controller_handle.is_set || is_set(controller_handle.operation)) leaf_name_data.push_back(controller_handle.get_name_leafdata());
    if (controller_name_xr.is_set || is_set(controller_name_xr.operation)) leaf_name_data.push_back(controller_name_xr.get_name_leafdata());
    if (inter_chassis_group_state.is_set || is_set(inter_chassis_group_state.operation)) leaf_name_data.push_back(inter_chassis_group_state.get_name_leafdata());
    if (multi_router_aps_group_number.is_set || is_set(multi_router_aps_group_number.operation)) leaf_name_data.push_back(multi_router_aps_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RedundancyGroupManager::Controllers::Controller::get_children()
{
    return children;
}

void RedundancyGroupManager::Controllers::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
    }
    if(value_path == "backup-interface-handle")
    {
        backup_interface_handle = value;
    }
    if(value_path == "backup-interface-name")
    {
        backup_interface_name = value;
    }
    if(value_path == "backup-interface-next-hop-ip-address")
    {
        backup_interface_next_hop_ip_address = value;
    }
    if(value_path == "controller-handle")
    {
        controller_handle = value;
    }
    if(value_path == "controller-name-xr")
    {
        controller_name_xr = value;
    }
    if(value_path == "inter-chassis-group-state")
    {
        inter_chassis_group_state = value;
    }
    if(value_path == "multi-router-aps-group-number")
    {
        multi_router_aps_group_number = value;
    }
}

RedundancyGroupManager::Controllers::Controllers()
{
    yang_name = "controllers"; yang_parent_name = "redundancy-group-manager";
}

RedundancyGroupManager::Controllers::~Controllers()
{
}

bool RedundancyGroupManager::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool RedundancyGroupManager::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RedundancyGroupManager::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Controllers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-oper:redundancy-group-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RedundancyGroupManager::Controllers::Controller>();
        c->parent = this;
        controller.push_back(std::move(c));
        children[segment_path] = controller.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Controllers::get_children()
{
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Controllers::set_value(const std::string & value_path, std::string value)
{
}

RedundancyGroupManager::RedundancyGroupManager()
    :
    controllers(std::make_unique<RedundancyGroupManager::Controllers>())
{
    controllers->parent = this;
    children["controllers"] = controllers.get();

    yang_name = "redundancy-group-manager"; yang_parent_name = "Cisco-IOS-XR-rgmgr-oper";
}

RedundancyGroupManager::~RedundancyGroupManager()
{
}

bool RedundancyGroupManager::has_data() const
{
    return (controllers !=  nullptr && controllers->has_data());
}

bool RedundancyGroupManager::has_operation() const
{
    return is_set(operation)
	|| (controllers !=  nullptr && is_set(controllers->operation));
}

std::string RedundancyGroupManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-oper:redundancy-group-manager";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["controllers"] = controllers.get();
        }
        else
        {
            controllers = std::make_unique<RedundancyGroupManager::Controllers>();
            controllers->parent = this;
            children["controllers"] = controllers.get();
        }
        return children.at("controllers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::get_children()
{
    if(children.find("controllers") == children.end())
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers.get();
        }
    }

    return children;
}

void RedundancyGroupManager::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> RedundancyGroupManager::clone_ptr()
{
    return std::make_unique<RedundancyGroupManager>();
}


}
}

