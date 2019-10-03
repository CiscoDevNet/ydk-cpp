
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_linux_os_reboot_history_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_linux_os_reboot_history_oper {

RebootHistory::RebootHistory()
    :
    node(this, {"node_name"})
{

    yang_name = "reboot-history"; yang_parent_name = "Cisco-IOS-XR-linux-os-reboot-history-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

RebootHistory::~RebootHistory()
{
}

bool RebootHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool RebootHistory::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RebootHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-linux-os-reboot-history-oper:reboot-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RebootHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RebootHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<RebootHistory::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RebootHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RebootHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RebootHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> RebootHistory::clone_ptr() const
{
    return std::make_shared<RebootHistory>();
}

std::string RebootHistory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RebootHistory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RebootHistory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RebootHistory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RebootHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

RebootHistory::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    reboot_history(this, {})
{

    yang_name = "node"; yang_parent_name = "reboot-history"; is_top_level_class = false; has_list_ancestor = false; 
}

RebootHistory::Node::~Node()
{
}

bool RebootHistory::Node::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reboot_history.len(); index++)
    {
        if(reboot_history[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool RebootHistory::Node::has_operation() const
{
    for (std::size_t index=0; index<reboot_history.len(); index++)
    {
        if(reboot_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string RebootHistory::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-linux-os-reboot-history-oper:reboot-history/" << get_segment_path();
    return path_buffer.str();
}

std::string RebootHistory::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RebootHistory::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RebootHistory::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reboot-history")
    {
        auto ent_ = std::make_shared<RebootHistory::Node::RebootHistory_>();
        ent_->parent = this;
        reboot_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RebootHistory::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reboot_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RebootHistory::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void RebootHistory::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool RebootHistory::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reboot-history" || name == "node-name")
        return true;
    return false;
}

RebootHistory::Node::RebootHistory_::RebootHistory_()
    :
    no{YType::uint32, "no"},
    time{YType::str, "time"},
    cause_code{YType::uint32, "cause-code"},
    reason{YType::str, "reason"}
{

    yang_name = "reboot-history"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

RebootHistory::Node::RebootHistory_::~RebootHistory_()
{
}

bool RebootHistory::Node::RebootHistory_::has_data() const
{
    if (is_presence_container) return true;
    return no.is_set
	|| time.is_set
	|| cause_code.is_set
	|| reason.is_set;
}

bool RebootHistory::Node::RebootHistory_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(cause_code.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string RebootHistory::Node::RebootHistory_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reboot-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RebootHistory::Node::RebootHistory_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (cause_code.is_set || is_set(cause_code.yfilter)) leaf_name_data.push_back(cause_code.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RebootHistory::Node::RebootHistory_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RebootHistory::Node::RebootHistory_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RebootHistory::Node::RebootHistory_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cause-code")
    {
        cause_code = value;
        cause_code.value_namespace = name_space;
        cause_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void RebootHistory::Node::RebootHistory_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "cause-code")
    {
        cause_code.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool RebootHistory::Node::RebootHistory_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no" || name == "time" || name == "cause-code" || name == "reason")
        return true;
    return false;
}


}
}

