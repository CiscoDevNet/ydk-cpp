
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_ipsla_cfg_0.hpp"
#include "Cisco_IOS_XR_man_ipsla_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ipsla_cfg {

Ipsla::Ipsla()
    :
    common(std::make_shared<Ipsla::Common>())
    , mpls_lsp_monitor(std::make_shared<Ipsla::MplsLspMonitor>())
    , operation_(std::make_shared<Ipsla::Operation>())
    , responder(nullptr) // presence node
    , mpls_discovery(std::make_shared<Ipsla::MplsDiscovery>())
    , server_twamp(nullptr) // presence node
{
    common->parent = this;
    mpls_lsp_monitor->parent = this;
    operation_->parent = this;
    mpls_discovery->parent = this;

    yang_name = "ipsla"; yang_parent_name = "Cisco-IOS-XR-man-ipsla-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipsla::~Ipsla()
{
}

bool Ipsla::has_data() const
{
    if (is_presence_container) return true;
    return (common !=  nullptr && common->has_data())
	|| (mpls_lsp_monitor !=  nullptr && mpls_lsp_monitor->has_data())
	|| (operation_ !=  nullptr && operation_->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (mpls_discovery !=  nullptr && mpls_discovery->has_data())
	|| (server_twamp !=  nullptr && server_twamp->has_data());
}

bool Ipsla::has_operation() const
{
    return is_set(yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (mpls_lsp_monitor !=  nullptr && mpls_lsp_monitor->has_operation())
	|| (operation_ !=  nullptr && operation_->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (mpls_discovery !=  nullptr && mpls_discovery->has_operation())
	|| (server_twamp !=  nullptr && server_twamp->has_operation());
}

std::string Ipsla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ipsla::Common>();
        }
        return common;
    }

    if(child_yang_name == "mpls-lsp-monitor")
    {
        if(mpls_lsp_monitor == nullptr)
        {
            mpls_lsp_monitor = std::make_shared<Ipsla::MplsLspMonitor>();
        }
        return mpls_lsp_monitor;
    }

    if(child_yang_name == "operation")
    {
        if(operation_ == nullptr)
        {
            operation_ = std::make_shared<Ipsla::Operation>();
        }
        return operation_;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Ipsla::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "mpls-discovery")
    {
        if(mpls_discovery == nullptr)
        {
            mpls_discovery = std::make_shared<Ipsla::MplsDiscovery>();
        }
        return mpls_discovery;
    }

    if(child_yang_name == "server-twamp")
    {
        if(server_twamp == nullptr)
        {
            server_twamp = std::make_shared<Ipsla::ServerTwamp>();
        }
        return server_twamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common != nullptr)
    {
        _children["common"] = common;
    }

    if(mpls_lsp_monitor != nullptr)
    {
        _children["mpls-lsp-monitor"] = mpls_lsp_monitor;
    }

    if(operation_ != nullptr)
    {
        _children["operation"] = operation_;
    }

    if(responder != nullptr)
    {
        _children["responder"] = responder;
    }

    if(mpls_discovery != nullptr)
    {
        _children["mpls-discovery"] = mpls_discovery;
    }

    if(server_twamp != nullptr)
    {
        _children["server-twamp"] = server_twamp;
    }

    return _children;
}

void Ipsla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ipsla::clone_ptr() const
{
    return std::make_shared<Ipsla>();
}

std::string Ipsla::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipsla::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipsla::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipsla::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipsla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "mpls-lsp-monitor" || name == "operation" || name == "responder" || name == "mpls-discovery" || name == "server-twamp")
        return true;
    return false;
}

Ipsla::Common::Common()
    :
    low_memory{YType::uint32, "low-memory"}
        ,
    hardware_timestamp(std::make_shared<Ipsla::Common::HardwareTimestamp>())
    , authentication(std::make_shared<Ipsla::Common::Authentication>())
{
    hardware_timestamp->parent = this;
    authentication->parent = this;

    yang_name = "common"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Common::~Common()
{
}

bool Ipsla::Common::has_data() const
{
    if (is_presence_container) return true;
    return low_memory.is_set
	|| (hardware_timestamp !=  nullptr && hardware_timestamp->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Ipsla::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low_memory.yfilter)
	|| (hardware_timestamp !=  nullptr && hardware_timestamp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Ipsla::Common::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_memory.is_set || is_set(low_memory.yfilter)) leaf_name_data.push_back(low_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-timestamp")
    {
        if(hardware_timestamp == nullptr)
        {
            hardware_timestamp = std::make_shared<Ipsla::Common::HardwareTimestamp>();
        }
        return hardware_timestamp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ipsla::Common::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hardware_timestamp != nullptr)
    {
        _children["hardware-timestamp"] = hardware_timestamp;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Ipsla::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low-memory")
    {
        low_memory = value;
        low_memory.value_namespace = name_space;
        low_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low-memory")
    {
        low_memory.yfilter = yfilter;
    }
}

bool Ipsla::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-timestamp" || name == "authentication" || name == "low-memory")
        return true;
    return false;
}

Ipsla::Common::HardwareTimestamp::HardwareTimestamp()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "hardware-timestamp"; yang_parent_name = "common"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Common::HardwareTimestamp::~HardwareTimestamp()
{
}

bool Ipsla::Common::HardwareTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Ipsla::Common::HardwareTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Ipsla::Common::HardwareTimestamp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/common/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Common::HardwareTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Common::HardwareTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Common::HardwareTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Common::HardwareTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Common::HardwareTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Common::HardwareTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Ipsla::Common::HardwareTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Ipsla::Common::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
{

    yang_name = "authentication"; yang_parent_name = "common"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Common::Authentication::~Authentication()
{
}

bool Ipsla::Common::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set;
}

bool Ipsla::Common::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter);
}

std::string Ipsla::Common::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/common/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Common::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Common::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Common::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Common::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Common::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Common::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Ipsla::Common::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::MplsLspMonitor()
    :
    reactions(std::make_shared<Ipsla::MplsLspMonitor::Reactions>())
    , schedules(std::make_shared<Ipsla::MplsLspMonitor::Schedules>())
    , definitions(std::make_shared<Ipsla::MplsLspMonitor::Definitions>())
{
    reactions->parent = this;
    schedules->parent = this;
    definitions->parent = this;

    yang_name = "mpls-lsp-monitor"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsLspMonitor::~MplsLspMonitor()
{
}

bool Ipsla::MplsLspMonitor::has_data() const
{
    if (is_presence_container) return true;
    return (reactions !=  nullptr && reactions->has_data())
	|| (schedules !=  nullptr && schedules->has_data())
	|| (definitions !=  nullptr && definitions->has_data());
}

bool Ipsla::MplsLspMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (reactions !=  nullptr && reactions->has_operation())
	|| (schedules !=  nullptr && schedules->has_operation())
	|| (definitions !=  nullptr && definitions->has_operation());
}

std::string Ipsla::MplsLspMonitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsLspMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-lsp-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reactions")
    {
        if(reactions == nullptr)
        {
            reactions = std::make_shared<Ipsla::MplsLspMonitor::Reactions>();
        }
        return reactions;
    }

    if(child_yang_name == "schedules")
    {
        if(schedules == nullptr)
        {
            schedules = std::make_shared<Ipsla::MplsLspMonitor::Schedules>();
        }
        return schedules;
    }

    if(child_yang_name == "definitions")
    {
        if(definitions == nullptr)
        {
            definitions = std::make_shared<Ipsla::MplsLspMonitor::Definitions>();
        }
        return definitions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reactions != nullptr)
    {
        _children["reactions"] = reactions;
    }

    if(schedules != nullptr)
    {
        _children["schedules"] = schedules;
    }

    if(definitions != nullptr)
    {
        _children["definitions"] = definitions;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reactions" || name == "schedules" || name == "definitions")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reactions()
    :
    reaction(this, {"monitor_id"})
{

    yang_name = "reactions"; yang_parent_name = "mpls-lsp-monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsLspMonitor::Reactions::~Reactions()
{
}

bool Ipsla::MplsLspMonitor::Reactions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reaction.len(); index++)
    {
        if(reaction[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsLspMonitor::Reactions::has_operation() const
{
    for (std::size_t index=0; index<reaction.len(); index++)
    {
        if(reaction[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsLspMonitor::Reactions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/mpls-lsp-monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsLspMonitor::Reactions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reactions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reaction")
    {
        auto ent_ = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction>();
        ent_->parent = this;
        reaction.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reaction.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Reactions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Reactions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reaction")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Reaction()
    :
    monitor_id{YType::uint32, "monitor-id"}
        ,
    condition(std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition>())
{
    condition->parent = this;

    yang_name = "reaction"; yang_parent_name = "reactions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsLspMonitor::Reactions::Reaction::~Reaction()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::has_data() const
{
    if (is_presence_container) return true;
    return monitor_id.is_set
	|| (condition !=  nullptr && condition->has_data());
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_id.yfilter)
	|| (condition !=  nullptr && condition->has_operation());
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/mpls-lsp-monitor/reactions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction";
    ADD_KEY_TOKEN(monitor_id, "monitor-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_id.is_set || is_set(monitor_id.yfilter)) leaf_name_data.push_back(monitor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "condition")
    {
        if(condition == nullptr)
        {
            condition = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition>();
        }
        return condition;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(condition != nullptr)
    {
        _children["condition"] = condition;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-id")
    {
        monitor_id = value;
        monitor_id.value_namespace = name_space;
        monitor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-id")
    {
        monitor_id.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "condition" || name == "monitor-id")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Condition()
    :
    lpd_tree_trace(nullptr) // presence node
    , timeout(nullptr) // presence node
    , lpd_group(nullptr) // presence node
    , connection_loss(nullptr) // presence node
{

    yang_name = "condition"; yang_parent_name = "reaction"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::~Condition()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::has_data() const
{
    if (is_presence_container) return true;
    return (lpd_tree_trace !=  nullptr && lpd_tree_trace->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (lpd_group !=  nullptr && lpd_group->has_data())
	|| (connection_loss !=  nullptr && connection_loss->has_data());
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::has_operation() const
{
    return is_set(yfilter)
	|| (lpd_tree_trace !=  nullptr && lpd_tree_trace->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (lpd_group !=  nullptr && lpd_group->has_operation())
	|| (connection_loss !=  nullptr && connection_loss->has_operation());
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "condition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpd-tree-trace")
    {
        if(lpd_tree_trace == nullptr)
        {
            lpd_tree_trace = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace>();
        }
        return lpd_tree_trace;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "lpd-group")
    {
        if(lpd_group == nullptr)
        {
            lpd_group = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup>();
        }
        return lpd_group;
    }

    if(child_yang_name == "connection-loss")
    {
        if(connection_loss == nullptr)
        {
            connection_loss = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss>();
        }
        return connection_loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lpd_tree_trace != nullptr)
    {
        _children["lpd-tree-trace"] = lpd_tree_trace;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    if(lpd_group != nullptr)
    {
        _children["lpd-group"] = lpd_group;
    }

    if(connection_loss != nullptr)
    {
        _children["connection-loss"] = connection_loss;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpd-tree-trace" || name == "timeout" || name == "lpd-group" || name == "connection-loss")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::LpdTreeTrace()
    :
    action_type(std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType>())
{
    action_type->parent = this;

    yang_name = "lpd-tree-trace"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::~LpdTreeTrace()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::has_data() const
{
    if (is_presence_container) return true;
    return (action_type !=  nullptr && action_type->has_data());
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::has_operation() const
{
    return is_set(yfilter)
	|| (action_type !=  nullptr && action_type->has_operation());
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-tree-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType>();
        }
        return action_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::ActionType()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "action-type"; yang_parent_name = "lpd-tree-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::~ActionType()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set;
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdTreeTrace::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::Timeout()
    :
    action_type(std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType>())
    , threshold_type(std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "timeout"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::~Timeout()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::ActionType()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "action-type"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::~ActionType()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set;
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::~ThresholdType()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::Timeout::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::LpdGroup()
    :
    action_type(std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType>())
{
    action_type->parent = this;

    yang_name = "lpd-group"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::~LpdGroup()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::has_data() const
{
    if (is_presence_container) return true;
    return (action_type !=  nullptr && action_type->has_data());
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::has_operation() const
{
    return is_set(yfilter)
	|| (action_type !=  nullptr && action_type->has_operation());
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType>();
        }
        return action_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::ActionType()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "action-type"; yang_parent_name = "lpd-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::~ActionType()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set;
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::LpdGroup::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ConnectionLoss()
    :
    action_type(std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType>())
    , threshold_type(std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "connection-loss"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::~ConnectionLoss()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::has_data() const
{
    if (is_presence_container) return true;
    return (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::has_operation() const
{
    return is_set(yfilter)
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::ActionType()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "action-type"; yang_parent_name = "connection-loss"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::~ActionType()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set;
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "connection-loss"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::~ThresholdType()
{
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Schedules::Schedules()
    :
    schedule(this, {"monitor_id"})
{

    yang_name = "schedules"; yang_parent_name = "mpls-lsp-monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsLspMonitor::Schedules::~Schedules()
{
}

bool Ipsla::MplsLspMonitor::Schedules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<schedule.len(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsLspMonitor::Schedules::has_operation() const
{
    for (std::size_t index=0; index<schedule.len(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsLspMonitor::Schedules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/mpls-lsp-monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsLspMonitor::Schedules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Schedules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Schedules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule")
    {
        auto ent_ = std::make_shared<Ipsla::MplsLspMonitor::Schedules::Schedule>();
        ent_->parent = this;
        schedule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Schedules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : schedule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Schedules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Schedules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Schedules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Schedules::Schedule::Schedule()
    :
    monitor_id{YType::uint32, "monitor-id"},
    frequency{YType::uint32, "frequency"},
    period{YType::uint32, "period"}
        ,
    start_time(std::make_shared<Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime>())
{
    start_time->parent = this;

    yang_name = "schedule"; yang_parent_name = "schedules"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsLspMonitor::Schedules::Schedule::~Schedule()
{
}

bool Ipsla::MplsLspMonitor::Schedules::Schedule::has_data() const
{
    if (is_presence_container) return true;
    return monitor_id.is_set
	|| frequency.is_set
	|| period.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Ipsla::MplsLspMonitor::Schedules::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_id.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(period.yfilter)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Ipsla::MplsLspMonitor::Schedules::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/mpls-lsp-monitor/schedules/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsLspMonitor::Schedules::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    ADD_KEY_TOKEN(monitor_id, "monitor-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Schedules::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_id.is_set || is_set(monitor_id.yfilter)) leaf_name_data.push_back(monitor_id.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Schedules::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Schedules::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_time != nullptr)
    {
        _children["start-time"] = start_time;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Schedules::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-id")
    {
        monitor_id = value;
        monitor_id.value_namespace = name_space;
        monitor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Schedules::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-id")
    {
        monitor_id.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Schedules::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "monitor-id" || name == "frequency" || name == "period")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::StartTime()
    :
    schedule_type{YType::enumeration, "schedule-type"},
    hour{YType::uint32, "hour"},
    minute{YType::uint32, "minute"},
    second{YType::uint32, "second"},
    month{YType::enumeration, "month"},
    day{YType::uint32, "day"},
    year{YType::uint32, "year"}
{

    yang_name = "start-time"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::~StartTime()
{
}

bool Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::has_data() const
{
    if (is_presence_container) return true;
    return schedule_type.is_set
	|| hour.is_set
	|| minute.is_set
	|| second.is_set
	|| month.is_set
	|| day.is_set
	|| year.is_set;
}

bool Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_type.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minute.yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_type.is_set || is_set(schedule_type.yfilter)) leaf_name_data.push_back(schedule_type.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minute.is_set || is_set(minute.yfilter)) leaf_name_data.push_back(minute.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-type")
    {
        schedule_type = value;
        schedule_type.value_namespace = name_space;
        schedule_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute")
    {
        minute = value;
        minute.value_namespace = name_space;
        minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-type")
    {
        schedule_type.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minute")
    {
        minute.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Schedules::Schedule::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-type" || name == "hour" || name == "minute" || name == "second" || name == "month" || name == "day" || name == "year")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definitions()
    :
    definition(this, {"monitor_id"})
{

    yang_name = "definitions"; yang_parent_name = "mpls-lsp-monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsLspMonitor::Definitions::~Definitions()
{
}

bool Ipsla::MplsLspMonitor::Definitions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<definition.len(); index++)
    {
        if(definition[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsLspMonitor::Definitions::has_operation() const
{
    for (std::size_t index=0; index<definition.len(); index++)
    {
        if(definition[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/mpls-lsp-monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsLspMonitor::Definitions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definitions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "definition")
    {
        auto ent_ = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition>();
        ent_->parent = this;
        definition.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : definition.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Definitions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Definitions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "definition")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::Definition()
    :
    monitor_id{YType::uint32, "monitor-id"}
        ,
    operation_type(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType>())
{
    operation_type->parent = this;

    yang_name = "definition"; yang_parent_name = "definitions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::~Definition()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::has_data() const
{
    if (is_presence_container) return true;
    return monitor_id.is_set
	|| (operation_type !=  nullptr && operation_type->has_data());
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_id.yfilter)
	|| (operation_type !=  nullptr && operation_type->has_operation());
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/mpls-lsp-monitor/definitions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definition";
    ADD_KEY_TOKEN(monitor_id, "monitor-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_id.is_set || is_set(monitor_id.yfilter)) leaf_name_data.push_back(monitor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-type")
    {
        if(operation_type == nullptr)
        {
            operation_type = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType>();
        }
        return operation_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operation_type != nullptr)
    {
        _children["operation-type"] = operation_type;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-id")
    {
        monitor_id = value;
        monitor_id.value_namespace = name_space;
        monitor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-id")
    {
        monitor_id.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-type" || name == "monitor-id")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::OperationType()
    :
    mpls_lsp_trace(nullptr) // presence node
    , mpls_lsp_ping(nullptr) // presence node
{

    yang_name = "operation-type"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::~OperationType()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::has_data() const
{
    if (is_presence_container) return true;
    return (mpls_lsp_trace !=  nullptr && mpls_lsp_trace->has_data())
	|| (mpls_lsp_ping !=  nullptr && mpls_lsp_ping->has_data());
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_lsp_trace !=  nullptr && mpls_lsp_trace->has_operation())
	|| (mpls_lsp_ping !=  nullptr && mpls_lsp_ping->has_operation());
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-lsp-trace")
    {
        if(mpls_lsp_trace == nullptr)
        {
            mpls_lsp_trace = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace>();
        }
        return mpls_lsp_trace;
    }

    if(child_yang_name == "mpls-lsp-ping")
    {
        if(mpls_lsp_ping == nullptr)
        {
            mpls_lsp_ping = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing>();
        }
        return mpls_lsp_ping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_lsp_trace != nullptr)
    {
        _children["mpls-lsp-trace"] = mpls_lsp_trace;
    }

    if(mpls_lsp_ping != nullptr)
    {
        _children["mpls-lsp-ping"] = mpls_lsp_ping;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-lsp-trace" || name == "mpls-lsp-ping")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::MplsLspTrace()
    :
    ttl{YType::uint32, "ttl"},
    exp_bits{YType::uint32, "exp-bits"},
    tag{YType::str, "tag"},
    lsp_selector{YType::str, "lsp-selector"},
    output_interface{YType::str, "output-interface"},
    accesslist{YType::str, "accesslist"},
    output_nexthop{YType::str, "output-nexthop"},
    timeout{YType::uint32, "timeout"},
    force_explicit_null{YType::empty, "force-explicit-null"},
    vrf{YType::str, "vrf"}
        ,
    reply(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply>())
    , statistics(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics>())
    , scan(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan>())
{
    reply->parent = this;
    statistics->parent = this;
    scan->parent = this;

    yang_name = "mpls-lsp-trace"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::~MplsLspTrace()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::has_data() const
{
    if (is_presence_container) return true;
    return ttl.is_set
	|| exp_bits.is_set
	|| tag.is_set
	|| lsp_selector.is_set
	|| output_interface.is_set
	|| accesslist.is_set
	|| output_nexthop.is_set
	|| timeout.is_set
	|| force_explicit_null.is_set
	|| vrf.is_set
	|| (reply !=  nullptr && reply->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (scan !=  nullptr && scan->has_data());
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(exp_bits.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(lsp_selector.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(accesslist.yfilter)
	|| ydk::is_set(output_nexthop.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(force_explicit_null.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (reply !=  nullptr && reply->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (scan !=  nullptr && scan->has_operation());
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-lsp-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (exp_bits.is_set || is_set(exp_bits.yfilter)) leaf_name_data.push_back(exp_bits.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (lsp_selector.is_set || is_set(lsp_selector.yfilter)) leaf_name_data.push_back(lsp_selector.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (accesslist.is_set || is_set(accesslist.yfilter)) leaf_name_data.push_back(accesslist.get_name_leafdata());
    if (output_nexthop.is_set || is_set(output_nexthop.yfilter)) leaf_name_data.push_back(output_nexthop.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (force_explicit_null.is_set || is_set(force_explicit_null.yfilter)) leaf_name_data.push_back(force_explicit_null.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply>();
        }
        return reply;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "scan")
    {
        if(scan == nullptr)
        {
            scan = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan>();
        }
        return scan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reply != nullptr)
    {
        _children["reply"] = reply;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(scan != nullptr)
    {
        _children["scan"] = scan;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-bits")
    {
        exp_bits = value;
        exp_bits.value_namespace = name_space;
        exp_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-selector")
    {
        lsp_selector = value;
        lsp_selector.value_namespace = name_space;
        lsp_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accesslist")
    {
        accesslist = value;
        accesslist.value_namespace = name_space;
        accesslist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-nexthop")
    {
        output_nexthop = value;
        output_nexthop.value_namespace = name_space;
        output_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-explicit-null")
    {
        force_explicit_null = value;
        force_explicit_null.value_namespace = name_space;
        force_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "exp-bits")
    {
        exp_bits.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "lsp-selector")
    {
        lsp_selector.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "accesslist")
    {
        accesslist.yfilter = yfilter;
    }
    if(value_path == "output-nexthop")
    {
        output_nexthop.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "force-explicit-null")
    {
        force_explicit_null.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reply" || name == "statistics" || name == "scan" || name == "ttl" || name == "exp-bits" || name == "tag" || name == "lsp-selector" || name == "output-interface" || name == "accesslist" || name == "output-nexthop" || name == "timeout" || name == "force-explicit-null" || name == "vrf")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::Reply()
    :
    dscp_bits{YType::str, "dscp-bits"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "reply"; yang_parent_name = "mpls-lsp-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::~Reply()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::has_data() const
{
    if (is_presence_container) return true;
    return dscp_bits.is_set
	|| mode.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_bits.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_bits.is_set || is_set(dscp_bits.yfilter)) leaf_name_data.push_back(dscp_bits.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-bits")
    {
        dscp_bits = value;
        dscp_bits.value_namespace = name_space;
        dscp_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-bits")
    {
        dscp_bits.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-bits" || name == "mode")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::Statistics()
    :
    hours{YType::uint32, "hours"}
{

    yang_name = "statistics"; yang_parent_name = "mpls-lsp-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::~Statistics()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::Scan()
    :
    interval{YType::uint32, "interval"},
    delete_factor{YType::uint32, "delete-factor"}
{

    yang_name = "scan"; yang_parent_name = "mpls-lsp-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::~Scan()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| delete_factor.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(delete_factor.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (delete_factor.is_set || is_set(delete_factor.yfilter)) leaf_name_data.push_back(delete_factor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-factor")
    {
        delete_factor = value;
        delete_factor.value_namespace = name_space;
        delete_factor.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "delete-factor")
    {
        delete_factor.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspTrace::Scan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "delete-factor")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::MplsLspPing()
    :
    ttl{YType::uint32, "ttl"},
    exp_bits{YType::uint32, "exp-bits"},
    tag{YType::str, "tag"},
    lsp_selector{YType::str, "lsp-selector"},
    output_interface{YType::str, "output-interface"},
    accesslist{YType::str, "accesslist"},
    output_nexthop{YType::str, "output-nexthop"},
    timeout{YType::uint32, "timeout"},
    force_explicit_null{YType::empty, "force-explicit-null"},
    vrf{YType::str, "vrf"}
        ,
    data_size(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize>())
    , path_discover(nullptr) // presence node
    , reply(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply>())
    , statistics(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics>())
    , scan(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan>())
{
    data_size->parent = this;
    reply->parent = this;
    statistics->parent = this;
    scan->parent = this;

    yang_name = "mpls-lsp-ping"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::~MplsLspPing()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::has_data() const
{
    if (is_presence_container) return true;
    return ttl.is_set
	|| exp_bits.is_set
	|| tag.is_set
	|| lsp_selector.is_set
	|| output_interface.is_set
	|| accesslist.is_set
	|| output_nexthop.is_set
	|| timeout.is_set
	|| force_explicit_null.is_set
	|| vrf.is_set
	|| (data_size !=  nullptr && data_size->has_data())
	|| (path_discover !=  nullptr && path_discover->has_data())
	|| (reply !=  nullptr && reply->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (scan !=  nullptr && scan->has_data());
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(exp_bits.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(lsp_selector.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(accesslist.yfilter)
	|| ydk::is_set(output_nexthop.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(force_explicit_null.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (data_size !=  nullptr && data_size->has_operation())
	|| (path_discover !=  nullptr && path_discover->has_operation())
	|| (reply !=  nullptr && reply->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (scan !=  nullptr && scan->has_operation());
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-lsp-ping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (exp_bits.is_set || is_set(exp_bits.yfilter)) leaf_name_data.push_back(exp_bits.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (lsp_selector.is_set || is_set(lsp_selector.yfilter)) leaf_name_data.push_back(lsp_selector.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (accesslist.is_set || is_set(accesslist.yfilter)) leaf_name_data.push_back(accesslist.get_name_leafdata());
    if (output_nexthop.is_set || is_set(output_nexthop.yfilter)) leaf_name_data.push_back(output_nexthop.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (force_explicit_null.is_set || is_set(force_explicit_null.yfilter)) leaf_name_data.push_back(force_explicit_null.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-size")
    {
        if(data_size == nullptr)
        {
            data_size = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize>();
        }
        return data_size;
    }

    if(child_yang_name == "path-discover")
    {
        if(path_discover == nullptr)
        {
            path_discover = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover>();
        }
        return path_discover;
    }

    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply>();
        }
        return reply;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "scan")
    {
        if(scan == nullptr)
        {
            scan = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan>();
        }
        return scan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data_size != nullptr)
    {
        _children["data-size"] = data_size;
    }

    if(path_discover != nullptr)
    {
        _children["path-discover"] = path_discover;
    }

    if(reply != nullptr)
    {
        _children["reply"] = reply;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(scan != nullptr)
    {
        _children["scan"] = scan;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-bits")
    {
        exp_bits = value;
        exp_bits.value_namespace = name_space;
        exp_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-selector")
    {
        lsp_selector = value;
        lsp_selector.value_namespace = name_space;
        lsp_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accesslist")
    {
        accesslist = value;
        accesslist.value_namespace = name_space;
        accesslist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-nexthop")
    {
        output_nexthop = value;
        output_nexthop.value_namespace = name_space;
        output_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-explicit-null")
    {
        force_explicit_null = value;
        force_explicit_null.value_namespace = name_space;
        force_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "exp-bits")
    {
        exp_bits.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "lsp-selector")
    {
        lsp_selector.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "accesslist")
    {
        accesslist.yfilter = yfilter;
    }
    if(value_path == "output-nexthop")
    {
        output_nexthop.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "force-explicit-null")
    {
        force_explicit_null.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-size" || name == "path-discover" || name == "reply" || name == "statistics" || name == "scan" || name == "ttl" || name == "exp-bits" || name == "tag" || name == "lsp-selector" || name == "output-interface" || name == "accesslist" || name == "output-nexthop" || name == "timeout" || name == "force-explicit-null" || name == "vrf")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::DataSize()
    :
    request{YType::uint32, "request"}
{

    yang_name = "data-size"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::~DataSize()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::has_data() const
{
    if (is_presence_container) return true;
    return request.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::DataSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::PathDiscover()
    :
    scan_period{YType::uint32, "scan-period"}
        ,
    session(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session>())
    , path(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path>())
    , echo(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo>())
{
    session->parent = this;
    path->parent = this;
    echo->parent = this;

    yang_name = "path-discover"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::~PathDiscover()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::has_data() const
{
    if (is_presence_container) return true;
    return scan_period.is_set
	|| (session !=  nullptr && session->has_data())
	|| (path !=  nullptr && path->has_data())
	|| (echo !=  nullptr && echo->has_data());
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scan_period.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (path !=  nullptr && path->has_operation())
	|| (echo !=  nullptr && echo->has_operation());
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scan_period.is_set || is_set(scan_period.yfilter)) leaf_name_data.push_back(scan_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session>();
        }
        return session;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path>();
        }
        return path;
    }

    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo>();
        }
        return echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(path != nullptr)
    {
        _children["path"] = path;
    }

    if(echo != nullptr)
    {
        _children["echo"] = echo;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scan-period")
    {
        scan_period = value;
        scan_period.value_namespace = name_space;
        scan_period.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scan-period")
    {
        scan_period.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "path" || name == "echo" || name == "scan-period")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::Session()
    :
    timeout{YType::uint32, "timeout"},
    limit{YType::uint32, "limit"}
{

    yang_name = "session"; yang_parent_name = "path-discover"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::~Session()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| limit.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "limit")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::Path()
    :
    retry{YType::uint32, "retry"}
        ,
    secondary_frequency(nullptr) // presence node
{

    yang_name = "path"; yang_parent_name = "path-discover"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::~Path()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::has_data() const
{
    if (is_presence_container) return true;
    return retry.is_set
	|| (secondary_frequency !=  nullptr && secondary_frequency->has_data());
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter)
	|| (secondary_frequency !=  nullptr && secondary_frequency->has_operation());
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-frequency")
    {
        if(secondary_frequency == nullptr)
        {
            secondary_frequency = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency>();
        }
        return secondary_frequency;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secondary_frequency != nullptr)
    {
        _children["secondary-frequency"] = secondary_frequency;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-frequency" || name == "retry")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::SecondaryFrequency()
    :
    type{YType::enumeration, "type"},
    frequency{YType::uint32, "frequency"}
{

    yang_name = "secondary-frequency"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::~SecondaryFrequency()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| frequency.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-frequency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Path::SecondaryFrequency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "frequency")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Echo()
    :
    interval{YType::uint32, "interval"},
    timeout{YType::uint32, "timeout"},
    retry{YType::uint32, "retry"},
    maximum_lsp_selector{YType::str, "maximum-lsp-selector"}
        ,
    multipath(std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath>())
{
    multipath->parent = this;

    yang_name = "echo"; yang_parent_name = "path-discover"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::~Echo()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| timeout.is_set
	|| retry.is_set
	|| maximum_lsp_selector.is_set
	|| (multipath !=  nullptr && multipath->has_data());
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(maximum_lsp_selector.yfilter)
	|| (multipath !=  nullptr && multipath->has_operation());
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (maximum_lsp_selector.is_set || is_set(maximum_lsp_selector.yfilter)) leaf_name_data.push_back(maximum_lsp_selector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipath")
    {
        if(multipath == nullptr)
        {
            multipath = std::make_shared<Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath>();
        }
        return multipath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multipath != nullptr)
    {
        _children["multipath"] = multipath;
    }

    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-lsp-selector")
    {
        maximum_lsp_selector = value;
        maximum_lsp_selector.value_namespace = name_space;
        maximum_lsp_selector.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "maximum-lsp-selector")
    {
        maximum_lsp_selector.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipath" || name == "interval" || name == "timeout" || name == "retry" || name == "maximum-lsp-selector")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::Multipath()
    :
    bitmap_size{YType::uint32, "bitmap-size"}
{

    yang_name = "multipath"; yang_parent_name = "echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::~Multipath()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::has_data() const
{
    if (is_presence_container) return true;
    return bitmap_size.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bitmap_size.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bitmap_size.is_set || is_set(bitmap_size.yfilter)) leaf_name_data.push_back(bitmap_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bitmap-size")
    {
        bitmap_size = value;
        bitmap_size.value_namespace = name_space;
        bitmap_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bitmap-size")
    {
        bitmap_size.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::PathDiscover::Echo::Multipath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bitmap-size")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::Reply()
    :
    dscp_bits{YType::str, "dscp-bits"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "reply"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::~Reply()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::has_data() const
{
    if (is_presence_container) return true;
    return dscp_bits.is_set
	|| mode.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_bits.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_bits.is_set || is_set(dscp_bits.yfilter)) leaf_name_data.push_back(dscp_bits.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-bits")
    {
        dscp_bits = value;
        dscp_bits.value_namespace = name_space;
        dscp_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-bits")
    {
        dscp_bits.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-bits" || name == "mode")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::Statistics()
    :
    hours{YType::uint32, "hours"}
{

    yang_name = "statistics"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::~Statistics()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours")
        return true;
    return false;
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::Scan()
    :
    interval{YType::uint32, "interval"},
    delete_factor{YType::uint32, "delete-factor"}
{

    yang_name = "scan"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::~Scan()
{
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| delete_factor.is_set;
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(delete_factor.yfilter);
}

std::string Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (delete_factor.is_set || is_set(delete_factor.yfilter)) leaf_name_data.push_back(delete_factor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-factor")
    {
        delete_factor = value;
        delete_factor.value_namespace = name_space;
        delete_factor.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "delete-factor")
    {
        delete_factor.yfilter = yfilter;
    }
}

bool Ipsla::MplsLspMonitor::Definitions::Definition::OperationType::MplsLspPing::Scan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "delete-factor")
        return true;
    return false;
}

Ipsla::Operation::Operation()
    :
    schedules(std::make_shared<Ipsla::Operation::Schedules>())
    , reactions(std::make_shared<Ipsla::Operation::Reactions>())
    , reaction_triggers(std::make_shared<Ipsla::Operation::ReactionTriggers>())
    , definitions(std::make_shared<Ipsla::Operation::Definitions>())
{
    schedules->parent = this;
    reactions->parent = this;
    reaction_triggers->parent = this;
    definitions->parent = this;

    yang_name = "operation"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::~Operation()
{
}

bool Ipsla::Operation::has_data() const
{
    if (is_presence_container) return true;
    return (schedules !=  nullptr && schedules->has_data())
	|| (reactions !=  nullptr && reactions->has_data())
	|| (reaction_triggers !=  nullptr && reaction_triggers->has_data())
	|| (definitions !=  nullptr && definitions->has_data());
}

bool Ipsla::Operation::has_operation() const
{
    return is_set(yfilter)
	|| (schedules !=  nullptr && schedules->has_operation())
	|| (reactions !=  nullptr && reactions->has_operation())
	|| (reaction_triggers !=  nullptr && reaction_triggers->has_operation())
	|| (definitions !=  nullptr && definitions->has_operation());
}

std::string Ipsla::Operation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedules")
    {
        if(schedules == nullptr)
        {
            schedules = std::make_shared<Ipsla::Operation::Schedules>();
        }
        return schedules;
    }

    if(child_yang_name == "reactions")
    {
        if(reactions == nullptr)
        {
            reactions = std::make_shared<Ipsla::Operation::Reactions>();
        }
        return reactions;
    }

    if(child_yang_name == "reaction-triggers")
    {
        if(reaction_triggers == nullptr)
        {
            reaction_triggers = std::make_shared<Ipsla::Operation::ReactionTriggers>();
        }
        return reaction_triggers;
    }

    if(child_yang_name == "definitions")
    {
        if(definitions == nullptr)
        {
            definitions = std::make_shared<Ipsla::Operation::Definitions>();
        }
        return definitions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(schedules != nullptr)
    {
        _children["schedules"] = schedules;
    }

    if(reactions != nullptr)
    {
        _children["reactions"] = reactions;
    }

    if(reaction_triggers != nullptr)
    {
        _children["reaction-triggers"] = reaction_triggers;
    }

    if(definitions != nullptr)
    {
        _children["definitions"] = definitions;
    }

    return _children;
}

void Ipsla::Operation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedules" || name == "reactions" || name == "reaction-triggers" || name == "definitions")
        return true;
    return false;
}

Ipsla::Operation::Schedules::Schedules()
    :
    schedule(this, {"operation_id"})
{

    yang_name = "schedules"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::Schedules::~Schedules()
{
}

bool Ipsla::Operation::Schedules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<schedule.len(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Operation::Schedules::has_operation() const
{
    for (std::size_t index=0; index<schedule.len(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Operation::Schedules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/operation/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::Schedules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Schedules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Schedules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule")
    {
        auto ent_ = std::make_shared<Ipsla::Operation::Schedules::Schedule>();
        ent_->parent = this;
        schedule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Schedules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : schedule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Operation::Schedules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Schedules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Schedules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule")
        return true;
    return false;
}

Ipsla::Operation::Schedules::Schedule::Schedule()
    :
    operation_id{YType::uint32, "operation-id"},
    life{YType::str, "life"},
    ageout{YType::uint32, "ageout"},
    recurring{YType::empty, "recurring"}
        ,
    start_time(std::make_shared<Ipsla::Operation::Schedules::Schedule::StartTime>())
{
    start_time->parent = this;

    yang_name = "schedule"; yang_parent_name = "schedules"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::Schedules::Schedule::~Schedule()
{
}

bool Ipsla::Operation::Schedules::Schedule::has_data() const
{
    if (is_presence_container) return true;
    return operation_id.is_set
	|| life.is_set
	|| ageout.is_set
	|| recurring.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Ipsla::Operation::Schedules::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(ageout.yfilter)
	|| ydk::is_set(recurring.yfilter)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Ipsla::Operation::Schedules::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/operation/schedules/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::Schedules::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    ADD_KEY_TOKEN(operation_id, "operation-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Schedules::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (ageout.is_set || is_set(ageout.yfilter)) leaf_name_data.push_back(ageout.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.yfilter)) leaf_name_data.push_back(recurring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Schedules::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Ipsla::Operation::Schedules::Schedule::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Schedules::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_time != nullptr)
    {
        _children["start-time"] = start_time;
    }

    return _children;
}

void Ipsla::Operation::Schedules::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout")
    {
        ageout = value;
        ageout.value_namespace = name_space;
        ageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring")
    {
        recurring = value;
        recurring.value_namespace = name_space;
        recurring.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Schedules::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "ageout")
    {
        ageout.yfilter = yfilter;
    }
    if(value_path == "recurring")
    {
        recurring.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Schedules::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "operation-id" || name == "life" || name == "ageout" || name == "recurring")
        return true;
    return false;
}

Ipsla::Operation::Schedules::Schedule::StartTime::StartTime()
    :
    schedule_type{YType::enumeration, "schedule-type"},
    hour{YType::uint32, "hour"},
    minute{YType::uint32, "minute"},
    second{YType::uint32, "second"},
    month{YType::enumeration, "month"},
    day{YType::uint32, "day"},
    year{YType::uint32, "year"}
{

    yang_name = "start-time"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Schedules::Schedule::StartTime::~StartTime()
{
}

bool Ipsla::Operation::Schedules::Schedule::StartTime::has_data() const
{
    if (is_presence_container) return true;
    return schedule_type.is_set
	|| hour.is_set
	|| minute.is_set
	|| second.is_set
	|| month.is_set
	|| day.is_set
	|| year.is_set;
}

bool Ipsla::Operation::Schedules::Schedule::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_type.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minute.yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Ipsla::Operation::Schedules::Schedule::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Schedules::Schedule::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_type.is_set || is_set(schedule_type.yfilter)) leaf_name_data.push_back(schedule_type.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minute.is_set || is_set(minute.yfilter)) leaf_name_data.push_back(minute.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Schedules::Schedule::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Schedules::Schedule::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Schedules::Schedule::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-type")
    {
        schedule_type = value;
        schedule_type.value_namespace = name_space;
        schedule_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute")
    {
        minute = value;
        minute.value_namespace = name_space;
        minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Schedules::Schedule::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-type")
    {
        schedule_type.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minute")
    {
        minute.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Schedules::Schedule::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-type" || name == "hour" || name == "minute" || name == "second" || name == "month" || name == "day" || name == "year")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reactions()
    :
    reaction(this, {"operation_id"})
{

    yang_name = "reactions"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::Reactions::~Reactions()
{
}

bool Ipsla::Operation::Reactions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reaction.len(); index++)
    {
        if(reaction[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Operation::Reactions::has_operation() const
{
    for (std::size_t index=0; index<reaction.len(); index++)
    {
        if(reaction[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Operation::Reactions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/operation/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::Reactions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reactions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reaction")
    {
        auto ent_ = std::make_shared<Ipsla::Operation::Reactions::Reaction>();
        ent_->parent = this;
        reaction.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reaction.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Operation::Reactions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reaction")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Reaction()
    :
    operation_id{YType::uint32, "operation-id"}
        ,
    condition(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition>())
{
    condition->parent = this;

    yang_name = "reaction"; yang_parent_name = "reactions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::Reactions::Reaction::~Reaction()
{
}

bool Ipsla::Operation::Reactions::Reaction::has_data() const
{
    if (is_presence_container) return true;
    return operation_id.is_set
	|| (condition !=  nullptr && condition->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| (condition !=  nullptr && condition->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/operation/reactions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::Reactions::Reaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction";
    ADD_KEY_TOKEN(operation_id, "operation-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "condition")
    {
        if(condition == nullptr)
        {
            condition = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition>();
        }
        return condition;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(condition != nullptr)
    {
        _children["condition"] = condition;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "condition" || name == "operation-id")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::Condition()
    :
    jitter_average_ds(nullptr) // presence node
    , timeout(nullptr) // presence node
    , jitter_average(nullptr) // presence node
    , verify_error(nullptr) // presence node
    , rtt(nullptr) // presence node
    , packet_loss_sd(nullptr) // presence node
    , jitter_average_sd(nullptr) // presence node
    , connection_loss(nullptr) // presence node
    , packet_loss_ds(nullptr) // presence node
{

    yang_name = "condition"; yang_parent_name = "reaction"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::~Condition()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::has_data() const
{
    if (is_presence_container) return true;
    return (jitter_average_ds !=  nullptr && jitter_average_ds->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (jitter_average !=  nullptr && jitter_average->has_data())
	|| (verify_error !=  nullptr && verify_error->has_data())
	|| (rtt !=  nullptr && rtt->has_data())
	|| (packet_loss_sd !=  nullptr && packet_loss_sd->has_data())
	|| (jitter_average_sd !=  nullptr && jitter_average_sd->has_data())
	|| (connection_loss !=  nullptr && connection_loss->has_data())
	|| (packet_loss_ds !=  nullptr && packet_loss_ds->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::has_operation() const
{
    return is_set(yfilter)
	|| (jitter_average_ds !=  nullptr && jitter_average_ds->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (jitter_average !=  nullptr && jitter_average->has_operation())
	|| (verify_error !=  nullptr && verify_error->has_operation())
	|| (rtt !=  nullptr && rtt->has_operation())
	|| (packet_loss_sd !=  nullptr && packet_loss_sd->has_operation())
	|| (jitter_average_sd !=  nullptr && jitter_average_sd->has_operation())
	|| (connection_loss !=  nullptr && connection_loss->has_operation())
	|| (packet_loss_ds !=  nullptr && packet_loss_ds->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "condition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jitter-average-ds")
    {
        if(jitter_average_ds == nullptr)
        {
            jitter_average_ds = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs>();
        }
        return jitter_average_ds;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "jitter-average")
    {
        if(jitter_average == nullptr)
        {
            jitter_average = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage>();
        }
        return jitter_average;
    }

    if(child_yang_name == "verify-error")
    {
        if(verify_error == nullptr)
        {
            verify_error = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::VerifyError>();
        }
        return verify_error;
    }

    if(child_yang_name == "rtt")
    {
        if(rtt == nullptr)
        {
            rtt = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Rtt>();
        }
        return rtt;
    }

    if(child_yang_name == "packet-loss-sd")
    {
        if(packet_loss_sd == nullptr)
        {
            packet_loss_sd = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd>();
        }
        return packet_loss_sd;
    }

    if(child_yang_name == "jitter-average-sd")
    {
        if(jitter_average_sd == nullptr)
        {
            jitter_average_sd = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd>();
        }
        return jitter_average_sd;
    }

    if(child_yang_name == "connection-loss")
    {
        if(connection_loss == nullptr)
        {
            connection_loss = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss>();
        }
        return connection_loss;
    }

    if(child_yang_name == "packet-loss-ds")
    {
        if(packet_loss_ds == nullptr)
        {
            packet_loss_ds = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs>();
        }
        return packet_loss_ds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(jitter_average_ds != nullptr)
    {
        _children["jitter-average-ds"] = jitter_average_ds;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    if(jitter_average != nullptr)
    {
        _children["jitter-average"] = jitter_average;
    }

    if(verify_error != nullptr)
    {
        _children["verify-error"] = verify_error;
    }

    if(rtt != nullptr)
    {
        _children["rtt"] = rtt;
    }

    if(packet_loss_sd != nullptr)
    {
        _children["packet-loss-sd"] = packet_loss_sd;
    }

    if(jitter_average_sd != nullptr)
    {
        _children["jitter-average-sd"] = jitter_average_sd;
    }

    if(connection_loss != nullptr)
    {
        _children["connection-loss"] = connection_loss;
    }

    if(packet_loss_ds != nullptr)
    {
        _children["packet-loss-ds"] = packet_loss_ds;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter-average-ds" || name == "timeout" || name == "jitter-average" || name == "verify-error" || name == "rtt" || name == "packet-loss-sd" || name == "jitter-average-sd" || name == "connection-loss" || name == "packet-loss-ds")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::JitterAverageDs()
    :
    threshold_limits(nullptr) // presence node
    , action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "jitter-average-ds"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::~JitterAverageDs()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_limits !=  nullptr && threshold_limits->has_data())
	|| (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_limits !=  nullptr && threshold_limits->has_operation())
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter-average-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits == nullptr)
        {
            threshold_limits = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits>();
        }
        return threshold_limits;
    }

    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_limits != nullptr)
    {
        _children["threshold-limits"] = threshold_limits;
    }

    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-limits" || name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::ThresholdLimits()
    :
    lower_limit{YType::uint32, "lower-limit"},
    upper_limit{YType::uint32, "upper-limit"}
{

    yang_name = "threshold-limits"; yang_parent_name = "jitter-average-ds"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::~ThresholdLimits()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| upper_limit.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(upper_limit.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "upper-limit")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "jitter-average-ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "jitter-average-ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageDs::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::Timeout::Timeout()
    :
    action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "timeout"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::Timeout::~Timeout()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Timeout::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::JitterAverage()
    :
    threshold_limits(nullptr) // presence node
    , action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "jitter-average"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::~JitterAverage()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_limits !=  nullptr && threshold_limits->has_data())
	|| (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_limits !=  nullptr && threshold_limits->has_operation())
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter-average";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits == nullptr)
        {
            threshold_limits = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits>();
        }
        return threshold_limits;
    }

    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_limits != nullptr)
    {
        _children["threshold-limits"] = threshold_limits;
    }

    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-limits" || name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::ThresholdLimits()
    :
    lower_limit{YType::uint32, "lower-limit"},
    upper_limit{YType::uint32, "upper-limit"}
{

    yang_name = "threshold-limits"; yang_parent_name = "jitter-average"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::~ThresholdLimits()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| upper_limit.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(upper_limit.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "upper-limit")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "jitter-average"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "jitter-average"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverage::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::VerifyError()
    :
    action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "verify-error"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::~VerifyError()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::has_data() const
{
    if (is_presence_container) return true;
    return (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::has_operation() const
{
    return is_set(yfilter)
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "verify-error"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "verify-error"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::VerifyError::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::Rtt::Rtt()
    :
    threshold_limits(nullptr) // presence node
    , action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "rtt"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::Rtt::~Rtt()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_limits !=  nullptr && threshold_limits->has_data())
	|| (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_limits !=  nullptr && threshold_limits->has_operation())
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::Rtt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::Rtt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::Rtt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits == nullptr)
        {
            threshold_limits = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits>();
        }
        return threshold_limits;
    }

    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::Rtt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_limits != nullptr)
    {
        _children["threshold-limits"] = threshold_limits;
    }

    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::Rtt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::Rtt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-limits" || name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::ThresholdLimits()
    :
    lower_limit{YType::uint32, "lower-limit"},
    upper_limit{YType::uint32, "upper-limit"}
{

    yang_name = "threshold-limits"; yang_parent_name = "rtt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::~ThresholdLimits()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| upper_limit.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(upper_limit.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "upper-limit")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "rtt"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "rtt"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::Rtt::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::PacketLossSd()
    :
    threshold_limits(nullptr) // presence node
    , action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "packet-loss-sd"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::~PacketLossSd()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_limits !=  nullptr && threshold_limits->has_data())
	|| (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_limits !=  nullptr && threshold_limits->has_operation())
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-loss-sd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits == nullptr)
        {
            threshold_limits = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits>();
        }
        return threshold_limits;
    }

    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_limits != nullptr)
    {
        _children["threshold-limits"] = threshold_limits;
    }

    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-limits" || name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::ThresholdLimits()
    :
    lower_limit{YType::uint32, "lower-limit"},
    upper_limit{YType::uint32, "upper-limit"}
{

    yang_name = "threshold-limits"; yang_parent_name = "packet-loss-sd"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::~ThresholdLimits()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| upper_limit.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(upper_limit.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "upper-limit")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "packet-loss-sd"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "packet-loss-sd"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossSd::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::JitterAverageSd()
    :
    threshold_limits(nullptr) // presence node
    , action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "jitter-average-sd"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::~JitterAverageSd()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_limits !=  nullptr && threshold_limits->has_data())
	|| (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_limits !=  nullptr && threshold_limits->has_operation())
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter-average-sd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits == nullptr)
        {
            threshold_limits = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits>();
        }
        return threshold_limits;
    }

    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_limits != nullptr)
    {
        _children["threshold-limits"] = threshold_limits;
    }

    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-limits" || name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::ThresholdLimits()
    :
    lower_limit{YType::uint32, "lower-limit"},
    upper_limit{YType::uint32, "upper-limit"}
{

    yang_name = "threshold-limits"; yang_parent_name = "jitter-average-sd"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::~ThresholdLimits()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| upper_limit.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(upper_limit.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "upper-limit")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "jitter-average-sd"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "jitter-average-sd"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::JitterAverageSd::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ConnectionLoss()
    :
    action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "connection-loss"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::~ConnectionLoss()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::has_data() const
{
    if (is_presence_container) return true;
    return (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::has_operation() const
{
    return is_set(yfilter)
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "connection-loss"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "connection-loss"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::ConnectionLoss::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::PacketLossDs()
    :
    threshold_limits(nullptr) // presence node
    , action_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType>())
    , threshold_type(std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType>())
{
    action_type->parent = this;
    threshold_type->parent = this;

    yang_name = "packet-loss-ds"; yang_parent_name = "condition"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::~PacketLossDs()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_limits !=  nullptr && threshold_limits->has_data())
	|| (action_type !=  nullptr && action_type->has_data())
	|| (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_limits !=  nullptr && threshold_limits->has_operation())
	|| (action_type !=  nullptr && action_type->has_operation())
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-loss-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits == nullptr)
        {
            threshold_limits = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits>();
        }
        return threshold_limits;
    }

    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType>();
        }
        return action_type;
    }

    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_limits != nullptr)
    {
        _children["threshold-limits"] = threshold_limits;
    }

    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-limits" || name == "action-type" || name == "threshold-type")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::ThresholdLimits()
    :
    lower_limit{YType::uint32, "lower-limit"},
    upper_limit{YType::uint32, "upper-limit"}
{

    yang_name = "threshold-limits"; yang_parent_name = "packet-loss-ds"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::~ThresholdLimits()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| upper_limit.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(upper_limit.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "upper-limit")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::ActionType()
    :
    logging{YType::empty, "logging"},
    trigger{YType::empty, "trigger"}
{

    yang_name = "action-type"; yang_parent_name = "packet-loss-ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::~ActionType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| trigger.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "trigger")
        return true;
    return false;
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::ThresholdType()
    :
    thresh_type{YType::enumeration, "thresh-type"},
    count1{YType::uint32, "count1"},
    count2{YType::uint32, "count2"}
{

    yang_name = "threshold-type"; yang_parent_name = "packet-loss-ds"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::~ThresholdType()
{
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return thresh_type.is_set
	|| count1.is_set
	|| count2.is_set;
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh_type.yfilter)
	|| ydk::is_set(count1.yfilter)
	|| ydk::is_set(count2.yfilter);
}

std::string Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh_type.is_set || is_set(thresh_type.yfilter)) leaf_name_data.push_back(thresh_type.get_name_leafdata());
    if (count1.is_set || is_set(count1.yfilter)) leaf_name_data.push_back(count1.get_name_leafdata());
    if (count2.is_set || is_set(count2.yfilter)) leaf_name_data.push_back(count2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh-type")
    {
        thresh_type = value;
        thresh_type.value_namespace = name_space;
        thresh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count1")
    {
        count1 = value;
        count1.value_namespace = name_space;
        count1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count2")
    {
        count2 = value;
        count2.value_namespace = name_space;
        count2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh-type")
    {
        thresh_type.yfilter = yfilter;
    }
    if(value_path == "count1")
    {
        count1.yfilter = yfilter;
    }
    if(value_path == "count2")
    {
        count2.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Reactions::Reaction::Condition::PacketLossDs::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh-type" || name == "count1" || name == "count2")
        return true;
    return false;
}

Ipsla::Operation::ReactionTriggers::ReactionTriggers()
    :
    reaction_trigger(this, {"operation_id"})
{

    yang_name = "reaction-triggers"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::ReactionTriggers::~ReactionTriggers()
{
}

bool Ipsla::Operation::ReactionTriggers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reaction_trigger.len(); index++)
    {
        if(reaction_trigger[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Operation::ReactionTriggers::has_operation() const
{
    for (std::size_t index=0; index<reaction_trigger.len(); index++)
    {
        if(reaction_trigger[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Operation::ReactionTriggers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/operation/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::ReactionTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::ReactionTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::ReactionTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reaction-trigger")
    {
        auto ent_ = std::make_shared<Ipsla::Operation::ReactionTriggers::ReactionTrigger>();
        ent_->parent = this;
        reaction_trigger.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::ReactionTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reaction_trigger.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Operation::ReactionTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::ReactionTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::ReactionTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reaction-trigger")
        return true;
    return false;
}

Ipsla::Operation::ReactionTriggers::ReactionTrigger::ReactionTrigger()
    :
    operation_id{YType::uint32, "operation-id"},
    triggered_op_id{YType::uint32, "triggered-op-id"}
{

    yang_name = "reaction-trigger"; yang_parent_name = "reaction-triggers"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::ReactionTriggers::ReactionTrigger::~ReactionTrigger()
{
}

bool Ipsla::Operation::ReactionTriggers::ReactionTrigger::has_data() const
{
    if (is_presence_container) return true;
    return operation_id.is_set
	|| triggered_op_id.is_set;
}

bool Ipsla::Operation::ReactionTriggers::ReactionTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(triggered_op_id.yfilter);
}

std::string Ipsla::Operation::ReactionTriggers::ReactionTrigger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/operation/reaction-triggers/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::ReactionTriggers::ReactionTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction-trigger";
    ADD_KEY_TOKEN(operation_id, "operation-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::ReactionTriggers::ReactionTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (triggered_op_id.is_set || is_set(triggered_op_id.yfilter)) leaf_name_data.push_back(triggered_op_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::ReactionTriggers::ReactionTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::ReactionTriggers::ReactionTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::ReactionTriggers::ReactionTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-op-id")
    {
        triggered_op_id = value;
        triggered_op_id.value_namespace = name_space;
        triggered_op_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::ReactionTriggers::ReactionTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "triggered-op-id")
    {
        triggered_op_id.yfilter = yfilter;
    }
}

bool Ipsla::Operation::ReactionTriggers::ReactionTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-id" || name == "triggered-op-id")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definitions()
    :
    definition(this, {"operation_id"})
{

    yang_name = "definitions"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::Definitions::~Definitions()
{
}

bool Ipsla::Operation::Definitions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<definition.len(); index++)
    {
        if(definition[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Operation::Definitions::has_operation() const
{
    for (std::size_t index=0; index<definition.len(); index++)
    {
        if(definition[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Operation::Definitions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/operation/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::Definitions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definitions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "definition")
    {
        auto ent_ = std::make_shared<Ipsla::Operation::Definitions::Definition>();
        ent_->parent = this;
        definition.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : definition.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Operation::Definitions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "definition")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::Definition()
    :
    operation_id{YType::uint32, "operation-id"}
        ,
    operation_type(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType>())
{
    operation_type->parent = this;

    yang_name = "definition"; yang_parent_name = "definitions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Operation::Definitions::Definition::~Definition()
{
}

bool Ipsla::Operation::Definitions::Definition::has_data() const
{
    if (is_presence_container) return true;
    return operation_id.is_set
	|| (operation_type !=  nullptr && operation_type->has_data());
}

bool Ipsla::Operation::Definitions::Definition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| (operation_type !=  nullptr && operation_type->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/operation/definitions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Operation::Definitions::Definition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definition";
    ADD_KEY_TOKEN(operation_id, "operation-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-type")
    {
        if(operation_type == nullptr)
        {
            operation_type = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType>();
        }
        return operation_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operation_type != nullptr)
    {
        _children["operation-type"] = operation_type;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-type" || name == "operation-id")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::OperationType()
    :
    icmp_echo(nullptr) // presence node
    , mpls_lsp_ping(nullptr) // presence node
    , udp_echo(nullptr) // presence node
    , mpls_lsp_trace(nullptr) // presence node
    , udp_jitter(nullptr) // presence node
    , icmp_path_echo(nullptr) // presence node
    , icmp_path_jitter(nullptr) // presence node
{

    yang_name = "operation-type"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::~OperationType()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::has_data() const
{
    if (is_presence_container) return true;
    return (icmp_echo !=  nullptr && icmp_echo->has_data())
	|| (mpls_lsp_ping !=  nullptr && mpls_lsp_ping->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data())
	|| (mpls_lsp_trace !=  nullptr && mpls_lsp_trace->has_data())
	|| (udp_jitter !=  nullptr && udp_jitter->has_data())
	|| (icmp_path_echo !=  nullptr && icmp_path_echo->has_data())
	|| (icmp_path_jitter !=  nullptr && icmp_path_jitter->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::has_operation() const
{
    return is_set(yfilter)
	|| (icmp_echo !=  nullptr && icmp_echo->has_operation())
	|| (mpls_lsp_ping !=  nullptr && mpls_lsp_ping->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation())
	|| (mpls_lsp_trace !=  nullptr && mpls_lsp_trace->has_operation())
	|| (udp_jitter !=  nullptr && udp_jitter->has_operation())
	|| (icmp_path_echo !=  nullptr && icmp_path_echo->has_operation())
	|| (icmp_path_jitter !=  nullptr && icmp_path_jitter->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-echo")
    {
        if(icmp_echo == nullptr)
        {
            icmp_echo = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho>();
        }
        return icmp_echo;
    }

    if(child_yang_name == "mpls-lsp-ping")
    {
        if(mpls_lsp_ping == nullptr)
        {
            mpls_lsp_ping = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing>();
        }
        return mpls_lsp_ping;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho>();
        }
        return udp_echo;
    }

    if(child_yang_name == "mpls-lsp-trace")
    {
        if(mpls_lsp_trace == nullptr)
        {
            mpls_lsp_trace = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace>();
        }
        return mpls_lsp_trace;
    }

    if(child_yang_name == "udp-jitter")
    {
        if(udp_jitter == nullptr)
        {
            udp_jitter = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter>();
        }
        return udp_jitter;
    }

    if(child_yang_name == "icmp-path-echo")
    {
        if(icmp_path_echo == nullptr)
        {
            icmp_path_echo = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho>();
        }
        return icmp_path_echo;
    }

    if(child_yang_name == "icmp-path-jitter")
    {
        if(icmp_path_jitter == nullptr)
        {
            icmp_path_jitter = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter>();
        }
        return icmp_path_jitter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_echo != nullptr)
    {
        _children["icmp-echo"] = icmp_echo;
    }

    if(mpls_lsp_ping != nullptr)
    {
        _children["mpls-lsp-ping"] = mpls_lsp_ping;
    }

    if(udp_echo != nullptr)
    {
        _children["udp-echo"] = udp_echo;
    }

    if(mpls_lsp_trace != nullptr)
    {
        _children["mpls-lsp-trace"] = mpls_lsp_trace;
    }

    if(udp_jitter != nullptr)
    {
        _children["udp-jitter"] = udp_jitter;
    }

    if(icmp_path_echo != nullptr)
    {
        _children["icmp-path-echo"] = icmp_path_echo;
    }

    if(icmp_path_jitter != nullptr)
    {
        _children["icmp-path-jitter"] = icmp_path_jitter;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-echo" || name == "mpls-lsp-ping" || name == "udp-echo" || name == "mpls-lsp-trace" || name == "udp-jitter" || name == "icmp-path-echo" || name == "icmp-path-jitter")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::IcmpEcho()
    :
    source_address_v6{YType::str, "source-address-v6"},
    dest_address_v6{YType::str, "dest-address-v6"},
    source_address{YType::str, "source-address"},
    tos{YType::uint32, "tos"},
    vrf{YType::str, "vrf"},
    timeout{YType::uint32, "timeout"},
    frequency{YType::uint32, "frequency"},
    dest_address{YType::str, "dest-address"},
    tag{YType::str, "tag"}
        ,
    data_size(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize>())
    , statistics(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics>())
    , history(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History>())
    , enhanced_stats(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats>())
{
    data_size->parent = this;
    statistics->parent = this;
    history->parent = this;
    enhanced_stats->parent = this;

    yang_name = "icmp-echo"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::~IcmpEcho()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::has_data() const
{
    if (is_presence_container) return true;
    return source_address_v6.is_set
	|| dest_address_v6.is_set
	|| source_address.is_set
	|| tos.is_set
	|| vrf.is_set
	|| timeout.is_set
	|| frequency.is_set
	|| dest_address.is_set
	|| tag.is_set
	|| (data_size !=  nullptr && data_size->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (enhanced_stats !=  nullptr && enhanced_stats->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address_v6.yfilter)
	|| ydk::is_set(dest_address_v6.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (data_size !=  nullptr && data_size->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (enhanced_stats !=  nullptr && enhanced_stats->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address_v6.is_set || is_set(source_address_v6.yfilter)) leaf_name_data.push_back(source_address_v6.get_name_leafdata());
    if (dest_address_v6.is_set || is_set(dest_address_v6.yfilter)) leaf_name_data.push_back(dest_address_v6.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-size")
    {
        if(data_size == nullptr)
        {
            data_size = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize>();
        }
        return data_size;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History>();
        }
        return history;
    }

    if(child_yang_name == "enhanced-stats")
    {
        if(enhanced_stats == nullptr)
        {
            enhanced_stats = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats>();
        }
        return enhanced_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data_size != nullptr)
    {
        _children["data-size"] = data_size;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(enhanced_stats != nullptr)
    {
        _children["enhanced-stats"] = enhanced_stats;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address-v6")
    {
        source_address_v6 = value;
        source_address_v6.value_namespace = name_space;
        source_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address-v6")
    {
        dest_address_v6 = value;
        dest_address_v6.value_namespace = name_space;
        dest_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address-v6")
    {
        source_address_v6.yfilter = yfilter;
    }
    if(value_path == "dest-address-v6")
    {
        dest_address_v6.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-size" || name == "statistics" || name == "history" || name == "enhanced-stats" || name == "source-address-v6" || name == "dest-address-v6" || name == "source-address" || name == "tos" || name == "vrf" || name == "timeout" || name == "frequency" || name == "dest-address" || name == "tag")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::DataSize()
    :
    request{YType::uint32, "request"}
{

    yang_name = "data-size"; yang_parent_name = "icmp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::~DataSize()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::has_data() const
{
    if (is_presence_container) return true;
    return request.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::DataSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::Statistics()
    :
    hours{YType::uint32, "hours"},
    dist_interval{YType::uint32, "dist-interval"},
    dist_count{YType::uint32, "dist-count"}
{

    yang_name = "statistics"; yang_parent_name = "icmp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::~Statistics()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| dist_interval.is_set
	|| dist_count.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(dist_interval.yfilter)
	|| ydk::is_set(dist_count.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (dist_interval.is_set || is_set(dist_interval.yfilter)) leaf_name_data.push_back(dist_interval.get_name_leafdata());
    if (dist_count.is_set || is_set(dist_count.yfilter)) leaf_name_data.push_back(dist_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-interval")
    {
        dist_interval = value;
        dist_interval.value_namespace = name_space;
        dist_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-count")
    {
        dist_count = value;
        dist_count.value_namespace = name_space;
        dist_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "dist-interval")
    {
        dist_interval.yfilter = yfilter;
    }
    if(value_path == "dist-count")
    {
        dist_count.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "dist-interval" || name == "dist-count")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::History()
    :
    lives{YType::uint32, "lives"},
    history_filter{YType::enumeration, "history-filter"},
    buckets{YType::uint32, "buckets"}
{

    yang_name = "history"; yang_parent_name = "icmp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::~History()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::has_data() const
{
    if (is_presence_container) return true;
    return lives.is_set
	|| history_filter.is_set
	|| buckets.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lives.yfilter)
	|| ydk::is_set(history_filter.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lives.is_set || is_set(lives.yfilter)) leaf_name_data.push_back(lives.get_name_leafdata());
    if (history_filter.is_set || is_set(history_filter.yfilter)) leaf_name_data.push_back(history_filter.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lives")
    {
        lives = value;
        lives.value_namespace = name_space;
        lives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-filter")
    {
        history_filter = value;
        history_filter.value_namespace = name_space;
        history_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lives")
    {
        lives.yfilter = yfilter;
    }
    if(value_path == "history-filter")
    {
        history_filter.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lives" || name == "history-filter" || name == "buckets")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStats()
    :
    enhanced_stat(this, {"interval"})
{

    yang_name = "enhanced-stats"; yang_parent_name = "icmp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::~EnhancedStats()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<enhanced_stat.len(); index++)
    {
        if(enhanced_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::has_operation() const
{
    for (std::size_t index=0; index<enhanced_stat.len(); index++)
    {
        if(enhanced_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced-stat")
    {
        auto ent_ = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat>();
        ent_->parent = this;
        enhanced_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : enhanced_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced-stat")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::EnhancedStat()
    :
    interval{YType::uint32, "interval"},
    buckets{YType::uint32, "buckets"}
{

    yang_name = "enhanced-stat"; yang_parent_name = "enhanced-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::~EnhancedStat()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| buckets.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-stat";
    ADD_KEY_TOKEN(interval, "interval");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpEcho::EnhancedStats::EnhancedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "buckets")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::MplsLspPing()
    :
    ttl{YType::uint32, "ttl"},
    source_address{YType::str, "source-address"},
    output_nexthop{YType::str, "output-nexthop"},
    lsp_selector{YType::str, "lsp-selector"},
    exp_bits{YType::uint32, "exp-bits"},
    force_explicit_null{YType::empty, "force-explicit-null"},
    timeout{YType::uint32, "timeout"},
    output_interface{YType::str, "output-interface"},
    frequency{YType::uint32, "frequency"},
    tag{YType::str, "tag"}
        ,
    data_size(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize>())
    , reply(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply>())
    , target(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target>())
    , statistics(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics>())
    , history(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History>())
    , enhanced_stats(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats>())
{
    data_size->parent = this;
    reply->parent = this;
    target->parent = this;
    statistics->parent = this;
    history->parent = this;
    enhanced_stats->parent = this;

    yang_name = "mpls-lsp-ping"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::~MplsLspPing()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::has_data() const
{
    if (is_presence_container) return true;
    return ttl.is_set
	|| source_address.is_set
	|| output_nexthop.is_set
	|| lsp_selector.is_set
	|| exp_bits.is_set
	|| force_explicit_null.is_set
	|| timeout.is_set
	|| output_interface.is_set
	|| frequency.is_set
	|| tag.is_set
	|| (data_size !=  nullptr && data_size->has_data())
	|| (reply !=  nullptr && reply->has_data())
	|| (target !=  nullptr && target->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (enhanced_stats !=  nullptr && enhanced_stats->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(output_nexthop.yfilter)
	|| ydk::is_set(lsp_selector.yfilter)
	|| ydk::is_set(exp_bits.yfilter)
	|| ydk::is_set(force_explicit_null.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (data_size !=  nullptr && data_size->has_operation())
	|| (reply !=  nullptr && reply->has_operation())
	|| (target !=  nullptr && target->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (enhanced_stats !=  nullptr && enhanced_stats->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-lsp-ping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (output_nexthop.is_set || is_set(output_nexthop.yfilter)) leaf_name_data.push_back(output_nexthop.get_name_leafdata());
    if (lsp_selector.is_set || is_set(lsp_selector.yfilter)) leaf_name_data.push_back(lsp_selector.get_name_leafdata());
    if (exp_bits.is_set || is_set(exp_bits.yfilter)) leaf_name_data.push_back(exp_bits.get_name_leafdata());
    if (force_explicit_null.is_set || is_set(force_explicit_null.yfilter)) leaf_name_data.push_back(force_explicit_null.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-size")
    {
        if(data_size == nullptr)
        {
            data_size = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize>();
        }
        return data_size;
    }

    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply>();
        }
        return reply;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target>();
        }
        return target;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History>();
        }
        return history;
    }

    if(child_yang_name == "enhanced-stats")
    {
        if(enhanced_stats == nullptr)
        {
            enhanced_stats = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats>();
        }
        return enhanced_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data_size != nullptr)
    {
        _children["data-size"] = data_size;
    }

    if(reply != nullptr)
    {
        _children["reply"] = reply;
    }

    if(target != nullptr)
    {
        _children["target"] = target;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(enhanced_stats != nullptr)
    {
        _children["enhanced-stats"] = enhanced_stats;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-nexthop")
    {
        output_nexthop = value;
        output_nexthop.value_namespace = name_space;
        output_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-selector")
    {
        lsp_selector = value;
        lsp_selector.value_namespace = name_space;
        lsp_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-bits")
    {
        exp_bits = value;
        exp_bits.value_namespace = name_space;
        exp_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-explicit-null")
    {
        force_explicit_null = value;
        force_explicit_null.value_namespace = name_space;
        force_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "output-nexthop")
    {
        output_nexthop.yfilter = yfilter;
    }
    if(value_path == "lsp-selector")
    {
        lsp_selector.yfilter = yfilter;
    }
    if(value_path == "exp-bits")
    {
        exp_bits.yfilter = yfilter;
    }
    if(value_path == "force-explicit-null")
    {
        force_explicit_null.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-size" || name == "reply" || name == "target" || name == "statistics" || name == "history" || name == "enhanced-stats" || name == "ttl" || name == "source-address" || name == "output-nexthop" || name == "lsp-selector" || name == "exp-bits" || name == "force-explicit-null" || name == "timeout" || name == "output-interface" || name == "frequency" || name == "tag")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::DataSize()
    :
    request{YType::uint32, "request"}
{

    yang_name = "data-size"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::~DataSize()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::has_data() const
{
    if (is_presence_container) return true;
    return request.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::DataSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::Reply()
    :
    mode{YType::enumeration, "mode"},
    dscp_bits{YType::str, "dscp-bits"}
{

    yang_name = "reply"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::~Reply()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| dscp_bits.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(dscp_bits.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (dscp_bits.is_set || is_set(dscp_bits.yfilter)) leaf_name_data.push_back(dscp_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-bits")
    {
        dscp_bits = value;
        dscp_bits.value_namespace = name_space;
        dscp_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "dscp-bits")
    {
        dscp_bits.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "dscp-bits")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Target()
    :
    traffic_engineering(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering>())
    , ipv4(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4>())
    , pseudowire(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire>())
{
    traffic_engineering->parent = this;
    ipv4->parent = this;
    pseudowire->parent = this;

    yang_name = "target"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::~Target()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::has_data() const
{
    if (is_presence_container) return true;
    return (traffic_engineering !=  nullptr && traffic_engineering->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-engineering")
    {
        if(traffic_engineering == nullptr)
        {
            traffic_engineering = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering>();
        }
        return traffic_engineering;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic_engineering != nullptr)
    {
        _children["traffic-engineering"] = traffic_engineering;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(pseudowire != nullptr)
    {
        _children["pseudowire"] = pseudowire;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-engineering" || name == "ipv4" || name == "pseudowire")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::TrafficEngineering()
    :
    tunnel{YType::uint32, "tunnel"}
{

    yang_name = "traffic-engineering"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::~TrafficEngineering()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-engineering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::TrafficEngineering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::Ipv4()
    :
    fec_address(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::~Ipv4()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (fec_address !=  nullptr && fec_address->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (fec_address !=  nullptr && fec_address->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-address")
    {
        if(fec_address == nullptr)
        {
            fec_address = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress>();
        }
        return fec_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_address != nullptr)
    {
        _children["fec-address"] = fec_address;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-address")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::FecAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "fec-address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::~FecAddress()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Ipv4::FecAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::Pseudowire()
    :
    target_address(nullptr) // presence node
{

    yang_name = "pseudowire"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::~Pseudowire()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::has_data() const
{
    if (is_presence_container) return true;
    return (target_address !=  nullptr && target_address->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::TargetAddress()
    :
    address{YType::str, "address"},
    vc_id{YType::uint32, "vc-id"}
{

    yang_name = "target-address"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::~TargetAddress()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vc_id.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vc_id.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Target::Pseudowire::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vc-id")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::Statistics()
    :
    hours{YType::uint32, "hours"},
    dist_interval{YType::uint32, "dist-interval"},
    dist_count{YType::uint32, "dist-count"}
{

    yang_name = "statistics"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::~Statistics()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| dist_interval.is_set
	|| dist_count.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(dist_interval.yfilter)
	|| ydk::is_set(dist_count.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (dist_interval.is_set || is_set(dist_interval.yfilter)) leaf_name_data.push_back(dist_interval.get_name_leafdata());
    if (dist_count.is_set || is_set(dist_count.yfilter)) leaf_name_data.push_back(dist_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-interval")
    {
        dist_interval = value;
        dist_interval.value_namespace = name_space;
        dist_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-count")
    {
        dist_count = value;
        dist_count.value_namespace = name_space;
        dist_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "dist-interval")
    {
        dist_interval.yfilter = yfilter;
    }
    if(value_path == "dist-count")
    {
        dist_count.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "dist-interval" || name == "dist-count")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::History()
    :
    lives{YType::uint32, "lives"},
    history_filter{YType::enumeration, "history-filter"},
    buckets{YType::uint32, "buckets"}
{

    yang_name = "history"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::~History()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::has_data() const
{
    if (is_presence_container) return true;
    return lives.is_set
	|| history_filter.is_set
	|| buckets.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lives.yfilter)
	|| ydk::is_set(history_filter.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lives.is_set || is_set(lives.yfilter)) leaf_name_data.push_back(lives.get_name_leafdata());
    if (history_filter.is_set || is_set(history_filter.yfilter)) leaf_name_data.push_back(history_filter.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lives")
    {
        lives = value;
        lives.value_namespace = name_space;
        lives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-filter")
    {
        history_filter = value;
        history_filter.value_namespace = name_space;
        history_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lives")
    {
        lives.yfilter = yfilter;
    }
    if(value_path == "history-filter")
    {
        history_filter.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lives" || name == "history-filter" || name == "buckets")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStats()
    :
    enhanced_stat(this, {"interval"})
{

    yang_name = "enhanced-stats"; yang_parent_name = "mpls-lsp-ping"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::~EnhancedStats()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<enhanced_stat.len(); index++)
    {
        if(enhanced_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::has_operation() const
{
    for (std::size_t index=0; index<enhanced_stat.len(); index++)
    {
        if(enhanced_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced-stat")
    {
        auto ent_ = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat>();
        ent_->parent = this;
        enhanced_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : enhanced_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced-stat")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::EnhancedStat()
    :
    interval{YType::uint32, "interval"},
    buckets{YType::uint32, "buckets"}
{

    yang_name = "enhanced-stat"; yang_parent_name = "enhanced-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::~EnhancedStat()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| buckets.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-stat";
    ADD_KEY_TOKEN(interval, "interval");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspPing::EnhancedStats::EnhancedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "buckets")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::UdpEcho()
    :
    source_address{YType::str, "source-address"},
    tos{YType::uint32, "tos"},
    control_disable{YType::empty, "control-disable"},
    source_port{YType::uint16, "source-port"},
    vrf{YType::str, "vrf"},
    timeout{YType::uint32, "timeout"},
    frequency{YType::uint32, "frequency"},
    dest_port{YType::uint16, "dest-port"},
    verify_data{YType::empty, "verify-data"},
    dest_address{YType::str, "dest-address"},
    tag{YType::str, "tag"}
        ,
    data_size(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize>())
    , statistics(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics>())
    , history(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History>())
    , enhanced_stats(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats>())
{
    data_size->parent = this;
    statistics->parent = this;
    history->parent = this;
    enhanced_stats->parent = this;

    yang_name = "udp-echo"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::~UdpEcho()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| tos.is_set
	|| control_disable.is_set
	|| source_port.is_set
	|| vrf.is_set
	|| timeout.is_set
	|| frequency.is_set
	|| dest_port.is_set
	|| verify_data.is_set
	|| dest_address.is_set
	|| tag.is_set
	|| (data_size !=  nullptr && data_size->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (enhanced_stats !=  nullptr && enhanced_stats->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(control_disable.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (data_size !=  nullptr && data_size->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (enhanced_stats !=  nullptr && enhanced_stats->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (control_disable.is_set || is_set(control_disable.yfilter)) leaf_name_data.push_back(control_disable.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-size")
    {
        if(data_size == nullptr)
        {
            data_size = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize>();
        }
        return data_size;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History>();
        }
        return history;
    }

    if(child_yang_name == "enhanced-stats")
    {
        if(enhanced_stats == nullptr)
        {
            enhanced_stats = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats>();
        }
        return enhanced_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data_size != nullptr)
    {
        _children["data-size"] = data_size;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(enhanced_stats != nullptr)
    {
        _children["enhanced-stats"] = enhanced_stats;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-disable")
    {
        control_disable = value;
        control_disable.value_namespace = name_space;
        control_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "control-disable")
    {
        control_disable.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-size" || name == "statistics" || name == "history" || name == "enhanced-stats" || name == "source-address" || name == "tos" || name == "control-disable" || name == "source-port" || name == "vrf" || name == "timeout" || name == "frequency" || name == "dest-port" || name == "verify-data" || name == "dest-address" || name == "tag")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::DataSize()
    :
    request{YType::uint32, "request"}
{

    yang_name = "data-size"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::~DataSize()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::has_data() const
{
    if (is_presence_container) return true;
    return request.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::DataSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::Statistics()
    :
    hours{YType::uint32, "hours"},
    dist_interval{YType::uint32, "dist-interval"},
    dist_count{YType::uint32, "dist-count"}
{

    yang_name = "statistics"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::~Statistics()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| dist_interval.is_set
	|| dist_count.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(dist_interval.yfilter)
	|| ydk::is_set(dist_count.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (dist_interval.is_set || is_set(dist_interval.yfilter)) leaf_name_data.push_back(dist_interval.get_name_leafdata());
    if (dist_count.is_set || is_set(dist_count.yfilter)) leaf_name_data.push_back(dist_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-interval")
    {
        dist_interval = value;
        dist_interval.value_namespace = name_space;
        dist_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-count")
    {
        dist_count = value;
        dist_count.value_namespace = name_space;
        dist_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "dist-interval")
    {
        dist_interval.yfilter = yfilter;
    }
    if(value_path == "dist-count")
    {
        dist_count.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "dist-interval" || name == "dist-count")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::History()
    :
    lives{YType::uint32, "lives"},
    history_filter{YType::enumeration, "history-filter"},
    buckets{YType::uint32, "buckets"}
{

    yang_name = "history"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::~History()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::has_data() const
{
    if (is_presence_container) return true;
    return lives.is_set
	|| history_filter.is_set
	|| buckets.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lives.yfilter)
	|| ydk::is_set(history_filter.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lives.is_set || is_set(lives.yfilter)) leaf_name_data.push_back(lives.get_name_leafdata());
    if (history_filter.is_set || is_set(history_filter.yfilter)) leaf_name_data.push_back(history_filter.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lives")
    {
        lives = value;
        lives.value_namespace = name_space;
        lives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-filter")
    {
        history_filter = value;
        history_filter.value_namespace = name_space;
        history_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lives")
    {
        lives.yfilter = yfilter;
    }
    if(value_path == "history-filter")
    {
        history_filter.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lives" || name == "history-filter" || name == "buckets")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStats()
    :
    enhanced_stat(this, {"interval"})
{

    yang_name = "enhanced-stats"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::~EnhancedStats()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<enhanced_stat.len(); index++)
    {
        if(enhanced_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::has_operation() const
{
    for (std::size_t index=0; index<enhanced_stat.len(); index++)
    {
        if(enhanced_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced-stat")
    {
        auto ent_ = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat>();
        ent_->parent = this;
        enhanced_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : enhanced_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced-stat")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::EnhancedStat()
    :
    interval{YType::uint32, "interval"},
    buckets{YType::uint32, "buckets"}
{

    yang_name = "enhanced-stat"; yang_parent_name = "enhanced-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::~EnhancedStat()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| buckets.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-stat";
    ADD_KEY_TOKEN(interval, "interval");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpEcho::EnhancedStats::EnhancedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "buckets")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::MplsLspTrace()
    :
    ttl{YType::uint32, "ttl"},
    source_address{YType::str, "source-address"},
    output_nexthop{YType::str, "output-nexthop"},
    lsp_selector{YType::str, "lsp-selector"},
    exp_bits{YType::uint32, "exp-bits"},
    force_explicit_null{YType::empty, "force-explicit-null"},
    timeout{YType::uint32, "timeout"},
    output_interface{YType::str, "output-interface"},
    frequency{YType::uint32, "frequency"},
    tag{YType::str, "tag"}
        ,
    target(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target>())
    , reply(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply>())
    , statistics(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics>())
    , history(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History>())
{
    target->parent = this;
    reply->parent = this;
    statistics->parent = this;
    history->parent = this;

    yang_name = "mpls-lsp-trace"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::~MplsLspTrace()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::has_data() const
{
    if (is_presence_container) return true;
    return ttl.is_set
	|| source_address.is_set
	|| output_nexthop.is_set
	|| lsp_selector.is_set
	|| exp_bits.is_set
	|| force_explicit_null.is_set
	|| timeout.is_set
	|| output_interface.is_set
	|| frequency.is_set
	|| tag.is_set
	|| (target !=  nullptr && target->has_data())
	|| (reply !=  nullptr && reply->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (history !=  nullptr && history->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(output_nexthop.yfilter)
	|| ydk::is_set(lsp_selector.yfilter)
	|| ydk::is_set(exp_bits.yfilter)
	|| ydk::is_set(force_explicit_null.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (target !=  nullptr && target->has_operation())
	|| (reply !=  nullptr && reply->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (history !=  nullptr && history->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-lsp-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (output_nexthop.is_set || is_set(output_nexthop.yfilter)) leaf_name_data.push_back(output_nexthop.get_name_leafdata());
    if (lsp_selector.is_set || is_set(lsp_selector.yfilter)) leaf_name_data.push_back(lsp_selector.get_name_leafdata());
    if (exp_bits.is_set || is_set(exp_bits.yfilter)) leaf_name_data.push_back(exp_bits.get_name_leafdata());
    if (force_explicit_null.is_set || is_set(force_explicit_null.yfilter)) leaf_name_data.push_back(force_explicit_null.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target>();
        }
        return target;
    }

    if(child_yang_name == "reply")
    {
        if(reply == nullptr)
        {
            reply = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply>();
        }
        return reply;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target != nullptr)
    {
        _children["target"] = target;
    }

    if(reply != nullptr)
    {
        _children["reply"] = reply;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-nexthop")
    {
        output_nexthop = value;
        output_nexthop.value_namespace = name_space;
        output_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-selector")
    {
        lsp_selector = value;
        lsp_selector.value_namespace = name_space;
        lsp_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-bits")
    {
        exp_bits = value;
        exp_bits.value_namespace = name_space;
        exp_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-explicit-null")
    {
        force_explicit_null = value;
        force_explicit_null.value_namespace = name_space;
        force_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "output-nexthop")
    {
        output_nexthop.yfilter = yfilter;
    }
    if(value_path == "lsp-selector")
    {
        lsp_selector.yfilter = yfilter;
    }
    if(value_path == "exp-bits")
    {
        exp_bits.yfilter = yfilter;
    }
    if(value_path == "force-explicit-null")
    {
        force_explicit_null.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target" || name == "reply" || name == "statistics" || name == "history" || name == "ttl" || name == "source-address" || name == "output-nexthop" || name == "lsp-selector" || name == "exp-bits" || name == "force-explicit-null" || name == "timeout" || name == "output-interface" || name == "frequency" || name == "tag")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Target()
    :
    traffic_engineering(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering>())
    , ipv4(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4>())
{
    traffic_engineering->parent = this;
    ipv4->parent = this;

    yang_name = "target"; yang_parent_name = "mpls-lsp-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::~Target()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::has_data() const
{
    if (is_presence_container) return true;
    return (traffic_engineering !=  nullptr && traffic_engineering->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-engineering")
    {
        if(traffic_engineering == nullptr)
        {
            traffic_engineering = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering>();
        }
        return traffic_engineering;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic_engineering != nullptr)
    {
        _children["traffic-engineering"] = traffic_engineering;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-engineering" || name == "ipv4")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::TrafficEngineering()
    :
    tunnel{YType::uint32, "tunnel"}
{

    yang_name = "traffic-engineering"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::~TrafficEngineering()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-engineering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::TrafficEngineering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::Ipv4()
    :
    fec_address(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::~Ipv4()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (fec_address !=  nullptr && fec_address->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (fec_address !=  nullptr && fec_address->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-address")
    {
        if(fec_address == nullptr)
        {
            fec_address = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress>();
        }
        return fec_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_address != nullptr)
    {
        _children["fec-address"] = fec_address;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-address")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::FecAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "fec-address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::~FecAddress()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Target::Ipv4::FecAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::Reply()
    :
    mode{YType::enumeration, "mode"},
    dscp_bits{YType::str, "dscp-bits"}
{

    yang_name = "reply"; yang_parent_name = "mpls-lsp-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::~Reply()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| dscp_bits.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(dscp_bits.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (dscp_bits.is_set || is_set(dscp_bits.yfilter)) leaf_name_data.push_back(dscp_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-bits")
    {
        dscp_bits = value;
        dscp_bits.value_namespace = name_space;
        dscp_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "dscp-bits")
    {
        dscp_bits.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "dscp-bits")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::Statistics()
    :
    hours{YType::uint32, "hours"},
    dist_interval{YType::uint32, "dist-interval"},
    dist_count{YType::uint32, "dist-count"}
{

    yang_name = "statistics"; yang_parent_name = "mpls-lsp-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::~Statistics()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| dist_interval.is_set
	|| dist_count.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(dist_interval.yfilter)
	|| ydk::is_set(dist_count.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (dist_interval.is_set || is_set(dist_interval.yfilter)) leaf_name_data.push_back(dist_interval.get_name_leafdata());
    if (dist_count.is_set || is_set(dist_count.yfilter)) leaf_name_data.push_back(dist_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-interval")
    {
        dist_interval = value;
        dist_interval.value_namespace = name_space;
        dist_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-count")
    {
        dist_count = value;
        dist_count.value_namespace = name_space;
        dist_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "dist-interval")
    {
        dist_interval.yfilter = yfilter;
    }
    if(value_path == "dist-count")
    {
        dist_count.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "dist-interval" || name == "dist-count")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::History()
    :
    lives{YType::uint32, "lives"},
    history_filter{YType::enumeration, "history-filter"},
    buckets{YType::uint32, "buckets"}
{

    yang_name = "history"; yang_parent_name = "mpls-lsp-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::~History()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::has_data() const
{
    if (is_presence_container) return true;
    return lives.is_set
	|| history_filter.is_set
	|| buckets.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lives.yfilter)
	|| ydk::is_set(history_filter.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lives.is_set || is_set(lives.yfilter)) leaf_name_data.push_back(lives.get_name_leafdata());
    if (history_filter.is_set || is_set(history_filter.yfilter)) leaf_name_data.push_back(history_filter.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lives")
    {
        lives = value;
        lives.value_namespace = name_space;
        lives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-filter")
    {
        history_filter = value;
        history_filter.value_namespace = name_space;
        history_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lives")
    {
        lives.yfilter = yfilter;
    }
    if(value_path == "history-filter")
    {
        history_filter.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::MplsLspTrace::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lives" || name == "history-filter" || name == "buckets")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::UdpJitter()
    :
    source_address{YType::str, "source-address"},
    tos{YType::uint32, "tos"},
    control_disable{YType::empty, "control-disable"},
    source_port{YType::uint16, "source-port"},
    vrf{YType::str, "vrf"},
    timeout{YType::uint32, "timeout"},
    frequency{YType::uint32, "frequency"},
    dest_port{YType::uint16, "dest-port"},
    verify_data{YType::empty, "verify-data"},
    dest_address{YType::str, "dest-address"},
    tag{YType::str, "tag"}
        ,
    data_size(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize>())
    , packet(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet>())
    , statistics(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics>())
    , enhanced_stats(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats>())
{
    data_size->parent = this;
    packet->parent = this;
    statistics->parent = this;
    enhanced_stats->parent = this;

    yang_name = "udp-jitter"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::~UdpJitter()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| tos.is_set
	|| control_disable.is_set
	|| source_port.is_set
	|| vrf.is_set
	|| timeout.is_set
	|| frequency.is_set
	|| dest_port.is_set
	|| verify_data.is_set
	|| dest_address.is_set
	|| tag.is_set
	|| (data_size !=  nullptr && data_size->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (enhanced_stats !=  nullptr && enhanced_stats->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(control_disable.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (data_size !=  nullptr && data_size->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (enhanced_stats !=  nullptr && enhanced_stats->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (control_disable.is_set || is_set(control_disable.yfilter)) leaf_name_data.push_back(control_disable.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-size")
    {
        if(data_size == nullptr)
        {
            data_size = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize>();
        }
        return data_size;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "enhanced-stats")
    {
        if(enhanced_stats == nullptr)
        {
            enhanced_stats = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats>();
        }
        return enhanced_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data_size != nullptr)
    {
        _children["data-size"] = data_size;
    }

    if(packet != nullptr)
    {
        _children["packet"] = packet;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(enhanced_stats != nullptr)
    {
        _children["enhanced-stats"] = enhanced_stats;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-disable")
    {
        control_disable = value;
        control_disable.value_namespace = name_space;
        control_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "control-disable")
    {
        control_disable.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-size" || name == "packet" || name == "statistics" || name == "enhanced-stats" || name == "source-address" || name == "tos" || name == "control-disable" || name == "source-port" || name == "vrf" || name == "timeout" || name == "frequency" || name == "dest-port" || name == "verify-data" || name == "dest-address" || name == "tag")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::DataSize()
    :
    request{YType::uint32, "request"}
{

    yang_name = "data-size"; yang_parent_name = "udp-jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::~DataSize()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::has_data() const
{
    if (is_presence_container) return true;
    return request.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::DataSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::Packet()
    :
    count{YType::uint32, "count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "packet"; yang_parent_name = "udp-jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::~Packet()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| interval.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::Statistics()
    :
    hours{YType::uint32, "hours"},
    dist_interval{YType::uint32, "dist-interval"},
    dist_count{YType::uint32, "dist-count"}
{

    yang_name = "statistics"; yang_parent_name = "udp-jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::~Statistics()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| dist_interval.is_set
	|| dist_count.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(dist_interval.yfilter)
	|| ydk::is_set(dist_count.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (dist_interval.is_set || is_set(dist_interval.yfilter)) leaf_name_data.push_back(dist_interval.get_name_leafdata());
    if (dist_count.is_set || is_set(dist_count.yfilter)) leaf_name_data.push_back(dist_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-interval")
    {
        dist_interval = value;
        dist_interval.value_namespace = name_space;
        dist_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-count")
    {
        dist_count = value;
        dist_count.value_namespace = name_space;
        dist_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "dist-interval")
    {
        dist_interval.yfilter = yfilter;
    }
    if(value_path == "dist-count")
    {
        dist_count.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "dist-interval" || name == "dist-count")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStats()
    :
    enhanced_stat(this, {"interval"})
{

    yang_name = "enhanced-stats"; yang_parent_name = "udp-jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::~EnhancedStats()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<enhanced_stat.len(); index++)
    {
        if(enhanced_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::has_operation() const
{
    for (std::size_t index=0; index<enhanced_stat.len(); index++)
    {
        if(enhanced_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced-stat")
    {
        auto ent_ = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat>();
        ent_->parent = this;
        enhanced_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : enhanced_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced-stat")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::EnhancedStat()
    :
    interval{YType::uint32, "interval"},
    buckets{YType::uint32, "buckets"}
{

    yang_name = "enhanced-stat"; yang_parent_name = "enhanced-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::~EnhancedStat()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| buckets.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-stat";
    ADD_KEY_TOKEN(interval, "interval");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::UdpJitter::EnhancedStats::EnhancedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "buckets")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::IcmpPathEcho()
    :
    source_address{YType::str, "source-address"},
    tos{YType::uint32, "tos"},
    vrf{YType::str, "vrf"},
    timeout{YType::uint32, "timeout"},
    frequency{YType::uint32, "frequency"},
    dest_address{YType::str, "dest-address"},
    tag{YType::str, "tag"}
        ,
    history(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History>())
    , data_size(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize>())
    , statistics(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics>())
    , lsr_path(nullptr) // presence node
{
    history->parent = this;
    data_size->parent = this;
    statistics->parent = this;

    yang_name = "icmp-path-echo"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::~IcmpPathEcho()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| tos.is_set
	|| vrf.is_set
	|| timeout.is_set
	|| frequency.is_set
	|| dest_address.is_set
	|| tag.is_set
	|| (history !=  nullptr && history->has_data())
	|| (data_size !=  nullptr && data_size->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (lsr_path !=  nullptr && lsr_path->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (history !=  nullptr && history->has_operation())
	|| (data_size !=  nullptr && data_size->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (lsr_path !=  nullptr && lsr_path->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History>();
        }
        return history;
    }

    if(child_yang_name == "data-size")
    {
        if(data_size == nullptr)
        {
            data_size = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize>();
        }
        return data_size;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "lsr-path")
    {
        if(lsr_path == nullptr)
        {
            lsr_path = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath>();
        }
        return lsr_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(data_size != nullptr)
    {
        _children["data-size"] = data_size;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(lsr_path != nullptr)
    {
        _children["lsr-path"] = lsr_path;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "data-size" || name == "statistics" || name == "lsr-path" || name == "source-address" || name == "tos" || name == "vrf" || name == "timeout" || name == "frequency" || name == "dest-address" || name == "tag")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::History()
    :
    samples{YType::uint32, "samples"},
    buckets{YType::uint32, "buckets"},
    history_filter{YType::enumeration, "history-filter"},
    lives{YType::uint32, "lives"}
{

    yang_name = "history"; yang_parent_name = "icmp-path-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::~History()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::has_data() const
{
    if (is_presence_container) return true;
    return samples.is_set
	|| buckets.is_set
	|| history_filter.is_set
	|| lives.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(samples.yfilter)
	|| ydk::is_set(buckets.yfilter)
	|| ydk::is_set(history_filter.yfilter)
	|| ydk::is_set(lives.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (samples.is_set || is_set(samples.yfilter)) leaf_name_data.push_back(samples.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());
    if (history_filter.is_set || is_set(history_filter.yfilter)) leaf_name_data.push_back(history_filter.get_name_leafdata());
    if (lives.is_set || is_set(lives.yfilter)) leaf_name_data.push_back(lives.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "samples")
    {
        samples = value;
        samples.value_namespace = name_space;
        samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-filter")
    {
        history_filter = value;
        history_filter.value_namespace = name_space;
        history_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lives")
    {
        lives = value;
        lives.value_namespace = name_space;
        lives.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "samples")
    {
        samples.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
    if(value_path == "history-filter")
    {
        history_filter.yfilter = yfilter;
    }
    if(value_path == "lives")
    {
        lives.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "buckets" || name == "history-filter" || name == "lives")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::DataSize()
    :
    request{YType::uint32, "request"}
{

    yang_name = "data-size"; yang_parent_name = "icmp-path-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::~DataSize()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::has_data() const
{
    if (is_presence_container) return true;
    return request.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::DataSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::Statistics()
    :
    paths{YType::uint32, "paths"},
    dist_interval{YType::uint32, "dist-interval"},
    dist_count{YType::uint32, "dist-count"},
    hours{YType::uint32, "hours"},
    hops{YType::uint32, "hops"}
{

    yang_name = "statistics"; yang_parent_name = "icmp-path-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::~Statistics()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return paths.is_set
	|| dist_interval.is_set
	|| dist_count.is_set
	|| hours.is_set
	|| hops.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths.yfilter)
	|| ydk::is_set(dist_interval.yfilter)
	|| ydk::is_set(dist_count.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());
    if (dist_interval.is_set || is_set(dist_interval.yfilter)) leaf_name_data.push_back(dist_interval.get_name_leafdata());
    if (dist_count.is_set || is_set(dist_count.yfilter)) leaf_name_data.push_back(dist_count.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-interval")
    {
        dist_interval = value;
        dist_interval.value_namespace = name_space;
        dist_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-count")
    {
        dist_count = value;
        dist_count.value_namespace = name_space;
        dist_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
    if(value_path == "dist-interval")
    {
        dist_interval.yfilter = yfilter;
    }
    if(value_path == "dist-count")
    {
        dist_count.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "dist-interval" || name == "dist-count" || name == "hours" || name == "hops")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::LsrPath()
    :
    node1{YType::str, "node1"},
    node2{YType::str, "node2"},
    node3{YType::str, "node3"},
    node4{YType::str, "node4"},
    node5{YType::str, "node5"},
    node6{YType::str, "node6"},
    node7{YType::str, "node7"},
    node8{YType::str, "node8"}
{

    yang_name = "lsr-path"; yang_parent_name = "icmp-path-echo"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::~LsrPath()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::has_data() const
{
    if (is_presence_container) return true;
    return node1.is_set
	|| node2.is_set
	|| node3.is_set
	|| node4.is_set
	|| node5.is_set
	|| node6.is_set
	|| node7.is_set
	|| node8.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node1.yfilter)
	|| ydk::is_set(node2.yfilter)
	|| ydk::is_set(node3.yfilter)
	|| ydk::is_set(node4.yfilter)
	|| ydk::is_set(node5.yfilter)
	|| ydk::is_set(node6.yfilter)
	|| ydk::is_set(node7.yfilter)
	|| ydk::is_set(node8.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsr-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node1.is_set || is_set(node1.yfilter)) leaf_name_data.push_back(node1.get_name_leafdata());
    if (node2.is_set || is_set(node2.yfilter)) leaf_name_data.push_back(node2.get_name_leafdata());
    if (node3.is_set || is_set(node3.yfilter)) leaf_name_data.push_back(node3.get_name_leafdata());
    if (node4.is_set || is_set(node4.yfilter)) leaf_name_data.push_back(node4.get_name_leafdata());
    if (node5.is_set || is_set(node5.yfilter)) leaf_name_data.push_back(node5.get_name_leafdata());
    if (node6.is_set || is_set(node6.yfilter)) leaf_name_data.push_back(node6.get_name_leafdata());
    if (node7.is_set || is_set(node7.yfilter)) leaf_name_data.push_back(node7.get_name_leafdata());
    if (node8.is_set || is_set(node8.yfilter)) leaf_name_data.push_back(node8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node1")
    {
        node1 = value;
        node1.value_namespace = name_space;
        node1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node2")
    {
        node2 = value;
        node2.value_namespace = name_space;
        node2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node3")
    {
        node3 = value;
        node3.value_namespace = name_space;
        node3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node4")
    {
        node4 = value;
        node4.value_namespace = name_space;
        node4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node5")
    {
        node5 = value;
        node5.value_namespace = name_space;
        node5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node6")
    {
        node6 = value;
        node6.value_namespace = name_space;
        node6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node7")
    {
        node7 = value;
        node7.value_namespace = name_space;
        node7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node8")
    {
        node8 = value;
        node8.value_namespace = name_space;
        node8.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node1")
    {
        node1.yfilter = yfilter;
    }
    if(value_path == "node2")
    {
        node2.yfilter = yfilter;
    }
    if(value_path == "node3")
    {
        node3.yfilter = yfilter;
    }
    if(value_path == "node4")
    {
        node4.yfilter = yfilter;
    }
    if(value_path == "node5")
    {
        node5.yfilter = yfilter;
    }
    if(value_path == "node6")
    {
        node6.yfilter = yfilter;
    }
    if(value_path == "node7")
    {
        node7.yfilter = yfilter;
    }
    if(value_path == "node8")
    {
        node8.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathEcho::LsrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node1" || name == "node2" || name == "node3" || name == "node4" || name == "node5" || name == "node6" || name == "node7" || name == "node8")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::IcmpPathJitter()
    :
    source_address{YType::str, "source-address"},
    tos{YType::uint32, "tos"},
    vrf{YType::str, "vrf"},
    timeout{YType::uint32, "timeout"},
    frequency{YType::uint32, "frequency"},
    dest_address{YType::str, "dest-address"},
    tag{YType::str, "tag"}
        ,
    data_size(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize>())
    , packet(std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet>())
    , lsr_path(nullptr) // presence node
{
    data_size->parent = this;
    packet->parent = this;

    yang_name = "icmp-path-jitter"; yang_parent_name = "operation-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::~IcmpPathJitter()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| tos.is_set
	|| vrf.is_set
	|| timeout.is_set
	|| frequency.is_set
	|| dest_address.is_set
	|| tag.is_set
	|| (data_size !=  nullptr && data_size->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (lsr_path !=  nullptr && lsr_path->has_data());
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (data_size !=  nullptr && data_size->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (lsr_path !=  nullptr && lsr_path->has_operation());
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-size")
    {
        if(data_size == nullptr)
        {
            data_size = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize>();
        }
        return data_size;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "lsr-path")
    {
        if(lsr_path == nullptr)
        {
            lsr_path = std::make_shared<Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath>();
        }
        return lsr_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data_size != nullptr)
    {
        _children["data-size"] = data_size;
    }

    if(packet != nullptr)
    {
        _children["packet"] = packet;
    }

    if(lsr_path != nullptr)
    {
        _children["lsr-path"] = lsr_path;
    }

    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-size" || name == "packet" || name == "lsr-path" || name == "source-address" || name == "tos" || name == "vrf" || name == "timeout" || name == "frequency" || name == "dest-address" || name == "tag")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::DataSize()
    :
    request{YType::uint32, "request"}
{

    yang_name = "data-size"; yang_parent_name = "icmp-path-jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::~DataSize()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::has_data() const
{
    if (is_presence_container) return true;
    return request.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::DataSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::Packet()
    :
    count{YType::uint32, "count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "packet"; yang_parent_name = "icmp-path-jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::~Packet()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| interval.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::LsrPath()
    :
    node1{YType::str, "node1"},
    node2{YType::str, "node2"},
    node3{YType::str, "node3"},
    node4{YType::str, "node4"},
    node5{YType::str, "node5"},
    node6{YType::str, "node6"},
    node7{YType::str, "node7"},
    node8{YType::str, "node8"}
{

    yang_name = "lsr-path"; yang_parent_name = "icmp-path-jitter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::~LsrPath()
{
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::has_data() const
{
    if (is_presence_container) return true;
    return node1.is_set
	|| node2.is_set
	|| node3.is_set
	|| node4.is_set
	|| node5.is_set
	|| node6.is_set
	|| node7.is_set
	|| node8.is_set;
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node1.yfilter)
	|| ydk::is_set(node2.yfilter)
	|| ydk::is_set(node3.yfilter)
	|| ydk::is_set(node4.yfilter)
	|| ydk::is_set(node5.yfilter)
	|| ydk::is_set(node6.yfilter)
	|| ydk::is_set(node7.yfilter)
	|| ydk::is_set(node8.yfilter);
}

std::string Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsr-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node1.is_set || is_set(node1.yfilter)) leaf_name_data.push_back(node1.get_name_leafdata());
    if (node2.is_set || is_set(node2.yfilter)) leaf_name_data.push_back(node2.get_name_leafdata());
    if (node3.is_set || is_set(node3.yfilter)) leaf_name_data.push_back(node3.get_name_leafdata());
    if (node4.is_set || is_set(node4.yfilter)) leaf_name_data.push_back(node4.get_name_leafdata());
    if (node5.is_set || is_set(node5.yfilter)) leaf_name_data.push_back(node5.get_name_leafdata());
    if (node6.is_set || is_set(node6.yfilter)) leaf_name_data.push_back(node6.get_name_leafdata());
    if (node7.is_set || is_set(node7.yfilter)) leaf_name_data.push_back(node7.get_name_leafdata());
    if (node8.is_set || is_set(node8.yfilter)) leaf_name_data.push_back(node8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node1")
    {
        node1 = value;
        node1.value_namespace = name_space;
        node1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node2")
    {
        node2 = value;
        node2.value_namespace = name_space;
        node2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node3")
    {
        node3 = value;
        node3.value_namespace = name_space;
        node3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node4")
    {
        node4 = value;
        node4.value_namespace = name_space;
        node4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node5")
    {
        node5 = value;
        node5.value_namespace = name_space;
        node5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node6")
    {
        node6 = value;
        node6.value_namespace = name_space;
        node6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node7")
    {
        node7 = value;
        node7.value_namespace = name_space;
        node7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node8")
    {
        node8 = value;
        node8.value_namespace = name_space;
        node8.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node1")
    {
        node1.yfilter = yfilter;
    }
    if(value_path == "node2")
    {
        node2.yfilter = yfilter;
    }
    if(value_path == "node3")
    {
        node3.yfilter = yfilter;
    }
    if(value_path == "node4")
    {
        node4.yfilter = yfilter;
    }
    if(value_path == "node5")
    {
        node5.yfilter = yfilter;
    }
    if(value_path == "node6")
    {
        node6.yfilter = yfilter;
    }
    if(value_path == "node7")
    {
        node7.yfilter = yfilter;
    }
    if(value_path == "node8")
    {
        node8.yfilter = yfilter;
    }
}

bool Ipsla::Operation::Definitions::Definition::OperationType::IcmpPathJitter::LsrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node1" || name == "node2" || name == "node3" || name == "node4" || name == "node5" || name == "node6" || name == "node7" || name == "node8")
        return true;
    return false;
}

Ipsla::Responder::Responder()
    :
    twamp(nullptr) // presence node
    , type(std::make_shared<Ipsla::Responder::Type>())
    , twamp_light(std::make_shared<Ipsla::Responder::TwampLight>())
{
    type->parent = this;
    twamp_light->parent = this;

    yang_name = "responder"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Ipsla::Responder::~Responder()
{
}

bool Ipsla::Responder::has_data() const
{
    if (is_presence_container) return true;
    return (twamp !=  nullptr && twamp->has_data())
	|| (type !=  nullptr && type->has_data())
	|| (twamp_light !=  nullptr && twamp_light->has_data());
}

bool Ipsla::Responder::has_operation() const
{
    return is_set(yfilter)
	|| (twamp !=  nullptr && twamp->has_operation())
	|| (type !=  nullptr && type->has_operation())
	|| (twamp_light !=  nullptr && twamp_light->has_operation());
}

std::string Ipsla::Responder::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "twamp")
    {
        if(twamp == nullptr)
        {
            twamp = std::make_shared<Ipsla::Responder::Twamp>();
        }
        return twamp;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Ipsla::Responder::Type>();
        }
        return type;
    }

    if(child_yang_name == "twamp-light")
    {
        if(twamp_light == nullptr)
        {
            twamp_light = std::make_shared<Ipsla::Responder::TwampLight>();
        }
        return twamp_light;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(twamp != nullptr)
    {
        _children["twamp"] = twamp;
    }

    if(type != nullptr)
    {
        _children["type"] = type;
    }

    if(twamp_light != nullptr)
    {
        _children["twamp-light"] = twamp_light;
    }

    return _children;
}

void Ipsla::Responder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "twamp" || name == "type" || name == "twamp-light")
        return true;
    return false;
}

Ipsla::Responder::Twamp::Twamp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "twamp"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Ipsla::Responder::Twamp::~Twamp()
{
}

bool Ipsla::Responder::Twamp::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Ipsla::Responder::Twamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Ipsla::Responder::Twamp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::Twamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Twamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Twamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Twamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Responder::Twamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::Twamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Ipsla::Responder::Twamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Ipsla::Responder::Type::Type()
    :
    udp(std::make_shared<Ipsla::Responder::Type::Udp>())
{
    udp->parent = this;

    yang_name = "type"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::Type::~Type()
{
}

bool Ipsla::Responder::Type::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data());
}

bool Ipsla::Responder::Type::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Ipsla::Responder::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Ipsla::Responder::Type::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Ipsla::Responder::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Ipsla::Responder::Type::Udp::Udp()
    :
    addresses(std::make_shared<Ipsla::Responder::Type::Udp::Addresses>())
{
    addresses->parent = this;

    yang_name = "udp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::Type::Udp::~Udp()
{
}

bool Ipsla::Responder::Type::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (addresses !=  nullptr && addresses->has_data());
}

bool Ipsla::Responder::Type::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string Ipsla::Responder::Type::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/responder/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::Type::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Type::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Type::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Ipsla::Responder::Type::Udp::Addresses>();
        }
        return addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Type::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    return _children;
}

void Ipsla::Responder::Type::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::Type::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::Type::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Ipsla::Responder::Type::Udp::Addresses::Addresses()
    :
    address(this, {"local_address"})
{

    yang_name = "addresses"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::Type::Udp::Addresses::~Addresses()
{
}

bool Ipsla::Responder::Type::Udp::Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::Type::Udp::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::Type::Udp::Addresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/responder/type/udp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::Type::Udp::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Type::Udp::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Type::Udp::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::Type::Udp::Addresses::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Type::Udp::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::Type::Udp::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::Type::Udp::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::Type::Udp::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Ipsla::Responder::Type::Udp::Addresses::Address::Address()
    :
    local_address{YType::str, "local-address"}
        ,
    ports(std::make_shared<Ipsla::Responder::Type::Udp::Addresses::Address::Ports>())
{
    ports->parent = this;

    yang_name = "address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::Type::Udp::Addresses::Address::~Address()
{
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::has_data() const
{
    if (is_presence_container) return true;
    return local_address.is_set
	|| (ports !=  nullptr && ports->has_data());
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| (ports !=  nullptr && ports->has_operation());
}

std::string Ipsla::Responder::Type::Udp::Addresses::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/responder/type/udp/addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::Type::Udp::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(local_address, "local-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Type::Udp::Addresses::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Type::Udp::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        if(ports == nullptr)
        {
            ports = std::make_shared<Ipsla::Responder::Type::Udp::Addresses::Address::Ports>();
        }
        return ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Type::Udp::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ports != nullptr)
    {
        _children["ports"] = ports;
    }

    return _children;
}

void Ipsla::Responder::Type::Udp::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::Type::Udp::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports" || name == "local-address")
        return true;
    return false;
}

Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Ports()
    :
    port(this, {"port"})
{

    yang_name = "ports"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::Type::Udp::Addresses::Address::Ports::~Ports()
{
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::Ports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::Ports::has_operation() const
{
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::Type::Udp::Addresses::Address::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Type::Udp::Addresses::Address::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Type::Udp::Addresses::Address::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port>();
        ent_->parent = this;
        port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Type::Udp::Addresses::Address::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::Type::Udp::Addresses::Address::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::Type::Udp::Addresses::Address::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::Port()
    :
    port{YType::uint16, "port"}
{

    yang_name = "port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::~Port()
{
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Ipsla::Responder::Type::Udp::Addresses::Address::Ports::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::TwampLight()
    :
    session_ids(std::make_shared<Ipsla::Responder::TwampLight::SessionIds>())
{
    session_ids->parent = this;

    yang_name = "twamp-light"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::TwampLight::~TwampLight()
{
}

bool Ipsla::Responder::TwampLight::has_data() const
{
    if (is_presence_container) return true;
    return (session_ids !=  nullptr && session_ids->has_data());
}

bool Ipsla::Responder::TwampLight::has_operation() const
{
    return is_set(yfilter)
	|| (session_ids !=  nullptr && session_ids->has_operation());
}

std::string Ipsla::Responder::TwampLight::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::TwampLight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twamp-light";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-ids")
    {
        if(session_ids == nullptr)
        {
            session_ids = std::make_shared<Ipsla::Responder::TwampLight::SessionIds>();
        }
        return session_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_ids != nullptr)
    {
        _children["session-ids"] = session_ids;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-ids")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionIds()
    :
    session_id(this, {"session_id"})
{

    yang_name = "session-ids"; yang_parent_name = "twamp-light"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::TwampLight::SessionIds::~SessionIds()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_id.len(); index++)
    {
        if(session_id[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::has_operation() const
{
    for (std::size_t index=0; index<session_id.len(); index++)
    {
        if(session_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/responder/twamp-light/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::TwampLight::SessionIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-id")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId>();
        ent_->parent = this;
        session_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::SessionId()
    :
    session_id{YType::uint32, "session-id"},
    twamp_light_timeout{YType::uint32, "twamp-light-timeout"}
        ,
    local_ip(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp>())
{
    local_ip->parent = this;

    yang_name = "session-id"; yang_parent_name = "session-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::~SessionId()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| twamp_light_timeout.is_set
	|| (local_ip !=  nullptr && local_ip->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(twamp_light_timeout.yfilter)
	|| (local_ip !=  nullptr && local_ip->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-cfg:ipsla/responder/twamp-light/session-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-id";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (twamp_light_timeout.is_set || is_set(twamp_light_timeout.yfilter)) leaf_name_data.push_back(twamp_light_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-ip")
    {
        if(local_ip == nullptr)
        {
            local_ip = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp>();
        }
        return local_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_ip != nullptr)
    {
        _children["local-ip"] = local_ip;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "twamp-light-timeout")
    {
        twamp_light_timeout = value;
        twamp_light_timeout.value_namespace = name_space;
        twamp_light_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "twamp-light-timeout")
    {
        twamp_light_timeout.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ip" || name == "session-id" || name == "twamp-light-timeout")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIp()
    :
    local_ipv6_addresses(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses>())
    , local_ipv4_addresses(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses>())
{
    local_ipv6_addresses->parent = this;
    local_ipv4_addresses->parent = this;

    yang_name = "local-ip"; yang_parent_name = "session-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::~LocalIp()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::has_data() const
{
    if (is_presence_container) return true;
    return (local_ipv6_addresses !=  nullptr && local_ipv6_addresses->has_data())
	|| (local_ipv4_addresses !=  nullptr && local_ipv4_addresses->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::has_operation() const
{
    return is_set(yfilter)
	|| (local_ipv6_addresses !=  nullptr && local_ipv6_addresses->has_operation())
	|| (local_ipv4_addresses !=  nullptr && local_ipv4_addresses->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-ipv6-addresses")
    {
        if(local_ipv6_addresses == nullptr)
        {
            local_ipv6_addresses = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses>();
        }
        return local_ipv6_addresses;
    }

    if(child_yang_name == "local-ipv4-addresses")
    {
        if(local_ipv4_addresses == nullptr)
        {
            local_ipv4_addresses = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses>();
        }
        return local_ipv4_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_ipv6_addresses != nullptr)
    {
        _children["local-ipv6-addresses"] = local_ipv6_addresses;
    }

    if(local_ipv4_addresses != nullptr)
    {
        _children["local-ipv4-addresses"] = local_ipv4_addresses;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ipv6-addresses" || name == "local-ipv4-addresses")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Addresses()
    :
    local_ipv6_address(this, {"localv6_address"})
{

    yang_name = "local-ipv6-addresses"; yang_parent_name = "local-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::~LocalIpv6Addresses()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_ipv6_address.len(); index++)
    {
        if(local_ipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<local_ipv6_address.len(); index++)
    {
        if(local_ipv6_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-ipv6-address")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address>();
        ent_->parent = this;
        local_ipv6_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_ipv6_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ipv6-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalIpv6Address()
    :
    localv6_address{YType::str, "localv6-address"}
        ,
    local_port_numbers(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers>())
{
    local_port_numbers->parent = this;

    yang_name = "local-ipv6-address"; yang_parent_name = "local-ipv6-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::~LocalIpv6Address()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::has_data() const
{
    if (is_presence_container) return true;
    return localv6_address.is_set
	|| (local_port_numbers !=  nullptr && local_port_numbers->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localv6_address.yfilter)
	|| (local_port_numbers !=  nullptr && local_port_numbers->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ipv6-address";
    ADD_KEY_TOKEN(localv6_address, "localv6-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localv6_address.is_set || is_set(localv6_address.yfilter)) leaf_name_data.push_back(localv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port-numbers")
    {
        if(local_port_numbers == nullptr)
        {
            local_port_numbers = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers>();
        }
        return local_port_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_port_numbers != nullptr)
    {
        _children["local-port-numbers"] = local_port_numbers;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localv6-address")
    {
        localv6_address = value;
        localv6_address.value_namespace = name_space;
        localv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localv6-address")
    {
        localv6_address.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port-numbers" || name == "localv6-address")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumbers()
    :
    local_port_number(this, {"local_port"})
{

    yang_name = "local-port-numbers"; yang_parent_name = "local-ipv6-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::~LocalPortNumbers()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_port_number.len(); index++)
    {
        if(local_port_number[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::has_operation() const
{
    for (std::size_t index=0; index<local_port_number.len(); index++)
    {
        if(local_port_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port-number")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber>();
        ent_->parent = this;
        local_port_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_port_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port-number")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::LocalPortNumber()
    :
    local_port{YType::uint16, "local-port"}
        ,
    remote_ip(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp>())
{
    remote_ip->parent = this;

    yang_name = "local-port-number"; yang_parent_name = "local-port-numbers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::~LocalPortNumber()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::has_data() const
{
    if (is_presence_container) return true;
    return local_port.is_set
	|| (remote_ip !=  nullptr && remote_ip->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| (remote_ip !=  nullptr && remote_ip->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port-number";
    ADD_KEY_TOKEN(local_port, "local-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ip")
    {
        if(remote_ip == nullptr)
        {
            remote_ip = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp>();
        }
        return remote_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_ip != nullptr)
    {
        _children["remote-ip"] = remote_ip;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ip" || name == "local-port")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIp()
    :
    remote_ipv4_addresses(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses>())
    , remote_ipv6_addresses(std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses>())
{
    remote_ipv4_addresses->parent = this;
    remote_ipv6_addresses->parent = this;

    yang_name = "remote-ip"; yang_parent_name = "local-port-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::~RemoteIp()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::has_data() const
{
    if (is_presence_container) return true;
    return (remote_ipv4_addresses !=  nullptr && remote_ipv4_addresses->has_data())
	|| (remote_ipv6_addresses !=  nullptr && remote_ipv6_addresses->has_data());
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::has_operation() const
{
    return is_set(yfilter)
	|| (remote_ipv4_addresses !=  nullptr && remote_ipv4_addresses->has_operation())
	|| (remote_ipv6_addresses !=  nullptr && remote_ipv6_addresses->has_operation());
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ipv4-addresses")
    {
        if(remote_ipv4_addresses == nullptr)
        {
            remote_ipv4_addresses = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses>();
        }
        return remote_ipv4_addresses;
    }

    if(child_yang_name == "remote-ipv6-addresses")
    {
        if(remote_ipv6_addresses == nullptr)
        {
            remote_ipv6_addresses = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses>();
        }
        return remote_ipv6_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_ipv4_addresses != nullptr)
    {
        _children["remote-ipv4-addresses"] = remote_ipv4_addresses;
    }

    if(remote_ipv6_addresses != nullptr)
    {
        _children["remote-ipv6-addresses"] = remote_ipv6_addresses;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ipv4-addresses" || name == "remote-ipv6-addresses")
        return true;
    return false;
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Addresses()
    :
    remote_ipv4_address(this, {"remotev4_address"})
{

    yang_name = "remote-ipv4-addresses"; yang_parent_name = "remote-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::~RemoteIpv4Addresses()
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_ipv4_address.len(); index++)
    {
        if(remote_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<remote_ipv4_address.len(); index++)
    {
        if(remote_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ipv4-address")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address>();
        ent_->parent = this;
        remote_ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ipv4-address")
        return true;
    return false;
}

const Enum::YLeaf IpslaSecondaryFrequency::connection_loss {1, "connection-loss"};
const Enum::YLeaf IpslaSecondaryFrequency::timeout {2, "timeout"};
const Enum::YLeaf IpslaSecondaryFrequency::both {3, "both"};

const Enum::YLeaf IpslaMonth::january {0, "january"};
const Enum::YLeaf IpslaMonth::february {1, "february"};
const Enum::YLeaf IpslaMonth::march {2, "march"};
const Enum::YLeaf IpslaMonth::april {3, "april"};
const Enum::YLeaf IpslaMonth::may {4, "may"};
const Enum::YLeaf IpslaMonth::june {5, "june"};
const Enum::YLeaf IpslaMonth::july {6, "july"};
const Enum::YLeaf IpslaMonth::august {7, "august"};
const Enum::YLeaf IpslaMonth::september {8, "september"};
const Enum::YLeaf IpslaMonth::october {9, "october"};
const Enum::YLeaf IpslaMonth::november {10, "november"};
const Enum::YLeaf IpslaMonth::december {11, "december"};

const Enum::YLeaf IpslaLspPingReplyMode::ipv4_udp_router_alert {3, "ipv4-udp-router-alert"};
const Enum::YLeaf IpslaLspPingReplyMode::control_channel {4, "control-channel"};

const Enum::YLeaf IpslaLspTraceReplyMode::ipv4_udp_router_alert {3, "ipv4-udp-router-alert"};

const Enum::YLeaf IpslaLspMonitorReplyMode::ipv4_udp_router_alert {3, "ipv4-udp-router-alert"};

const Enum::YLeaf IpslaSched::pending {1, "pending"};
const Enum::YLeaf IpslaSched::now {2, "now"};
const Enum::YLeaf IpslaSched::after {3, "after"};
const Enum::YLeaf IpslaSched::at {4, "at"};

const Enum::YLeaf IpslaLspReplyDscp::default_ {0, "default"};
const Enum::YLeaf IpslaLspReplyDscp::af11 {10, "af11"};
const Enum::YLeaf IpslaLspReplyDscp::af12 {12, "af12"};
const Enum::YLeaf IpslaLspReplyDscp::af13 {14, "af13"};
const Enum::YLeaf IpslaLspReplyDscp::af21 {18, "af21"};
const Enum::YLeaf IpslaLspReplyDscp::af22 {20, "af22"};
const Enum::YLeaf IpslaLspReplyDscp::af23 {22, "af23"};
const Enum::YLeaf IpslaLspReplyDscp::af31 {26, "af31"};
const Enum::YLeaf IpslaLspReplyDscp::af32 {28, "af32"};
const Enum::YLeaf IpslaLspReplyDscp::af33 {30, "af33"};
const Enum::YLeaf IpslaLspReplyDscp::af41 {34, "af41"};
const Enum::YLeaf IpslaLspReplyDscp::af42 {36, "af42"};
const Enum::YLeaf IpslaLspReplyDscp::af43 {38, "af43"};
const Enum::YLeaf IpslaLspReplyDscp::cs1 {8, "cs1"};
const Enum::YLeaf IpslaLspReplyDscp::cs2 {16, "cs2"};
const Enum::YLeaf IpslaLspReplyDscp::cs3 {24, "cs3"};
const Enum::YLeaf IpslaLspReplyDscp::cs4 {32, "cs4"};
const Enum::YLeaf IpslaLspReplyDscp::cs5 {40, "cs5"};
const Enum::YLeaf IpslaLspReplyDscp::cs6 {48, "cs6"};
const Enum::YLeaf IpslaLspReplyDscp::cs7 {56, "cs7"};
const Enum::YLeaf IpslaLspReplyDscp::ef {46, "ef"};

const Enum::YLeaf IpslaLife::forever {0, "forever"};

const Enum::YLeaf IpslaThresholdTypes::immediate {2, "immediate"};
const Enum::YLeaf IpslaThresholdTypes::consecutive {3, "consecutive"};
const Enum::YLeaf IpslaThresholdTypes::xof_y {4, "xof-y"};
const Enum::YLeaf IpslaThresholdTypes::average {5, "average"};

const Enum::YLeaf IpslaLspMonitorThresholdTypes::immediate {2, "immediate"};
const Enum::YLeaf IpslaLspMonitorThresholdTypes::consecutive {3, "consecutive"};

const Enum::YLeaf IpslaHistoryFilter::failed {2, "failed"};
const Enum::YLeaf IpslaHistoryFilter::all {255, "all"};


}
}

