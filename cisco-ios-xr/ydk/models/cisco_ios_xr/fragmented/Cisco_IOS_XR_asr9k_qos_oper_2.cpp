
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_qos_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_qos_oper {

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-police-violate"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-conform"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-exceed"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::PoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-violate"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::~PoliceViolate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-violate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-violate"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Police()
    :
    policer_type{YType::enumeration, "policer-type"},
    profile_id{YType::uint32, "profile-id"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir>())
	,police_config_parameters(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters>())
{
    cbs->parent = this;
    cir->parent = this;
    pbs->parent = this;
    pir->parent = this;
    police_config_parameters->parent = this;

    yang_name = "police"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::has_data() const
{
    return policer_type.is_set
	|| profile_id.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs>();
        }
        return cbs;
    }

    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs>();
        }
        return pbs;
    }

    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "police-config-parameters")
    {
        if(police_config_parameters == nullptr)
        {
            police_config_parameters = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters>();
        }
        return police_config_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    if(police_config_parameters != nullptr)
    {
        children["police-config-parameters"] = police_config_parameters;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbs" || name == "cir" || name == "pbs" || name == "pir" || name == "police-config-parameters" || name == "policer-type" || name == "profile-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PoliceConfigParameters()
    :
    average_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate>())
	,conform_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst>())
	,exceed_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst>())
	,peak_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate>())
{
    average_rate->parent = this;
    conform_burst->parent = this;
    exceed_burst->parent = this;
    peak_rate->parent = this;

    yang_name = "police-config-parameters"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::~PoliceConfigParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_data() const
{
    return (average_rate !=  nullptr && average_rate->has_data())
	|| (conform_burst !=  nullptr && conform_burst->has_data())
	|| (exceed_burst !=  nullptr && exceed_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_operation() const
{
    return is_set(yfilter)
	|| (average_rate !=  nullptr && average_rate->has_operation())
	|| (conform_burst !=  nullptr && conform_burst->has_operation())
	|| (exceed_burst !=  nullptr && exceed_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-config-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average-rate")
    {
        if(average_rate == nullptr)
        {
            average_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate>();
        }
        return average_rate;
    }

    if(child_yang_name == "conform-burst")
    {
        if(conform_burst == nullptr)
        {
            conform_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst>();
        }
        return conform_burst;
    }

    if(child_yang_name == "exceed-burst")
    {
        if(exceed_burst == nullptr)
        {
            exceed_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst>();
        }
        return exceed_burst;
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate == nullptr)
        {
            peak_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate>();
        }
        return peak_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average_rate != nullptr)
    {
        children["average-rate"] = average_rate;
    }

    if(conform_burst != nullptr)
    {
        children["conform-burst"] = conform_burst;
    }

    if(exceed_burst != nullptr)
    {
        children["exceed-burst"] = exceed_burst;
    }

    if(peak_rate != nullptr)
    {
        children["peak-rate"] = peak_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "conform-burst" || name == "exceed-burst" || name == "peak-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::AverageRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "average-rate"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::~AverageRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::ConformBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "conform-burst"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::~ConformBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::ExceedBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "exceed-burst"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::~ExceedBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::PeakRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "peak-rate"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::~PeakRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::Queue()
    :
    class_name{YType::str, "class-name"},
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::enumeration, "queue-type"}
{

    yang_name = "queue"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::has_data() const
{
    return class_name.is_set
	|| queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "queue-id" || name == "queue-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimitParameters()
    :
    absolute_index{YType::uint16, "absolute-index"},
    curve_id{YType::uint16, "curve-id"},
    template_id{YType::uint16, "template-id"}
    	,
    config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit>())
	,queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit>())
{
    config_queue_limit->parent = this;
    queue_limit->parent = this;

    yang_name = "queue-limit-parameters"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::~QueueLimitParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::has_data() const
{
    return absolute_index.is_set
	|| curve_id.is_set
	|| template_id.is_set
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_index.yfilter)
	|| ydk::is_set(curve_id.yfilter)
	|| ydk::is_set(template_id.yfilter)
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_index.is_set || is_set(absolute_index.yfilter)) leaf_name_data.push_back(absolute_index.get_name_leafdata());
    if (curve_id.is_set || is_set(curve_id.yfilter)) leaf_name_data.push_back(curve_id.get_name_leafdata());
    if (template_id.is_set || is_set(template_id.yfilter)) leaf_name_data.push_back(template_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit == nullptr)
        {
            queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit>();
        }
        return queue_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_queue_limit != nullptr)
    {
        children["config-queue-limit"] = config_queue_limit;
    }

    if(queue_limit != nullptr)
    {
        children["queue-limit"] = queue_limit;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-index")
    {
        absolute_index = value;
        absolute_index.value_namespace = name_space;
        absolute_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curve-id")
    {
        curve_id = value;
        curve_id.value_namespace = name_space;
        curve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-id")
    {
        template_id = value;
        template_id.value_namespace = name_space;
        template_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-index")
    {
        absolute_index.yfilter = yfilter;
    }
    if(value_path == "curve-id")
    {
        curve_id.yfilter = yfilter;
    }
    if(value_path == "template-id")
    {
        template_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-queue-limit" || name == "queue-limit" || name == "absolute-index" || name == "curve-id" || name == "template-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::ConfigQueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "queue-limit-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::QueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-limit"; yang_parent_name = "queue-limit-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::~QueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::Shape()
    :
    cir_shape_type{YType::enumeration, "cir-shape-type"},
    pir_shape_type{YType::enumeration, "pir-shape-type"}
    	,
    cir_shape(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape>())
	,pir_shape(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape>())
{
    cir_shape->parent = this;
    pir_shape->parent = this;

    yang_name = "shape"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::has_data() const
{
    return cir_shape_type.is_set
	|| pir_shape_type.is_set
	|| (cir_shape !=  nullptr && cir_shape->has_data())
	|| (pir_shape !=  nullptr && pir_shape->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cir_shape_type.yfilter)
	|| ydk::is_set(pir_shape_type.yfilter)
	|| (cir_shape !=  nullptr && cir_shape->has_operation())
	|| (pir_shape !=  nullptr && pir_shape->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cir_shape_type.is_set || is_set(cir_shape_type.yfilter)) leaf_name_data.push_back(cir_shape_type.get_name_leafdata());
    if (pir_shape_type.is_set || is_set(pir_shape_type.yfilter)) leaf_name_data.push_back(pir_shape_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir-shape")
    {
        if(cir_shape == nullptr)
        {
            cir_shape = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape>();
        }
        return cir_shape;
    }

    if(child_yang_name == "pir-shape")
    {
        if(pir_shape == nullptr)
        {
            pir_shape = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape>();
        }
        return pir_shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cir_shape != nullptr)
    {
        children["cir-shape"] = cir_shape;
    }

    if(pir_shape != nullptr)
    {
        children["pir-shape"] = pir_shape;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cir-shape-type")
    {
        cir_shape_type = value;
        cir_shape_type.value_namespace = name_space;
        cir_shape_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pir-shape-type")
    {
        pir_shape_type = value;
        pir_shape_type.value_namespace = name_space;
        pir_shape_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cir-shape-type")
    {
        cir_shape_type.yfilter = yfilter;
    }
    if(value_path == "pir-shape-type")
    {
        pir_shape_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir-shape" || name == "pir-shape" || name == "cir-shape-type" || name == "pir-shape-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::CirShape()
    :
    chunk_id{YType::uint32, "chunk-id"},
    profile_id{YType::uint16, "profile-id"},
    scale_factor{YType::uint16, "scale-factor"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir>())
	,config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth>())
{
    cbs->parent = this;
    cir->parent = this;
    config_bandwidth->parent = this;

    yang_name = "cir-shape"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::~CirShape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::has_data() const
{
    return chunk_id.is_set
	|| profile_id.is_set
	|| scale_factor.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunk_id.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(scale_factor.yfilter)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir-shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.yfilter)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.yfilter)) leaf_name_data.push_back(scale_factor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs>();
        }
        return cbs;
    }

    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "config-bandwidth")
    {
        if(config_bandwidth == nullptr)
        {
            config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth>();
        }
        return config_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(config_bandwidth != nullptr)
    {
        children["config-bandwidth"] = config_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
        chunk_id.value_namespace = name_space;
        chunk_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
        scale_factor.value_namespace = name_space;
        scale_factor.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunk-id")
    {
        chunk_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "scale-factor")
    {
        scale_factor.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbs" || name == "cir" || name == "config-bandwidth" || name == "chunk-id" || name == "profile-id" || name == "scale-factor")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cbs"; yang_parent_name = "cir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cir"; yang_parent_name = "cir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::ConfigBandwidth()
    :
    minimum_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate>())
{
    minimum_rate->parent = this;

    yang_name = "config-bandwidth"; yang_parent_name = "cir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::~ConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::has_data() const
{
    return (minimum_rate !=  nullptr && minimum_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (minimum_rate !=  nullptr && minimum_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimum-rate")
    {
        if(minimum_rate == nullptr)
        {
            minimum_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate>();
        }
        return minimum_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimum_rate != nullptr)
    {
        children["minimum-rate"] = minimum_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::MinimumRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "minimum-rate"; yang_parent_name = "config-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::~MinimumRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::PirShape()
    :
    chunk_id{YType::uint32, "chunk-id"},
    profile_id{YType::uint16, "profile-id"},
    scale_factor{YType::uint16, "scale-factor"}
    	,
    pbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir>())
{
    pbs->parent = this;
    pir->parent = this;

    yang_name = "pir-shape"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::~PirShape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::has_data() const
{
    return chunk_id.is_set
	|| profile_id.is_set
	|| scale_factor.is_set
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunk_id.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(scale_factor.yfilter)
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir-shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.yfilter)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.yfilter)) leaf_name_data.push_back(scale_factor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs>();
        }
        return pbs;
    }

    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir>();
        }
        return pir;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
        chunk_id.value_namespace = name_space;
        chunk_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
        scale_factor.value_namespace = name_space;
        scale_factor.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunk-id")
    {
        chunk_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "scale-factor")
    {
        scale_factor.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbs" || name == "pir" || name == "chunk-id" || name == "profile-id" || name == "scale-factor")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pbs"; yang_parent_name = "pir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pir"; yang_parent_name = "pir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Wfq()
    :
    chunk_id{YType::uint32, "chunk-id"},
    committed_weight{YType::uint32, "committed-weight"},
    excess_ratio{YType::uint16, "excess-ratio"},
    excess_weight{YType::uint16, "excess-weight"},
    level{YType::uint8, "level"},
    profile_id{YType::uint32, "profile-id"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth>())
	,parent_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth>())
{
    bandwidth->parent = this;
    parent_bandwidth->parent = this;

    yang_name = "wfq"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_data() const
{
    return chunk_id.is_set
	|| committed_weight.is_set
	|| excess_ratio.is_set
	|| excess_weight.is_set
	|| level.is_set
	|| profile_id.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunk_id.yfilter)
	|| ydk::is_set(committed_weight.yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| ydk::is_set(excess_weight.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.yfilter)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (committed_weight.is_set || is_set(committed_weight.yfilter)) leaf_name_data.push_back(committed_weight.get_name_leafdata());
    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());
    if (excess_weight.is_set || is_set(excess_weight.yfilter)) leaf_name_data.push_back(excess_weight.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "parent-bandwidth")
    {
        if(parent_bandwidth == nullptr)
        {
            parent_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth>();
        }
        return parent_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(parent_bandwidth != nullptr)
    {
        children["parent-bandwidth"] = parent_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
        chunk_id.value_namespace = name_space;
        chunk_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "committed-weight")
    {
        committed_weight = value;
        committed_weight.value_namespace = name_space;
        committed_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-weight")
    {
        excess_weight = value;
        excess_weight.value_namespace = name_space;
        excess_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunk-id")
    {
        chunk_id.yfilter = yfilter;
    }
    if(value_path == "committed-weight")
    {
        committed_weight.yfilter = yfilter;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
    if(value_path == "excess-weight")
    {
        excess_weight.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "parent-bandwidth" || name == "chunk-id" || name == "committed-weight" || name == "excess-ratio" || name == "excess-weight" || name == "level" || name == "profile-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::Bandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::ParentBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "parent-bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::~ParentBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Wred()
    :
    curve_xr{YType::uint16, "curve-xr"},
    type{YType::enumeration, "type"}
{

    yang_name = "wred"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_data() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_data())
            return true;
    }
    return curve_xr.is_set
	|| type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_operation() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(curve_xr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curve_xr.is_set || is_set(curve_xr.yfilter)) leaf_name_data.push_back(curve_xr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "curve")
    {
        for(auto const & c : curve)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve>();
        c->parent = this;
        curve.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : curve)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "curve-xr")
    {
        curve_xr = value;
        curve_xr.value_namespace = name_space;
        curve_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "curve-xr")
    {
        curve_xr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "curve" || name == "curve-xr" || name == "type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::Curve()
    :
    absolute_index{YType::uint16, "absolute-index"},
    curve_id{YType::uint16, "curve-id"},
    exp_match{YType::str, "exp-match"},
    match{YType::str, "match"},
    template_id{YType::uint16, "template-id"}
    	,
    max_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold>())
	,max_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig>())
	,min_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold>())
	,min_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig>())
{
    max_threshold->parent = this;
    max_threshold_user_config->parent = this;
    min_threshold->parent = this;
    min_threshold_user_config->parent = this;

    yang_name = "curve"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::~Curve()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_data() const
{
    return absolute_index.is_set
	|| curve_id.is_set
	|| exp_match.is_set
	|| match.is_set
	|| template_id.is_set
	|| (max_threshold !=  nullptr && max_threshold->has_data())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_index.yfilter)
	|| ydk::is_set(curve_id.yfilter)
	|| ydk::is_set(exp_match.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(template_id.yfilter)
	|| (max_threshold !=  nullptr && max_threshold->has_operation())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "curve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_index.is_set || is_set(absolute_index.yfilter)) leaf_name_data.push_back(absolute_index.get_name_leafdata());
    if (curve_id.is_set || is_set(curve_id.yfilter)) leaf_name_data.push_back(curve_id.get_name_leafdata());
    if (exp_match.is_set || is_set(exp_match.yfilter)) leaf_name_data.push_back(exp_match.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (template_id.is_set || is_set(template_id.yfilter)) leaf_name_data.push_back(template_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-threshold")
    {
        if(max_threshold == nullptr)
        {
            max_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold>();
        }
        return max_threshold;
    }

    if(child_yang_name == "max-threshold-user-config")
    {
        if(max_threshold_user_config == nullptr)
        {
            max_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig>();
        }
        return max_threshold_user_config;
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold == nullptr)
        {
            min_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold>();
        }
        return min_threshold;
    }

    if(child_yang_name == "min-threshold-user-config")
    {
        if(min_threshold_user_config == nullptr)
        {
            min_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig>();
        }
        return min_threshold_user_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_threshold != nullptr)
    {
        children["max-threshold"] = max_threshold;
    }

    if(max_threshold_user_config != nullptr)
    {
        children["max-threshold-user-config"] = max_threshold_user_config;
    }

    if(min_threshold != nullptr)
    {
        children["min-threshold"] = min_threshold;
    }

    if(min_threshold_user_config != nullptr)
    {
        children["min-threshold-user-config"] = min_threshold_user_config;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-index")
    {
        absolute_index = value;
        absolute_index.value_namespace = name_space;
        absolute_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curve-id")
    {
        curve_id = value;
        curve_id.value_namespace = name_space;
        curve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-match")
    {
        exp_match = value;
        exp_match.value_namespace = name_space;
        exp_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-id")
    {
        template_id = value;
        template_id.value_namespace = name_space;
        template_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-index")
    {
        absolute_index.yfilter = yfilter;
    }
    if(value_path == "curve-id")
    {
        curve_id.yfilter = yfilter;
    }
    if(value_path == "exp-match")
    {
        exp_match.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "template-id")
    {
        template_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "max-threshold-user-config" || name == "min-threshold" || name == "min-threshold-user-config" || name == "absolute-index" || name == "curve-id" || name == "exp-match" || name == "match" || name == "template-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::MaxThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "max-threshold"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::~MaxThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::MaxThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "max-threshold-user-config"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::~MaxThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold-user-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::MinThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "min-threshold"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::~MinThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::MinThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "min-threshold-user-config"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::~MinThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold-user-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Output()
    :
    details(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details>())
{
    details->parent = this;

    yang_name = "output"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::~Output()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Details()
    :
    header(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header>())
	,policy(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy>())
	,policy_typhoon(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon>())
{
    header->parent = this;
    policy->parent = this;
    policy_typhoon->parent = this;

    yang_name = "details"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::~Details()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (policy_typhoon !=  nullptr && policy_typhoon->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (policy_typhoon !=  nullptr && policy_typhoon->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header>();
        }
        return header;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "policy-typhoon")
    {
        if(policy_typhoon == nullptr)
        {
            policy_typhoon = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon>();
        }
        return policy_typhoon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(policy_typhoon != nullptr)
    {
        children["policy-typhoon"] = policy_typhoon;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "policy" || name == "policy-typhoon")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::Header()
    :
    classes{YType::uint16, "classes"},
    policy_name{YType::str, "policy-name"}
    	,
    interface_parameters(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters>())
	,programmed_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth>())
{
    interface_parameters->parent = this;
    programmed_bandwidth->parent = this;

    yang_name = "header"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::has_data() const
{
    return classes.is_set
	|| policy_name.is_set
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (programmed_bandwidth !=  nullptr && programmed_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classes.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (programmed_bandwidth !=  nullptr && programmed_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "programmed-bandwidth")
    {
        if(programmed_bandwidth == nullptr)
        {
            programmed_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth>();
        }
        return programmed_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_parameters != nullptr)
    {
        children["interface-parameters"] = interface_parameters;
    }

    if(programmed_bandwidth != nullptr)
    {
        children["programmed-bandwidth"] = programmed_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-parameters" || name == "programmed-bandwidth" || name == "classes" || name == "policy-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::InterfaceParameters()
    :
    ancp_config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth>())
	,ancp_programmed_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth>())
	,port_config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth>())
	,port_shaper_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate>())
{
    ancp_config_bandwidth->parent = this;
    ancp_programmed_bandwidth->parent = this;
    port_config_bandwidth->parent = this;
    port_shaper_rate->parent = this;

    yang_name = "interface-parameters"; yang_parent_name = "header"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::has_data() const
{
    return (ancp_config_bandwidth !=  nullptr && ancp_config_bandwidth->has_data())
	|| (ancp_programmed_bandwidth !=  nullptr && ancp_programmed_bandwidth->has_data())
	|| (port_config_bandwidth !=  nullptr && port_config_bandwidth->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| (ancp_config_bandwidth !=  nullptr && ancp_config_bandwidth->has_operation())
	|| (ancp_programmed_bandwidth !=  nullptr && ancp_programmed_bandwidth->has_operation())
	|| (port_config_bandwidth !=  nullptr && port_config_bandwidth->has_operation())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ancp-config-bandwidth")
    {
        if(ancp_config_bandwidth == nullptr)
        {
            ancp_config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth>();
        }
        return ancp_config_bandwidth;
    }

    if(child_yang_name == "ancp-programmed-bandwidth")
    {
        if(ancp_programmed_bandwidth == nullptr)
        {
            ancp_programmed_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth>();
        }
        return ancp_programmed_bandwidth;
    }

    if(child_yang_name == "port-config-bandwidth")
    {
        if(port_config_bandwidth == nullptr)
        {
            port_config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth>();
        }
        return port_config_bandwidth;
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate == nullptr)
        {
            port_shaper_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate>();
        }
        return port_shaper_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ancp_config_bandwidth != nullptr)
    {
        children["ancp-config-bandwidth"] = ancp_config_bandwidth;
    }

    if(ancp_programmed_bandwidth != nullptr)
    {
        children["ancp-programmed-bandwidth"] = ancp_programmed_bandwidth;
    }

    if(port_config_bandwidth != nullptr)
    {
        children["port-config-bandwidth"] = port_config_bandwidth;
    }

    if(port_shaper_rate != nullptr)
    {
        children["port-shaper-rate"] = port_shaper_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ancp-config-bandwidth" || name == "ancp-programmed-bandwidth" || name == "port-config-bandwidth" || name == "port-shaper-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::AncpConfigBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "ancp-config-bandwidth"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::~AncpConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ancp-config-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::AncpProgrammedBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "ancp-programmed-bandwidth"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::~AncpProgrammedBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ancp-programmed-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::PortConfigBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "port-config-bandwidth"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::~PortConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-config-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::ProgrammedBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "programmed-bandwidth"; yang_parent_name = "header"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::~ProgrammedBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::Policy()
{

    yang_name = "policy"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::~Policy()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_st_v1.size(); index++)
    {
        if(qos_show_ea_st_v1[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_st_v1.size(); index++)
    {
        if(qos_show_ea_st_v1[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-ea-st-v1")
    {
        for(auto const & c : qos_show_ea_st_v1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1>();
        c->parent = this;
        qos_show_ea_st_v1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qos_show_ea_st_v1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-ea-st-v1")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QosShowEaStV1()
    :
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"},
    parent_class_name{YType::str, "parent-class-name"},
    parent_policy_name{YType::str, "parent-policy-name"},
    policy_name{YType::str, "policy-name"}
    	,
    mark(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark>())
	,police(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police>())
	,queue(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue>())
	,queue_limit_parameters(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters>())
	,shape(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape>())
	,wfq(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq>())
	,wred(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred>())
{
    mark->parent = this;
    police->parent = this;
    queue->parent = this;
    queue_limit_parameters->parent = this;
    shape->parent = this;
    wfq->parent = this;
    wred->parent = this;

    yang_name = "qos-show-ea-st-v1"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::~QosShowEaStV1()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| parent_class_name.is_set
	|| parent_policy_name.is_set
	|| policy_name.is_set
	|| (mark !=  nullptr && mark->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (queue_limit_parameters !=  nullptr && queue_limit_parameters->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data())
	|| (wred !=  nullptr && wred->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(parent_class_name.yfilter)
	|| ydk::is_set(parent_policy_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| (mark !=  nullptr && mark->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (queue !=  nullptr && queue->has_operation())
	|| (queue_limit_parameters !=  nullptr && queue_limit_parameters->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation())
	|| (wred !=  nullptr && wred->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-st-v1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (parent_class_name.is_set || is_set(parent_class_name.yfilter)) leaf_name_data.push_back(parent_class_name.get_name_leafdata());
    if (parent_policy_name.is_set || is_set(parent_policy_name.yfilter)) leaf_name_data.push_back(parent_policy_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        if(mark == nullptr)
        {
            mark = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark>();
        }
        return mark;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police>();
        }
        return police;
    }

    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "queue-limit-parameters")
    {
        if(queue_limit_parameters == nullptr)
        {
            queue_limit_parameters = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters>();
        }
        return queue_limit_parameters;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq>();
        }
        return wfq;
    }

    if(child_yang_name == "wred")
    {
        if(wred == nullptr)
        {
            wred = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred>();
        }
        return wred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mark != nullptr)
    {
        children["mark"] = mark;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    if(queue_limit_parameters != nullptr)
    {
        children["queue-limit-parameters"] = queue_limit_parameters;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        children["wfq"] = wfq;
    }

    if(wred != nullptr)
    {
        children["wred"] = wred;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-class-name")
    {
        parent_class_name = value;
        parent_class_name.value_namespace = name_space;
        parent_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-policy-name")
    {
        parent_policy_name = value;
        parent_policy_name.value_namespace = name_space;
        parent_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "parent-class-name")
    {
        parent_class_name.yfilter = yfilter;
    }
    if(value_path == "parent-policy-name")
    {
        parent_policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "police" || name == "queue" || name == "queue-limit-parameters" || name == "shape" || name == "wfq" || name == "wred" || name == "class-level" || name == "class-name" || name == "parent-class-name" || name == "parent-policy-name" || name == "policy-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::Mark()
    :
    child_mark(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark>())
	,parent_mark(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark>())
	,parent_police_conform(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform>())
	,parent_police_exceed(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed>())
	,parent_police_violate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed>())
	,police_violate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate>())
{
    child_mark->parent = this;
    parent_mark->parent = this;
    parent_police_conform->parent = this;
    parent_police_exceed->parent = this;
    parent_police_violate->parent = this;
    police_conform->parent = this;
    police_exceed->parent = this;
    police_violate->parent = this;

    yang_name = "mark"; yang_parent_name = "qos-show-ea-st-v1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::has_data() const
{
    return (child_mark !=  nullptr && child_mark->has_data())
	|| (parent_mark !=  nullptr && parent_mark->has_data())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_data())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_data())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data())
	|| (police_violate !=  nullptr && police_violate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::has_operation() const
{
    return is_set(yfilter)
	|| (child_mark !=  nullptr && child_mark->has_operation())
	|| (parent_mark !=  nullptr && parent_mark->has_operation())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_operation())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_operation())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation())
	|| (police_violate !=  nullptr && police_violate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "child-mark")
    {
        if(child_mark == nullptr)
        {
            child_mark = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark>();
        }
        return child_mark;
    }

    if(child_yang_name == "parent-mark")
    {
        if(parent_mark == nullptr)
        {
            parent_mark = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark>();
        }
        return parent_mark;
    }

    if(child_yang_name == "parent-police-conform")
    {
        if(parent_police_conform == nullptr)
        {
            parent_police_conform = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform>();
        }
        return parent_police_conform;
    }

    if(child_yang_name == "parent-police-exceed")
    {
        if(parent_police_exceed == nullptr)
        {
            parent_police_exceed = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed>();
        }
        return parent_police_exceed;
    }

    if(child_yang_name == "parent-police-violate")
    {
        if(parent_police_violate == nullptr)
        {
            parent_police_violate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate>();
        }
        return parent_police_violate;
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform == nullptr)
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform>();
        }
        return police_conform;
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed == nullptr)
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed>();
        }
        return police_exceed;
    }

    if(child_yang_name == "police-violate")
    {
        if(police_violate == nullptr)
        {
            police_violate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate>();
        }
        return police_violate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(child_mark != nullptr)
    {
        children["child-mark"] = child_mark;
    }

    if(parent_mark != nullptr)
    {
        children["parent-mark"] = parent_mark;
    }

    if(parent_police_conform != nullptr)
    {
        children["parent-police-conform"] = parent_police_conform;
    }

    if(parent_police_exceed != nullptr)
    {
        children["parent-police-exceed"] = parent_police_exceed;
    }

    if(parent_police_violate != nullptr)
    {
        children["parent-police-violate"] = parent_police_violate;
    }

    if(police_conform != nullptr)
    {
        children["police-conform"] = police_conform;
    }

    if(police_exceed != nullptr)
    {
        children["police-exceed"] = police_exceed;
    }

    if(police_violate != nullptr)
    {
        children["police-violate"] = police_violate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "child-mark" || name == "parent-mark" || name == "parent-police-conform" || name == "parent-police-exceed" || name == "parent-police-violate" || name == "police-conform" || name == "police-exceed" || name == "police-violate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::ChildMark()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "child-mark"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::~ChildMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "child-mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::ParentMark()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "parent-mark"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::~ParentMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::ParentPoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "parent-police-conform"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::~ParentPoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::ParentPoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "parent-police-exceed"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::~ParentPoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::ParentPoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "parent-police-violate"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::~ParentPoliceViolate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-violate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-police-violate"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-conform"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-exceed"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::PoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-violate"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::~PoliceViolate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-violate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-violate"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Police()
    :
    policer_type{YType::enumeration, "policer-type"},
    profile_id{YType::uint32, "profile-id"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir>())
	,police_config_parameters(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters>())
{
    cbs->parent = this;
    cir->parent = this;
    pbs->parent = this;
    pir->parent = this;
    police_config_parameters->parent = this;

    yang_name = "police"; yang_parent_name = "qos-show-ea-st-v1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::has_data() const
{
    return policer_type.is_set
	|| profile_id.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs>();
        }
        return cbs;
    }

    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs>();
        }
        return pbs;
    }

    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "police-config-parameters")
    {
        if(police_config_parameters == nullptr)
        {
            police_config_parameters = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters>();
        }
        return police_config_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    if(police_config_parameters != nullptr)
    {
        children["police-config-parameters"] = police_config_parameters;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbs" || name == "cir" || name == "pbs" || name == "pir" || name == "police-config-parameters" || name == "policer-type" || name == "profile-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PoliceConfigParameters()
    :
    average_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate>())
	,conform_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst>())
	,exceed_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst>())
	,peak_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate>())
{
    average_rate->parent = this;
    conform_burst->parent = this;
    exceed_burst->parent = this;
    peak_rate->parent = this;

    yang_name = "police-config-parameters"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::~PoliceConfigParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::has_data() const
{
    return (average_rate !=  nullptr && average_rate->has_data())
	|| (conform_burst !=  nullptr && conform_burst->has_data())
	|| (exceed_burst !=  nullptr && exceed_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::has_operation() const
{
    return is_set(yfilter)
	|| (average_rate !=  nullptr && average_rate->has_operation())
	|| (conform_burst !=  nullptr && conform_burst->has_operation())
	|| (exceed_burst !=  nullptr && exceed_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-config-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average-rate")
    {
        if(average_rate == nullptr)
        {
            average_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate>();
        }
        return average_rate;
    }

    if(child_yang_name == "conform-burst")
    {
        if(conform_burst == nullptr)
        {
            conform_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst>();
        }
        return conform_burst;
    }

    if(child_yang_name == "exceed-burst")
    {
        if(exceed_burst == nullptr)
        {
            exceed_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst>();
        }
        return exceed_burst;
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate == nullptr)
        {
            peak_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate>();
        }
        return peak_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average_rate != nullptr)
    {
        children["average-rate"] = average_rate;
    }

    if(conform_burst != nullptr)
    {
        children["conform-burst"] = conform_burst;
    }

    if(exceed_burst != nullptr)
    {
        children["exceed-burst"] = exceed_burst;
    }

    if(peak_rate != nullptr)
    {
        children["peak-rate"] = peak_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "conform-burst" || name == "exceed-burst" || name == "peak-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::AverageRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "average-rate"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::~AverageRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::ConformBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "conform-burst"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::~ConformBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::ExceedBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "exceed-burst"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::~ExceedBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::PeakRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "peak-rate"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::~PeakRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::Queue()
    :
    class_name{YType::str, "class-name"},
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::enumeration, "queue-type"}
{

    yang_name = "queue"; yang_parent_name = "qos-show-ea-st-v1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::has_data() const
{
    return class_name.is_set
	|| queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "queue-id" || name == "queue-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimitParameters()
    :
    profile_id{YType::uint32, "profile-id"},
    scaling_profile_id{YType::uint32, "scaling-profile-id"}
    	,
    config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit>())
	,queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit>())
{
    config_queue_limit->parent = this;
    queue_limit->parent = this;

    yang_name = "queue-limit-parameters"; yang_parent_name = "qos-show-ea-st-v1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::~QueueLimitParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::has_data() const
{
    return profile_id.is_set
	|| scaling_profile_id.is_set
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(scaling_profile_id.yfilter)
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scaling_profile_id.is_set || is_set(scaling_profile_id.yfilter)) leaf_name_data.push_back(scaling_profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit == nullptr)
        {
            queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit>();
        }
        return queue_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_queue_limit != nullptr)
    {
        children["config-queue-limit"] = config_queue_limit;
    }

    if(queue_limit != nullptr)
    {
        children["queue-limit"] = queue_limit;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scaling-profile-id")
    {
        scaling_profile_id = value;
        scaling_profile_id.value_namespace = name_space;
        scaling_profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "scaling-profile-id")
    {
        scaling_profile_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-queue-limit" || name == "queue-limit" || name == "profile-id" || name == "scaling-profile-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::ConfigQueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "queue-limit-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::QueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-limit"; yang_parent_name = "queue-limit-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::~QueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Shape()
    :
    profile_id{YType::uint16, "profile-id"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir>())
	,config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir>())
{
    cbs->parent = this;
    cir->parent = this;
    config_bandwidth->parent = this;
    pbs->parent = this;
    pir->parent = this;

    yang_name = "shape"; yang_parent_name = "qos-show-ea-st-v1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::has_data() const
{
    return profile_id.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_data())
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs>();
        }
        return cbs;
    }

    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "config-bandwidth")
    {
        if(config_bandwidth == nullptr)
        {
            config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth>();
        }
        return config_bandwidth;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs>();
        }
        return pbs;
    }

    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir>();
        }
        return pir;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(config_bandwidth != nullptr)
    {
        children["config-bandwidth"] = config_bandwidth;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbs" || name == "cir" || name == "config-bandwidth" || name == "pbs" || name == "pir" || name == "profile-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::ConfigBandwidth()
    :
    minimum_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate>())
{
    minimum_rate->parent = this;

    yang_name = "config-bandwidth"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::~ConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::has_data() const
{
    return (minimum_rate !=  nullptr && minimum_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (minimum_rate !=  nullptr && minimum_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimum-rate")
    {
        if(minimum_rate == nullptr)
        {
            minimum_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate>();
        }
        return minimum_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimum_rate != nullptr)
    {
        children["minimum-rate"] = minimum_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::MinimumRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "minimum-rate"; yang_parent_name = "config-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::~MinimumRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Wfq()
    :
    chunk_id{YType::uint32, "chunk-id"},
    committed_weight{YType::uint32, "committed-weight"},
    excess_ratio{YType::uint16, "excess-ratio"},
    excess_weight{YType::uint16, "excess-weight"},
    level{YType::uint8, "level"},
    profile_id{YType::uint32, "profile-id"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth>())
	,parent_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth>())
{
    bandwidth->parent = this;
    parent_bandwidth->parent = this;

    yang_name = "wfq"; yang_parent_name = "qos-show-ea-st-v1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::has_data() const
{
    return chunk_id.is_set
	|| committed_weight.is_set
	|| excess_ratio.is_set
	|| excess_weight.is_set
	|| level.is_set
	|| profile_id.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunk_id.yfilter)
	|| ydk::is_set(committed_weight.yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| ydk::is_set(excess_weight.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.yfilter)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (committed_weight.is_set || is_set(committed_weight.yfilter)) leaf_name_data.push_back(committed_weight.get_name_leafdata());
    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());
    if (excess_weight.is_set || is_set(excess_weight.yfilter)) leaf_name_data.push_back(excess_weight.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "parent-bandwidth")
    {
        if(parent_bandwidth == nullptr)
        {
            parent_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth>();
        }
        return parent_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(parent_bandwidth != nullptr)
    {
        children["parent-bandwidth"] = parent_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
        chunk_id.value_namespace = name_space;
        chunk_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "committed-weight")
    {
        committed_weight = value;
        committed_weight.value_namespace = name_space;
        committed_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-weight")
    {
        excess_weight = value;
        excess_weight.value_namespace = name_space;
        excess_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunk-id")
    {
        chunk_id.yfilter = yfilter;
    }
    if(value_path == "committed-weight")
    {
        committed_weight.yfilter = yfilter;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
    if(value_path == "excess-weight")
    {
        excess_weight.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "parent-bandwidth" || name == "chunk-id" || name == "committed-weight" || name == "excess-ratio" || name == "excess-weight" || name == "level" || name == "profile-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::Bandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::ParentBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "parent-bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::~ParentBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Wred()
    :
    curve_xr{YType::uint16, "curve-xr"},
    profile_id{YType::uint32, "profile-id"},
    scaling_profile_id{YType::uint32, "scaling-profile-id"},
    table_id{YType::uint8, "table-id"},
    type{YType::enumeration, "type"}
{

    yang_name = "wred"; yang_parent_name = "qos-show-ea-st-v1"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::has_data() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_data())
            return true;
    }
    return curve_xr.is_set
	|| profile_id.is_set
	|| scaling_profile_id.is_set
	|| table_id.is_set
	|| type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::has_operation() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(curve_xr.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(scaling_profile_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curve_xr.is_set || is_set(curve_xr.yfilter)) leaf_name_data.push_back(curve_xr.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scaling_profile_id.is_set || is_set(scaling_profile_id.yfilter)) leaf_name_data.push_back(scaling_profile_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "curve")
    {
        for(auto const & c : curve)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve>();
        c->parent = this;
        curve.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : curve)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "curve-xr")
    {
        curve_xr = value;
        curve_xr.value_namespace = name_space;
        curve_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scaling-profile-id")
    {
        scaling_profile_id = value;
        scaling_profile_id.value_namespace = name_space;
        scaling_profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "curve-xr")
    {
        curve_xr.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "scaling-profile-id")
    {
        scaling_profile_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "curve" || name == "curve-xr" || name == "profile-id" || name == "scaling-profile-id" || name == "table-id" || name == "type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::Curve()
    :
    match{YType::str, "match"}
    	,
    max_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold>())
	,max_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig>())
	,min_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold>())
	,min_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig>())
{
    max_threshold->parent = this;
    max_threshold_user_config->parent = this;
    min_threshold->parent = this;
    min_threshold_user_config->parent = this;

    yang_name = "curve"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::~Curve()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::has_data() const
{
    return match.is_set
	|| (max_threshold !=  nullptr && max_threshold->has_data())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match.yfilter)
	|| (max_threshold !=  nullptr && max_threshold->has_operation())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "curve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-threshold")
    {
        if(max_threshold == nullptr)
        {
            max_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold>();
        }
        return max_threshold;
    }

    if(child_yang_name == "max-threshold-user-config")
    {
        if(max_threshold_user_config == nullptr)
        {
            max_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig>();
        }
        return max_threshold_user_config;
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold == nullptr)
        {
            min_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold>();
        }
        return min_threshold;
    }

    if(child_yang_name == "min-threshold-user-config")
    {
        if(min_threshold_user_config == nullptr)
        {
            min_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig>();
        }
        return min_threshold_user_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_threshold != nullptr)
    {
        children["max-threshold"] = max_threshold;
    }

    if(max_threshold_user_config != nullptr)
    {
        children["max-threshold-user-config"] = max_threshold_user_config;
    }

    if(min_threshold != nullptr)
    {
        children["min-threshold"] = min_threshold;
    }

    if(min_threshold_user_config != nullptr)
    {
        children["min-threshold-user-config"] = min_threshold_user_config;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "max-threshold-user-config" || name == "min-threshold" || name == "min-threshold-user-config" || name == "match")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::MaxThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "max-threshold"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::~MaxThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::MaxThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "max-threshold-user-config"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::~MaxThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold-user-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::MinThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "min-threshold"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::~MinThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::MinThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "min-threshold-user-config"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::~MinThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold-user-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::PolicyTyphoon()
{

    yang_name = "policy-typhoon"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::~PolicyTyphoon()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_st_v2.size(); index++)
    {
        if(qos_show_ea_st_v2[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_st_v2.size(); index++)
    {
        if(qos_show_ea_st_v2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-typhoon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-ea-st-v2")
    {
        for(auto const & c : qos_show_ea_st_v2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2>();
        c->parent = this;
        qos_show_ea_st_v2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qos_show_ea_st_v2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-ea-st-v2")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QosShowEaStV2()
    :
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"},
    parent_class_name{YType::str, "parent-class-name"},
    parent_policy_name{YType::str, "parent-policy-name"},
    policy_name{YType::str, "policy-name"}
    	,
    mark(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark>())
	,police(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police>())
	,queue(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue>())
	,queue_limit_parameters(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters>())
	,shape(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape>())
	,wfq(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq>())
	,wred(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred>())
{
    mark->parent = this;
    police->parent = this;
    queue->parent = this;
    queue_limit_parameters->parent = this;
    shape->parent = this;
    wfq->parent = this;
    wred->parent = this;

    yang_name = "qos-show-ea-st-v2"; yang_parent_name = "policy-typhoon"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::~QosShowEaStV2()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| parent_class_name.is_set
	|| parent_policy_name.is_set
	|| policy_name.is_set
	|| (mark !=  nullptr && mark->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (queue_limit_parameters !=  nullptr && queue_limit_parameters->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data())
	|| (wred !=  nullptr && wred->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(parent_class_name.yfilter)
	|| ydk::is_set(parent_policy_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| (mark !=  nullptr && mark->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (queue !=  nullptr && queue->has_operation())
	|| (queue_limit_parameters !=  nullptr && queue_limit_parameters->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation())
	|| (wred !=  nullptr && wred->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-st-v2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (parent_class_name.is_set || is_set(parent_class_name.yfilter)) leaf_name_data.push_back(parent_class_name.get_name_leafdata());
    if (parent_policy_name.is_set || is_set(parent_policy_name.yfilter)) leaf_name_data.push_back(parent_policy_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        if(mark == nullptr)
        {
            mark = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark>();
        }
        return mark;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police>();
        }
        return police;
    }

    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "queue-limit-parameters")
    {
        if(queue_limit_parameters == nullptr)
        {
            queue_limit_parameters = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters>();
        }
        return queue_limit_parameters;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq>();
        }
        return wfq;
    }

    if(child_yang_name == "wred")
    {
        if(wred == nullptr)
        {
            wred = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred>();
        }
        return wred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mark != nullptr)
    {
        children["mark"] = mark;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    if(queue_limit_parameters != nullptr)
    {
        children["queue-limit-parameters"] = queue_limit_parameters;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        children["wfq"] = wfq;
    }

    if(wred != nullptr)
    {
        children["wred"] = wred;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-class-name")
    {
        parent_class_name = value;
        parent_class_name.value_namespace = name_space;
        parent_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-policy-name")
    {
        parent_policy_name = value;
        parent_policy_name.value_namespace = name_space;
        parent_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "parent-class-name")
    {
        parent_class_name.yfilter = yfilter;
    }
    if(value_path == "parent-policy-name")
    {
        parent_policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "police" || name == "queue" || name == "queue-limit-parameters" || name == "shape" || name == "wfq" || name == "wred" || name == "class-level" || name == "class-name" || name == "parent-class-name" || name == "parent-policy-name" || name == "policy-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::Mark()
    :
    child_mark(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark>())
	,parent_mark(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark>())
	,parent_police_conform(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform>())
	,parent_police_exceed(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed>())
	,parent_police_violate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed>())
	,police_violate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate>())
{
    child_mark->parent = this;
    parent_mark->parent = this;
    parent_police_conform->parent = this;
    parent_police_exceed->parent = this;
    parent_police_violate->parent = this;
    police_conform->parent = this;
    police_exceed->parent = this;
    police_violate->parent = this;

    yang_name = "mark"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::has_data() const
{
    return (child_mark !=  nullptr && child_mark->has_data())
	|| (parent_mark !=  nullptr && parent_mark->has_data())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_data())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_data())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data())
	|| (police_violate !=  nullptr && police_violate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::has_operation() const
{
    return is_set(yfilter)
	|| (child_mark !=  nullptr && child_mark->has_operation())
	|| (parent_mark !=  nullptr && parent_mark->has_operation())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_operation())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_operation())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation())
	|| (police_violate !=  nullptr && police_violate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "child-mark")
    {
        if(child_mark == nullptr)
        {
            child_mark = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark>();
        }
        return child_mark;
    }

    if(child_yang_name == "parent-mark")
    {
        if(parent_mark == nullptr)
        {
            parent_mark = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark>();
        }
        return parent_mark;
    }

    if(child_yang_name == "parent-police-conform")
    {
        if(parent_police_conform == nullptr)
        {
            parent_police_conform = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform>();
        }
        return parent_police_conform;
    }

    if(child_yang_name == "parent-police-exceed")
    {
        if(parent_police_exceed == nullptr)
        {
            parent_police_exceed = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed>();
        }
        return parent_police_exceed;
    }

    if(child_yang_name == "parent-police-violate")
    {
        if(parent_police_violate == nullptr)
        {
            parent_police_violate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate>();
        }
        return parent_police_violate;
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform == nullptr)
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform>();
        }
        return police_conform;
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed == nullptr)
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed>();
        }
        return police_exceed;
    }

    if(child_yang_name == "police-violate")
    {
        if(police_violate == nullptr)
        {
            police_violate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate>();
        }
        return police_violate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(child_mark != nullptr)
    {
        children["child-mark"] = child_mark;
    }

    if(parent_mark != nullptr)
    {
        children["parent-mark"] = parent_mark;
    }

    if(parent_police_conform != nullptr)
    {
        children["parent-police-conform"] = parent_police_conform;
    }

    if(parent_police_exceed != nullptr)
    {
        children["parent-police-exceed"] = parent_police_exceed;
    }

    if(parent_police_violate != nullptr)
    {
        children["parent-police-violate"] = parent_police_violate;
    }

    if(police_conform != nullptr)
    {
        children["police-conform"] = police_conform;
    }

    if(police_exceed != nullptr)
    {
        children["police-exceed"] = police_exceed;
    }

    if(police_violate != nullptr)
    {
        children["police-violate"] = police_violate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "child-mark" || name == "parent-mark" || name == "parent-police-conform" || name == "parent-police-exceed" || name == "parent-police-violate" || name == "police-conform" || name == "police-exceed" || name == "police-violate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::ChildMark()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "child-mark"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::~ChildMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "child-mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::ParentMark()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "parent-mark"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::~ParentMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::ParentPoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "parent-police-conform"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::~ParentPoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::ParentPoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "parent-police-exceed"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::~ParentPoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::ParentPoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "parent-police-violate"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::~ParentPoliceViolate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-violate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "parent-police-violate"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-conform"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-exceed"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::PoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-violate"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::~PoliceViolate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-violate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mark_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-violate"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_opcode.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-opcode" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Police()
    :
    policer_type{YType::enumeration, "policer-type"},
    profile_id{YType::uint32, "profile-id"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir>())
	,police_config_parameters(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters>())
{
    cbs->parent = this;
    cir->parent = this;
    pbs->parent = this;
    pir->parent = this;
    police_config_parameters->parent = this;

    yang_name = "police"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::has_data() const
{
    return policer_type.is_set
	|| profile_id.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs>();
        }
        return cbs;
    }

    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs>();
        }
        return pbs;
    }

    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "police-config-parameters")
    {
        if(police_config_parameters == nullptr)
        {
            police_config_parameters = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters>();
        }
        return police_config_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    if(police_config_parameters != nullptr)
    {
        children["police-config-parameters"] = police_config_parameters;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbs" || name == "cir" || name == "pbs" || name == "pir" || name == "police-config-parameters" || name == "policer-type" || name == "profile-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PoliceConfigParameters()
    :
    average_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate>())
	,conform_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst>())
	,exceed_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst>())
	,peak_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate>())
{
    average_rate->parent = this;
    conform_burst->parent = this;
    exceed_burst->parent = this;
    peak_rate->parent = this;

    yang_name = "police-config-parameters"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::~PoliceConfigParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_data() const
{
    return (average_rate !=  nullptr && average_rate->has_data())
	|| (conform_burst !=  nullptr && conform_burst->has_data())
	|| (exceed_burst !=  nullptr && exceed_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_operation() const
{
    return is_set(yfilter)
	|| (average_rate !=  nullptr && average_rate->has_operation())
	|| (conform_burst !=  nullptr && conform_burst->has_operation())
	|| (exceed_burst !=  nullptr && exceed_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-config-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average-rate")
    {
        if(average_rate == nullptr)
        {
            average_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate>();
        }
        return average_rate;
    }

    if(child_yang_name == "conform-burst")
    {
        if(conform_burst == nullptr)
        {
            conform_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst>();
        }
        return conform_burst;
    }

    if(child_yang_name == "exceed-burst")
    {
        if(exceed_burst == nullptr)
        {
            exceed_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst>();
        }
        return exceed_burst;
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate == nullptr)
        {
            peak_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate>();
        }
        return peak_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average_rate != nullptr)
    {
        children["average-rate"] = average_rate;
    }

    if(conform_burst != nullptr)
    {
        children["conform-burst"] = conform_burst;
    }

    if(exceed_burst != nullptr)
    {
        children["exceed-burst"] = exceed_burst;
    }

    if(peak_rate != nullptr)
    {
        children["peak-rate"] = peak_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "conform-burst" || name == "exceed-burst" || name == "peak-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::AverageRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "average-rate"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::~AverageRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::ConformBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "conform-burst"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::~ConformBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::ExceedBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "exceed-burst"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::~ExceedBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::PeakRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "peak-rate"; yang_parent_name = "police-config-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::~PeakRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::Queue()
    :
    class_name{YType::str, "class-name"},
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::enumeration, "queue-type"}
{

    yang_name = "queue"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::has_data() const
{
    return class_name.is_set
	|| queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "queue-id" || name == "queue-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimitParameters()
    :
    absolute_index{YType::uint16, "absolute-index"},
    curve_id{YType::uint16, "curve-id"},
    template_id{YType::uint16, "template-id"}
    	,
    config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit>())
	,queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit>())
{
    config_queue_limit->parent = this;
    queue_limit->parent = this;

    yang_name = "queue-limit-parameters"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::~QueueLimitParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::has_data() const
{
    return absolute_index.is_set
	|| curve_id.is_set
	|| template_id.is_set
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_index.yfilter)
	|| ydk::is_set(curve_id.yfilter)
	|| ydk::is_set(template_id.yfilter)
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_index.is_set || is_set(absolute_index.yfilter)) leaf_name_data.push_back(absolute_index.get_name_leafdata());
    if (curve_id.is_set || is_set(curve_id.yfilter)) leaf_name_data.push_back(curve_id.get_name_leafdata());
    if (template_id.is_set || is_set(template_id.yfilter)) leaf_name_data.push_back(template_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit == nullptr)
        {
            queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit>();
        }
        return queue_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_queue_limit != nullptr)
    {
        children["config-queue-limit"] = config_queue_limit;
    }

    if(queue_limit != nullptr)
    {
        children["queue-limit"] = queue_limit;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-index")
    {
        absolute_index = value;
        absolute_index.value_namespace = name_space;
        absolute_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curve-id")
    {
        curve_id = value;
        curve_id.value_namespace = name_space;
        curve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-id")
    {
        template_id = value;
        template_id.value_namespace = name_space;
        template_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-index")
    {
        absolute_index.yfilter = yfilter;
    }
    if(value_path == "curve-id")
    {
        curve_id.yfilter = yfilter;
    }
    if(value_path == "template-id")
    {
        template_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-queue-limit" || name == "queue-limit" || name == "absolute-index" || name == "curve-id" || name == "template-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::ConfigQueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "queue-limit-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::QueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue-limit"; yang_parent_name = "queue-limit-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::~QueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::Shape()
    :
    cir_shape_type{YType::enumeration, "cir-shape-type"},
    pir_shape_type{YType::enumeration, "pir-shape-type"}
    	,
    cir_shape(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape>())
	,pir_shape(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape>())
{
    cir_shape->parent = this;
    pir_shape->parent = this;

    yang_name = "shape"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::has_data() const
{
    return cir_shape_type.is_set
	|| pir_shape_type.is_set
	|| (cir_shape !=  nullptr && cir_shape->has_data())
	|| (pir_shape !=  nullptr && pir_shape->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cir_shape_type.yfilter)
	|| ydk::is_set(pir_shape_type.yfilter)
	|| (cir_shape !=  nullptr && cir_shape->has_operation())
	|| (pir_shape !=  nullptr && pir_shape->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cir_shape_type.is_set || is_set(cir_shape_type.yfilter)) leaf_name_data.push_back(cir_shape_type.get_name_leafdata());
    if (pir_shape_type.is_set || is_set(pir_shape_type.yfilter)) leaf_name_data.push_back(pir_shape_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir-shape")
    {
        if(cir_shape == nullptr)
        {
            cir_shape = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape>();
        }
        return cir_shape;
    }

    if(child_yang_name == "pir-shape")
    {
        if(pir_shape == nullptr)
        {
            pir_shape = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape>();
        }
        return pir_shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cir_shape != nullptr)
    {
        children["cir-shape"] = cir_shape;
    }

    if(pir_shape != nullptr)
    {
        children["pir-shape"] = pir_shape;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cir-shape-type")
    {
        cir_shape_type = value;
        cir_shape_type.value_namespace = name_space;
        cir_shape_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pir-shape-type")
    {
        pir_shape_type = value;
        pir_shape_type.value_namespace = name_space;
        pir_shape_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cir-shape-type")
    {
        cir_shape_type.yfilter = yfilter;
    }
    if(value_path == "pir-shape-type")
    {
        pir_shape_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir-shape" || name == "pir-shape" || name == "cir-shape-type" || name == "pir-shape-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::CirShape()
    :
    chunk_id{YType::uint32, "chunk-id"},
    profile_id{YType::uint16, "profile-id"},
    scale_factor{YType::uint16, "scale-factor"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir>())
	,config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth>())
{
    cbs->parent = this;
    cir->parent = this;
    config_bandwidth->parent = this;

    yang_name = "cir-shape"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::~CirShape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::has_data() const
{
    return chunk_id.is_set
	|| profile_id.is_set
	|| scale_factor.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunk_id.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(scale_factor.yfilter)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir-shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.yfilter)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.yfilter)) leaf_name_data.push_back(scale_factor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs>();
        }
        return cbs;
    }

    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "config-bandwidth")
    {
        if(config_bandwidth == nullptr)
        {
            config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth>();
        }
        return config_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(config_bandwidth != nullptr)
    {
        children["config-bandwidth"] = config_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
        chunk_id.value_namespace = name_space;
        chunk_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
        scale_factor.value_namespace = name_space;
        scale_factor.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunk-id")
    {
        chunk_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "scale-factor")
    {
        scale_factor.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbs" || name == "cir" || name == "config-bandwidth" || name == "chunk-id" || name == "profile-id" || name == "scale-factor")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cbs"; yang_parent_name = "cir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "cir"; yang_parent_name = "cir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::ConfigBandwidth()
    :
    minimum_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate>())
{
    minimum_rate->parent = this;

    yang_name = "config-bandwidth"; yang_parent_name = "cir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::~ConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::has_data() const
{
    return (minimum_rate !=  nullptr && minimum_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (minimum_rate !=  nullptr && minimum_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimum-rate")
    {
        if(minimum_rate == nullptr)
        {
            minimum_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate>();
        }
        return minimum_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimum_rate != nullptr)
    {
        children["minimum-rate"] = minimum_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::MinimumRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "minimum-rate"; yang_parent_name = "config-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::~MinimumRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::PirShape()
    :
    chunk_id{YType::uint32, "chunk-id"},
    profile_id{YType::uint16, "profile-id"},
    scale_factor{YType::uint16, "scale-factor"}
    	,
    pbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir>())
{
    pbs->parent = this;
    pir->parent = this;

    yang_name = "pir-shape"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::~PirShape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::has_data() const
{
    return chunk_id.is_set
	|| profile_id.is_set
	|| scale_factor.is_set
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunk_id.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(scale_factor.yfilter)
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir-shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.yfilter)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.yfilter)) leaf_name_data.push_back(scale_factor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs>();
        }
        return pbs;
    }

    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir>();
        }
        return pir;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
        chunk_id.value_namespace = name_space;
        chunk_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
        scale_factor.value_namespace = name_space;
        scale_factor.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunk-id")
    {
        chunk_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "scale-factor")
    {
        scale_factor.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbs" || name == "pir" || name == "chunk-id" || name == "profile-id" || name == "scale-factor")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pbs"; yang_parent_name = "pir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "pir"; yang_parent_name = "pir-shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Wfq()
    :
    chunk_id{YType::uint32, "chunk-id"},
    committed_weight{YType::uint32, "committed-weight"},
    excess_ratio{YType::uint16, "excess-ratio"},
    excess_weight{YType::uint16, "excess-weight"},
    level{YType::uint8, "level"},
    profile_id{YType::uint32, "profile-id"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth>())
	,parent_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth>())
{
    bandwidth->parent = this;
    parent_bandwidth->parent = this;

    yang_name = "wfq"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_data() const
{
    return chunk_id.is_set
	|| committed_weight.is_set
	|| excess_ratio.is_set
	|| excess_weight.is_set
	|| level.is_set
	|| profile_id.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunk_id.yfilter)
	|| ydk::is_set(committed_weight.yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| ydk::is_set(excess_weight.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.yfilter)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (committed_weight.is_set || is_set(committed_weight.yfilter)) leaf_name_data.push_back(committed_weight.get_name_leafdata());
    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());
    if (excess_weight.is_set || is_set(excess_weight.yfilter)) leaf_name_data.push_back(excess_weight.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "parent-bandwidth")
    {
        if(parent_bandwidth == nullptr)
        {
            parent_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth>();
        }
        return parent_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(parent_bandwidth != nullptr)
    {
        children["parent-bandwidth"] = parent_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
        chunk_id.value_namespace = name_space;
        chunk_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "committed-weight")
    {
        committed_weight = value;
        committed_weight.value_namespace = name_space;
        committed_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-weight")
    {
        excess_weight = value;
        excess_weight.value_namespace = name_space;
        excess_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunk-id")
    {
        chunk_id.yfilter = yfilter;
    }
    if(value_path == "committed-weight")
    {
        committed_weight.yfilter = yfilter;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
    if(value_path == "excess-weight")
    {
        excess_weight.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "parent-bandwidth" || name == "chunk-id" || name == "committed-weight" || name == "excess-ratio" || name == "excess-weight" || name == "level" || name == "profile-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::Bandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::ParentBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "parent-bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::~ParentBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Wred()
    :
    curve_xr{YType::uint16, "curve-xr"},
    type{YType::enumeration, "type"}
{

    yang_name = "wred"; yang_parent_name = "qos-show-ea-st-v2"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_data() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_data())
            return true;
    }
    return curve_xr.is_set
	|| type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_operation() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(curve_xr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curve_xr.is_set || is_set(curve_xr.yfilter)) leaf_name_data.push_back(curve_xr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "curve")
    {
        for(auto const & c : curve)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve>();
        c->parent = this;
        curve.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : curve)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "curve-xr")
    {
        curve_xr = value;
        curve_xr.value_namespace = name_space;
        curve_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "curve-xr")
    {
        curve_xr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "curve" || name == "curve-xr" || name == "type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::Curve()
    :
    absolute_index{YType::uint16, "absolute-index"},
    curve_id{YType::uint16, "curve-id"},
    exp_match{YType::str, "exp-match"},
    match{YType::str, "match"},
    template_id{YType::uint16, "template-id"}
    	,
    max_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold>())
	,max_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig>())
	,min_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold>())
	,min_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig>())
{
    max_threshold->parent = this;
    max_threshold_user_config->parent = this;
    min_threshold->parent = this;
    min_threshold_user_config->parent = this;

    yang_name = "curve"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::~Curve()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_data() const
{
    return absolute_index.is_set
	|| curve_id.is_set
	|| exp_match.is_set
	|| match.is_set
	|| template_id.is_set
	|| (max_threshold !=  nullptr && max_threshold->has_data())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_index.yfilter)
	|| ydk::is_set(curve_id.yfilter)
	|| ydk::is_set(exp_match.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(template_id.yfilter)
	|| (max_threshold !=  nullptr && max_threshold->has_operation())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "curve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_index.is_set || is_set(absolute_index.yfilter)) leaf_name_data.push_back(absolute_index.get_name_leafdata());
    if (curve_id.is_set || is_set(curve_id.yfilter)) leaf_name_data.push_back(curve_id.get_name_leafdata());
    if (exp_match.is_set || is_set(exp_match.yfilter)) leaf_name_data.push_back(exp_match.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (template_id.is_set || is_set(template_id.yfilter)) leaf_name_data.push_back(template_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-threshold")
    {
        if(max_threshold == nullptr)
        {
            max_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold>();
        }
        return max_threshold;
    }

    if(child_yang_name == "max-threshold-user-config")
    {
        if(max_threshold_user_config == nullptr)
        {
            max_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig>();
        }
        return max_threshold_user_config;
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold == nullptr)
        {
            min_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold>();
        }
        return min_threshold;
    }

    if(child_yang_name == "min-threshold-user-config")
    {
        if(min_threshold_user_config == nullptr)
        {
            min_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig>();
        }
        return min_threshold_user_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_threshold != nullptr)
    {
        children["max-threshold"] = max_threshold;
    }

    if(max_threshold_user_config != nullptr)
    {
        children["max-threshold-user-config"] = max_threshold_user_config;
    }

    if(min_threshold != nullptr)
    {
        children["min-threshold"] = min_threshold;
    }

    if(min_threshold_user_config != nullptr)
    {
        children["min-threshold-user-config"] = min_threshold_user_config;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-index")
    {
        absolute_index = value;
        absolute_index.value_namespace = name_space;
        absolute_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curve-id")
    {
        curve_id = value;
        curve_id.value_namespace = name_space;
        curve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-match")
    {
        exp_match = value;
        exp_match.value_namespace = name_space;
        exp_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-id")
    {
        template_id = value;
        template_id.value_namespace = name_space;
        template_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-index")
    {
        absolute_index.yfilter = yfilter;
    }
    if(value_path == "curve-id")
    {
        curve_id.yfilter = yfilter;
    }
    if(value_path == "exp-match")
    {
        exp_match.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "template-id")
    {
        template_id.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "max-threshold-user-config" || name == "min-threshold" || name == "min-threshold-user-config" || name == "absolute-index" || name == "curve-id" || name == "exp-match" || name == "match" || name == "template-id")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::MaxThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "max-threshold"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::~MaxThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::MaxThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "max-threshold-user-config"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::~MaxThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold-user-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::MinThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "min-threshold"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::~MinThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::MinThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "min-threshold-user-config"; yang_parent_name = "curve"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::~MinThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold-user-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}


}
}

