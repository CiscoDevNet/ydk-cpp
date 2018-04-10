
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_asr9k.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_asr9k {

Controller::Controller()
    :
    switch_(std::make_shared<Controller::Switch>())
{
    switch_->parent = this;

    yang_name = "controller"; yang_parent_name = "Cisco-IOS-XR-sysadmin-controllers-asr9k"; is_top_level_class = true; has_list_ancestor = false;
}

Controller::~Controller()
{
}

bool Controller::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Controller::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Controller::Switch>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Controller::clone_ptr() const
{
    return std::make_shared<Controller>();
}

std::string Controller::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Controller::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Controller::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Controller::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Controller::Switch::Switch()
    :
    oper(std::make_shared<Controller::Switch::Oper>())
{
    oper->parent = this;

    yang_name = "switch"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::~Switch()
{
}

bool Controller::Switch::has_data() const
{
    return (oper !=  nullptr && oper->has_data());
}

bool Controller::Switch::has_operation() const
{
    return is_set(yfilter)
	|| (oper !=  nullptr && oper->has_operation());
}

std::string Controller::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Controller::Switch::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    return children;
}

void Controller::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper")
        return true;
    return false;
}

Controller::Switch::Oper::Oper()
    :
    reachable(std::make_shared<Controller::Switch::Oper::Reachable>())
	,summary(std::make_shared<Controller::Switch::Oper::Summary>())
	,statistics(std::make_shared<Controller::Switch::Oper::Statistics>())
	,mac(std::make_shared<Controller::Switch::Oper::Mac>())
	,bridge(std::make_shared<Controller::Switch::Oper::Bridge>())
	,fdb(std::make_shared<Controller::Switch::Oper::Fdb>())
	,vlan(std::make_shared<Controller::Switch::Oper::Vlan>())
	,esd(std::make_shared<Controller::Switch::Oper::Esd>())
	,mgmt_agent(std::make_shared<Controller::Switch::Oper::MgmtAgent>())
	,sdr(std::make_shared<Controller::Switch::Oper::Sdr>())
	,port_state(std::make_shared<Controller::Switch::Oper::PortState>())
	,trunk(std::make_shared<Controller::Switch::Oper::Trunk>())
	,switch_debug_cont(std::make_shared<Controller::Switch::Oper::SwitchDebugCont>())
{
    reachable->parent = this;
    summary->parent = this;
    statistics->parent = this;
    mac->parent = this;
    bridge->parent = this;
    fdb->parent = this;
    vlan->parent = this;
    esd->parent = this;
    mgmt_agent->parent = this;
    sdr->parent = this;
    port_state->parent = this;
    trunk->parent = this;
    switch_debug_cont->parent = this;

    yang_name = "oper"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::~Oper()
{
}

bool Controller::Switch::Oper::has_data() const
{
    return (reachable !=  nullptr && reachable->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (bridge !=  nullptr && bridge->has_data())
	|| (fdb !=  nullptr && fdb->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (esd !=  nullptr && esd->has_data())
	|| (mgmt_agent !=  nullptr && mgmt_agent->has_data())
	|| (sdr !=  nullptr && sdr->has_data())
	|| (port_state !=  nullptr && port_state->has_data())
	|| (trunk !=  nullptr && trunk->has_data())
	|| (switch_debug_cont !=  nullptr && switch_debug_cont->has_data());
}

bool Controller::Switch::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (fdb !=  nullptr && fdb->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (esd !=  nullptr && esd->has_operation())
	|| (mgmt_agent !=  nullptr && mgmt_agent->has_operation())
	|| (sdr !=  nullptr && sdr->has_operation())
	|| (port_state !=  nullptr && port_state->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation())
	|| (switch_debug_cont !=  nullptr && switch_debug_cont->has_operation());
}

std::string Controller::Switch::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable")
    {
        if(reachable == nullptr)
        {
            reachable = std::make_shared<Controller::Switch::Oper::Reachable>();
        }
        return reachable;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Switch::Oper::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Controller::Switch::Oper::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Controller::Switch::Oper::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "fdb")
    {
        if(fdb == nullptr)
        {
            fdb = std::make_shared<Controller::Switch::Oper::Fdb>();
        }
        return fdb;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Controller::Switch::Oper::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "esd")
    {
        if(esd == nullptr)
        {
            esd = std::make_shared<Controller::Switch::Oper::Esd>();
        }
        return esd;
    }

    if(child_yang_name == "mgmt-agent")
    {
        if(mgmt_agent == nullptr)
        {
            mgmt_agent = std::make_shared<Controller::Switch::Oper::MgmtAgent>();
        }
        return mgmt_agent;
    }

    if(child_yang_name == "sdr")
    {
        if(sdr == nullptr)
        {
            sdr = std::make_shared<Controller::Switch::Oper::Sdr>();
        }
        return sdr;
    }

    if(child_yang_name == "port-state")
    {
        if(port_state == nullptr)
        {
            port_state = std::make_shared<Controller::Switch::Oper::PortState>();
        }
        return port_state;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Controller::Switch::Oper::Trunk>();
        }
        return trunk;
    }

    if(child_yang_name == "switch-debug-cont")
    {
        if(switch_debug_cont == nullptr)
        {
            switch_debug_cont = std::make_shared<Controller::Switch::Oper::SwitchDebugCont>();
        }
        return switch_debug_cont;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reachable != nullptr)
    {
        children["reachable"] = reachable;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(bridge != nullptr)
    {
        children["bridge"] = bridge;
    }

    if(fdb != nullptr)
    {
        children["fdb"] = fdb;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(esd != nullptr)
    {
        children["esd"] = esd;
    }

    if(mgmt_agent != nullptr)
    {
        children["mgmt-agent"] = mgmt_agent;
    }

    if(sdr != nullptr)
    {
        children["sdr"] = sdr;
    }

    if(port_state != nullptr)
    {
        children["port-state"] = port_state;
    }

    if(trunk != nullptr)
    {
        children["trunk"] = trunk;
    }

    if(switch_debug_cont != nullptr)
    {
        children["switch-debug-cont"] = switch_debug_cont;
    }

    return children;
}

void Controller::Switch::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "summary" || name == "statistics" || name == "mac" || name == "bridge" || name == "fdb" || name == "vlan" || name == "esd" || name == "mgmt-agent" || name == "sdr" || name == "port-state" || name == "trunk" || name == "switch-debug-cont")
        return true;
    return false;
}

Controller::Switch::Oper::Reachable::Reachable()
{

    yang_name = "reachable"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Reachable::~Reachable()
{
}

bool Controller::Switch::Oper::Reachable::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Reachable::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Reachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Reachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Reachable::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Reachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Reachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Reachable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Reachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Reachable::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "reachable"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Reachable::Location::~Location()
{
}

bool Controller::Switch::Oper::Reachable::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Reachable::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Reachable::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/reachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Reachable::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Reachable::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Reachable::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Reachable::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Reachable::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Reachable::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Reachable::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Summary()
{

    yang_name = "summary"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Summary::~Summary()
{
}

bool Controller::Switch::Oper::Summary::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Summary::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Summary::Location::~Location()
{
}

bool Controller::Switch::Oper::Summary::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Summary::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Summary::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Summary::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Summary::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    admin_state{YType::enumeration, "admin-state"},
    port_speed{YType::str, "port-speed"},
    protocol_state{YType::enumeration, "protocol-state"},
    forwarding{YType::enumeration, "forwarding"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Summary::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_data() const
{
    return port.is_set
	|| phys_state.is_set
	|| admin_state.is_set
	|| port_speed.is_set
	|| protocol_state.is_set
	|| forwarding.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(protocol_state.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Summary::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Summary::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (protocol_state.is_set || is_set(protocol_state.yfilter)) leaf_name_data.push_back(protocol_state.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Summary::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Summary::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Summary::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state")
    {
        protocol_state = value;
        protocol_state.value_namespace = name_space;
        protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Summary::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "protocol-state")
    {
        protocol_state.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Summary::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "phys-state" || name == "admin-state" || name == "port-speed" || name == "protocol-state" || name == "forwarding" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Statistics()
    :
    summary_statistics(std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics>())
	,detail(std::make_shared<Controller::Switch::Oper::Statistics::Detail>())
{
    summary_statistics->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Statistics::has_data() const
{
    return (summary_statistics !=  nullptr && summary_statistics->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Switch::Oper::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (summary_statistics !=  nullptr && summary_statistics->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Switch::Oper::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-statistics")
    {
        if(summary_statistics == nullptr)
        {
            summary_statistics = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics>();
        }
        return summary_statistics;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Switch::Oper::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary_statistics != nullptr)
    {
        children["summary-statistics"] = summary_statistics;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-statistics" || name == "detail")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::SummaryStatistics()
{

    yang_name = "summary-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::~SummaryStatistics()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
{

    yang_name = "location"; yang_parent_name = "summary-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/statistics/summary-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    state_changes{YType::uint32, "state-changes"},
    sw_sum_tx_packets{YType::uint64, "sw-sum-tx-packets"},
    sw_sum_rx_packets{YType::uint64, "sw-sum-rx-packets"},
    sw_sum_tx_drops_errors{YType::uint64, "sw-sum-tx-drops-errors"},
    sw_sum_rx_drops_errors{YType::uint64, "sw-sum-rx-drops-errors"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_data() const
{
    return port.is_set
	|| phys_state.is_set
	|| state_changes.is_set
	|| sw_sum_tx_packets.is_set
	|| sw_sum_rx_packets.is_set
	|| sw_sum_tx_drops_errors.is_set
	|| sw_sum_rx_drops_errors.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(sw_sum_tx_packets.yfilter)
	|| ydk::is_set(sw_sum_rx_packets.yfilter)
	|| ydk::is_set(sw_sum_tx_drops_errors.yfilter)
	|| ydk::is_set(sw_sum_rx_drops_errors.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (sw_sum_tx_packets.is_set || is_set(sw_sum_tx_packets.yfilter)) leaf_name_data.push_back(sw_sum_tx_packets.get_name_leafdata());
    if (sw_sum_rx_packets.is_set || is_set(sw_sum_rx_packets.yfilter)) leaf_name_data.push_back(sw_sum_rx_packets.get_name_leafdata());
    if (sw_sum_tx_drops_errors.is_set || is_set(sw_sum_tx_drops_errors.yfilter)) leaf_name_data.push_back(sw_sum_tx_drops_errors.get_name_leafdata());
    if (sw_sum_rx_drops_errors.is_set || is_set(sw_sum_rx_drops_errors.yfilter)) leaf_name_data.push_back(sw_sum_rx_drops_errors.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-tx-packets")
    {
        sw_sum_tx_packets = value;
        sw_sum_tx_packets.value_namespace = name_space;
        sw_sum_tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-rx-packets")
    {
        sw_sum_rx_packets = value;
        sw_sum_rx_packets.value_namespace = name_space;
        sw_sum_rx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-tx-drops-errors")
    {
        sw_sum_tx_drops_errors = value;
        sw_sum_tx_drops_errors.value_namespace = name_space;
        sw_sum_tx_drops_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-sum-rx-drops-errors")
    {
        sw_sum_rx_drops_errors = value;
        sw_sum_rx_drops_errors.value_namespace = name_space;
        sw_sum_rx_drops_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "sw-sum-tx-packets")
    {
        sw_sum_tx_packets.yfilter = yfilter;
    }
    if(value_path == "sw-sum-rx-packets")
    {
        sw_sum_rx_packets.yfilter = yfilter;
    }
    if(value_path == "sw-sum-tx-drops-errors")
    {
        sw_sum_tx_drops_errors.yfilter = yfilter;
    }
    if(value_path == "sw-sum-rx-drops-errors")
    {
        sw_sum_rx_drops_errors.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "phys-state" || name == "state-changes" || name == "sw-sum-tx-packets" || name == "sw-sum-rx-packets" || name == "sw-sum-tx-drops-errors" || name == "sw-sum-rx-drops-errors" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Detail()
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Statistics::Detail::~Detail()
{
}

bool Controller::Switch::Oper::Statistics::Detail::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Statistics::Detail::Location::~Location()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Statistics::Detail::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/statistics/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Statistics::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Statistics::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    port_speed{YType::str, "port-speed"},
    connects_to{YType::str, "connects-to"}
    	,
    counters(std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters>())
{
    counters->parent = this;

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_data() const
{
    return port.is_set
	|| phys_state.is_set
	|| port_speed.is_set
	|| connects_to.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(connects_to.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "port" || name == "phys-state" || name == "port-speed" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::Counters()
    :
    sw_det_rx_ucast_packets{YType::uint64, "sw-det-rx-ucast-packets"},
    sw_det_rx_mcast_packets{YType::uint64, "sw-det-rx-mcast-packets"},
    sw_det_rx_bcast_packets{YType::uint64, "sw-det-rx-bcast-packets"},
    sw_det_rx_flow_control{YType::uint64, "sw-det-rx-flow-control"},
    sw_det_rx_good_octets{YType::uint64, "sw-det-rx-good-octets"},
    sw_det_rx_bad_octets{YType::uint64, "sw-det-rx-bad-octets"},
    sw_det_rx_fifo_overrun{YType::uint64, "sw-det-rx-fifo-overrun"},
    sw_det_rx_undersize{YType::uint64, "sw-det-rx-undersize"},
    sw_det_rx_fragments{YType::uint64, "sw-det-rx-fragments"},
    sw_det_rx_oversize{YType::uint64, "sw-det-rx-oversize"},
    sw_det_rx_jabber{YType::uint64, "sw-det-rx-jabber"},
    sw_det_rx_errors{YType::uint64, "sw-det-rx-errors"},
    sw_det_rx_bad_crc{YType::uint64, "sw-det-rx-bad-crc"},
    sw_det_rx_collisions{YType::uint64, "sw-det-rx-collisions"},
    sw_det_rx_policing_drops{YType::uint64, "sw-det-rx-policing-drops"},
    sw_det_tx_ucast_packets{YType::uint64, "sw-det-tx-ucast-packets"},
    sw_det_tx_mcast_packets{YType::uint64, "sw-det-tx-mcast-packets"},
    sw_det_tx_bcast_packets{YType::uint64, "sw-det-tx-bcast-packets"},
    sw_det_tx_flow_control{YType::uint64, "sw-det-tx-flow-control"},
    sw_det_tx_good_octets{YType::uint64, "sw-det-tx-good-octets"},
    sw_det_tx_deferred{YType::uint64, "sw-det-tx-deferred"},
    sw_det_tx_fifo_unrun{YType::uint64, "sw-det-tx-fifo-unrun"},
    sw_det_tx_mult_collision{YType::uint64, "sw-det-tx-mult-collision"},
    sw_det_tx_excess_collision{YType::uint64, "sw-det-tx-excess-collision"},
    sw_det_tx_late_collisions{YType::uint64, "sw-det-tx-late-collisions"},
    sw_det_tx_policing_drops{YType::uint64, "sw-det-tx-policing-drops"},
    sw_det_txq_drops{YType::uint64, "sw-det-txq-drops"},
    sw_det_rxtx_packets_64{YType::uint64, "sw-det-rxtx-packets-64"},
    sw_det_rxtx_packets_65_127{YType::uint64, "sw-det-rxtx-packets-65-127"},
    sw_det_rxtx_packets_128_255{YType::uint64, "sw-det-rxtx-packets-128-255"},
    sw_det_rxtx_packets_256_511{YType::uint64, "sw-det-rxtx-packets-256-511"},
    sw_det_rxtx_packets_512_1023{YType::uint64, "sw-det-rxtx-packets-512-1023"},
    sw_det_rxtx_packets_1024_max{YType::uint64, "sw-det-rxtx-packets-1024-max"}
{

    yang_name = "counters"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::~Counters()
{
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_data() const
{
    return sw_det_rx_ucast_packets.is_set
	|| sw_det_rx_mcast_packets.is_set
	|| sw_det_rx_bcast_packets.is_set
	|| sw_det_rx_flow_control.is_set
	|| sw_det_rx_good_octets.is_set
	|| sw_det_rx_bad_octets.is_set
	|| sw_det_rx_fifo_overrun.is_set
	|| sw_det_rx_undersize.is_set
	|| sw_det_rx_fragments.is_set
	|| sw_det_rx_oversize.is_set
	|| sw_det_rx_jabber.is_set
	|| sw_det_rx_errors.is_set
	|| sw_det_rx_bad_crc.is_set
	|| sw_det_rx_collisions.is_set
	|| sw_det_rx_policing_drops.is_set
	|| sw_det_tx_ucast_packets.is_set
	|| sw_det_tx_mcast_packets.is_set
	|| sw_det_tx_bcast_packets.is_set
	|| sw_det_tx_flow_control.is_set
	|| sw_det_tx_good_octets.is_set
	|| sw_det_tx_deferred.is_set
	|| sw_det_tx_fifo_unrun.is_set
	|| sw_det_tx_mult_collision.is_set
	|| sw_det_tx_excess_collision.is_set
	|| sw_det_tx_late_collisions.is_set
	|| sw_det_tx_policing_drops.is_set
	|| sw_det_txq_drops.is_set
	|| sw_det_rxtx_packets_64.is_set
	|| sw_det_rxtx_packets_65_127.is_set
	|| sw_det_rxtx_packets_128_255.is_set
	|| sw_det_rxtx_packets_256_511.is_set
	|| sw_det_rxtx_packets_512_1023.is_set
	|| sw_det_rxtx_packets_1024_max.is_set;
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sw_det_rx_ucast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_mcast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_bcast_packets.yfilter)
	|| ydk::is_set(sw_det_rx_flow_control.yfilter)
	|| ydk::is_set(sw_det_rx_good_octets.yfilter)
	|| ydk::is_set(sw_det_rx_bad_octets.yfilter)
	|| ydk::is_set(sw_det_rx_fifo_overrun.yfilter)
	|| ydk::is_set(sw_det_rx_undersize.yfilter)
	|| ydk::is_set(sw_det_rx_fragments.yfilter)
	|| ydk::is_set(sw_det_rx_oversize.yfilter)
	|| ydk::is_set(sw_det_rx_jabber.yfilter)
	|| ydk::is_set(sw_det_rx_errors.yfilter)
	|| ydk::is_set(sw_det_rx_bad_crc.yfilter)
	|| ydk::is_set(sw_det_rx_collisions.yfilter)
	|| ydk::is_set(sw_det_rx_policing_drops.yfilter)
	|| ydk::is_set(sw_det_tx_ucast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_mcast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_bcast_packets.yfilter)
	|| ydk::is_set(sw_det_tx_flow_control.yfilter)
	|| ydk::is_set(sw_det_tx_good_octets.yfilter)
	|| ydk::is_set(sw_det_tx_deferred.yfilter)
	|| ydk::is_set(sw_det_tx_fifo_unrun.yfilter)
	|| ydk::is_set(sw_det_tx_mult_collision.yfilter)
	|| ydk::is_set(sw_det_tx_excess_collision.yfilter)
	|| ydk::is_set(sw_det_tx_late_collisions.yfilter)
	|| ydk::is_set(sw_det_tx_policing_drops.yfilter)
	|| ydk::is_set(sw_det_txq_drops.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_64.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_65_127.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_128_255.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_256_511.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_512_1023.yfilter)
	|| ydk::is_set(sw_det_rxtx_packets_1024_max.yfilter);
}

std::string Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sw_det_rx_ucast_packets.is_set || is_set(sw_det_rx_ucast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_ucast_packets.get_name_leafdata());
    if (sw_det_rx_mcast_packets.is_set || is_set(sw_det_rx_mcast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_mcast_packets.get_name_leafdata());
    if (sw_det_rx_bcast_packets.is_set || is_set(sw_det_rx_bcast_packets.yfilter)) leaf_name_data.push_back(sw_det_rx_bcast_packets.get_name_leafdata());
    if (sw_det_rx_flow_control.is_set || is_set(sw_det_rx_flow_control.yfilter)) leaf_name_data.push_back(sw_det_rx_flow_control.get_name_leafdata());
    if (sw_det_rx_good_octets.is_set || is_set(sw_det_rx_good_octets.yfilter)) leaf_name_data.push_back(sw_det_rx_good_octets.get_name_leafdata());
    if (sw_det_rx_bad_octets.is_set || is_set(sw_det_rx_bad_octets.yfilter)) leaf_name_data.push_back(sw_det_rx_bad_octets.get_name_leafdata());
    if (sw_det_rx_fifo_overrun.is_set || is_set(sw_det_rx_fifo_overrun.yfilter)) leaf_name_data.push_back(sw_det_rx_fifo_overrun.get_name_leafdata());
    if (sw_det_rx_undersize.is_set || is_set(sw_det_rx_undersize.yfilter)) leaf_name_data.push_back(sw_det_rx_undersize.get_name_leafdata());
    if (sw_det_rx_fragments.is_set || is_set(sw_det_rx_fragments.yfilter)) leaf_name_data.push_back(sw_det_rx_fragments.get_name_leafdata());
    if (sw_det_rx_oversize.is_set || is_set(sw_det_rx_oversize.yfilter)) leaf_name_data.push_back(sw_det_rx_oversize.get_name_leafdata());
    if (sw_det_rx_jabber.is_set || is_set(sw_det_rx_jabber.yfilter)) leaf_name_data.push_back(sw_det_rx_jabber.get_name_leafdata());
    if (sw_det_rx_errors.is_set || is_set(sw_det_rx_errors.yfilter)) leaf_name_data.push_back(sw_det_rx_errors.get_name_leafdata());
    if (sw_det_rx_bad_crc.is_set || is_set(sw_det_rx_bad_crc.yfilter)) leaf_name_data.push_back(sw_det_rx_bad_crc.get_name_leafdata());
    if (sw_det_rx_collisions.is_set || is_set(sw_det_rx_collisions.yfilter)) leaf_name_data.push_back(sw_det_rx_collisions.get_name_leafdata());
    if (sw_det_rx_policing_drops.is_set || is_set(sw_det_rx_policing_drops.yfilter)) leaf_name_data.push_back(sw_det_rx_policing_drops.get_name_leafdata());
    if (sw_det_tx_ucast_packets.is_set || is_set(sw_det_tx_ucast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_ucast_packets.get_name_leafdata());
    if (sw_det_tx_mcast_packets.is_set || is_set(sw_det_tx_mcast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_mcast_packets.get_name_leafdata());
    if (sw_det_tx_bcast_packets.is_set || is_set(sw_det_tx_bcast_packets.yfilter)) leaf_name_data.push_back(sw_det_tx_bcast_packets.get_name_leafdata());
    if (sw_det_tx_flow_control.is_set || is_set(sw_det_tx_flow_control.yfilter)) leaf_name_data.push_back(sw_det_tx_flow_control.get_name_leafdata());
    if (sw_det_tx_good_octets.is_set || is_set(sw_det_tx_good_octets.yfilter)) leaf_name_data.push_back(sw_det_tx_good_octets.get_name_leafdata());
    if (sw_det_tx_deferred.is_set || is_set(sw_det_tx_deferred.yfilter)) leaf_name_data.push_back(sw_det_tx_deferred.get_name_leafdata());
    if (sw_det_tx_fifo_unrun.is_set || is_set(sw_det_tx_fifo_unrun.yfilter)) leaf_name_data.push_back(sw_det_tx_fifo_unrun.get_name_leafdata());
    if (sw_det_tx_mult_collision.is_set || is_set(sw_det_tx_mult_collision.yfilter)) leaf_name_data.push_back(sw_det_tx_mult_collision.get_name_leafdata());
    if (sw_det_tx_excess_collision.is_set || is_set(sw_det_tx_excess_collision.yfilter)) leaf_name_data.push_back(sw_det_tx_excess_collision.get_name_leafdata());
    if (sw_det_tx_late_collisions.is_set || is_set(sw_det_tx_late_collisions.yfilter)) leaf_name_data.push_back(sw_det_tx_late_collisions.get_name_leafdata());
    if (sw_det_tx_policing_drops.is_set || is_set(sw_det_tx_policing_drops.yfilter)) leaf_name_data.push_back(sw_det_tx_policing_drops.get_name_leafdata());
    if (sw_det_txq_drops.is_set || is_set(sw_det_txq_drops.yfilter)) leaf_name_data.push_back(sw_det_txq_drops.get_name_leafdata());
    if (sw_det_rxtx_packets_64.is_set || is_set(sw_det_rxtx_packets_64.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_64.get_name_leafdata());
    if (sw_det_rxtx_packets_65_127.is_set || is_set(sw_det_rxtx_packets_65_127.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_65_127.get_name_leafdata());
    if (sw_det_rxtx_packets_128_255.is_set || is_set(sw_det_rxtx_packets_128_255.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_128_255.get_name_leafdata());
    if (sw_det_rxtx_packets_256_511.is_set || is_set(sw_det_rxtx_packets_256_511.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_256_511.get_name_leafdata());
    if (sw_det_rxtx_packets_512_1023.is_set || is_set(sw_det_rxtx_packets_512_1023.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_512_1023.get_name_leafdata());
    if (sw_det_rxtx_packets_1024_max.is_set || is_set(sw_det_rxtx_packets_1024_max.yfilter)) leaf_name_data.push_back(sw_det_rxtx_packets_1024_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sw-det-rx-ucast-packets")
    {
        sw_det_rx_ucast_packets = value;
        sw_det_rx_ucast_packets.value_namespace = name_space;
        sw_det_rx_ucast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-mcast-packets")
    {
        sw_det_rx_mcast_packets = value;
        sw_det_rx_mcast_packets.value_namespace = name_space;
        sw_det_rx_mcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bcast-packets")
    {
        sw_det_rx_bcast_packets = value;
        sw_det_rx_bcast_packets.value_namespace = name_space;
        sw_det_rx_bcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-flow-control")
    {
        sw_det_rx_flow_control = value;
        sw_det_rx_flow_control.value_namespace = name_space;
        sw_det_rx_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-good-octets")
    {
        sw_det_rx_good_octets = value;
        sw_det_rx_good_octets.value_namespace = name_space;
        sw_det_rx_good_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bad-octets")
    {
        sw_det_rx_bad_octets = value;
        sw_det_rx_bad_octets.value_namespace = name_space;
        sw_det_rx_bad_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-fifo-overrun")
    {
        sw_det_rx_fifo_overrun = value;
        sw_det_rx_fifo_overrun.value_namespace = name_space;
        sw_det_rx_fifo_overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-undersize")
    {
        sw_det_rx_undersize = value;
        sw_det_rx_undersize.value_namespace = name_space;
        sw_det_rx_undersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-fragments")
    {
        sw_det_rx_fragments = value;
        sw_det_rx_fragments.value_namespace = name_space;
        sw_det_rx_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-oversize")
    {
        sw_det_rx_oversize = value;
        sw_det_rx_oversize.value_namespace = name_space;
        sw_det_rx_oversize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-jabber")
    {
        sw_det_rx_jabber = value;
        sw_det_rx_jabber.value_namespace = name_space;
        sw_det_rx_jabber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-errors")
    {
        sw_det_rx_errors = value;
        sw_det_rx_errors.value_namespace = name_space;
        sw_det_rx_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-bad-crc")
    {
        sw_det_rx_bad_crc = value;
        sw_det_rx_bad_crc.value_namespace = name_space;
        sw_det_rx_bad_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-collisions")
    {
        sw_det_rx_collisions = value;
        sw_det_rx_collisions.value_namespace = name_space;
        sw_det_rx_collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rx-policing-drops")
    {
        sw_det_rx_policing_drops = value;
        sw_det_rx_policing_drops.value_namespace = name_space;
        sw_det_rx_policing_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-ucast-packets")
    {
        sw_det_tx_ucast_packets = value;
        sw_det_tx_ucast_packets.value_namespace = name_space;
        sw_det_tx_ucast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-mcast-packets")
    {
        sw_det_tx_mcast_packets = value;
        sw_det_tx_mcast_packets.value_namespace = name_space;
        sw_det_tx_mcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-bcast-packets")
    {
        sw_det_tx_bcast_packets = value;
        sw_det_tx_bcast_packets.value_namespace = name_space;
        sw_det_tx_bcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-flow-control")
    {
        sw_det_tx_flow_control = value;
        sw_det_tx_flow_control.value_namespace = name_space;
        sw_det_tx_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-good-octets")
    {
        sw_det_tx_good_octets = value;
        sw_det_tx_good_octets.value_namespace = name_space;
        sw_det_tx_good_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-deferred")
    {
        sw_det_tx_deferred = value;
        sw_det_tx_deferred.value_namespace = name_space;
        sw_det_tx_deferred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-fifo-unrun")
    {
        sw_det_tx_fifo_unrun = value;
        sw_det_tx_fifo_unrun.value_namespace = name_space;
        sw_det_tx_fifo_unrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-mult-collision")
    {
        sw_det_tx_mult_collision = value;
        sw_det_tx_mult_collision.value_namespace = name_space;
        sw_det_tx_mult_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-excess-collision")
    {
        sw_det_tx_excess_collision = value;
        sw_det_tx_excess_collision.value_namespace = name_space;
        sw_det_tx_excess_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-late-collisions")
    {
        sw_det_tx_late_collisions = value;
        sw_det_tx_late_collisions.value_namespace = name_space;
        sw_det_tx_late_collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-tx-policing-drops")
    {
        sw_det_tx_policing_drops = value;
        sw_det_tx_policing_drops.value_namespace = name_space;
        sw_det_tx_policing_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-txq-drops")
    {
        sw_det_txq_drops = value;
        sw_det_txq_drops.value_namespace = name_space;
        sw_det_txq_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-64")
    {
        sw_det_rxtx_packets_64 = value;
        sw_det_rxtx_packets_64.value_namespace = name_space;
        sw_det_rxtx_packets_64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-65-127")
    {
        sw_det_rxtx_packets_65_127 = value;
        sw_det_rxtx_packets_65_127.value_namespace = name_space;
        sw_det_rxtx_packets_65_127.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-128-255")
    {
        sw_det_rxtx_packets_128_255 = value;
        sw_det_rxtx_packets_128_255.value_namespace = name_space;
        sw_det_rxtx_packets_128_255.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-256-511")
    {
        sw_det_rxtx_packets_256_511 = value;
        sw_det_rxtx_packets_256_511.value_namespace = name_space;
        sw_det_rxtx_packets_256_511.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-512-1023")
    {
        sw_det_rxtx_packets_512_1023 = value;
        sw_det_rxtx_packets_512_1023.value_namespace = name_space;
        sw_det_rxtx_packets_512_1023.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-det-rxtx-packets-1024-max")
    {
        sw_det_rxtx_packets_1024_max = value;
        sw_det_rxtx_packets_1024_max.value_namespace = name_space;
        sw_det_rxtx_packets_1024_max.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sw-det-rx-ucast-packets")
    {
        sw_det_rx_ucast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-mcast-packets")
    {
        sw_det_rx_mcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bcast-packets")
    {
        sw_det_rx_bcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-flow-control")
    {
        sw_det_rx_flow_control.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-good-octets")
    {
        sw_det_rx_good_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bad-octets")
    {
        sw_det_rx_bad_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-fifo-overrun")
    {
        sw_det_rx_fifo_overrun.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-undersize")
    {
        sw_det_rx_undersize.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-fragments")
    {
        sw_det_rx_fragments.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-oversize")
    {
        sw_det_rx_oversize.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-jabber")
    {
        sw_det_rx_jabber.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-errors")
    {
        sw_det_rx_errors.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-bad-crc")
    {
        sw_det_rx_bad_crc.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-collisions")
    {
        sw_det_rx_collisions.yfilter = yfilter;
    }
    if(value_path == "sw-det-rx-policing-drops")
    {
        sw_det_rx_policing_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-ucast-packets")
    {
        sw_det_tx_ucast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-mcast-packets")
    {
        sw_det_tx_mcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-bcast-packets")
    {
        sw_det_tx_bcast_packets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-flow-control")
    {
        sw_det_tx_flow_control.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-good-octets")
    {
        sw_det_tx_good_octets.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-deferred")
    {
        sw_det_tx_deferred.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-fifo-unrun")
    {
        sw_det_tx_fifo_unrun.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-mult-collision")
    {
        sw_det_tx_mult_collision.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-excess-collision")
    {
        sw_det_tx_excess_collision.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-late-collisions")
    {
        sw_det_tx_late_collisions.yfilter = yfilter;
    }
    if(value_path == "sw-det-tx-policing-drops")
    {
        sw_det_tx_policing_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-txq-drops")
    {
        sw_det_txq_drops.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-64")
    {
        sw_det_rxtx_packets_64.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-65-127")
    {
        sw_det_rxtx_packets_65_127.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-128-255")
    {
        sw_det_rxtx_packets_128_255.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-256-511")
    {
        sw_det_rxtx_packets_256_511.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-512-1023")
    {
        sw_det_rxtx_packets_512_1023.yfilter = yfilter;
    }
    if(value_path == "sw-det-rxtx-packets-1024-max")
    {
        sw_det_rxtx_packets_1024_max.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sw-det-rx-ucast-packets" || name == "sw-det-rx-mcast-packets" || name == "sw-det-rx-bcast-packets" || name == "sw-det-rx-flow-control" || name == "sw-det-rx-good-octets" || name == "sw-det-rx-bad-octets" || name == "sw-det-rx-fifo-overrun" || name == "sw-det-rx-undersize" || name == "sw-det-rx-fragments" || name == "sw-det-rx-oversize" || name == "sw-det-rx-jabber" || name == "sw-det-rx-errors" || name == "sw-det-rx-bad-crc" || name == "sw-det-rx-collisions" || name == "sw-det-rx-policing-drops" || name == "sw-det-tx-ucast-packets" || name == "sw-det-tx-mcast-packets" || name == "sw-det-tx-bcast-packets" || name == "sw-det-tx-flow-control" || name == "sw-det-tx-good-octets" || name == "sw-det-tx-deferred" || name == "sw-det-tx-fifo-unrun" || name == "sw-det-tx-mult-collision" || name == "sw-det-tx-excess-collision" || name == "sw-det-tx-late-collisions" || name == "sw-det-tx-policing-drops" || name == "sw-det-txq-drops" || name == "sw-det-rxtx-packets-64" || name == "sw-det-rxtx-packets-65-127" || name == "sw-det-rxtx-packets-128-255" || name == "sw-det-rxtx-packets-256-511" || name == "sw-det-rxtx-packets-512-1023" || name == "sw-det-rxtx-packets-1024-max")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::Mac()
    :
    mac_statistics(std::make_shared<Controller::Switch::Oper::Mac::MacStatistics>())
{
    mac_statistics->parent = this;

    yang_name = "mac"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Mac::~Mac()
{
}

bool Controller::Switch::Oper::Mac::has_data() const
{
    return (mac_statistics !=  nullptr && mac_statistics->has_data());
}

bool Controller::Switch::Oper::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (mac_statistics !=  nullptr && mac_statistics->has_operation());
}

std::string Controller::Switch::Oper::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-statistics")
    {
        if(mac_statistics == nullptr)
        {
            mac_statistics = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics>();
        }
        return mac_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_statistics != nullptr)
    {
        children["mac-statistics"] = mac_statistics;
    }

    return children;
}

void Controller::Switch::Oper::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-statistics")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::MacStatistics()
{

    yang_name = "mac-statistics"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Mac::MacStatistics::~MacStatistics()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::MacStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::MacStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::MacStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mac::MacStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mac::MacStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "mac-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mac/mac-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_data() const
{
    for (std::size_t index=0; index<mac_entry.size(); index++)
    {
        if(mac_entry[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<mac_entry.size(); index++)
    {
        if(mac_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry>();
        c->parent = this;
        mac_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mac_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-entry" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::MacEntry()
    :
    id{YType::uint32, "id"},
    base_reg{YType::str, "base-reg"},
    desc{YType::str, "desc"},
    value_{YType::str, "value"}
{

    yang_name = "mac-entry"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::~MacEntry()
{
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_data() const
{
    return id.is_set
	|| base_reg.is_set
	|| desc.is_set
	|| value_.is_set;
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(base_reg.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-entry" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (base_reg.is_set || is_set(base_reg.yfilter)) leaf_name_data.push_back(base_reg.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-reg")
    {
        base_reg = value;
        base_reg.value_namespace = name_space;
        base_reg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "base-reg")
    {
        base_reg.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "base-reg" || name == "desc" || name == "value")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Bridge()
    :
    statistics(std::make_shared<Controller::Switch::Oper::Bridge::Statistics>())
{
    statistics->parent = this;

    yang_name = "bridge"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Bridge::~Bridge()
{
}

bool Controller::Switch::Oper::Bridge::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Switch::Oper::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Switch::Oper::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Bridge::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Controller::Switch::Oper::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "bridge"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Bridge::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Bridge::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/bridge/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Bridge::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Bridge::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Bridge::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_data() const
{
    for (std::size_t index=0; index<ingress_set_id.size(); index++)
    {
        if(ingress_set_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<egress_set_id.size(); index++)
    {
        if(egress_set_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_operation() const
{
    for (std::size_t index=0; index<ingress_set_id.size(); index++)
    {
        if(ingress_set_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<egress_set_id.size(); index++)
    {
        if(egress_set_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/bridge/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-set-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId>();
        c->parent = this;
        ingress_set_id.push_back(c);
        return c;
    }

    if(child_yang_name == "egress-set-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId>();
        c->parent = this;
        egress_set_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ingress_set_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : egress_set_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Bridge::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-set-id" || name == "egress-set-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::IngressSetId()
    :
    ingress_set{YType::uint32, "ingress-set"},
    ingress_set_name{YType::str, "ingress-set-name"},
    ingress_frames{YType::uint64, "ingress-frames"},
    ingress_vlan_discards{YType::uint64, "ingress-vlan-discards"},
    ingress_security_discards{YType::uint64, "ingress-security-discards"},
    ingress_other_discards{YType::uint64, "ingress-other-discards"}
{

    yang_name = "ingress-set-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::~IngressSetId()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_data() const
{
    return ingress_set.is_set
	|| ingress_set_name.is_set
	|| ingress_frames.is_set
	|| ingress_vlan_discards.is_set
	|| ingress_security_discards.is_set
	|| ingress_other_discards.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress_set.yfilter)
	|| ydk::is_set(ingress_set_name.yfilter)
	|| ydk::is_set(ingress_frames.yfilter)
	|| ydk::is_set(ingress_vlan_discards.yfilter)
	|| ydk::is_set(ingress_security_discards.yfilter)
	|| ydk::is_set(ingress_other_discards.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-set-id" <<"[ingress-set='" <<ingress_set <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress_set.is_set || is_set(ingress_set.yfilter)) leaf_name_data.push_back(ingress_set.get_name_leafdata());
    if (ingress_set_name.is_set || is_set(ingress_set_name.yfilter)) leaf_name_data.push_back(ingress_set_name.get_name_leafdata());
    if (ingress_frames.is_set || is_set(ingress_frames.yfilter)) leaf_name_data.push_back(ingress_frames.get_name_leafdata());
    if (ingress_vlan_discards.is_set || is_set(ingress_vlan_discards.yfilter)) leaf_name_data.push_back(ingress_vlan_discards.get_name_leafdata());
    if (ingress_security_discards.is_set || is_set(ingress_security_discards.yfilter)) leaf_name_data.push_back(ingress_security_discards.get_name_leafdata());
    if (ingress_other_discards.is_set || is_set(ingress_other_discards.yfilter)) leaf_name_data.push_back(ingress_other_discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress-set")
    {
        ingress_set = value;
        ingress_set.value_namespace = name_space;
        ingress_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-set-name")
    {
        ingress_set_name = value;
        ingress_set_name.value_namespace = name_space;
        ingress_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-frames")
    {
        ingress_frames = value;
        ingress_frames.value_namespace = name_space;
        ingress_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-vlan-discards")
    {
        ingress_vlan_discards = value;
        ingress_vlan_discards.value_namespace = name_space;
        ingress_vlan_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-security-discards")
    {
        ingress_security_discards = value;
        ingress_security_discards.value_namespace = name_space;
        ingress_security_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-other-discards")
    {
        ingress_other_discards = value;
        ingress_other_discards.value_namespace = name_space;
        ingress_other_discards.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress-set")
    {
        ingress_set.yfilter = yfilter;
    }
    if(value_path == "ingress-set-name")
    {
        ingress_set_name.yfilter = yfilter;
    }
    if(value_path == "ingress-frames")
    {
        ingress_frames.yfilter = yfilter;
    }
    if(value_path == "ingress-vlan-discards")
    {
        ingress_vlan_discards.yfilter = yfilter;
    }
    if(value_path == "ingress-security-discards")
    {
        ingress_security_discards.yfilter = yfilter;
    }
    if(value_path == "ingress-other-discards")
    {
        ingress_other_discards.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-set" || name == "ingress-set-name" || name == "ingress-frames" || name == "ingress-vlan-discards" || name == "ingress-security-discards" || name == "ingress-other-discards")
        return true;
    return false;
}

Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::EgressSetId()
    :
    egress_set{YType::uint32, "egress-set"},
    egress_set_name{YType::str, "egress-set-name"},
    egress_ucast_frames{YType::uint64, "egress-ucast-frames"},
    egress_mcast_frames{YType::uint64, "egress-mcast-frames"},
    egress_bcast_frames{YType::uint64, "egress-bcast-frames"},
    egress_discarded_frames{YType::uint64, "egress-discarded-frames"},
    egress_txq_congestion{YType::uint64, "egress-txq-congestion"},
    egress_ctrl_packets{YType::uint64, "egress-ctrl-packets"},
    egress_other_drops{YType::uint64, "egress-other-drops"}
{

    yang_name = "egress-set-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::~EgressSetId()
{
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_data() const
{
    return egress_set.is_set
	|| egress_set_name.is_set
	|| egress_ucast_frames.is_set
	|| egress_mcast_frames.is_set
	|| egress_bcast_frames.is_set
	|| egress_discarded_frames.is_set
	|| egress_txq_congestion.is_set
	|| egress_ctrl_packets.is_set
	|| egress_other_drops.is_set;
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_set.yfilter)
	|| ydk::is_set(egress_set_name.yfilter)
	|| ydk::is_set(egress_ucast_frames.yfilter)
	|| ydk::is_set(egress_mcast_frames.yfilter)
	|| ydk::is_set(egress_bcast_frames.yfilter)
	|| ydk::is_set(egress_discarded_frames.yfilter)
	|| ydk::is_set(egress_txq_congestion.yfilter)
	|| ydk::is_set(egress_ctrl_packets.yfilter)
	|| ydk::is_set(egress_other_drops.yfilter);
}

std::string Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-set-id" <<"[egress-set='" <<egress_set <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_set.is_set || is_set(egress_set.yfilter)) leaf_name_data.push_back(egress_set.get_name_leafdata());
    if (egress_set_name.is_set || is_set(egress_set_name.yfilter)) leaf_name_data.push_back(egress_set_name.get_name_leafdata());
    if (egress_ucast_frames.is_set || is_set(egress_ucast_frames.yfilter)) leaf_name_data.push_back(egress_ucast_frames.get_name_leafdata());
    if (egress_mcast_frames.is_set || is_set(egress_mcast_frames.yfilter)) leaf_name_data.push_back(egress_mcast_frames.get_name_leafdata());
    if (egress_bcast_frames.is_set || is_set(egress_bcast_frames.yfilter)) leaf_name_data.push_back(egress_bcast_frames.get_name_leafdata());
    if (egress_discarded_frames.is_set || is_set(egress_discarded_frames.yfilter)) leaf_name_data.push_back(egress_discarded_frames.get_name_leafdata());
    if (egress_txq_congestion.is_set || is_set(egress_txq_congestion.yfilter)) leaf_name_data.push_back(egress_txq_congestion.get_name_leafdata());
    if (egress_ctrl_packets.is_set || is_set(egress_ctrl_packets.yfilter)) leaf_name_data.push_back(egress_ctrl_packets.get_name_leafdata());
    if (egress_other_drops.is_set || is_set(egress_other_drops.yfilter)) leaf_name_data.push_back(egress_other_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-set")
    {
        egress_set = value;
        egress_set.value_namespace = name_space;
        egress_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-set-name")
    {
        egress_set_name = value;
        egress_set_name.value_namespace = name_space;
        egress_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-ucast-frames")
    {
        egress_ucast_frames = value;
        egress_ucast_frames.value_namespace = name_space;
        egress_ucast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-mcast-frames")
    {
        egress_mcast_frames = value;
        egress_mcast_frames.value_namespace = name_space;
        egress_mcast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-bcast-frames")
    {
        egress_bcast_frames = value;
        egress_bcast_frames.value_namespace = name_space;
        egress_bcast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-discarded-frames")
    {
        egress_discarded_frames = value;
        egress_discarded_frames.value_namespace = name_space;
        egress_discarded_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-txq-congestion")
    {
        egress_txq_congestion = value;
        egress_txq_congestion.value_namespace = name_space;
        egress_txq_congestion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-ctrl-packets")
    {
        egress_ctrl_packets = value;
        egress_ctrl_packets.value_namespace = name_space;
        egress_ctrl_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-other-drops")
    {
        egress_other_drops = value;
        egress_other_drops.value_namespace = name_space;
        egress_other_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-set")
    {
        egress_set.yfilter = yfilter;
    }
    if(value_path == "egress-set-name")
    {
        egress_set_name.yfilter = yfilter;
    }
    if(value_path == "egress-ucast-frames")
    {
        egress_ucast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-mcast-frames")
    {
        egress_mcast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-bcast-frames")
    {
        egress_bcast_frames.yfilter = yfilter;
    }
    if(value_path == "egress-discarded-frames")
    {
        egress_discarded_frames.yfilter = yfilter;
    }
    if(value_path == "egress-txq-congestion")
    {
        egress_txq_congestion.yfilter = yfilter;
    }
    if(value_path == "egress-ctrl-packets")
    {
        egress_ctrl_packets.yfilter = yfilter;
    }
    if(value_path == "egress-other-drops")
    {
        egress_other_drops.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-set" || name == "egress-set-name" || name == "egress-ucast-frames" || name == "egress-mcast-frames" || name == "egress-bcast-frames" || name == "egress-discarded-frames" || name == "egress-txq-congestion" || name == "egress-ctrl-packets" || name == "egress-other-drops")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Fdb()
    :
    vlan(std::make_shared<Controller::Switch::Oper::Fdb::Vlan>())
	,mac(std::make_shared<Controller::Switch::Oper::Fdb::Mac>())
	,port(std::make_shared<Controller::Switch::Oper::Fdb::Port>())
	,statistics(std::make_shared<Controller::Switch::Oper::Fdb::Statistics>())
	,switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon>())
{
    vlan->parent = this;
    mac->parent = this;
    port->parent = this;
    statistics->parent = this;
    switch_fdb_common->parent = this;

    yang_name = "fdb"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::~Fdb()
{
}

bool Controller::Switch::Oper::Fdb::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Controller::Switch::Oper::Fdb::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Controller::Switch::Oper::Fdb::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Controller::Switch::Oper::Fdb::Port>();
        }
        return port;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Fdb::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(switch_fdb_common != nullptr)
    {
        children["switch-fdb-common"] = switch_fdb_common;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "mac" || name == "port" || name == "statistics" || name == "switch-fdb-common")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::Vlan()
{

    yang_name = "vlan"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::Vlan::~Vlan()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_iter.size(); index++)
    {
        if(vlan_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_iter.size(); index++)
    {
        if(vlan_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter>();
        c->parent = this;
        vlan_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::VlanIter()
    :
    vlan{YType::uint16, "vlan"}
    	,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "vlan-iter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::~VlanIter()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_data() const
{
    return vlan.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-iter" <<"[vlan='" <<vlan <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_fdb_common != nullptr)
    {
        children["switch-fdb-common"] = switch_fdb_common;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "vlan")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::SwitchFdbCommon()
{

    yang_name = "switch-fdb-common"; yang_parent_name = "vlan-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
    	,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb_block != nullptr)
    {
        children["fdb-block"] = fdb_block;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    for (std::size_t index=0; index<fdb_entry.size(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.size(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        c->parent = this;
        fdb_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fdb_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry" <<"[fdb-index='" <<fdb_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::Mac()
{

    yang_name = "mac"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::Mac::~Mac()
{
}

bool Controller::Switch::Oper::Fdb::Mac::has_data() const
{
    for (std::size_t index=0; index<mac_iter.size(); index++)
    {
        if(mac_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::has_operation() const
{
    for (std::size_t index=0; index<mac_iter.size(); index++)
    {
        if(mac_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter>();
        c->parent = this;
        mac_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mac_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::MacIter()
    :
    mac{YType::str, "mac"}
    	,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "mac-iter"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::~MacIter()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_data() const
{
    return mac.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iter" <<"[mac='" <<mac <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_fdb_common != nullptr)
    {
        children["switch-fdb-common"] = switch_fdb_common;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "mac")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::SwitchFdbCommon()
{

    yang_name = "switch-fdb-common"; yang_parent_name = "mac-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
    	,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb_block != nullptr)
    {
        children["fdb-block"] = fdb_block;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    for (std::size_t index=0; index<fdb_entry.size(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.size(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        c->parent = this;
        fdb_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fdb_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry" <<"[fdb-index='" <<fdb_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::Port()
{

    yang_name = "port"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::Port::~Port()
{
}

bool Controller::Switch::Oper::Fdb::Port::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::PortIter()
    :
    port{YType::int32, "port"}
    	,
    switch_fdb_common(std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon>())
{
    switch_fdb_common->parent = this;

    yang_name = "port-iter"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_data() const
{
    return port.is_set
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_data());
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (switch_fdb_common !=  nullptr && switch_fdb_common->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/port/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-fdb-common")
    {
        if(switch_fdb_common == nullptr)
        {
            switch_fdb_common = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon>();
        }
        return switch_fdb_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_fdb_common != nullptr)
    {
        children["switch-fdb-common"] = switch_fdb_common;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-fdb-common" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::SwitchFdbCommon()
{

    yang_name = "switch-fdb-common"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
    	,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb_block != nullptr)
    {
        children["fdb-block"] = fdb_block;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    for (std::size_t index=0; index<fdb_entry.size(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.size(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        c->parent = this;
        fdb_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fdb_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry" <<"[fdb-index='" <<fdb_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
    	,
    counter_info(std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo>())
{
    counter_info->parent = this;

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_data() const
{
    for (std::size_t index=0; index<core_id.size(); index++)
    {
        if(core_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| (counter_info !=  nullptr && counter_info->has_data());
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_operation() const
{
    for (std::size_t index=0; index<core_id.size(); index++)
    {
        if(core_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| (counter_info !=  nullptr && counter_info->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter-info")
    {
        if(counter_info == nullptr)
        {
            counter_info = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo>();
        }
        return counter_info;
    }

    if(child_yang_name == "core-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CoreId>();
        c->parent = this;
        core_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter_info != nullptr)
    {
        children["counter-info"] = counter_info;
    }

    count = 0;
    for (auto const & c : core_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Fdb::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-info" || name == "core-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::CounterInfo()
    :
    fdb_shadow_entries{YType::uint32, "fdb-shadow-entries"},
    fdb_max_shadow_entries{YType::uint32, "fdb-max-shadow-entries"},
    fdb_max_hash_chain{YType::uint32, "fdb-max-hash-chain"},
    fdb_entries_added{YType::uint32, "fdb-entries-added"},
    fdb_entries_deleted{YType::uint32, "fdb-entries-deleted"},
    fdb_entries_updated{YType::uint32, "fdb-entries-updated"},
    fdb_flushes{YType::uint32, "fdb-flushes"},
    fdb_address_updates{YType::uint32, "fdb-address-updates"},
    fdb_new_addresses{YType::uint32, "fdb-new-addresses"},
    fdb_aged_updates{YType::uint32, "fdb-aged-updates"},
    fdb_transplant_updates{YType::uint32, "fdb-transplant-updates"},
    fdb_forwarding_updates{YType::uint32, "fdb-forwarding-updates"},
    fdb_address_insert_errors{YType::uint32, "fdb-address-insert-errors"},
    fdb_address_update_errors{YType::uint32, "fdb-address-update-errors"},
    fdb_memory_errors{YType::uint32, "fdb-memory-errors"},
    fdb_allocation_errors{YType::uint32, "fdb-allocation-errors"},
    fdb_address_updates_queued{YType::uint32, "fdb-address-updates-queued"},
    fdb_address_queue_full{YType::enumeration, "fdb-address-queue-full"},
    fdb_forwarding_updates_queued{YType::uint32, "fdb-forwarding-updates-queued"},
    fdb_forwarding_queue_full{YType::enumeration, "fdb-forwarding-queue-full"}
{

    yang_name = "counter-info"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::~CounterInfo()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_data() const
{
    return fdb_shadow_entries.is_set
	|| fdb_max_shadow_entries.is_set
	|| fdb_max_hash_chain.is_set
	|| fdb_entries_added.is_set
	|| fdb_entries_deleted.is_set
	|| fdb_entries_updated.is_set
	|| fdb_flushes.is_set
	|| fdb_address_updates.is_set
	|| fdb_new_addresses.is_set
	|| fdb_aged_updates.is_set
	|| fdb_transplant_updates.is_set
	|| fdb_forwarding_updates.is_set
	|| fdb_address_insert_errors.is_set
	|| fdb_address_update_errors.is_set
	|| fdb_memory_errors.is_set
	|| fdb_allocation_errors.is_set
	|| fdb_address_updates_queued.is_set
	|| fdb_address_queue_full.is_set
	|| fdb_forwarding_updates_queued.is_set
	|| fdb_forwarding_queue_full.is_set;
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fdb_shadow_entries.yfilter)
	|| ydk::is_set(fdb_max_shadow_entries.yfilter)
	|| ydk::is_set(fdb_max_hash_chain.yfilter)
	|| ydk::is_set(fdb_entries_added.yfilter)
	|| ydk::is_set(fdb_entries_deleted.yfilter)
	|| ydk::is_set(fdb_entries_updated.yfilter)
	|| ydk::is_set(fdb_flushes.yfilter)
	|| ydk::is_set(fdb_address_updates.yfilter)
	|| ydk::is_set(fdb_new_addresses.yfilter)
	|| ydk::is_set(fdb_aged_updates.yfilter)
	|| ydk::is_set(fdb_transplant_updates.yfilter)
	|| ydk::is_set(fdb_forwarding_updates.yfilter)
	|| ydk::is_set(fdb_address_insert_errors.yfilter)
	|| ydk::is_set(fdb_address_update_errors.yfilter)
	|| ydk::is_set(fdb_memory_errors.yfilter)
	|| ydk::is_set(fdb_allocation_errors.yfilter)
	|| ydk::is_set(fdb_address_updates_queued.yfilter)
	|| ydk::is_set(fdb_address_queue_full.yfilter)
	|| ydk::is_set(fdb_forwarding_updates_queued.yfilter)
	|| ydk::is_set(fdb_forwarding_queue_full.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_shadow_entries.is_set || is_set(fdb_shadow_entries.yfilter)) leaf_name_data.push_back(fdb_shadow_entries.get_name_leafdata());
    if (fdb_max_shadow_entries.is_set || is_set(fdb_max_shadow_entries.yfilter)) leaf_name_data.push_back(fdb_max_shadow_entries.get_name_leafdata());
    if (fdb_max_hash_chain.is_set || is_set(fdb_max_hash_chain.yfilter)) leaf_name_data.push_back(fdb_max_hash_chain.get_name_leafdata());
    if (fdb_entries_added.is_set || is_set(fdb_entries_added.yfilter)) leaf_name_data.push_back(fdb_entries_added.get_name_leafdata());
    if (fdb_entries_deleted.is_set || is_set(fdb_entries_deleted.yfilter)) leaf_name_data.push_back(fdb_entries_deleted.get_name_leafdata());
    if (fdb_entries_updated.is_set || is_set(fdb_entries_updated.yfilter)) leaf_name_data.push_back(fdb_entries_updated.get_name_leafdata());
    if (fdb_flushes.is_set || is_set(fdb_flushes.yfilter)) leaf_name_data.push_back(fdb_flushes.get_name_leafdata());
    if (fdb_address_updates.is_set || is_set(fdb_address_updates.yfilter)) leaf_name_data.push_back(fdb_address_updates.get_name_leafdata());
    if (fdb_new_addresses.is_set || is_set(fdb_new_addresses.yfilter)) leaf_name_data.push_back(fdb_new_addresses.get_name_leafdata());
    if (fdb_aged_updates.is_set || is_set(fdb_aged_updates.yfilter)) leaf_name_data.push_back(fdb_aged_updates.get_name_leafdata());
    if (fdb_transplant_updates.is_set || is_set(fdb_transplant_updates.yfilter)) leaf_name_data.push_back(fdb_transplant_updates.get_name_leafdata());
    if (fdb_forwarding_updates.is_set || is_set(fdb_forwarding_updates.yfilter)) leaf_name_data.push_back(fdb_forwarding_updates.get_name_leafdata());
    if (fdb_address_insert_errors.is_set || is_set(fdb_address_insert_errors.yfilter)) leaf_name_data.push_back(fdb_address_insert_errors.get_name_leafdata());
    if (fdb_address_update_errors.is_set || is_set(fdb_address_update_errors.yfilter)) leaf_name_data.push_back(fdb_address_update_errors.get_name_leafdata());
    if (fdb_memory_errors.is_set || is_set(fdb_memory_errors.yfilter)) leaf_name_data.push_back(fdb_memory_errors.get_name_leafdata());
    if (fdb_allocation_errors.is_set || is_set(fdb_allocation_errors.yfilter)) leaf_name_data.push_back(fdb_allocation_errors.get_name_leafdata());
    if (fdb_address_updates_queued.is_set || is_set(fdb_address_updates_queued.yfilter)) leaf_name_data.push_back(fdb_address_updates_queued.get_name_leafdata());
    if (fdb_address_queue_full.is_set || is_set(fdb_address_queue_full.yfilter)) leaf_name_data.push_back(fdb_address_queue_full.get_name_leafdata());
    if (fdb_forwarding_updates_queued.is_set || is_set(fdb_forwarding_updates_queued.yfilter)) leaf_name_data.push_back(fdb_forwarding_updates_queued.get_name_leafdata());
    if (fdb_forwarding_queue_full.is_set || is_set(fdb_forwarding_queue_full.yfilter)) leaf_name_data.push_back(fdb_forwarding_queue_full.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-shadow-entries")
    {
        fdb_shadow_entries = value;
        fdb_shadow_entries.value_namespace = name_space;
        fdb_shadow_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-max-shadow-entries")
    {
        fdb_max_shadow_entries = value;
        fdb_max_shadow_entries.value_namespace = name_space;
        fdb_max_shadow_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-max-hash-chain")
    {
        fdb_max_hash_chain = value;
        fdb_max_hash_chain.value_namespace = name_space;
        fdb_max_hash_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-added")
    {
        fdb_entries_added = value;
        fdb_entries_added.value_namespace = name_space;
        fdb_entries_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-deleted")
    {
        fdb_entries_deleted = value;
        fdb_entries_deleted.value_namespace = name_space;
        fdb_entries_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-updated")
    {
        fdb_entries_updated = value;
        fdb_entries_updated.value_namespace = name_space;
        fdb_entries_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-flushes")
    {
        fdb_flushes = value;
        fdb_flushes.value_namespace = name_space;
        fdb_flushes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-updates")
    {
        fdb_address_updates = value;
        fdb_address_updates.value_namespace = name_space;
        fdb_address_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-new-addresses")
    {
        fdb_new_addresses = value;
        fdb_new_addresses.value_namespace = name_space;
        fdb_new_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-aged-updates")
    {
        fdb_aged_updates = value;
        fdb_aged_updates.value_namespace = name_space;
        fdb_aged_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-transplant-updates")
    {
        fdb_transplant_updates = value;
        fdb_transplant_updates.value_namespace = name_space;
        fdb_transplant_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-updates")
    {
        fdb_forwarding_updates = value;
        fdb_forwarding_updates.value_namespace = name_space;
        fdb_forwarding_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-insert-errors")
    {
        fdb_address_insert_errors = value;
        fdb_address_insert_errors.value_namespace = name_space;
        fdb_address_insert_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-update-errors")
    {
        fdb_address_update_errors = value;
        fdb_address_update_errors.value_namespace = name_space;
        fdb_address_update_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-memory-errors")
    {
        fdb_memory_errors = value;
        fdb_memory_errors.value_namespace = name_space;
        fdb_memory_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-allocation-errors")
    {
        fdb_allocation_errors = value;
        fdb_allocation_errors.value_namespace = name_space;
        fdb_allocation_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-updates-queued")
    {
        fdb_address_updates_queued = value;
        fdb_address_updates_queued.value_namespace = name_space;
        fdb_address_updates_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-queue-full")
    {
        fdb_address_queue_full = value;
        fdb_address_queue_full.value_namespace = name_space;
        fdb_address_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-updates-queued")
    {
        fdb_forwarding_updates_queued = value;
        fdb_forwarding_updates_queued.value_namespace = name_space;
        fdb_forwarding_updates_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-queue-full")
    {
        fdb_forwarding_queue_full = value;
        fdb_forwarding_queue_full.value_namespace = name_space;
        fdb_forwarding_queue_full.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-shadow-entries")
    {
        fdb_shadow_entries.yfilter = yfilter;
    }
    if(value_path == "fdb-max-shadow-entries")
    {
        fdb_max_shadow_entries.yfilter = yfilter;
    }
    if(value_path == "fdb-max-hash-chain")
    {
        fdb_max_hash_chain.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-added")
    {
        fdb_entries_added.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-deleted")
    {
        fdb_entries_deleted.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-updated")
    {
        fdb_entries_updated.yfilter = yfilter;
    }
    if(value_path == "fdb-flushes")
    {
        fdb_flushes.yfilter = yfilter;
    }
    if(value_path == "fdb-address-updates")
    {
        fdb_address_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-new-addresses")
    {
        fdb_new_addresses.yfilter = yfilter;
    }
    if(value_path == "fdb-aged-updates")
    {
        fdb_aged_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-transplant-updates")
    {
        fdb_transplant_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-updates")
    {
        fdb_forwarding_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-address-insert-errors")
    {
        fdb_address_insert_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-address-update-errors")
    {
        fdb_address_update_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-memory-errors")
    {
        fdb_memory_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-allocation-errors")
    {
        fdb_allocation_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-address-updates-queued")
    {
        fdb_address_updates_queued.yfilter = yfilter;
    }
    if(value_path == "fdb-address-queue-full")
    {
        fdb_address_queue_full.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-updates-queued")
    {
        fdb_forwarding_updates_queued.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-queue-full")
    {
        fdb_forwarding_queue_full.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-shadow-entries" || name == "fdb-max-shadow-entries" || name == "fdb-max-hash-chain" || name == "fdb-entries-added" || name == "fdb-entries-deleted" || name == "fdb-entries-updated" || name == "fdb-flushes" || name == "fdb-address-updates" || name == "fdb-new-addresses" || name == "fdb-aged-updates" || name == "fdb-transplant-updates" || name == "fdb-forwarding-updates" || name == "fdb-address-insert-errors" || name == "fdb-address-update-errors" || name == "fdb-memory-errors" || name == "fdb-allocation-errors" || name == "fdb-address-updates-queued" || name == "fdb-address-queue-full" || name == "fdb-forwarding-updates-queued" || name == "fdb-forwarding-queue-full")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::CoreId()
    :
    core{YType::int32, "core"},
    core_entries{YType::uint32, "core-entries"},
    core_static_entries{YType::uint32, "core-static-entries"}
{

    yang_name = "core-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::~CoreId()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_data() const
{
    return core.is_set
	|| core_entries.is_set
	|| core_static_entries.is_set;
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(core_entries.yfilter)
	|| ydk::is_set(core_static_entries.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-id" <<"[core='" <<core <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (core_entries.is_set || is_set(core_entries.yfilter)) leaf_name_data.push_back(core_entries.get_name_leafdata());
    if (core_static_entries.is_set || is_set(core_static_entries.yfilter)) leaf_name_data.push_back(core_static_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-entries")
    {
        core_entries = value;
        core_entries.value_namespace = name_space;
        core_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-static-entries")
    {
        core_static_entries = value;
        core_static_entries.value_namespace = name_space;
        core_static_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "core-entries")
    {
        core_entries.yfilter = yfilter;
    }
    if(value_path == "core-static-entries")
    {
        core_static_entries.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "core-entries" || name == "core-static-entries")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::SwitchFdbCommon()
{

    yang_name = "switch-fdb-common"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
    	,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/fdb/switch-fdb-common/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb_block != nullptr)
    {
        children["fdb-block"] = fdb_block;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    for (std::size_t index=0; index<fdb_entry.size(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.size(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        c->parent = this;
        fdb_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fdb_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry" <<"[fdb-index='" <<fdb_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Vlan()
    :
    rules(std::make_shared<Controller::Switch::Oper::Vlan::Rules>())
	,information(std::make_shared<Controller::Switch::Oper::Vlan::Information>())
	,vlan_detail(std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail>())
	,membership(std::make_shared<Controller::Switch::Oper::Vlan::Membership>())
{
    rules->parent = this;
    information->parent = this;
    vlan_detail->parent = this;
    membership->parent = this;

    yang_name = "vlan"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::~Vlan()
{
}

bool Controller::Switch::Oper::Vlan::has_data() const
{
    return (rules !=  nullptr && rules->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (vlan_detail !=  nullptr && vlan_detail->has_data())
	|| (membership !=  nullptr && membership->has_data());
}

bool Controller::Switch::Oper::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (rules !=  nullptr && rules->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (vlan_detail !=  nullptr && vlan_detail->has_operation())
	|| (membership !=  nullptr && membership->has_operation());
}

std::string Controller::Switch::Oper::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Controller::Switch::Oper::Vlan::Rules>();
        }
        return rules;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Controller::Switch::Oper::Vlan::Information>();
        }
        return information;
    }

    if(child_yang_name == "vlan-detail")
    {
        if(vlan_detail == nullptr)
        {
            vlan_detail = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail>();
        }
        return vlan_detail;
    }

    if(child_yang_name == "membership")
    {
        if(membership == nullptr)
        {
            membership = std::make_shared<Controller::Switch::Oper::Vlan::Membership>();
        }
        return membership;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(vlan_detail != nullptr)
    {
        children["vlan-detail"] = vlan_detail;
    }

    if(membership != nullptr)
    {
        children["membership"] = membership;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "information" || name == "vlan-detail" || name == "membership")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Rules()
{

    yang_name = "rules"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::Rules::~Rules()
{
}

bool Controller::Switch::Oper::Vlan::Rules::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::Rules::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Rules::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::Rules::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::Rules::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Vlan::Rules::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Rules::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Rules::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Vlan::Rules::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Vlan::Rules::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::has_data() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId>();
        c->parent = this;
        vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "vlan-id"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::has_data() const
{
    for (std::size_t index=0; index<rule_id.size(); index++)
    {
        if(rule_id[index]->has_data())
            return true;
    }
    return vlan.is_set;
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::has_operation() const
{
    for (std::size_t index=0; index<rule_id.size(); index++)
    {
        if(rule_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id" <<"[vlan='" <<vlan <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId>();
        c->parent = this;
        rule_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rule_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-id" || name == "vlan")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::RuleId()
    :
    direction{YType::enumeration, "direction"},
    match_table{YType::enumeration, "match-table"},
    match_type{YType::enumeration, "match-type"},
    match_vlan_id{YType::uint16, "match-vlan-id"},
    action{YType::enumeration, "action"},
    action_vlan_id{YType::uint16, "action-vlan-id"}
{

    yang_name = "rule-id"; yang_parent_name = "vlan-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::~RuleId()
{
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::has_data() const
{
    return direction.is_set
	|| match_table.is_set
	|| match_type.is_set
	|| match_vlan_id.is_set
	|| action.is_set
	|| action_vlan_id.is_set;
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(match_table.yfilter)
	|| ydk::is_set(match_type.yfilter)
	|| ydk::is_set(match_vlan_id.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(action_vlan_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (match_table.is_set || is_set(match_table.yfilter)) leaf_name_data.push_back(match_table.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (match_vlan_id.is_set || is_set(match_vlan_id.yfilter)) leaf_name_data.push_back(match_vlan_id.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (action_vlan_id.is_set || is_set(action_vlan_id.yfilter)) leaf_name_data.push_back(action_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-table")
    {
        match_table = value;
        match_table.value_namespace = name_space;
        match_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-vlan-id")
    {
        match_vlan_id = value;
        match_vlan_id.value_namespace = name_space;
        match_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-vlan-id")
    {
        action_vlan_id = value;
        action_vlan_id.value_namespace = name_space;
        action_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "match-table")
    {
        match_table.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
    if(value_path == "match-vlan-id")
    {
        match_vlan_id.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "action-vlan-id")
    {
        action_vlan_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "match-table" || name == "match-type" || name == "match-vlan-id" || name == "action" || name == "action-vlan-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Information()
    :
    summary(std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary>())
{
    summary->parent = this;

    yang_name = "information"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::Information::~Information()
{
}

bool Controller::Switch::Oper::Vlan::Information::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (summary !=  nullptr && summary->has_data());
}

bool Controller::Switch::Oper::Vlan::Information::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Controller::Switch::Oper::Vlan::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "summary")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
{

    yang_name = "location"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::Information::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_data() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location::SdrId>();
        c->parent = this;
        sdr_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sdr_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
{

    yang_name = "sdr-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_data() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id" <<"[sdr='" <<sdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId>();
        c->parent = this;
        vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    vlan_use{YType::str, "vlan-use"}
{

    yang_name = "vlan-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_data() const
{
    return vlan.is_set
	|| vlan_hex.is_set
	|| vlan_use.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(vlan_use.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id" <<"[vlan='" <<vlan <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());
    if (vlan_use.is_set || is_set(vlan_use.yfilter)) leaf_name_data.push_back(vlan_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-use")
    {
        vlan_use = value;
        vlan_use.value_namespace = name_space;
        vlan_use.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "vlan-use")
    {
        vlan_use.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "vlan-use")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::Summary()
{

    yang_name = "summary"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::Information::Summary::~Summary()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_data() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary::SdrId>();
        c->parent = this;
        sdr_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sdr_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Information::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
{

    yang_name = "sdr-id"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_data() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/information/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id" <<"[sdr='" <<sdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId>();
        c->parent = this;
        vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    vlan_use{YType::str, "vlan-use"}
{

    yang_name = "vlan-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_data() const
{
    return vlan.is_set
	|| vlan_hex.is_set
	|| vlan_use.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(vlan_use.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id" <<"[vlan='" <<vlan <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());
    if (vlan_use.is_set || is_set(vlan_use.yfilter)) leaf_name_data.push_back(vlan_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-use")
    {
        vlan_use = value;
        vlan_use.value_namespace = name_space;
        vlan_use.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "vlan-use")
    {
        vlan_use.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "vlan-use")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanDetail()
{

    yang_name = "vlan-detail"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::VlanDetail::~VlanDetail()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::has_data() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId>();
        c->parent = this;
        vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::VlanDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"}
    	,
    rules(std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules>())
{
    rules->parent = this;

    yang_name = "vlan-id"; yang_parent_name = "vlan-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::has_data() const
{
    return vlan.is_set
	|| (rules !=  nullptr && rules->has_data());
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/vlan-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id" <<"[vlan='" <<vlan <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "vlan")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Rules()
{

    yang_name = "rules"; yang_parent_name = "vlan-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::~Rules()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::has_data() const
{
    for (std::size_t index=0; index<rule_id.size(); index++)
    {
        if(rule_id[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<rule_id.size(); index++)
    {
        if(rule_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId>();
        c->parent = this;
        rule_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rule_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-id" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::RuleId()
    :
    direction{YType::enumeration, "direction"},
    match_table{YType::enumeration, "match-table"},
    match_type{YType::enumeration, "match-type"},
    match_vlan_id{YType::uint16, "match-vlan-id"},
    action{YType::enumeration, "action"},
    action_vlan_id{YType::uint16, "action-vlan-id"}
{

    yang_name = "rule-id"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::~RuleId()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::has_data() const
{
    return direction.is_set
	|| match_table.is_set
	|| match_type.is_set
	|| match_vlan_id.is_set
	|| action.is_set
	|| action_vlan_id.is_set;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(match_table.yfilter)
	|| ydk::is_set(match_type.yfilter)
	|| ydk::is_set(match_vlan_id.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(action_vlan_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (match_table.is_set || is_set(match_table.yfilter)) leaf_name_data.push_back(match_table.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (match_vlan_id.is_set || is_set(match_vlan_id.yfilter)) leaf_name_data.push_back(match_vlan_id.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (action_vlan_id.is_set || is_set(action_vlan_id.yfilter)) leaf_name_data.push_back(action_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-table")
    {
        match_table = value;
        match_table.value_namespace = name_space;
        match_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-vlan-id")
    {
        match_vlan_id = value;
        match_vlan_id.value_namespace = name_space;
        match_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-vlan-id")
    {
        action_vlan_id = value;
        action_vlan_id.value_namespace = name_space;
        action_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "match-table")
    {
        match_table.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
    if(value_path == "match-vlan-id")
    {
        match_vlan_id.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "action-vlan-id")
    {
        action_vlan_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "match-table" || name == "match-type" || name == "match-vlan-id" || name == "action" || name == "action-vlan-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Membership()
{

    yang_name = "membership"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::Membership::~Membership()
{
}

bool Controller::Switch::Oper::Vlan::Membership::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::Membership::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Membership::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "membership";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Membership::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Membership::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Membership::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Membership::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Membership::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Membership::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "membership"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Vlan::Membership::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_data() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.size(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/vlan/membership/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Membership::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Membership::Location::VlanId>();
        c->parent = this;
        vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Membership::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Membership::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Vlan::Membership::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Location::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    port{YType::uint8, "port"}
{

    yang_name = "vlan-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Vlan::Membership::Location::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vlan.is_set
	|| vlan_hex.is_set;
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id" <<"[vlan='" <<vlan <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());

    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::Membership::Location::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Controller::Switch::Oper::Vlan::Membership::Location::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Esd()
{

    yang_name = "esd"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Esd::~Esd()
{
}

bool Controller::Switch::Oper::Esd::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Esd::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Esd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Esd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Esd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Esd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Instance()
    :
    process_name{YType::str, "process_name"}
{

    yang_name = "instance"; yang_parent_name = "esd"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Esd::Instance::~Instance()
{
}

bool Controller::Switch::Oper::Esd::Instance::has_data() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return process_name.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::has_operation() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/esd/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Esd::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[process_name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace>();
        c->parent = this;
        trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trace)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process_name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process_name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace" || name == "process_name")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
{

    yang_name = "trace"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Esd::Instance::Trace::~Trace()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace" <<"[buffer='" <<buffer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_data() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location_name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : all_options)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_data() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options" <<"[option='" <<option <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trace_blocks)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    return data.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::MgmtAgent()
    :
    esdma(std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma>())
	,connections(std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections>())
{
    esdma->parent = this;
    connections->parent = this;

    yang_name = "mgmt-agent"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::~MgmtAgent()
{
}

bool Controller::Switch::Oper::MgmtAgent::has_data() const
{
    return (esdma !=  nullptr && esdma->has_data())
	|| (connections !=  nullptr && connections->has_data());
}

bool Controller::Switch::Oper::MgmtAgent::has_operation() const
{
    return is_set(yfilter)
	|| (esdma !=  nullptr && esdma->has_operation())
	|| (connections !=  nullptr && connections->has_operation());
}

std::string Controller::Switch::Oper::MgmtAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esdma")
    {
        if(esdma == nullptr)
        {
            esdma = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma>();
        }
        return esdma;
    }

    if(child_yang_name == "connections")
    {
        if(connections == nullptr)
        {
            connections = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections>();
        }
        return connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(esdma != nullptr)
    {
        children["esdma"] = esdma;
    }

    if(connections != nullptr)
    {
        children["connections"] = connections;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::MgmtAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::MgmtAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esdma" || name == "connections")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Esdma()
{

    yang_name = "esdma"; yang_parent_name = "mgmt-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::~Esdma()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_data() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_operation() const
{
    for (std::size_t index=0; index<trace.size(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mgmt-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esdma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace>();
        c->parent = this;
        trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trace)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::MgmtAgent::Esdma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
{

    yang_name = "trace"; yang_parent_name = "esdma"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::~Trace()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mgmt-agent/esdma/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace" <<"[buffer='" <<buffer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_data() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.size(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location_name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : all_options)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_data() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.size(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options" <<"[option='" <<option <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trace_blocks)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    return data.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::Connections()
    :
    sdr_nm_num_clients{YType::uint32, "sdr-nm-num-clients"},
    esd_client_num_clients{YType::uint32, "esd-client-num-clients"},
    mlap_client_num_clients{YType::uint32, "mlap-client-num-clients"}
    	,
    esdma_info(std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo>())
{
    esdma_info->parent = this;

    yang_name = "connections"; yang_parent_name = "mgmt-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::~Connections()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_data() const
{
    for (std::size_t index=0; index<sdr_nm_client_id.size(); index++)
    {
        if(sdr_nm_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<esd_client_id.size(); index++)
    {
        if(esd_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlap_client_id.size(); index++)
    {
        if(mlap_client_id[index]->has_data())
            return true;
    }
    return sdr_nm_num_clients.is_set
	|| esd_client_num_clients.is_set
	|| mlap_client_num_clients.is_set
	|| (esdma_info !=  nullptr && esdma_info->has_data());
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_operation() const
{
    for (std::size_t index=0; index<sdr_nm_client_id.size(); index++)
    {
        if(sdr_nm_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<esd_client_id.size(); index++)
    {
        if(esd_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlap_client_id.size(); index++)
    {
        if(mlap_client_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_nm_num_clients.yfilter)
	|| ydk::is_set(esd_client_num_clients.yfilter)
	|| ydk::is_set(mlap_client_num_clients.yfilter)
	|| (esdma_info !=  nullptr && esdma_info->has_operation());
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mgmt-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_nm_num_clients.is_set || is_set(sdr_nm_num_clients.yfilter)) leaf_name_data.push_back(sdr_nm_num_clients.get_name_leafdata());
    if (esd_client_num_clients.is_set || is_set(esd_client_num_clients.yfilter)) leaf_name_data.push_back(esd_client_num_clients.get_name_leafdata());
    if (mlap_client_num_clients.is_set || is_set(mlap_client_num_clients.yfilter)) leaf_name_data.push_back(mlap_client_num_clients.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esdma-info")
    {
        if(esdma_info == nullptr)
        {
            esdma_info = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo>();
        }
        return esdma_info;
    }

    if(child_yang_name == "sdr-nm-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId>();
        c->parent = this;
        sdr_nm_client_id.push_back(c);
        return c;
    }

    if(child_yang_name == "esd-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId>();
        c->parent = this;
        esd_client_id.push_back(c);
        return c;
    }

    if(child_yang_name == "mlap-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId>();
        c->parent = this;
        mlap_client_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(esdma_info != nullptr)
    {
        children["esdma-info"] = esdma_info;
    }

    count = 0;
    for (auto const & c : sdr_nm_client_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : esd_client_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : mlap_client_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-nm-num-clients")
    {
        sdr_nm_num_clients = value;
        sdr_nm_num_clients.value_namespace = name_space;
        sdr_nm_num_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-num-clients")
    {
        esd_client_num_clients = value;
        esd_client_num_clients.value_namespace = name_space;
        esd_client_num_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-num-clients")
    {
        mlap_client_num_clients = value;
        mlap_client_num_clients.value_namespace = name_space;
        mlap_client_num_clients.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-nm-num-clients")
    {
        sdr_nm_num_clients.yfilter = yfilter;
    }
    if(value_path == "esd-client-num-clients")
    {
        esd_client_num_clients.yfilter = yfilter;
    }
    if(value_path == "mlap-client-num-clients")
    {
        mlap_client_num_clients.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esdma-info" || name == "sdr-nm-client-id" || name == "esd-client-id" || name == "mlap-client-id" || name == "sdr-nm-num-clients" || name == "esd-client-num-clients" || name == "mlap-client-num-clients")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::EsdmaInfo()
    :
    active_esdma_address{YType::str, "active-esdma-address"}
{

    yang_name = "esdma-info"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::~EsdmaInfo()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_data() const
{
    return active_esdma_address.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_esdma_address.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esdma-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_esdma_address.is_set || is_set(active_esdma_address.yfilter)) leaf_name_data.push_back(active_esdma_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-esdma-address")
    {
        active_esdma_address = value;
        active_esdma_address.value_namespace = name_space;
        active_esdma_address.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-esdma-address")
    {
        active_esdma_address.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-esdma-address")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::SdrNmClientId()
    :
    sdr_nm_ip_address{YType::str, "sdr-nm-ip-address"},
    sdr_nm_port_num{YType::uint16, "sdr-nm-port-num"}
{

    yang_name = "sdr-nm-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::~SdrNmClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_data() const
{
    return sdr_nm_ip_address.is_set
	|| sdr_nm_port_num.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr_nm_ip_address.yfilter)
	|| ydk::is_set(sdr_nm_port_num.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-nm-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_nm_ip_address.is_set || is_set(sdr_nm_ip_address.yfilter)) leaf_name_data.push_back(sdr_nm_ip_address.get_name_leafdata());
    if (sdr_nm_port_num.is_set || is_set(sdr_nm_port_num.yfilter)) leaf_name_data.push_back(sdr_nm_port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-nm-ip-address")
    {
        sdr_nm_ip_address = value;
        sdr_nm_ip_address.value_namespace = name_space;
        sdr_nm_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-nm-port-num")
    {
        sdr_nm_port_num = value;
        sdr_nm_port_num.value_namespace = name_space;
        sdr_nm_port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-nm-ip-address")
    {
        sdr_nm_ip_address.yfilter = yfilter;
    }
    if(value_path == "sdr-nm-port-num")
    {
        sdr_nm_port_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-nm-ip-address" || name == "sdr-nm-port-num")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::EsdClientId()
    :
    esd_client_ip_address{YType::str, "esd-client-ip-address"},
    esd_client_port_num{YType::uint16, "esd-client-port-num"},
    esd_client_location{YType::str, "esd-client-location"},
    esd_client_switch_info_cached{YType::enumeration, "esd-client-switch-info-cached"},
    esd_client_sdr_info_cached{YType::enumeration, "esd-client-sdr-info-cached"}
{

    yang_name = "esd-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::~EsdClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_data() const
{
    return esd_client_ip_address.is_set
	|| esd_client_port_num.is_set
	|| esd_client_location.is_set
	|| esd_client_switch_info_cached.is_set
	|| esd_client_sdr_info_cached.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esd_client_ip_address.yfilter)
	|| ydk::is_set(esd_client_port_num.yfilter)
	|| ydk::is_set(esd_client_location.yfilter)
	|| ydk::is_set(esd_client_switch_info_cached.yfilter)
	|| ydk::is_set(esd_client_sdr_info_cached.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esd_client_ip_address.is_set || is_set(esd_client_ip_address.yfilter)) leaf_name_data.push_back(esd_client_ip_address.get_name_leafdata());
    if (esd_client_port_num.is_set || is_set(esd_client_port_num.yfilter)) leaf_name_data.push_back(esd_client_port_num.get_name_leafdata());
    if (esd_client_location.is_set || is_set(esd_client_location.yfilter)) leaf_name_data.push_back(esd_client_location.get_name_leafdata());
    if (esd_client_switch_info_cached.is_set || is_set(esd_client_switch_info_cached.yfilter)) leaf_name_data.push_back(esd_client_switch_info_cached.get_name_leafdata());
    if (esd_client_sdr_info_cached.is_set || is_set(esd_client_sdr_info_cached.yfilter)) leaf_name_data.push_back(esd_client_sdr_info_cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esd-client-ip-address")
    {
        esd_client_ip_address = value;
        esd_client_ip_address.value_namespace = name_space;
        esd_client_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-port-num")
    {
        esd_client_port_num = value;
        esd_client_port_num.value_namespace = name_space;
        esd_client_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-location")
    {
        esd_client_location = value;
        esd_client_location.value_namespace = name_space;
        esd_client_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-switch-info-cached")
    {
        esd_client_switch_info_cached = value;
        esd_client_switch_info_cached.value_namespace = name_space;
        esd_client_switch_info_cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-sdr-info-cached")
    {
        esd_client_sdr_info_cached = value;
        esd_client_sdr_info_cached.value_namespace = name_space;
        esd_client_sdr_info_cached.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esd-client-ip-address")
    {
        esd_client_ip_address.yfilter = yfilter;
    }
    if(value_path == "esd-client-port-num")
    {
        esd_client_port_num.yfilter = yfilter;
    }
    if(value_path == "esd-client-location")
    {
        esd_client_location.yfilter = yfilter;
    }
    if(value_path == "esd-client-switch-info-cached")
    {
        esd_client_switch_info_cached.yfilter = yfilter;
    }
    if(value_path == "esd-client-sdr-info-cached")
    {
        esd_client_sdr_info_cached.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-client-ip-address" || name == "esd-client-port-num" || name == "esd-client-location" || name == "esd-client-switch-info-cached" || name == "esd-client-sdr-info-cached")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::MlapClientId()
    :
    mlap_client_ip_address{YType::str, "mlap-client-ip-address"},
    mlap_client_port_num{YType::uint16, "mlap-client-port-num"},
    mlap_client_location{YType::str, "mlap-client-location"},
    mlap_client_switch_info_cached{YType::enumeration, "mlap-client-switch-info-cached"}
{

    yang_name = "mlap-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::~MlapClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_data() const
{
    return mlap_client_ip_address.is_set
	|| mlap_client_port_num.is_set
	|| mlap_client_location.is_set
	|| mlap_client_switch_info_cached.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlap_client_ip_address.yfilter)
	|| ydk::is_set(mlap_client_port_num.yfilter)
	|| ydk::is_set(mlap_client_location.yfilter)
	|| ydk::is_set(mlap_client_switch_info_cached.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlap-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlap_client_ip_address.is_set || is_set(mlap_client_ip_address.yfilter)) leaf_name_data.push_back(mlap_client_ip_address.get_name_leafdata());
    if (mlap_client_port_num.is_set || is_set(mlap_client_port_num.yfilter)) leaf_name_data.push_back(mlap_client_port_num.get_name_leafdata());
    if (mlap_client_location.is_set || is_set(mlap_client_location.yfilter)) leaf_name_data.push_back(mlap_client_location.get_name_leafdata());
    if (mlap_client_switch_info_cached.is_set || is_set(mlap_client_switch_info_cached.yfilter)) leaf_name_data.push_back(mlap_client_switch_info_cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlap-client-ip-address")
    {
        mlap_client_ip_address = value;
        mlap_client_ip_address.value_namespace = name_space;
        mlap_client_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-port-num")
    {
        mlap_client_port_num = value;
        mlap_client_port_num.value_namespace = name_space;
        mlap_client_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-location")
    {
        mlap_client_location = value;
        mlap_client_location.value_namespace = name_space;
        mlap_client_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-switch-info-cached")
    {
        mlap_client_switch_info_cached = value;
        mlap_client_switch_info_cached.value_namespace = name_space;
        mlap_client_switch_info_cached.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlap-client-ip-address")
    {
        mlap_client_ip_address.yfilter = yfilter;
    }
    if(value_path == "mlap-client-port-num")
    {
        mlap_client_port_num.yfilter = yfilter;
    }
    if(value_path == "mlap-client-location")
    {
        mlap_client_location.yfilter = yfilter;
    }
    if(value_path == "mlap-client-switch-info-cached")
    {
        mlap_client_switch_info_cached.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlap-client-ip-address" || name == "mlap-client-port-num" || name == "mlap-client-location" || name == "mlap-client-switch-info-cached")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Sdr()
    :
    port_statistics(std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics>())
	,global_statistics(std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics>())
	,policers(std::make_shared<Controller::Switch::Oper::Sdr::Policers>())
	,sdr_detail(std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail>())
{
    port_statistics->parent = this;
    global_statistics->parent = this;
    policers->parent = this;
    sdr_detail->parent = this;

    yang_name = "sdr"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::~Sdr()
{
}

bool Controller::Switch::Oper::Sdr::has_data() const
{
    return (port_statistics !=  nullptr && port_statistics->has_data())
	|| (global_statistics !=  nullptr && global_statistics->has_data())
	|| (policers !=  nullptr && policers->has_data())
	|| (sdr_detail !=  nullptr && sdr_detail->has_data());
}

bool Controller::Switch::Oper::Sdr::has_operation() const
{
    return is_set(yfilter)
	|| (port_statistics !=  nullptr && port_statistics->has_operation())
	|| (global_statistics !=  nullptr && global_statistics->has_operation())
	|| (policers !=  nullptr && policers->has_operation())
	|| (sdr_detail !=  nullptr && sdr_detail->has_operation());
}

std::string Controller::Switch::Oper::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-statistics")
    {
        if(port_statistics == nullptr)
        {
            port_statistics = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics>();
        }
        return port_statistics;
    }

    if(child_yang_name == "global-statistics")
    {
        if(global_statistics == nullptr)
        {
            global_statistics = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics>();
        }
        return global_statistics;
    }

    if(child_yang_name == "policers")
    {
        if(policers == nullptr)
        {
            policers = std::make_shared<Controller::Switch::Oper::Sdr::Policers>();
        }
        return policers;
    }

    if(child_yang_name == "sdr-detail")
    {
        if(sdr_detail == nullptr)
        {
            sdr_detail = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail>();
        }
        return sdr_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port_statistics != nullptr)
    {
        children["port-statistics"] = port_statistics;
    }

    if(global_statistics != nullptr)
    {
        children["global-statistics"] = global_statistics;
    }

    if(policers != nullptr)
    {
        children["policers"] = policers;
    }

    if(sdr_detail != nullptr)
    {
        children["sdr-detail"] = sdr_detail;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-statistics" || name == "global-statistics" || name == "policers" || name == "sdr-detail")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::PortStatistics()
{

    yang_name = "port-statistics"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::PortStatistics::~PortStatistics()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::PortStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "port-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/sdr/port-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::has_data() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId>();
        c->parent = this;
        sdr_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sdr_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
{

    yang_name = "sdr-id"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::has_data() const
{
    for (std::size_t index=0; index<traffic_type_id.size(); index++)
    {
        if(traffic_type_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::has_operation() const
{
    for (std::size_t index=0; index<traffic_type_id.size(); index++)
    {
        if(traffic_type_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id" <<"[sdr='" <<sdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-type-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId>();
        c->parent = this;
        traffic_type_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : traffic_type_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-type-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::TrafficTypeId()
    :
    traffic_type{YType::enumeration, "traffic-type"}
{

    yang_name = "traffic-type-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::~TrafficTypeId()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::has_data() const
{
    for (std::size_t index=0; index<direction_id.size(); index++)
    {
        if(direction_id[index]->has_data())
            return true;
    }
    return traffic_type.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::has_operation() const
{
    for (std::size_t index=0; index<direction_id.size(); index++)
    {
        if(direction_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(traffic_type.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-type-id" <<"[traffic-type='" <<traffic_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_type.is_set || is_set(traffic_type.yfilter)) leaf_name_data.push_back(traffic_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "direction-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId>();
        c->parent = this;
        direction_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : direction_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-type")
    {
        traffic_type = value;
        traffic_type.value_namespace = name_space;
        traffic_type.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-type")
    {
        traffic_type.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction-id" || name == "traffic-type")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::DirectionId()
    :
    direction{YType::enumeration, "direction"},
    green_packets{YType::uint64, "green-packets"},
    yellow_packets{YType::uint64, "yellow-packets"},
    red_packets{YType::uint64, "red-packets"}
{

    yang_name = "direction-id"; yang_parent_name = "traffic-type-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::~DirectionId()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::has_data() const
{
    return direction.is_set
	|| green_packets.is_set
	|| yellow_packets.is_set
	|| red_packets.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(green_packets.yfilter)
	|| ydk::is_set(yellow_packets.yfilter)
	|| ydk::is_set(red_packets.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction-id" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (green_packets.is_set || is_set(green_packets.yfilter)) leaf_name_data.push_back(green_packets.get_name_leafdata());
    if (yellow_packets.is_set || is_set(yellow_packets.yfilter)) leaf_name_data.push_back(yellow_packets.get_name_leafdata());
    if (red_packets.is_set || is_set(red_packets.yfilter)) leaf_name_data.push_back(red_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "green-packets")
    {
        green_packets = value;
        green_packets.value_namespace = name_space;
        green_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets = value;
        yellow_packets.value_namespace = name_space;
        yellow_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-packets")
    {
        red_packets = value;
        red_packets.value_namespace = name_space;
        red_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "green-packets")
    {
        green_packets.yfilter = yfilter;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets.yfilter = yfilter;
    }
    if(value_path == "red-packets")
    {
        red_packets.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "green-packets" || name == "yellow-packets" || name == "red-packets")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::GlobalStatistics()
{

    yang_name = "global-statistics"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::~GlobalStatistics()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "global-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::has_data() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/sdr/global-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId>();
        c->parent = this;
        sdr_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sdr_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
{

    yang_name = "sdr-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::has_data() const
{
    for (std::size_t index=0; index<traffic_type_id.size(); index++)
    {
        if(traffic_type_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::has_operation() const
{
    for (std::size_t index=0; index<traffic_type_id.size(); index++)
    {
        if(traffic_type_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id" <<"[sdr='" <<sdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-type-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId>();
        c->parent = this;
        traffic_type_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : traffic_type_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-type-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficTypeId()
    :
    traffic_type{YType::enumeration, "traffic-type"}
{

    yang_name = "traffic-type-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::~TrafficTypeId()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::has_data() const
{
    for (std::size_t index=0; index<traffic_class_id.size(); index++)
    {
        if(traffic_class_id[index]->has_data())
            return true;
    }
    return traffic_type.is_set;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::has_operation() const
{
    for (std::size_t index=0; index<traffic_class_id.size(); index++)
    {
        if(traffic_class_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(traffic_type.yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-type-id" <<"[traffic-type='" <<traffic_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_type.is_set || is_set(traffic_type.yfilter)) leaf_name_data.push_back(traffic_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-class-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId>();
        c->parent = this;
        traffic_class_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : traffic_class_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-type")
    {
        traffic_type = value;
        traffic_type.value_namespace = name_space;
        traffic_type.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-type")
    {
        traffic_type.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class-id" || name == "traffic-type")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::TrafficClassId()
    :
    tc{YType::int8, "tc"},
    green_packets{YType::uint64, "green-packets"},
    yellow_packets{YType::uint64, "yellow-packets"},
    red_packets{YType::uint64, "red-packets"}
{

    yang_name = "traffic-class-id"; yang_parent_name = "traffic-type-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::~TrafficClassId()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::has_data() const
{
    return tc.is_set
	|| green_packets.is_set
	|| yellow_packets.is_set
	|| red_packets.is_set;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tc.yfilter)
	|| ydk::is_set(green_packets.yfilter)
	|| ydk::is_set(yellow_packets.yfilter)
	|| ydk::is_set(red_packets.yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class-id" <<"[tc='" <<tc <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tc.is_set || is_set(tc.yfilter)) leaf_name_data.push_back(tc.get_name_leafdata());
    if (green_packets.is_set || is_set(green_packets.yfilter)) leaf_name_data.push_back(green_packets.get_name_leafdata());
    if (yellow_packets.is_set || is_set(yellow_packets.yfilter)) leaf_name_data.push_back(yellow_packets.get_name_leafdata());
    if (red_packets.is_set || is_set(red_packets.yfilter)) leaf_name_data.push_back(red_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tc")
    {
        tc = value;
        tc.value_namespace = name_space;
        tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "green-packets")
    {
        green_packets = value;
        green_packets.value_namespace = name_space;
        green_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets = value;
        yellow_packets.value_namespace = name_space;
        yellow_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-packets")
    {
        red_packets = value;
        red_packets.value_namespace = name_space;
        red_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tc")
    {
        tc.yfilter = yfilter;
    }
    if(value_path == "green-packets")
    {
        green_packets.yfilter = yfilter;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets.yfilter = yfilter;
    }
    if(value_path == "red-packets")
    {
        red_packets.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tc" || name == "green-packets" || name == "yellow-packets" || name == "red-packets")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Policers()
{

    yang_name = "policers"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::Policers::~Policers()
{
}

bool Controller::Switch::Oper::Sdr::Policers::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::Policers::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::Policers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::Policers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::Policers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::Policers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::Policers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
    	,
    esd_policer_status(std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus>())
{
    esd_policer_status->parent = this;

    yang_name = "location"; yang_parent_name = "policers"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::Policers::Location::~Location()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::has_data() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| (esd_policer_status !=  nullptr && esd_policer_status->has_data());
}

bool Controller::Switch::Oper::Sdr::Policers::Location::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| (esd_policer_status !=  nullptr && esd_policer_status->has_operation());
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/sdr/policers/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esd-policer-status")
    {
        if(esd_policer_status == nullptr)
        {
            esd_policer_status = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus>();
        }
        return esd_policer_status;
    }

    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::SdrId>();
        c->parent = this;
        sdr_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(esd_policer_status != nullptr)
    {
        children["esd-policer-status"] = esd_policer_status;
    }

    count = 0;
    for (auto const & c : sdr_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Sdr::Policers::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Sdr::Policers::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-policer-status" || name == "sdr-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::EsdPolicerStatus()
    :
    indent_group(std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup>())
{
    indent_group->parent = this;

    yang_name = "esd-policer-status"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::~EsdPolicerStatus()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::has_data() const
{
    return (indent_group !=  nullptr && indent_group->has_data());
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::has_operation() const
{
    return is_set(yfilter)
	|| (indent_group !=  nullptr && indent_group->has_operation());
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-policer-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indent-group")
    {
        if(indent_group == nullptr)
        {
            indent_group = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup>();
        }
        return indent_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(indent_group != nullptr)
    {
        children["indent-group"] = indent_group;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indent-group")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::IndentGroup()
    :
    esd_port_policing_enabled{YType::enumeration, "esd-port-policing-enabled"},
    esd_port_committed_burst_size{YType::uint32, "esd-port-committed-burst-size"},
    esd_port_peak_burst_size{YType::uint32, "esd-port-peak-burst-size"},
    esd_port_policer_mru{YType::uint32, "esd-port-policer-mru"},
    esd_global_policing_enabled{YType::enumeration, "esd-global-policing-enabled"},
    esd_global_committed_burst_size{YType::uint32, "esd-global-committed-burst-size"},
    esd_global_peak_burst_size{YType::uint32, "esd-global-peak-burst-size"},
    esd_global_policer_mru{YType::uint32, "esd-global-policer-mru"}
{

    yang_name = "indent-group"; yang_parent_name = "esd-policer-status"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::~IndentGroup()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::has_data() const
{
    return esd_port_policing_enabled.is_set
	|| esd_port_committed_burst_size.is_set
	|| esd_port_peak_burst_size.is_set
	|| esd_port_policer_mru.is_set
	|| esd_global_policing_enabled.is_set
	|| esd_global_committed_burst_size.is_set
	|| esd_global_peak_burst_size.is_set
	|| esd_global_policer_mru.is_set;
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esd_port_policing_enabled.yfilter)
	|| ydk::is_set(esd_port_committed_burst_size.yfilter)
	|| ydk::is_set(esd_port_peak_burst_size.yfilter)
	|| ydk::is_set(esd_port_policer_mru.yfilter)
	|| ydk::is_set(esd_global_policing_enabled.yfilter)
	|| ydk::is_set(esd_global_committed_burst_size.yfilter)
	|| ydk::is_set(esd_global_peak_burst_size.yfilter)
	|| ydk::is_set(esd_global_policer_mru.yfilter);
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indent-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esd_port_policing_enabled.is_set || is_set(esd_port_policing_enabled.yfilter)) leaf_name_data.push_back(esd_port_policing_enabled.get_name_leafdata());
    if (esd_port_committed_burst_size.is_set || is_set(esd_port_committed_burst_size.yfilter)) leaf_name_data.push_back(esd_port_committed_burst_size.get_name_leafdata());
    if (esd_port_peak_burst_size.is_set || is_set(esd_port_peak_burst_size.yfilter)) leaf_name_data.push_back(esd_port_peak_burst_size.get_name_leafdata());
    if (esd_port_policer_mru.is_set || is_set(esd_port_policer_mru.yfilter)) leaf_name_data.push_back(esd_port_policer_mru.get_name_leafdata());
    if (esd_global_policing_enabled.is_set || is_set(esd_global_policing_enabled.yfilter)) leaf_name_data.push_back(esd_global_policing_enabled.get_name_leafdata());
    if (esd_global_committed_burst_size.is_set || is_set(esd_global_committed_burst_size.yfilter)) leaf_name_data.push_back(esd_global_committed_burst_size.get_name_leafdata());
    if (esd_global_peak_burst_size.is_set || is_set(esd_global_peak_burst_size.yfilter)) leaf_name_data.push_back(esd_global_peak_burst_size.get_name_leafdata());
    if (esd_global_policer_mru.is_set || is_set(esd_global_policer_mru.yfilter)) leaf_name_data.push_back(esd_global_policer_mru.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esd-port-policing-enabled")
    {
        esd_port_policing_enabled = value;
        esd_port_policing_enabled.value_namespace = name_space;
        esd_port_policing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-port-committed-burst-size")
    {
        esd_port_committed_burst_size = value;
        esd_port_committed_burst_size.value_namespace = name_space;
        esd_port_committed_burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-port-peak-burst-size")
    {
        esd_port_peak_burst_size = value;
        esd_port_peak_burst_size.value_namespace = name_space;
        esd_port_peak_burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-port-policer-mru")
    {
        esd_port_policer_mru = value;
        esd_port_policer_mru.value_namespace = name_space;
        esd_port_policer_mru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-global-policing-enabled")
    {
        esd_global_policing_enabled = value;
        esd_global_policing_enabled.value_namespace = name_space;
        esd_global_policing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-global-committed-burst-size")
    {
        esd_global_committed_burst_size = value;
        esd_global_committed_burst_size.value_namespace = name_space;
        esd_global_committed_burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-global-peak-burst-size")
    {
        esd_global_peak_burst_size = value;
        esd_global_peak_burst_size.value_namespace = name_space;
        esd_global_peak_burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-global-policer-mru")
    {
        esd_global_policer_mru = value;
        esd_global_policer_mru.value_namespace = name_space;
        esd_global_policer_mru.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esd-port-policing-enabled")
    {
        esd_port_policing_enabled.yfilter = yfilter;
    }
    if(value_path == "esd-port-committed-burst-size")
    {
        esd_port_committed_burst_size.yfilter = yfilter;
    }
    if(value_path == "esd-port-peak-burst-size")
    {
        esd_port_peak_burst_size.yfilter = yfilter;
    }
    if(value_path == "esd-port-policer-mru")
    {
        esd_port_policer_mru.yfilter = yfilter;
    }
    if(value_path == "esd-global-policing-enabled")
    {
        esd_global_policing_enabled.yfilter = yfilter;
    }
    if(value_path == "esd-global-committed-burst-size")
    {
        esd_global_committed_burst_size.yfilter = yfilter;
    }
    if(value_path == "esd-global-peak-burst-size")
    {
        esd_global_peak_burst_size.yfilter = yfilter;
    }
    if(value_path == "esd-global-policer-mru")
    {
        esd_global_policer_mru.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-port-policing-enabled" || name == "esd-port-committed-burst-size" || name == "esd-port-peak-burst-size" || name == "esd-port-policer-mru" || name == "esd-global-policing-enabled" || name == "esd-global-committed-burst-size" || name == "esd-global-peak-burst-size" || name == "esd-global-policer-mru")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"},
    esd_sdr_cir{YType::uint8, "esd-sdr-cir"},
    esd_sdr_pir{YType::uint8, "esd-sdr-pir"}
{

    yang_name = "sdr-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::Policers::Location::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::has_data() const
{
    for (std::size_t index=0; index<esd_sdr_cos_type_iter.size(); index++)
    {
        if(esd_sdr_cos_type_iter[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set
	|| esd_sdr_cir.is_set
	|| esd_sdr_pir.is_set;
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::has_operation() const
{
    for (std::size_t index=0; index<esd_sdr_cos_type_iter.size(); index++)
    {
        if(esd_sdr_cos_type_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter)
	|| ydk::is_set(esd_sdr_cir.yfilter)
	|| ydk::is_set(esd_sdr_pir.yfilter);
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id" <<"[sdr='" <<sdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());
    if (esd_sdr_cir.is_set || is_set(esd_sdr_cir.yfilter)) leaf_name_data.push_back(esd_sdr_cir.get_name_leafdata());
    if (esd_sdr_pir.is_set || is_set(esd_sdr_pir.yfilter)) leaf_name_data.push_back(esd_sdr_pir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esd-sdr-cos-type-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter>();
        c->parent = this;
        esd_sdr_cos_type_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : esd_sdr_cos_type_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cir")
    {
        esd_sdr_cir = value;
        esd_sdr_cir.value_namespace = name_space;
        esd_sdr_cir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-pir")
    {
        esd_sdr_pir = value;
        esd_sdr_pir.value_namespace = name_space;
        esd_sdr_pir.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::Policers::Location::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cir")
    {
        esd_sdr_cir.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-pir")
    {
        esd_sdr_pir.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-sdr-cos-type-iter" || name == "sdr" || name == "esd-sdr-name" || name == "esd-sdr-cir" || name == "esd-sdr-pir")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::EsdSdrCosTypeIter()
    :
    esd_sdr_cos_type{YType::enumeration, "esd-sdr-cos-type"},
    esd_sdr_cos_0{YType::uint8, "esd-sdr-cos-0"},
    esd_sdr_cos_1{YType::uint8, "esd-sdr-cos-1"},
    esd_sdr_cos_2{YType::uint8, "esd-sdr-cos-2"},
    esd_sdr_cos_3{YType::uint8, "esd-sdr-cos-3"},
    esd_sdr_cos_4{YType::uint8, "esd-sdr-cos-4"},
    esd_sdr_cos_5{YType::uint8, "esd-sdr-cos-5"},
    esd_sdr_cos_6{YType::uint8, "esd-sdr-cos-6"},
    esd_sdr_cos_7{YType::uint8, "esd-sdr-cos-7"}
{

    yang_name = "esd-sdr-cos-type-iter"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::~EsdSdrCosTypeIter()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::has_data() const
{
    return esd_sdr_cos_type.is_set
	|| esd_sdr_cos_0.is_set
	|| esd_sdr_cos_1.is_set
	|| esd_sdr_cos_2.is_set
	|| esd_sdr_cos_3.is_set
	|| esd_sdr_cos_4.is_set
	|| esd_sdr_cos_5.is_set
	|| esd_sdr_cos_6.is_set
	|| esd_sdr_cos_7.is_set;
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esd_sdr_cos_type.yfilter)
	|| ydk::is_set(esd_sdr_cos_0.yfilter)
	|| ydk::is_set(esd_sdr_cos_1.yfilter)
	|| ydk::is_set(esd_sdr_cos_2.yfilter)
	|| ydk::is_set(esd_sdr_cos_3.yfilter)
	|| ydk::is_set(esd_sdr_cos_4.yfilter)
	|| ydk::is_set(esd_sdr_cos_5.yfilter)
	|| ydk::is_set(esd_sdr_cos_6.yfilter)
	|| ydk::is_set(esd_sdr_cos_7.yfilter);
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-sdr-cos-type-iter" <<"[esd-sdr-cos-type='" <<esd_sdr_cos_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esd_sdr_cos_type.is_set || is_set(esd_sdr_cos_type.yfilter)) leaf_name_data.push_back(esd_sdr_cos_type.get_name_leafdata());
    if (esd_sdr_cos_0.is_set || is_set(esd_sdr_cos_0.yfilter)) leaf_name_data.push_back(esd_sdr_cos_0.get_name_leafdata());
    if (esd_sdr_cos_1.is_set || is_set(esd_sdr_cos_1.yfilter)) leaf_name_data.push_back(esd_sdr_cos_1.get_name_leafdata());
    if (esd_sdr_cos_2.is_set || is_set(esd_sdr_cos_2.yfilter)) leaf_name_data.push_back(esd_sdr_cos_2.get_name_leafdata());
    if (esd_sdr_cos_3.is_set || is_set(esd_sdr_cos_3.yfilter)) leaf_name_data.push_back(esd_sdr_cos_3.get_name_leafdata());
    if (esd_sdr_cos_4.is_set || is_set(esd_sdr_cos_4.yfilter)) leaf_name_data.push_back(esd_sdr_cos_4.get_name_leafdata());
    if (esd_sdr_cos_5.is_set || is_set(esd_sdr_cos_5.yfilter)) leaf_name_data.push_back(esd_sdr_cos_5.get_name_leafdata());
    if (esd_sdr_cos_6.is_set || is_set(esd_sdr_cos_6.yfilter)) leaf_name_data.push_back(esd_sdr_cos_6.get_name_leafdata());
    if (esd_sdr_cos_7.is_set || is_set(esd_sdr_cos_7.yfilter)) leaf_name_data.push_back(esd_sdr_cos_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esd-sdr-cos-type")
    {
        esd_sdr_cos_type = value;
        esd_sdr_cos_type.value_namespace = name_space;
        esd_sdr_cos_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-0")
    {
        esd_sdr_cos_0 = value;
        esd_sdr_cos_0.value_namespace = name_space;
        esd_sdr_cos_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-1")
    {
        esd_sdr_cos_1 = value;
        esd_sdr_cos_1.value_namespace = name_space;
        esd_sdr_cos_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-2")
    {
        esd_sdr_cos_2 = value;
        esd_sdr_cos_2.value_namespace = name_space;
        esd_sdr_cos_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-3")
    {
        esd_sdr_cos_3 = value;
        esd_sdr_cos_3.value_namespace = name_space;
        esd_sdr_cos_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-4")
    {
        esd_sdr_cos_4 = value;
        esd_sdr_cos_4.value_namespace = name_space;
        esd_sdr_cos_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-5")
    {
        esd_sdr_cos_5 = value;
        esd_sdr_cos_5.value_namespace = name_space;
        esd_sdr_cos_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-6")
    {
        esd_sdr_cos_6 = value;
        esd_sdr_cos_6.value_namespace = name_space;
        esd_sdr_cos_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-7")
    {
        esd_sdr_cos_7 = value;
        esd_sdr_cos_7.value_namespace = name_space;
        esd_sdr_cos_7.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esd-sdr-cos-type")
    {
        esd_sdr_cos_type.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-0")
    {
        esd_sdr_cos_0.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-1")
    {
        esd_sdr_cos_1.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-2")
    {
        esd_sdr_cos_2.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-3")
    {
        esd_sdr_cos_3.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-4")
    {
        esd_sdr_cos_4.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-5")
    {
        esd_sdr_cos_5.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-6")
    {
        esd_sdr_cos_6.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-7")
    {
        esd_sdr_cos_7.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-sdr-cos-type" || name == "esd-sdr-cos-0" || name == "esd-sdr-cos-1" || name == "esd-sdr-cos-2" || name == "esd-sdr-cos-3" || name == "esd-sdr-cos-4" || name == "esd-sdr-cos-5" || name == "esd-sdr-cos-6" || name == "esd-sdr-cos-7")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrDetail()
{

    yang_name = "sdr-detail"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::SdrDetail::~SdrDetail()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::has_data() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.size(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId>();
        c->parent = this;
        sdr_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sdr_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::SdrDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"}
    	,
    port_statistics(std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics>())
{
    port_statistics->parent = this;

    yang_name = "sdr-id"; yang_parent_name = "sdr-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::has_data() const
{
    return sdr.is_set
	|| (port_statistics !=  nullptr && port_statistics->has_data());
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| (port_statistics !=  nullptr && port_statistics->has_operation());
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/sdr/sdr-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id" <<"[sdr='" <<sdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-statistics")
    {
        if(port_statistics == nullptr)
        {
            port_statistics = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics>();
        }
        return port_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port_statistics != nullptr)
    {
        children["port-statistics"] = port_statistics;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-statistics" || name == "sdr")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::PortStatistics()
{

    yang_name = "port-statistics"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::~PortStatistics()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "port-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::has_data() const
{
    for (std::size_t index=0; index<traffic_type_id.size(); index++)
    {
        if(traffic_type_id[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<traffic_type_id.size(); index++)
    {
        if(traffic_type_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-type-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId>();
        c->parent = this;
        traffic_type_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : traffic_type_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-type-id" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::TrafficTypeId()
    :
    traffic_type{YType::enumeration, "traffic-type"}
{

    yang_name = "traffic-type-id"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::~TrafficTypeId()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::has_data() const
{
    for (std::size_t index=0; index<direction_id.size(); index++)
    {
        if(direction_id[index]->has_data())
            return true;
    }
    return traffic_type.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::has_operation() const
{
    for (std::size_t index=0; index<direction_id.size(); index++)
    {
        if(direction_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(traffic_type.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-type-id" <<"[traffic-type='" <<traffic_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_type.is_set || is_set(traffic_type.yfilter)) leaf_name_data.push_back(traffic_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "direction-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId>();
        c->parent = this;
        direction_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : direction_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-type")
    {
        traffic_type = value;
        traffic_type.value_namespace = name_space;
        traffic_type.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-type")
    {
        traffic_type.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction-id" || name == "traffic-type")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::DirectionId()
    :
    direction{YType::enumeration, "direction"}
{

    yang_name = "direction-id"; yang_parent_name = "traffic-type-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::~DirectionId()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::has_data() const
{
    for (std::size_t index=0; index<traffic_class_id.size(); index++)
    {
        if(traffic_class_id[index]->has_data())
            return true;
    }
    return direction.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::has_operation() const
{
    for (std::size_t index=0; index<traffic_class_id.size(); index++)
    {
        if(traffic_class_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction-id" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-class-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId>();
        c->parent = this;
        traffic_class_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : traffic_class_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class-id" || name == "direction")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::TrafficClassId()
    :
    tc{YType::int8, "tc"},
    green_packets{YType::uint64, "green-packets"},
    yellow_packets{YType::uint64, "yellow-packets"},
    red_packets{YType::uint64, "red-packets"}
{

    yang_name = "traffic-class-id"; yang_parent_name = "direction-id"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::~TrafficClassId()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::has_data() const
{
    return tc.is_set
	|| green_packets.is_set
	|| yellow_packets.is_set
	|| red_packets.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tc.yfilter)
	|| ydk::is_set(green_packets.yfilter)
	|| ydk::is_set(yellow_packets.yfilter)
	|| ydk::is_set(red_packets.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class-id" <<"[tc='" <<tc <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tc.is_set || is_set(tc.yfilter)) leaf_name_data.push_back(tc.get_name_leafdata());
    if (green_packets.is_set || is_set(green_packets.yfilter)) leaf_name_data.push_back(green_packets.get_name_leafdata());
    if (yellow_packets.is_set || is_set(yellow_packets.yfilter)) leaf_name_data.push_back(yellow_packets.get_name_leafdata());
    if (red_packets.is_set || is_set(red_packets.yfilter)) leaf_name_data.push_back(red_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tc")
    {
        tc = value;
        tc.value_namespace = name_space;
        tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "green-packets")
    {
        green_packets = value;
        green_packets.value_namespace = name_space;
        green_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets = value;
        yellow_packets.value_namespace = name_space;
        yellow_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-packets")
    {
        red_packets = value;
        red_packets.value_namespace = name_space;
        red_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tc")
    {
        tc.yfilter = yfilter;
    }
    if(value_path == "green-packets")
    {
        green_packets.yfilter = yfilter;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets.yfilter = yfilter;
    }
    if(value_path == "red-packets")
    {
        red_packets.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tc" || name == "green-packets" || name == "yellow-packets" || name == "red-packets")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::PortState()
{

    yang_name = "port-state"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::PortState::~PortState()
{
}

bool Controller::Switch::Oper::PortState::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::PortState::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::PortState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::PortState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::PortState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::PortState::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::PortState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::PortState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::PortState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::PortState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "port-state"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::PortState::Location::~Location()
{
}

bool Controller::Switch::Oper::PortState::Location::has_data() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::PortState::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.size(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::PortState::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/port-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::PortState::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::PortState::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::PortState::Location::PortIter>();
        c->parent = this;
        port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::PortState::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_iter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::PortState::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::PortState::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::PortState::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

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
    path_buffer << "port-iter" <<"[port='" <<port <<"']";
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
{

    yang_name = "trunk"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Trunk::~Trunk()
{
}

bool Controller::Switch::Oper::Trunk::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Trunk::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Trunk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
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
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
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
{

    yang_name = "location"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::Trunk::Location::~Location()
{
}

bool Controller::Switch::Oper::Trunk::Location::has_data() const
{
    for (std::size_t index=0; index<trunk_member_port_iter.size(); index++)
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
    for (std::size_t index=0; index<trunk_member_port_iter.size(); index++)
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
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/trunk/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Trunk::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
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
        trunk_member_port_iter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Trunk::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trunk_member_port_iter)
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
    path_buffer << "trunk-member-port-iter" <<"[trunk-member-port='" <<trunk_member_port <<"']";
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

Controller::Switch::Oper::SwitchDebugCont::SwitchDebugCont()
    :
    debug(std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug>())
{
    debug->parent = this;

    yang_name = "switch-debug-cont"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::SwitchDebugCont::~SwitchDebugCont()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::has_data() const
{
    return (debug !=  nullptr && debug->has_data());
}

bool Controller::Switch::Oper::SwitchDebugCont::has_operation() const
{
    return is_set(yfilter)
	|| (debug !=  nullptr && debug->has_operation());
}

std::string Controller::Switch::Oper::SwitchDebugCont::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::SwitchDebugCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-debug-cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug>();
        }
        return debug;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::SwitchDebugCont::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::SwitchDebugCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Debug()
    :
    counters(std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters>())
{
    counters->parent = this;

    yang_name = "debug"; yang_parent_name = "switch-debug-cont"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::~Debug()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::has_data() const
{
    return (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/switch-debug-cont/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Counters()
{

    yang_name = "counters"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::~Counters()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/switch-debug-cont/debug/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
    	,
    counters(std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_>())
{
    counters->parent = this;

    yang_name = "location"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::~Location()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-asr9k:controller/switch/oper/switch-debug-cont/debug/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::Counters_()
    :
    phy_polling_enabled{YType::boolean, "phy-polling-enabled"},
    tx_thread_wdog_cnt{YType::uint64, "tx-thread-wdog-cnt"},
    rx_thread_wdog_cnt{YType::uint64, "rx-thread-wdog-cnt"},
    task_lock_longest_wait_time{YType::uint64, "task-lock-longest-wait-time"},
    task_lock_longest_wait_event{YType::uint32, "task-lock-longest-wait-event"},
    task_lock_longest_held_time{YType::uint64, "task-lock-longest-held-time"},
    task_lock_longest_held_event{YType::uint32, "task-lock-longest-held-event"},
    task_unlock_longest_wait_time{YType::uint64, "task-unlock-longest-wait-time"},
    task_unlock_longest_wait_event{YType::uint32, "task-unlock-longest-wait-event"},
    dma_max_rx_dequeued_per_int{YType::uint64, "dma-max-rx-dequeued-per-int"},
    dma_rx_packets_dequeued{YType::uint64, "dma-rx-packets-dequeued"},
    dma_rx_packet_dequeue_errors{YType::uint64, "dma-rx-packet-dequeue-errors"},
    dma_tx_packets_queued{YType::uint64, "dma-tx-packets-queued"},
    dma_tx_packets_completed{YType::uint64, "dma-tx-packets-completed"},
    dma_tx_packet_no_msg_errors{YType::uint64, "dma-tx-packet-no-msg-errors"},
    dma_tx_packet_msg_too_big_errors{YType::uint64, "dma-tx-packet-msg-too-big-errors"},
    dma_tx_packet_no_buffer_errors{YType::uint64, "dma-tx-packet-no-buffer-errors"},
    dma_tx_packet_queue_errors{YType::uint64, "dma-tx-packet-queue-errors"},
    dma_tx_packet_completion_errors{YType::uint64, "dma-tx-packet-completion-errors"},
    dma_max_tx_freed_per_int{YType::uint64, "dma-max-tx-freed-per-int"},
    dma_tx_buf_alloc_count{YType::uint64, "dma-tx-buf-alloc-count"},
    dma_tx_buf_free_count{YType::uint64, "dma-tx-buf-free-count"}
{

    yang_name = "counters"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::~Counters_()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::has_data() const
{
    for (std::size_t index=0; index<switch_core.size(); index++)
    {
        if(switch_core[index]->has_data())
            return true;
    }
    return phy_polling_enabled.is_set
	|| tx_thread_wdog_cnt.is_set
	|| rx_thread_wdog_cnt.is_set
	|| task_lock_longest_wait_time.is_set
	|| task_lock_longest_wait_event.is_set
	|| task_lock_longest_held_time.is_set
	|| task_lock_longest_held_event.is_set
	|| task_unlock_longest_wait_time.is_set
	|| task_unlock_longest_wait_event.is_set
	|| dma_max_rx_dequeued_per_int.is_set
	|| dma_rx_packets_dequeued.is_set
	|| dma_rx_packet_dequeue_errors.is_set
	|| dma_tx_packets_queued.is_set
	|| dma_tx_packets_completed.is_set
	|| dma_tx_packet_no_msg_errors.is_set
	|| dma_tx_packet_msg_too_big_errors.is_set
	|| dma_tx_packet_no_buffer_errors.is_set
	|| dma_tx_packet_queue_errors.is_set
	|| dma_tx_packet_completion_errors.is_set
	|| dma_max_tx_freed_per_int.is_set
	|| dma_tx_buf_alloc_count.is_set
	|| dma_tx_buf_free_count.is_set;
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::has_operation() const
{
    for (std::size_t index=0; index<switch_core.size(); index++)
    {
        if(switch_core[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(phy_polling_enabled.yfilter)
	|| ydk::is_set(tx_thread_wdog_cnt.yfilter)
	|| ydk::is_set(rx_thread_wdog_cnt.yfilter)
	|| ydk::is_set(task_lock_longest_wait_time.yfilter)
	|| ydk::is_set(task_lock_longest_wait_event.yfilter)
	|| ydk::is_set(task_lock_longest_held_time.yfilter)
	|| ydk::is_set(task_lock_longest_held_event.yfilter)
	|| ydk::is_set(task_unlock_longest_wait_time.yfilter)
	|| ydk::is_set(task_unlock_longest_wait_event.yfilter)
	|| ydk::is_set(dma_max_rx_dequeued_per_int.yfilter)
	|| ydk::is_set(dma_rx_packets_dequeued.yfilter)
	|| ydk::is_set(dma_rx_packet_dequeue_errors.yfilter)
	|| ydk::is_set(dma_tx_packets_queued.yfilter)
	|| ydk::is_set(dma_tx_packets_completed.yfilter)
	|| ydk::is_set(dma_tx_packet_no_msg_errors.yfilter)
	|| ydk::is_set(dma_tx_packet_msg_too_big_errors.yfilter)
	|| ydk::is_set(dma_tx_packet_no_buffer_errors.yfilter)
	|| ydk::is_set(dma_tx_packet_queue_errors.yfilter)
	|| ydk::is_set(dma_tx_packet_completion_errors.yfilter)
	|| ydk::is_set(dma_max_tx_freed_per_int.yfilter)
	|| ydk::is_set(dma_tx_buf_alloc_count.yfilter)
	|| ydk::is_set(dma_tx_buf_free_count.yfilter);
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phy_polling_enabled.is_set || is_set(phy_polling_enabled.yfilter)) leaf_name_data.push_back(phy_polling_enabled.get_name_leafdata());
    if (tx_thread_wdog_cnt.is_set || is_set(tx_thread_wdog_cnt.yfilter)) leaf_name_data.push_back(tx_thread_wdog_cnt.get_name_leafdata());
    if (rx_thread_wdog_cnt.is_set || is_set(rx_thread_wdog_cnt.yfilter)) leaf_name_data.push_back(rx_thread_wdog_cnt.get_name_leafdata());
    if (task_lock_longest_wait_time.is_set || is_set(task_lock_longest_wait_time.yfilter)) leaf_name_data.push_back(task_lock_longest_wait_time.get_name_leafdata());
    if (task_lock_longest_wait_event.is_set || is_set(task_lock_longest_wait_event.yfilter)) leaf_name_data.push_back(task_lock_longest_wait_event.get_name_leafdata());
    if (task_lock_longest_held_time.is_set || is_set(task_lock_longest_held_time.yfilter)) leaf_name_data.push_back(task_lock_longest_held_time.get_name_leafdata());
    if (task_lock_longest_held_event.is_set || is_set(task_lock_longest_held_event.yfilter)) leaf_name_data.push_back(task_lock_longest_held_event.get_name_leafdata());
    if (task_unlock_longest_wait_time.is_set || is_set(task_unlock_longest_wait_time.yfilter)) leaf_name_data.push_back(task_unlock_longest_wait_time.get_name_leafdata());
    if (task_unlock_longest_wait_event.is_set || is_set(task_unlock_longest_wait_event.yfilter)) leaf_name_data.push_back(task_unlock_longest_wait_event.get_name_leafdata());
    if (dma_max_rx_dequeued_per_int.is_set || is_set(dma_max_rx_dequeued_per_int.yfilter)) leaf_name_data.push_back(dma_max_rx_dequeued_per_int.get_name_leafdata());
    if (dma_rx_packets_dequeued.is_set || is_set(dma_rx_packets_dequeued.yfilter)) leaf_name_data.push_back(dma_rx_packets_dequeued.get_name_leafdata());
    if (dma_rx_packet_dequeue_errors.is_set || is_set(dma_rx_packet_dequeue_errors.yfilter)) leaf_name_data.push_back(dma_rx_packet_dequeue_errors.get_name_leafdata());
    if (dma_tx_packets_queued.is_set || is_set(dma_tx_packets_queued.yfilter)) leaf_name_data.push_back(dma_tx_packets_queued.get_name_leafdata());
    if (dma_tx_packets_completed.is_set || is_set(dma_tx_packets_completed.yfilter)) leaf_name_data.push_back(dma_tx_packets_completed.get_name_leafdata());
    if (dma_tx_packet_no_msg_errors.is_set || is_set(dma_tx_packet_no_msg_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_no_msg_errors.get_name_leafdata());
    if (dma_tx_packet_msg_too_big_errors.is_set || is_set(dma_tx_packet_msg_too_big_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_msg_too_big_errors.get_name_leafdata());
    if (dma_tx_packet_no_buffer_errors.is_set || is_set(dma_tx_packet_no_buffer_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_no_buffer_errors.get_name_leafdata());
    if (dma_tx_packet_queue_errors.is_set || is_set(dma_tx_packet_queue_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_queue_errors.get_name_leafdata());
    if (dma_tx_packet_completion_errors.is_set || is_set(dma_tx_packet_completion_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_completion_errors.get_name_leafdata());
    if (dma_max_tx_freed_per_int.is_set || is_set(dma_max_tx_freed_per_int.yfilter)) leaf_name_data.push_back(dma_max_tx_freed_per_int.get_name_leafdata());
    if (dma_tx_buf_alloc_count.is_set || is_set(dma_tx_buf_alloc_count.yfilter)) leaf_name_data.push_back(dma_tx_buf_alloc_count.get_name_leafdata());
    if (dma_tx_buf_free_count.is_set || is_set(dma_tx_buf_free_count.yfilter)) leaf_name_data.push_back(dma_tx_buf_free_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-core")
    {
        auto c = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore>();
        c->parent = this;
        switch_core.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : switch_core)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "phy-polling-enabled")
    {
        phy_polling_enabled = value;
        phy_polling_enabled.value_namespace = name_space;
        phy_polling_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-thread-wdog-cnt")
    {
        tx_thread_wdog_cnt = value;
        tx_thread_wdog_cnt.value_namespace = name_space;
        tx_thread_wdog_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-thread-wdog-cnt")
    {
        rx_thread_wdog_cnt = value;
        rx_thread_wdog_cnt.value_namespace = name_space;
        rx_thread_wdog_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-lock-longest-wait-time")
    {
        task_lock_longest_wait_time = value;
        task_lock_longest_wait_time.value_namespace = name_space;
        task_lock_longest_wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-lock-longest-wait-event")
    {
        task_lock_longest_wait_event = value;
        task_lock_longest_wait_event.value_namespace = name_space;
        task_lock_longest_wait_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-lock-longest-held-time")
    {
        task_lock_longest_held_time = value;
        task_lock_longest_held_time.value_namespace = name_space;
        task_lock_longest_held_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-lock-longest-held-event")
    {
        task_lock_longest_held_event = value;
        task_lock_longest_held_event.value_namespace = name_space;
        task_lock_longest_held_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-unlock-longest-wait-time")
    {
        task_unlock_longest_wait_time = value;
        task_unlock_longest_wait_time.value_namespace = name_space;
        task_unlock_longest_wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-unlock-longest-wait-event")
    {
        task_unlock_longest_wait_event = value;
        task_unlock_longest_wait_event.value_namespace = name_space;
        task_unlock_longest_wait_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-max-rx-dequeued-per-int")
    {
        dma_max_rx_dequeued_per_int = value;
        dma_max_rx_dequeued_per_int.value_namespace = name_space;
        dma_max_rx_dequeued_per_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-rx-packets-dequeued")
    {
        dma_rx_packets_dequeued = value;
        dma_rx_packets_dequeued.value_namespace = name_space;
        dma_rx_packets_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-rx-packet-dequeue-errors")
    {
        dma_rx_packet_dequeue_errors = value;
        dma_rx_packet_dequeue_errors.value_namespace = name_space;
        dma_rx_packet_dequeue_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packets-queued")
    {
        dma_tx_packets_queued = value;
        dma_tx_packets_queued.value_namespace = name_space;
        dma_tx_packets_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packets-completed")
    {
        dma_tx_packets_completed = value;
        dma_tx_packets_completed.value_namespace = name_space;
        dma_tx_packets_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-no-msg-errors")
    {
        dma_tx_packet_no_msg_errors = value;
        dma_tx_packet_no_msg_errors.value_namespace = name_space;
        dma_tx_packet_no_msg_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-msg-too-big-errors")
    {
        dma_tx_packet_msg_too_big_errors = value;
        dma_tx_packet_msg_too_big_errors.value_namespace = name_space;
        dma_tx_packet_msg_too_big_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-no-buffer-errors")
    {
        dma_tx_packet_no_buffer_errors = value;
        dma_tx_packet_no_buffer_errors.value_namespace = name_space;
        dma_tx_packet_no_buffer_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-queue-errors")
    {
        dma_tx_packet_queue_errors = value;
        dma_tx_packet_queue_errors.value_namespace = name_space;
        dma_tx_packet_queue_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-completion-errors")
    {
        dma_tx_packet_completion_errors = value;
        dma_tx_packet_completion_errors.value_namespace = name_space;
        dma_tx_packet_completion_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-max-tx-freed-per-int")
    {
        dma_max_tx_freed_per_int = value;
        dma_max_tx_freed_per_int.value_namespace = name_space;
        dma_max_tx_freed_per_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-buf-alloc-count")
    {
        dma_tx_buf_alloc_count = value;
        dma_tx_buf_alloc_count.value_namespace = name_space;
        dma_tx_buf_alloc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-buf-free-count")
    {
        dma_tx_buf_free_count = value;
        dma_tx_buf_free_count.value_namespace = name_space;
        dma_tx_buf_free_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "phy-polling-enabled")
    {
        phy_polling_enabled.yfilter = yfilter;
    }
    if(value_path == "tx-thread-wdog-cnt")
    {
        tx_thread_wdog_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-thread-wdog-cnt")
    {
        rx_thread_wdog_cnt.yfilter = yfilter;
    }
    if(value_path == "task-lock-longest-wait-time")
    {
        task_lock_longest_wait_time.yfilter = yfilter;
    }
    if(value_path == "task-lock-longest-wait-event")
    {
        task_lock_longest_wait_event.yfilter = yfilter;
    }
    if(value_path == "task-lock-longest-held-time")
    {
        task_lock_longest_held_time.yfilter = yfilter;
    }
    if(value_path == "task-lock-longest-held-event")
    {
        task_lock_longest_held_event.yfilter = yfilter;
    }
    if(value_path == "task-unlock-longest-wait-time")
    {
        task_unlock_longest_wait_time.yfilter = yfilter;
    }
    if(value_path == "task-unlock-longest-wait-event")
    {
        task_unlock_longest_wait_event.yfilter = yfilter;
    }
    if(value_path == "dma-max-rx-dequeued-per-int")
    {
        dma_max_rx_dequeued_per_int.yfilter = yfilter;
    }
    if(value_path == "dma-rx-packets-dequeued")
    {
        dma_rx_packets_dequeued.yfilter = yfilter;
    }
    if(value_path == "dma-rx-packet-dequeue-errors")
    {
        dma_rx_packet_dequeue_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packets-queued")
    {
        dma_tx_packets_queued.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packets-completed")
    {
        dma_tx_packets_completed.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-no-msg-errors")
    {
        dma_tx_packet_no_msg_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-msg-too-big-errors")
    {
        dma_tx_packet_msg_too_big_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-no-buffer-errors")
    {
        dma_tx_packet_no_buffer_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-queue-errors")
    {
        dma_tx_packet_queue_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-completion-errors")
    {
        dma_tx_packet_completion_errors.yfilter = yfilter;
    }
    if(value_path == "dma-max-tx-freed-per-int")
    {
        dma_max_tx_freed_per_int.yfilter = yfilter;
    }
    if(value_path == "dma-tx-buf-alloc-count")
    {
        dma_tx_buf_alloc_count.yfilter = yfilter;
    }
    if(value_path == "dma-tx-buf-free-count")
    {
        dma_tx_buf_free_count.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-core" || name == "phy-polling-enabled" || name == "tx-thread-wdog-cnt" || name == "rx-thread-wdog-cnt" || name == "task-lock-longest-wait-time" || name == "task-lock-longest-wait-event" || name == "task-lock-longest-held-time" || name == "task-lock-longest-held-event" || name == "task-unlock-longest-wait-time" || name == "task-unlock-longest-wait-event" || name == "dma-max-rx-dequeued-per-int" || name == "dma-rx-packets-dequeued" || name == "dma-rx-packet-dequeue-errors" || name == "dma-tx-packets-queued" || name == "dma-tx-packets-completed" || name == "dma-tx-packet-no-msg-errors" || name == "dma-tx-packet-msg-too-big-errors" || name == "dma-tx-packet-no-buffer-errors" || name == "dma-tx-packet-queue-errors" || name == "dma-tx-packet-completion-errors" || name == "dma-max-tx-freed-per-int" || name == "dma-tx-buf-alloc-count" || name == "dma-tx-buf-free-count")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::SwitchCore()
    :
    core{YType::uint8, "core"},
    msi_count{YType::uint64, "msi-count"},
    aer_count{YType::uint64, "aer-count"},
    hp_count{YType::uint64, "hp-count"},
    wdog_count{YType::uint64, "wdog-count"},
    core_task_lock_longest_wait_time{YType::uint64, "core-task-lock-longest-wait-time"},
    core_task_lock_longest_held_time{YType::uint64, "core-task-lock-longest-held-time"},
    core_task_unlock_longest_wait_time{YType::uint64, "core-task-unlock-longest-wait-time"}
{

    yang_name = "switch-core"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = true;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::~SwitchCore()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::has_data() const
{
    return core.is_set
	|| msi_count.is_set
	|| aer_count.is_set
	|| hp_count.is_set
	|| wdog_count.is_set
	|| core_task_lock_longest_wait_time.is_set
	|| core_task_lock_longest_held_time.is_set
	|| core_task_unlock_longest_wait_time.is_set;
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(msi_count.yfilter)
	|| ydk::is_set(aer_count.yfilter)
	|| ydk::is_set(hp_count.yfilter)
	|| ydk::is_set(wdog_count.yfilter)
	|| ydk::is_set(core_task_lock_longest_wait_time.yfilter)
	|| ydk::is_set(core_task_lock_longest_held_time.yfilter)
	|| ydk::is_set(core_task_unlock_longest_wait_time.yfilter);
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-core" <<"[core='" <<core <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (msi_count.is_set || is_set(msi_count.yfilter)) leaf_name_data.push_back(msi_count.get_name_leafdata());
    if (aer_count.is_set || is_set(aer_count.yfilter)) leaf_name_data.push_back(aer_count.get_name_leafdata());
    if (hp_count.is_set || is_set(hp_count.yfilter)) leaf_name_data.push_back(hp_count.get_name_leafdata());
    if (wdog_count.is_set || is_set(wdog_count.yfilter)) leaf_name_data.push_back(wdog_count.get_name_leafdata());
    if (core_task_lock_longest_wait_time.is_set || is_set(core_task_lock_longest_wait_time.yfilter)) leaf_name_data.push_back(core_task_lock_longest_wait_time.get_name_leafdata());
    if (core_task_lock_longest_held_time.is_set || is_set(core_task_lock_longest_held_time.yfilter)) leaf_name_data.push_back(core_task_lock_longest_held_time.get_name_leafdata());
    if (core_task_unlock_longest_wait_time.is_set || is_set(core_task_unlock_longest_wait_time.yfilter)) leaf_name_data.push_back(core_task_unlock_longest_wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msi-count")
    {
        msi_count = value;
        msi_count.value_namespace = name_space;
        msi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aer-count")
    {
        aer_count = value;
        aer_count.value_namespace = name_space;
        aer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hp-count")
    {
        hp_count = value;
        hp_count.value_namespace = name_space;
        hp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wdog-count")
    {
        wdog_count = value;
        wdog_count.value_namespace = name_space;
        wdog_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-task-lock-longest-wait-time")
    {
        core_task_lock_longest_wait_time = value;
        core_task_lock_longest_wait_time.value_namespace = name_space;
        core_task_lock_longest_wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-task-lock-longest-held-time")
    {
        core_task_lock_longest_held_time = value;
        core_task_lock_longest_held_time.value_namespace = name_space;
        core_task_lock_longest_held_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-task-unlock-longest-wait-time")
    {
        core_task_unlock_longest_wait_time = value;
        core_task_unlock_longest_wait_time.value_namespace = name_space;
        core_task_unlock_longest_wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "msi-count")
    {
        msi_count.yfilter = yfilter;
    }
    if(value_path == "aer-count")
    {
        aer_count.yfilter = yfilter;
    }
    if(value_path == "hp-count")
    {
        hp_count.yfilter = yfilter;
    }
    if(value_path == "wdog-count")
    {
        wdog_count.yfilter = yfilter;
    }
    if(value_path == "core-task-lock-longest-wait-time")
    {
        core_task_lock_longest_wait_time.yfilter = yfilter;
    }
    if(value_path == "core-task-lock-longest-held-time")
    {
        core_task_lock_longest_held_time.yfilter = yfilter;
    }
    if(value_path == "core-task-unlock-longest-wait-time")
    {
        core_task_unlock_longest_wait_time.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "msi-count" || name == "aer-count" || name == "hp-count" || name == "wdog-count" || name == "core-task-lock-longest-wait-time" || name == "core-task-lock-longest-held-time" || name == "core-task-unlock-longest-wait-time")
        return true;
    return false;
}


}
}

