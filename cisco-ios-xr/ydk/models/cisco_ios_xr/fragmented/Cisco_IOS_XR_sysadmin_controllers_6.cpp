
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {

Controller::Switch::Oper::PortState::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::PortState::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::PortState::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::PortState::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::PortState::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::PortState::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::PortState::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::PortState::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Trunk()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "trunk"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Trunk::~Trunk()
{
}

bool Controller::Switch::Oper::Trunk::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Trunk::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Trunk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Trunk::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    trunk_member_count{YType::uint32, "trunk-member-count"},
    trunk_name{YType::str, "trunk-name"}
        ,
    trunk_member_port_iter(this, {"trunk_member_port"})
{

    yang_name = "location"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Trunk::Location::~Location()
{
}

bool Controller::Switch::Oper::Trunk::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trunk_member_port_iter.len(); index++)
    {
        if(trunk_member_port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| trunk_member_count.is_set
	|| trunk_name.is_set;
}

bool Controller::Switch::Oper::Trunk::Location::has_operation() const
{
    for (std::size_t index=0; index<trunk_member_port_iter.len(); index++)
    {
        if(trunk_member_port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(trunk_member_count.yfilter)
	|| ydk::is_set(trunk_name.yfilter);
}

std::string Controller::Switch::Oper::Trunk::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/trunk/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trunk::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (trunk_member_count.is_set || is_set(trunk_member_count.yfilter)) leaf_name_data.push_back(trunk_member_count.get_name_leafdata());
    if (trunk_name.is_set || is_set(trunk_name.yfilter)) leaf_name_data.push_back(trunk_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Trunk::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trunk-member-port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter>();
        c->parent = this;
        trunk_member_port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Trunk::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trunk_member_port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Trunk::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-member-count")
    {
        trunk_member_count = value;
        trunk_member_count.value_namespace = name_space;
        trunk_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-name")
    {
        trunk_name = value;
        trunk_name.value_namespace = name_space;
        trunk_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trunk::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "trunk-member-count")
    {
        trunk_member_count.yfilter = yfilter;
    }
    if(value_path == "trunk-name")
    {
        trunk_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trunk::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-member-port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "trunk-member-count" || name == "trunk-name")
        return true;
    return false;
}

Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::TrunkMemberPortIter()
    :
    trunk_member_port{YType::uint32, "trunk-member-port"},
    trunk_member_status{YType::enumeration, "trunk-member-status"}
{

    yang_name = "trunk-member-port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::~TrunkMemberPortIter()
{
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_data() const
{
    if (is_presence_container) return true;
    return trunk_member_port.is_set
	|| trunk_member_status.is_set;
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk_member_port.yfilter)
	|| ydk::is_set(trunk_member_status.yfilter);
}

std::string Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk-member-port-iter";
    ADD_KEY_TOKEN(trunk_member_port, "trunk-member-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk_member_port.is_set || is_set(trunk_member_port.yfilter)) leaf_name_data.push_back(trunk_member_port.get_name_leafdata());
    if (trunk_member_status.is_set || is_set(trunk_member_status.yfilter)) leaf_name_data.push_back(trunk_member_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk-member-port")
    {
        trunk_member_port = value;
        trunk_member_port.value_namespace = name_space;
        trunk_member_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-member-status")
    {
        trunk_member_status = value;
        trunk_member_status.value_namespace = name_space;
        trunk_member_status.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk-member-port")
    {
        trunk_member_port.yfilter = yfilter;
    }
    if(value_path == "trunk-member-status")
    {
        trunk_member_status.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-member-port" || name == "trunk-member-status")
        return true;
    return false;
}

Controller::FabricAction::FabricAction()
    :
    fabric(std::make_shared<Controller::FabricAction::Fabric>())
{
    fabric->parent = this;

    yang_name = "fabric_action"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::FabricAction::~FabricAction()
{
}

bool Controller::FabricAction::has_data() const
{
    if (is_presence_container) return true;
    return (fabric !=  nullptr && fabric->has_data());
}

bool Controller::FabricAction::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation());
}

std::string Controller::FabricAction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric_action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::FabricAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Controller::FabricAction::Fabric>();
        }
        return fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::FabricAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fabric != nullptr)
    {
        children["fabric"] = fabric;
    }

    return children;
}

void Controller::FabricAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric")
        return true;
    return false;
}

Controller::FabricAction::Fabric::Fabric()
    :
    ppu(std::make_shared<Controller::FabricAction::Fabric::Ppu>())
{
    ppu->parent = this;

    yang_name = "fabric"; yang_parent_name = "fabric_action"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::FabricAction::Fabric::~Fabric()
{
}

bool Controller::FabricAction::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (ppu !=  nullptr && ppu->has_data());
}

bool Controller::FabricAction::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (ppu !=  nullptr && ppu->has_operation());
}

std::string Controller::FabricAction::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric_action/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::FabricAction::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppu")
    {
        if(ppu == nullptr)
        {
            ppu = std::make_shared<Controller::FabricAction::Fabric::Ppu>();
        }
        return ppu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::FabricAction::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ppu != nullptr)
    {
        children["ppu"] = ppu;
    }

    return children;
}

void Controller::FabricAction::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppu")
        return true;
    return false;
}

Controller::FabricAction::Fabric::Ppu::Ppu()
{

    yang_name = "ppu"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::FabricAction::Fabric::Ppu::~Ppu()
{
}

bool Controller::FabricAction::Fabric::Ppu::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Controller::FabricAction::Fabric::Ppu::has_operation() const
{
    return is_set(yfilter);
}

std::string Controller::FabricAction::Fabric::Ppu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/fabric_action/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::FabricAction::Fabric::Ppu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::FabricAction::Fabric::Ppu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::FabricAction::Fabric::Ppu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::FabricAction::Fabric::Ppu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::FabricAction::Fabric::Ppu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::FabricAction::Fabric::Ppu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::FabricAction::Fabric::Ppu::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

