
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_93.hpp"
#include "Cisco_IOS_XE_native_94.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::has_data() const
{
    return set_prec_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformSetPrecTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::~ConformSetPrecTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformSetQosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::~ConformSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformSetQosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::~ConformSetQosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_data() const
{
    return set_qos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::~ConformTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::ConformAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ConformTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedDrop()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::~ExceedDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::ExceedAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDrop::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedDscp()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-dscp"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::~ExceedDscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::ExceedAction()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::has_data() const
{
    return dscp.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedDscp::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedSetClpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::~ExceedSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::ExceedAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedSetCosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::~ExceedSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::ExceedAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedSetDiscardClassTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::~ExceedSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::ExceedAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedSetDscpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::~ExceedSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::ExceedAction()
    :
    set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>())
{
    set_dscp_transmit->parent = this;

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::has_data() const
{
    return (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-dscp-transmit")
    {
        if(set_dscp_transmit == nullptr)
        {
            set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>();
        }
        return set_dscp_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set_dscp_transmit != nullptr)
    {
        children["set-dscp-transmit"] = set_dscp_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::SetDscpTransmit()
    :
    dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>())
{
    dscp->parent = this;

    yang_name = "set-dscp-transmit"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::~SetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Dscp()
    :
    table{YType::enumeration, "table"}
{

    yang_name = "dscp"; yang_parent_name = "set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedSetDscpTransmitTable()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::~ExceedSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::ExceedAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedSetFrdeTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::~ExceedSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::ExceedAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedSetMplsExpImpositionTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::~ExceedSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedSetMplsExpTopmostTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::~ExceedSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedSetPrecTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::~ExceedSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::ExceedAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetPrecTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedSetQosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::~ExceedSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::ExceedAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetQosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::~ExceedTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::ExceedAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateDrop()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::~ViolateDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::ViolateAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateDrop::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateSetClpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::~ViolateSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::ViolateAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetClpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateSetCosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::~ViolateSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::ViolateAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetCosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateSetDiscardClassTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::~ViolateSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::ViolateAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateSetDscpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::~ViolateSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::ViolateAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetDscpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateSetFrdeTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::~ViolateSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::ViolateAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateSetMplsExpImpositionTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::~ViolateSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateSetMplsExpTopmostTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::~ViolateSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateSetPrecTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::~ViolateSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::ViolateAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetPrecTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateSetQosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::~ViolateSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::ViolateAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateSetQosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::~ViolateTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::ViolateAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ViolateTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Priority::Priority()
    :
    burst{YType::uint32, "burst"},
    kilo_bits{YType::uint32, "kilo-bits"},
    level{YType::uint8, "level"},
    percent{YType::uint16, "percent"}
{

    yang_name = "priority"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Priority::~Priority()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Priority::has_data() const
{
    return burst.is_set
	|| kilo_bits.is_set
	|| level.is_set
	|| percent.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(kilo_bits.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (kilo_bits.is_set || is_set(kilo_bits.yfilter)) leaf_name_data.push_back(kilo_bits.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilo-bits")
    {
        kilo_bits = value;
        kilo_bits.value_namespace = name_space;
        kilo_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "kilo-bits")
    {
        kilo_bits.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "kilo-bits" || name == "level" || name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::QueueBuffers()
    :
    ratio{YType::uint8, "ratio"}
{

    yang_name = "queue-buffers"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::~QueueBuffers()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::has_data() const
{
    return ratio.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ratio.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ratio.is_set || is_set(ratio.yfilter)) leaf_name_data.push_back(ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ratio")
    {
        ratio = value;
        ratio.value_namespace = name_space;
        ratio.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ratio")
    {
        ratio.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ratio")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimit()
    :
    queue_limit_type{YType::enumeration, "queue-limit-type"},
    queue_limit_value{YType::uint32, "queue-limit-value"}
{

    yang_name = "queue-limit"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::~QueueLimit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::has_data() const
{
    return queue_limit_type.is_set
	|| queue_limit_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_limit_type.yfilter)
	|| ydk::is_set(queue_limit_value.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_limit_type.is_set || is_set(queue_limit_type.yfilter)) leaf_name_data.push_back(queue_limit_type.get_name_leafdata());
    if (queue_limit_value.is_set || is_set(queue_limit_value.yfilter)) leaf_name_data.push_back(queue_limit_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-limit-type")
    {
        queue_limit_type = value;
        queue_limit_type.value_namespace = name_space;
        queue_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-limit-value")
    {
        queue_limit_value = value;
        queue_limit_value.value_namespace = name_space;
        queue_limit_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-limit-type")
    {
        queue_limit_type.yfilter = yfilter;
    }
    if(value_path == "queue-limit-value")
    {
        queue_limit_value.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-limit-type" || name == "queue-limit-value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::QueueLimitDscp()
{

    yang_name = "queue-limit-dscp"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::~QueueLimitDscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::has_data() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::has_operation() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        for(auto const & c : dscp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp>();
        c->parent = this;
        dscp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dscp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    dscp_val1{YType::str, "dscp-val1"},
    percent{YType::uint8, "percent"},
    values{YType::empty, "values"}
{

    yang_name = "dscp"; yang_parent_name = "queue-limit-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::has_data() const
{
    return dscp_val.is_set
	|| dscp_val1.is_set
	|| percent.is_set
	|| values.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(dscp_val1.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(values.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp" <<"[dscp-val='" <<dscp_val <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (dscp_val1.is_set || is_set(dscp_val1.yfilter)) leaf_name_data.push_back(dscp_val1.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (values.is_set || is_set(values.yfilter)) leaf_name_data.push_back(values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-val1")
    {
        dscp_val1 = value;
        dscp_val1.value_namespace = name_space;
        dscp_val1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "values")
    {
        values = value;
        values.value_namespace = name_space;
        values.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "dscp-val1")
    {
        dscp_val1.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "values")
    {
        values.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-val" || name == "dscp-val1" || name == "percent" || name == "values")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::RandomDetect()
    :
    discard_class_based{YType::empty, "discard-class-based"},
    dscp_based{YType::empty, "dscp-based"},
    ecn{YType::empty, "ecn"},
    exponential_weighting_constant{YType::uint16, "exponential-weighting-constant"},
    prec_based{YType::empty, "prec-based"}
    	,
    aggregate(nullptr) // presence node
	,discard_class(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass>())
	,precedence(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence>())
{
    discard_class->parent = this;
    precedence->parent = this;

    yang_name = "random-detect"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::~RandomDetect()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::has_data() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_data())
            return true;
    }
    return discard_class_based.is_set
	|| dscp_based.is_set
	|| ecn.is_set
	|| exponential_weighting_constant.is_set
	|| prec_based.is_set
	|| (aggregate !=  nullptr && aggregate->has_data())
	|| (discard_class !=  nullptr && discard_class->has_data())
	|| (precedence !=  nullptr && precedence->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::has_operation() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(discard_class_based.yfilter)
	|| ydk::is_set(dscp_based.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(exponential_weighting_constant.yfilter)
	|| ydk::is_set(prec_based.yfilter)
	|| (aggregate !=  nullptr && aggregate->has_operation())
	|| (discard_class !=  nullptr && discard_class->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random-detect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_class_based.is_set || is_set(discard_class_based.yfilter)) leaf_name_data.push_back(discard_class_based.get_name_leafdata());
    if (dscp_based.is_set || is_set(dscp_based.yfilter)) leaf_name_data.push_back(dscp_based.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (exponential_weighting_constant.is_set || is_set(exponential_weighting_constant.yfilter)) leaf_name_data.push_back(exponential_weighting_constant.get_name_leafdata());
    if (prec_based.is_set || is_set(prec_based.yfilter)) leaf_name_data.push_back(prec_based.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate>();
        }
        return aggregate;
    }

    if(child_yang_name == "discard-class")
    {
        if(discard_class == nullptr)
        {
            discard_class = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass>();
        }
        return discard_class;
    }

    if(child_yang_name == "dscp")
    {
        for(auto const & c : dscp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp>();
        c->parent = this;
        dscp.push_back(c);
        return c;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence>();
        }
        return precedence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    if(discard_class != nullptr)
    {
        children["discard-class"] = discard_class;
    }

    for (auto const & c : dscp)
    {
        children[c->get_segment_path()] = c;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard-class-based")
    {
        discard_class_based = value;
        discard_class_based.value_namespace = name_space;
        discard_class_based.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-based")
    {
        dscp_based = value;
        dscp_based.value_namespace = name_space;
        dscp_based.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exponential-weighting-constant")
    {
        exponential_weighting_constant = value;
        exponential_weighting_constant.value_namespace = name_space;
        exponential_weighting_constant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec-based")
    {
        prec_based = value;
        prec_based.value_namespace = name_space;
        prec_based.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard-class-based")
    {
        discard_class_based.yfilter = yfilter;
    }
    if(value_path == "dscp-based")
    {
        dscp_based.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "exponential-weighting-constant")
    {
        exponential_weighting_constant.yfilter = yfilter;
    }
    if(value_path == "prec-based")
    {
        prec_based.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate" || name == "discard-class" || name == "dscp" || name == "precedence" || name == "discard-class-based" || name == "dscp-based" || name == "ecn" || name == "exponential-weighting-constant" || name == "prec-based")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::Aggregate()
    :
    denominator{YType::uint32, "denominator"},
    mark_probability{YType::empty, "mark-probability"},
    maximum_thresh{YType::uint32, "maximum-thresh"},
    minimum_thresh{YType::uint32, "minimum-thresh"}
{

    yang_name = "aggregate"; yang_parent_name = "random-detect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::~Aggregate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::has_data() const
{
    return denominator.is_set
	|| mark_probability.is_set
	|| maximum_thresh.is_set
	|| minimum_thresh.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(denominator.yfilter)
	|| ydk::is_set(mark_probability.yfilter)
	|| ydk::is_set(maximum_thresh.yfilter)
	|| ydk::is_set(minimum_thresh.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (denominator.is_set || is_set(denominator.yfilter)) leaf_name_data.push_back(denominator.get_name_leafdata());
    if (mark_probability.is_set || is_set(mark_probability.yfilter)) leaf_name_data.push_back(mark_probability.get_name_leafdata());
    if (maximum_thresh.is_set || is_set(maximum_thresh.yfilter)) leaf_name_data.push_back(maximum_thresh.get_name_leafdata());
    if (minimum_thresh.is_set || is_set(minimum_thresh.yfilter)) leaf_name_data.push_back(minimum_thresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "denominator")
    {
        denominator = value;
        denominator.value_namespace = name_space;
        denominator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-probability")
    {
        mark_probability = value;
        mark_probability.value_namespace = name_space;
        mark_probability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-thresh")
    {
        maximum_thresh = value;
        maximum_thresh.value_namespace = name_space;
        maximum_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-thresh")
    {
        minimum_thresh = value;
        minimum_thresh.value_namespace = name_space;
        minimum_thresh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "denominator")
    {
        denominator.yfilter = yfilter;
    }
    if(value_path == "mark-probability")
    {
        mark_probability.yfilter = yfilter;
    }
    if(value_path == "maximum-thresh")
    {
        maximum_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-thresh")
    {
        minimum_thresh.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "denominator" || name == "mark-probability" || name == "maximum-thresh" || name == "minimum-thresh")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::DiscardClass()
    :
    dclass{YType::uint16, "dclass"},
    denominator{YType::uint32, "denominator"},
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "discard-class"; yang_parent_name = "random-detect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::~DiscardClass()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::has_data() const
{
    return dclass.is_set
	|| denominator.is_set
	|| max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dclass.yfilter)
	|| ydk::is_set(denominator.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dclass.is_set || is_set(dclass.yfilter)) leaf_name_data.push_back(dclass.get_name_leafdata());
    if (denominator.is_set || is_set(denominator.yfilter)) leaf_name_data.push_back(denominator.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dclass")
    {
        dclass = value;
        dclass.value_namespace = name_space;
        dclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denominator")
    {
        denominator = value;
        denominator.value_namespace = name_space;
        denominator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dclass")
    {
        dclass.yfilter = yfilter;
    }
    if(value_path == "denominator")
    {
        denominator.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dclass" || name == "denominator" || name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    denominator{YType::uint32, "denominator"},
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "dscp"; yang_parent_name = "random-detect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::has_data() const
{
    return dscp_val.is_set
	|| denominator.is_set
	|| max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(denominator.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp" <<"[dscp-val='" <<dscp_val <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (denominator.is_set || is_set(denominator.yfilter)) leaf_name_data.push_back(denominator.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denominator")
    {
        denominator = value;
        denominator.value_namespace = name_space;
        denominator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "denominator")
    {
        denominator.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-val" || name == "denominator" || name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::Precedence()
    :
    denominator{YType::uint32, "denominator"},
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"},
    prec{YType::str, "prec"}
{

    yang_name = "precedence"; yang_parent_name = "random-detect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::~Precedence()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::has_data() const
{
    return denominator.is_set
	|| max_threshold.is_set
	|| min_threshold.is_set
	|| prec.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(denominator.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter)
	|| ydk::is_set(prec.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (denominator.is_set || is_set(denominator.yfilter)) leaf_name_data.push_back(denominator.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (prec.is_set || is_set(prec.yfilter)) leaf_name_data.push_back(prec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "denominator")
    {
        denominator = value;
        denominator.value_namespace = name_space;
        denominator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec")
    {
        prec = value;
        prec.value_namespace = name_space;
        prec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "denominator")
    {
        denominator.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
    if(value_path == "prec")
    {
        prec.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "denominator" || name == "max-threshold" || name == "min-threshold" || name == "prec")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Set()
    :
    atm_clp{YType::empty, "atm-clp"},
    discard_class{YType::uint16, "discard-class"},
    fr_de{YType::empty, "fr-de"}
    	,
    cos(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Cos>())
	,dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp>())
	,ip(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip>())
	,mpls(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls>())
	,qos_group(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup>())
{
    cos->parent = this;
    dscp->parent = this;
    ip->parent = this;
    mpls->parent = this;
    qos_group->parent = this;

    yang_name = "set"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::~Set()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::has_data() const
{
    return atm_clp.is_set
	|| discard_class.is_set
	|| fr_de.is_set
	|| (cos !=  nullptr && cos->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_clp.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| (cos !=  nullptr && cos->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp.is_set || is_set(atm_clp.yfilter)) leaf_name_data.push_back(atm_clp.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.yfilter)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos")
    {
        if(cos == nullptr)
        {
            cos = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Cos>();
        }
        return cos;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup>();
        }
        return qos_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos != nullptr)
    {
        children["cos"] = cos;
    }

    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(qos_group != nullptr)
    {
        children["qos-group"] = qos_group;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-clp")
    {
        atm_clp = value;
        atm_clp.value_namespace = name_space;
        atm_clp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
        discard_class.value_namespace = name_space;
        discard_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-clp")
    {
        atm_clp.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "dscp" || name == "ip" || name == "mpls" || name == "qos-group" || name == "atm-clp" || name == "discard-class" || name == "fr-de")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Cos()
    :
    pack{YType::enumeration, "pack"},
    table{YType::str, "table"},
    user_priority{YType::empty, "user-priority"},
    val{YType::uint16, "val"}
{

    yang_name = "cos"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::~Cos()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::has_data() const
{
    return pack.is_set
	|| table.is_set
	|| user_priority.is_set
	|| val.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pack.yfilter)
	|| ydk::is_set(table.yfilter)
	|| ydk::is_set(user_priority.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pack.is_set || is_set(pack.yfilter)) leaf_name_data.push_back(pack.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pack")
    {
        pack = value;
        pack.value_namespace = name_space;
        pack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pack")
    {
        pack.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pack" || name == "table" || name == "user-priority" || name == "val")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    tunnel{YType::empty, "tunnel"}
    	,
    dscp(nullptr) // presence node
{

    yang_name = "dscp"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::has_data() const
{
    return dscp_val.is_set
	|| tunnel.is_set
	|| (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "dscp-val" || name == "tunnel")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::Dscp_()
    :
    table{YType::str, "table"}
{

    yang_name = "dscp"; yang_parent_name = "dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::~Dscp_()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Ip()
    :
    dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp>())
	,precedence(nullptr) // presence node
{
    dscp->parent = this;

    yang_name = "ip"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::~Ip()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data())
	|| (precedence !=  nullptr && precedence->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence>();
        }
        return precedence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    tunnel{YType::empty, "tunnel"}
{

    yang_name = "dscp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::has_data() const
{
    return dscp_val.is_set
	|| tunnel.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-val" || name == "tunnel")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::Precedence()
    :
    precedence_val{YType::str, "precedence-val"}
{

    yang_name = "precedence"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::~Precedence()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::has_data() const
{
    return precedence_val.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(precedence_val.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence_val.is_set || is_set(precedence_val.yfilter)) leaf_name_data.push_back(precedence_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence-val")
    {
        precedence_val = value;
        precedence_val.value_namespace = name_space;
        precedence_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence-val")
    {
        precedence_val.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence-val")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::~Mpls()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Experimental()
    :
    imposition(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition>())
	,topmost(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost>())
{
    imposition->parent = this;
    topmost->parent = this;

    yang_name = "experimental"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::has_data() const
{
    return (imposition !=  nullptr && imposition->has_data())
	|| (topmost !=  nullptr && topmost->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::has_operation() const
{
    return is_set(yfilter)
	|| (imposition !=  nullptr && imposition->has_operation())
	|| (topmost !=  nullptr && topmost->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imposition")
    {
        if(imposition == nullptr)
        {
            imposition = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition>();
        }
        return imposition;
    }

    if(child_yang_name == "topmost")
    {
        if(topmost == nullptr)
        {
            topmost = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost>();
        }
        return topmost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(imposition != nullptr)
    {
        children["imposition"] = imposition;
    }

    if(topmost != nullptr)
    {
        children["topmost"] = topmost;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imposition" || name == "topmost")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::Imposition()
    :
    exp_value{YType::uint8, "exp-value"}
{

    yang_name = "imposition"; yang_parent_name = "experimental"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::~Imposition()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::has_data() const
{
    return exp_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_value.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_value.is_set || is_set(exp_value.yfilter)) leaf_name_data.push_back(exp_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-value")
    {
        exp_value = value;
        exp_value.value_namespace = name_space;
        exp_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-value")
    {
        exp_value.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Imposition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::Topmost()
    :
    exp_value{YType::uint8, "exp-value"}
{

    yang_name = "topmost"; yang_parent_name = "experimental"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::~Topmost()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::has_data() const
{
    return exp_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_value.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topmost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_value.is_set || is_set(exp_value.yfilter)) leaf_name_data.push_back(exp_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-value")
    {
        exp_value = value;
        exp_value.value_namespace = name_space;
        exp_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-value")
    {
        exp_value.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Mpls::Experimental::Topmost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::QosGroup()
    :
    qos_group_value{YType::uint8, "qos-group-value"}
{

    yang_name = "qos-group"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::~QosGroup()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::has_data() const
{
    return qos_group_value.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_group_value.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_group_value.is_set || is_set(qos_group_value.yfilter)) leaf_name_data.push_back(qos_group_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-group-value")
    {
        qos_group_value = value;
        qos_group_value.value_namespace = name_space;
        qos_group_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-group-value")
    {
        qos_group_value.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::QosGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-group-value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Shape()
    :
    adaptive{YType::uint32, "adaptive"},
    fecn_adapt{YType::empty, "fecn-adapt"},
    max_buffers{YType::uint16, "max-buffers"}
    	,
    average(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average>())
	,fr_voice_adapt(nullptr) // presence node
{
    average->parent = this;

    yang_name = "shape"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::~Shape()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::has_data() const
{
    return adaptive.is_set
	|| fecn_adapt.is_set
	|| max_buffers.is_set
	|| (average !=  nullptr && average->has_data())
	|| (fr_voice_adapt !=  nullptr && fr_voice_adapt->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adaptive.yfilter)
	|| ydk::is_set(fecn_adapt.yfilter)
	|| ydk::is_set(max_buffers.yfilter)
	|| (average !=  nullptr && average->has_operation())
	|| (fr_voice_adapt !=  nullptr && fr_voice_adapt->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adaptive.is_set || is_set(adaptive.yfilter)) leaf_name_data.push_back(adaptive.get_name_leafdata());
    if (fecn_adapt.is_set || is_set(fecn_adapt.yfilter)) leaf_name_data.push_back(fecn_adapt.get_name_leafdata());
    if (max_buffers.is_set || is_set(max_buffers.yfilter)) leaf_name_data.push_back(max_buffers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average")
    {
        if(average == nullptr)
        {
            average = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average>();
        }
        return average;
    }

    if(child_yang_name == "fr-voice-adapt")
    {
        if(fr_voice_adapt == nullptr)
        {
            fr_voice_adapt = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt>();
        }
        return fr_voice_adapt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average != nullptr)
    {
        children["average"] = average;
    }

    if(fr_voice_adapt != nullptr)
    {
        children["fr-voice-adapt"] = fr_voice_adapt;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adaptive")
    {
        adaptive = value;
        adaptive.value_namespace = name_space;
        adaptive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecn-adapt")
    {
        fecn_adapt = value;
        fecn_adapt.value_namespace = name_space;
        fecn_adapt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-buffers")
    {
        max_buffers = value;
        max_buffers.value_namespace = name_space;
        max_buffers.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adaptive")
    {
        adaptive.yfilter = yfilter;
    }
    if(value_path == "fecn-adapt")
    {
        fecn_adapt.yfilter = yfilter;
    }
    if(value_path == "max-buffers")
    {
        max_buffers.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "fr-voice-adapt" || name == "adaptive" || name == "fecn-adapt" || name == "max-buffers")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Average()
    :
    bit_rate{YType::uint64, "bit-rate"},
    bits_per_interval_excess{YType::uint32, "bits-per-interval-excess"},
    bits_per_interval_sustained{YType::uint32, "bits-per-interval-sustained"},
    burst_size_sustained{YType::uint16, "burst-size-sustained"},
    ms{YType::empty, "ms"},
    percent{YType::uint8, "percent"}
    	,
    account(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account>())
	,bse(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse>())
{
    account->parent = this;
    bse->parent = this;

    yang_name = "average"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::~Average()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::has_data() const
{
    return bit_rate.is_set
	|| bits_per_interval_excess.is_set
	|| bits_per_interval_sustained.is_set
	|| burst_size_sustained.is_set
	|| ms.is_set
	|| percent.is_set
	|| (account !=  nullptr && account->has_data())
	|| (bse !=  nullptr && bse->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(bits_per_interval_excess.yfilter)
	|| ydk::is_set(bits_per_interval_sustained.yfilter)
	|| ydk::is_set(burst_size_sustained.yfilter)
	|| ydk::is_set(ms.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| (account !=  nullptr && account->has_operation())
	|| (bse !=  nullptr && bse->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (bits_per_interval_excess.is_set || is_set(bits_per_interval_excess.yfilter)) leaf_name_data.push_back(bits_per_interval_excess.get_name_leafdata());
    if (bits_per_interval_sustained.is_set || is_set(bits_per_interval_sustained.yfilter)) leaf_name_data.push_back(bits_per_interval_sustained.get_name_leafdata());
    if (burst_size_sustained.is_set || is_set(burst_size_sustained.yfilter)) leaf_name_data.push_back(burst_size_sustained.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account>();
        }
        return account;
    }

    if(child_yang_name == "bse")
    {
        if(bse == nullptr)
        {
            bse = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse>();
        }
        return bse;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account != nullptr)
    {
        children["account"] = account;
    }

    if(bse != nullptr)
    {
        children["bse"] = bse;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bits-per-interval-excess")
    {
        bits_per_interval_excess = value;
        bits_per_interval_excess.value_namespace = name_space;
        bits_per_interval_excess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bits-per-interval-sustained")
    {
        bits_per_interval_sustained = value;
        bits_per_interval_sustained.value_namespace = name_space;
        bits_per_interval_sustained.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-size-sustained")
    {
        burst_size_sustained = value;
        burst_size_sustained.value_namespace = name_space;
        burst_size_sustained.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "bits-per-interval-excess")
    {
        bits_per_interval_excess.yfilter = yfilter;
    }
    if(value_path == "bits-per-interval-sustained")
    {
        bits_per_interval_sustained.yfilter = yfilter;
    }
    if(value_path == "burst-size-sustained")
    {
        burst_size_sustained.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account" || name == "bse" || name == "bit-rate" || name == "bits-per-interval-excess" || name == "bits-per-interval-sustained" || name == "burst-size-sustained" || name == "ms" || name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::Account()
    :
    user_defined{YType::int32, "user-defined"}
{

    yang_name = "account"; yang_parent_name = "average"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::~Account()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::has_data() const
{
    return user_defined.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_defined.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_defined.is_set || is_set(user_defined.yfilter)) leaf_name_data.push_back(user_defined.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-defined")
    {
        user_defined = value;
        user_defined.value_namespace = name_space;
        user_defined.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-defined")
    {
        user_defined.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-defined")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::Bse()
    :
    burst_size_excess{YType::uint16, "burst-size-excess"},
    ms{YType::empty, "ms"}
{

    yang_name = "bse"; yang_parent_name = "average"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::~Bse()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::has_data() const
{
    return burst_size_excess.is_set
	|| ms.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst_size_excess.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size_excess.is_set || is_set(burst_size_excess.yfilter)) leaf_name_data.push_back(burst_size_excess.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst-size-excess")
    {
        burst_size_excess = value;
        burst_size_excess.value_namespace = name_space;
        burst_size_excess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst-size-excess")
    {
        burst_size_excess.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::Bse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst-size-excess" || name == "ms")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::FrVoiceAdapt()
    :
    deactivation{YType::uint16, "deactivation"}
{

    yang_name = "fr-voice-adapt"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::~FrVoiceAdapt()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::has_data() const
{
    return deactivation.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deactivation.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-voice-adapt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deactivation.is_set || is_set(deactivation.yfilter)) leaf_name_data.push_back(deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deactivation")
    {
        deactivation = value;
        deactivation.value_namespace = name_space;
        deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deactivation")
    {
        deactivation.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::FrVoiceAdapt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deactivation")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::AppnavPolicy()
    :
    monitor_load{YType::enumeration, "monitor-load"},
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "appnav-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::~AppnavPolicy()
{
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::has_data() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_data())
            return true;
    }
    return monitor_load.is_set
	|| pass_through.is_set;
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::has_operation() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(monitor_load.yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::AppnavPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appnav-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::AppnavPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_load.is_set || is_set(monitor_load.yfilter)) leaf_name_data.push_back(monitor_load.get_name_leafdata());
    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::AppnavPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute")
    {
        for(auto const & c : distribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute>();
        c->parent = this;
        distribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::AppnavPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-load")
    {
        monitor_load = value;
        monitor_load.value_namespace = name_space;
        monitor_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-load")
    {
        monitor_load.yfilter = yfilter;
    }
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute" || name == "monitor-load" || name == "pass-through")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::Distribute()
    :
    service_node_group{YType::str, "service-node-group"},
    insert_before{YType::str, "insert-before"}
{

    yang_name = "distribute"; yang_parent_name = "appnav-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::~Distribute()
{
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::has_data() const
{
    return service_node_group.is_set
	|| insert_before.is_set;
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(insert_before.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute" <<"[service-node-group='" <<service_node_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-node-group")
    {
        service_node_group = value;
        service_node_group.value_namespace = name_space;
        service_node_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-node-group" || name == "insert-before")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::InspectPolice::InspectPolice()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice::Police>())
{
    police->parent = this;

    yang_name = "inspect-police"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::InspectPolice::~InspectPolice()
{
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::InspectPolice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::InspectPolice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::InspectPolice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::InspectPolice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::InspectPolice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::InspectPolice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::InspectPolice::Police::Police()
    :
    burst{YType::uint32, "burst"},
    rate{YType::uint32, "rate"}
{

    yang_name = "police"; yang_parent_name = "inspect-police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::InspectPolice::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::Police::has_data() const
{
    return burst.is_set
	|| rate.is_set;
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::InspectPolice::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::InspectPolice::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "rate")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::PmPolicy()
    :
    flow(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Flow>())
	,monitor(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor>())
{
    flow->parent = this;
    monitor->parent = this;

    yang_name = "pm-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::~PmPolicy()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::has_data() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_data())
            return true;
    }
    return (flow !=  nullptr && flow->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::has_operation() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "react")
    {
        for(auto const & c : react)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React>();
        c->parent = this;
        react.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    for (auto const & c : react)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "monitor" || name == "react")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Flow::Flow()
    :
    monitor{YType::str, "monitor"}
{

    yang_name = "flow"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Flow::~Flow()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Flow::has_data() const
{
    return monitor.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Monitor()
    :
    metric(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric>())
{
    metric->parent = this;

    yang_name = "monitor"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::~Monitor()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::has_data() const
{
    return (metric !=  nullptr && metric->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Metric()
    :
    rtp(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp>())
{
    rtp->parent = this;

    yang_name = "metric"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::~Metric()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::has_data() const
{
    return (rtp !=  nullptr && rtp->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::has_operation() const
{
    return is_set(yfilter)
	|| (rtp !=  nullptr && rtp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp>();
        }
        return rtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::Rtp()
{

    yang_name = "rtp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::~Rtp()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::ClockRate()
    :
    number{YType::str, "number"},
    frequency{YType::uint32, "frequency"}
{

    yang_name = "clock-rate"; yang_parent_name = "rtp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::~ClockRate()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_data() const
{
    return number.is_set
	|| frequency.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "frequency")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::React()
    :
    id{YType::uint16, "id"},
    description{YType::str, "description"},
    mode{YType::enumeration, "mode"}
    	,
    action(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Action>())
	,alarm(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm>())
	,threshold(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold>())
{
    action->parent = this;
    alarm->parent = this;
    threshold->parent = this;

    yang_name = "react"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::~React()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::has_data() const
{
    return id.is_set
	|| description.is_set
	|| mode.is_set
	|| (action !=  nullptr && action->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Action>();
        }
        return action;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "alarm" || name == "threshold" || name == "id" || name == "description" || name == "mode")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::Action()
    :
    snmp{YType::empty, "snmp"},
    syslog{YType::empty, "syslog"}
{

    yang_name = "action"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::~Action()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::has_data() const
{
    return snmp.is_set
	|| syslog.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(syslog.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "syslog")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Alarm()
    :
    severity{YType::enumeration, "severity"}
    	,
    type(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type>())
{
    type->parent = this;

    yang_name = "alarm"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::~Alarm()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::has_data() const
{
    return severity.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "severity")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Type()
    :
    discrete{YType::empty, "discrete"}
    	,
    grouped(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped>())
{
    grouped->parent = this;

    yang_name = "type"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::~Type()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::has_data() const
{
    return discrete.is_set
	|| (grouped !=  nullptr && grouped->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discrete.yfilter)
	|| (grouped !=  nullptr && grouped->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discrete.is_set || is_set(discrete.yfilter)) leaf_name_data.push_back(discrete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grouped")
    {
        if(grouped == nullptr)
        {
            grouped = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped>();
        }
        return grouped;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(grouped != nullptr)
    {
        children["grouped"] = grouped;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discrete")
    {
        discrete = value;
        discrete.value_namespace = name_space;
        discrete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discrete")
    {
        discrete.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grouped" || name == "discrete")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::Grouped()
    :
    count{YType::uint16, "count"},
    percent{YType::uint8, "percent"}
{

    yang_name = "grouped"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::~Grouped()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::has_data() const
{
    return count.is_set
	|| percent.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grouped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Threshold()
    :
    value_(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_>())
{
    value_->parent = this;

    yang_name = "threshold"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::~Threshold()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::has_data() const
{
    return (value_ !=  nullptr && value_->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Value_()
    :
    ge{YType::str, "ge"},
    gt{YType::str, "gt"},
    le{YType::str, "le"},
    lt{YType::str, "lt"}
    	,
    range(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range>())
{
    range->parent = this;

    yang_name = "value"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::~Value_()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::has_data() const
{
    return ge.is_set
	|| gt.is_set
	|| le.is_set
	|| lt.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(le.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "ge" || name == "gt" || name == "le" || name == "lt")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::Range()
    :
    high{YType::str, "high"},
    low{YType::str, "low"}
{

    yang_name = "range"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::~Range()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::Policy_::Policy_()
    :
    action{YType::enumeration, "action"},
    log{YType::empty, "log"},
    parameter_map{YType::str, "parameter-map"}
    	,
    dpi(std::make_shared<Native::Policy::PolicyMap::Class_::Policy_::Dpi>())
{
    dpi->parent = this;

    yang_name = "policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::Policy_::~Policy_()
{
}

bool Native::Policy::PolicyMap::Class_::Policy_::has_data() const
{
    return action.is_set
	|| log.is_set
	|| parameter_map.is_set
	|| (dpi !=  nullptr && dpi->has_data());
}

bool Native::Policy::PolicyMap::Class_::Policy_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(parameter_map.yfilter)
	|| (dpi !=  nullptr && dpi->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::Policy_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::Policy_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.yfilter)) leaf_name_data.push_back(parameter_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::Policy_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dpi")
    {
        if(dpi == nullptr)
        {
            dpi = std::make_shared<Native::Policy::PolicyMap::Class_::Policy_::Dpi>();
        }
        return dpi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::Policy_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dpi != nullptr)
    {
        children["dpi"] = dpi;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::Policy_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
        parameter_map.value_namespace = name_space;
        parameter_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::Policy_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "parameter-map")
    {
        parameter_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::Policy_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpi" || name == "action" || name == "log" || name == "parameter-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::Policy_::Dpi::Dpi()
    :
    policy_map{YType::str, "policy-map"},
    type{YType::enumeration, "type"}
{

    yang_name = "dpi"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::Policy_::Dpi::~Dpi()
{
}

bool Native::Policy::PolicyMap::Class_::Policy_::Dpi::has_data() const
{
    return policy_map.is_set
	|| type.is_set;
}

bool Native::Policy::PolicyMap::Class_::Policy_::Dpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map.is_set || is_set(policy_map.yfilter)) leaf_name_data.push_back(policy_map.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::Policy_::Dpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map")
    {
        policy_map = value;
        policy_map.value_namespace = name_space;
        policy_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::Policy_::Dpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map")
    {
        policy_map.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::Policy_::Dpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map" || name == "type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::Event()
    :
    event_type{YType::enumeration, "event-type"},
    match_type{YType::enumeration, "match-type"}
{

    yang_name = "event"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::~Event()
{
}

bool Native::Policy::PolicyMap::Event::has_data() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_data())
            return true;
    }
    return event_type.is_set
	|| match_type.is_set;
}

bool Native::Policy::PolicyMap::Event::has_operation() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(match_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[event-type='" <<event_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-number")
    {
        for(auto const & c : class_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber>();
        c->parent = this;
        class_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "event-type" || name == "match-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ClassNumber()
    :
    number{YType::uint8, "number"},
    class_{YType::str, "class"},
    execution_type{YType::enumeration, "execution-type"}
{

    yang_name = "class-number"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::~ClassNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_data() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_data())
            return true;
    }
    return number.is_set
	|| class_.is_set
	|| execution_type.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_operation() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(execution_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (execution_type.is_set || is_set(execution_type.yfilter)) leaf_name_data.push_back(execution_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-number")
    {
        for(auto const & c : action_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber>();
        c->parent = this;
        action_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "execution-type")
    {
        execution_type = value;
        execution_type.value_namespace = name_space;
        execution_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "execution-type")
    {
        execution_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-number" || name == "number" || name == "class" || name == "execution-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::ActionNumber()
    :
    number{YType::uint8, "number"},
    authentication_restart{YType::uint16, "authentication-restart"},
    authorize{YType::empty, "authorize"},
    clear_session{YType::empty, "clear-session"}
    	,
    activate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>())
	,authenticate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>())
	,pause(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>())
	,resume(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>())
	,terminate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>())
{
    activate->parent = this;
    authenticate->parent = this;
    pause->parent = this;
    resume->parent = this;
    terminate->parent = this;

    yang_name = "action-number"; yang_parent_name = "class-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::~ActionNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_data() const
{
    return number.is_set
	|| authentication_restart.is_set
	|| authorize.is_set
	|| clear_session.is_set
	|| (activate !=  nullptr && activate->has_data())
	|| (authenticate !=  nullptr && authenticate->has_data())
	|| (pause !=  nullptr && pause->has_data())
	|| (resume !=  nullptr && resume->has_data())
	|| (terminate !=  nullptr && terminate->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(authentication_restart.yfilter)
	|| ydk::is_set(authorize.yfilter)
	|| ydk::is_set(clear_session.yfilter)
	|| (activate !=  nullptr && activate->has_operation())
	|| (authenticate !=  nullptr && authenticate->has_operation())
	|| (pause !=  nullptr && pause->has_operation())
	|| (resume !=  nullptr && resume->has_operation())
	|| (terminate !=  nullptr && terminate->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (authentication_restart.is_set || is_set(authentication_restart.yfilter)) leaf_name_data.push_back(authentication_restart.get_name_leafdata());
    if (authorize.is_set || is_set(authorize.yfilter)) leaf_name_data.push_back(authorize.get_name_leafdata());
    if (clear_session.is_set || is_set(clear_session.yfilter)) leaf_name_data.push_back(clear_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activate")
    {
        if(activate == nullptr)
        {
            activate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>();
        }
        return activate;
    }

    if(child_yang_name == "authenticate")
    {
        if(authenticate == nullptr)
        {
            authenticate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>();
        }
        return authenticate;
    }

    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>();
        }
        return pause;
    }

    if(child_yang_name == "resume")
    {
        if(resume == nullptr)
        {
            resume = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>();
        }
        return resume;
    }

    if(child_yang_name == "terminate")
    {
        if(terminate == nullptr)
        {
            terminate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>();
        }
        return terminate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(activate != nullptr)
    {
        children["activate"] = activate;
    }

    if(authenticate != nullptr)
    {
        children["authenticate"] = authenticate;
    }

    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    if(resume != nullptr)
    {
        children["resume"] = resume;
    }

    if(terminate != nullptr)
    {
        children["terminate"] = terminate;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart = value;
        authentication_restart.value_namespace = name_space;
        authentication_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorize")
    {
        authorize = value;
        authorize.value_namespace = name_space;
        authorize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-session")
    {
        clear_session = value;
        clear_session.value_namespace = name_space;
        clear_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart.yfilter = yfilter;
    }
    if(value_path == "authorize")
    {
        authorize.yfilter = yfilter;
    }
    if(value_path == "clear-session")
    {
        clear_session.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activate" || name == "authenticate" || name == "pause" || name == "resume" || name == "terminate" || name == "number" || name == "authentication-restart" || name == "authorize" || name == "clear-session")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::Activate()
    :
    service_template{YType::str, "service-template"}
{

    yang_name = "activate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::~Activate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_data() const
{
    return service_template.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_template.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-template")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Authenticate()
    :
    using_(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_>())
{
    using_->parent = this;

    yang_name = "authenticate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::~Authenticate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_data() const
{
    return (using_ !=  nullptr && using_->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_operation() const
{
    return is_set(yfilter)
	|| (using_ !=  nullptr && using_->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "using")
    {
        if(using_ == nullptr)
        {
            using_ = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_>();
        }
        return using_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(using_ != nullptr)
    {
        children["using"] = using_;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "using")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Using_()
    :
    both{YType::empty, "both"},
    method{YType::enumeration, "method"},
    priority{YType::uint8, "priority"},
    retries{YType::uint8, "retries"},
    retry_time{YType::uint16, "retry-time"}
{

    yang_name = "using"; yang_parent_name = "authenticate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::~Using_()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::has_data() const
{
    return both.is_set
	|| method.is_set
	|| priority.is_set
	|| retries.is_set
	|| retry_time.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(retry_time.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "using";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (retry_time.is_set || is_set(retry_time.yfilter)) leaf_name_data.push_back(retry_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-time")
    {
        retry_time = value;
        retry_time.value_namespace = name_space;
        retry_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "retry-time")
    {
        retry_time.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "method" || name == "priority" || name == "retries" || name == "retry-time")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::Pause()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "pause"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::~Pause()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::Resume()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "resume"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::~Resume()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::Terminate()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "terminate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::~Terminate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::PortChannel::PortChannel()
    :
    auto_{YType::empty, "Cisco-IOS-XE-ethernet:auto"}
    	,
    load_balance(std::make_shared<Native::PortChannel::LoadBalance>())
	,load_balancing(std::make_shared<Native::PortChannel::LoadBalancing>())
{
    load_balance->parent = this;
    load_balancing->parent = this;

    yang_name = "port-channel"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PortChannel::~PortChannel()
{
}

bool Native::PortChannel::has_data() const
{
    return auto_.is_set
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data());
}

bool Native::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation());
}

std::string Native::PortChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-channel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::PortChannel::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::PortChannel::LoadBalancing>();
        }
        return load_balancing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(load_balancing != nullptr)
    {
        children["load-balancing"] = load_balancing;
    }

    return children;
}

void Native::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance" || name == "load-balancing" || name == "auto")
        return true;
    return false;
}

Native::PortChannel::LoadBalance::LoadBalance()
    :
    load_balance{YType::enumeration, "load-balance"}
    	,
    extended(nullptr) // presence node
{

    yang_name = "load-balance"; yang_parent_name = "port-channel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PortChannel::LoadBalance::~LoadBalance()
{
}

bool Native::PortChannel::LoadBalance::has_data() const
{
    return load_balance.is_set
	|| (extended !=  nullptr && extended->has_data());
}

bool Native::PortChannel::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| (extended !=  nullptr && extended->has_operation());
}

std::string Native::PortChannel::LoadBalance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        if(extended == nullptr)
        {
            extended = std::make_shared<Native::PortChannel::LoadBalance::Extended>();
        }
        return extended;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extended != nullptr)
    {
        children["extended"] = extended;
    }

    return children;
}

void Native::PortChannel::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "load-balance")
        return true;
    return false;
}

Native::PortChannel::LoadBalance::Extended::Extended()
    :
    extended{YType::enumeration, "extended"}
{

    yang_name = "extended"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PortChannel::LoadBalance::Extended::~Extended()
{
}

bool Native::PortChannel::LoadBalance::Extended::has_data() const
{
    for (auto const & leaf : extended.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::PortChannel::LoadBalance::Extended::has_operation() const
{
    for (auto const & leaf : extended.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::PortChannel::LoadBalance::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/Cisco-IOS-XE-ethernet:load-balance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalance::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalance::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto extended_name_datas = extended.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_name_datas.begin(), extended_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalance::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalance::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PortChannel::LoadBalance::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended.append(value);
    }
}

void Native::PortChannel::LoadBalance::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalance::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::PortChannel::LoadBalancing::LoadBalancing()
    :
    vlan_manual{YType::empty, "vlan-manual"}
{

    yang_name = "load-balancing"; yang_parent_name = "port-channel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PortChannel::LoadBalancing::~LoadBalancing()
{
}

bool Native::PortChannel::LoadBalancing::has_data() const
{
    return vlan_manual.is_set;
}

bool Native::PortChannel::LoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_manual.yfilter);
}

std::string Native::PortChannel::LoadBalancing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_manual.is_set || is_set(vlan_manual.yfilter)) leaf_name_data.push_back(vlan_manual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PortChannel::LoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-manual")
    {
        vlan_manual = value;
        vlan_manual.value_namespace = name_space;
        vlan_manual.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::LoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-manual")
    {
        vlan_manual.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-manual")
        return true;
    return false;
}

Native::Power::Power()
    :
    inputs{YType::uint8, "inputs"},
    max_min{YType::enumeration, "max-min"},
    redundancy_mode{YType::enumeration, "redundancy-mode"}
    	,
    inline_(nullptr) // presence node
{

    yang_name = "power"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::~Power()
{
}

bool Native::Power::has_data() const
{
    return inputs.is_set
	|| max_min.is_set
	|| redundancy_mode.is_set
	|| (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(max_min.yfilter)
	|| ydk::is_set(redundancy_mode.yfilter)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Power::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (max_min.is_set || is_set(max_min.yfilter)) leaf_name_data.push_back(max_min.get_name_leafdata());
    if (redundancy_mode.is_set || is_set(redundancy_mode.yfilter)) leaf_name_data.push_back(redundancy_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<Native::Power::Inline_>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inline_ != nullptr)
    {
        children["inline"] = inline_;
    }

    return children;
}

void Native::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-min")
    {
        max_min = value;
        max_min.value_namespace = name_space;
        max_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-mode")
    {
        redundancy_mode = value;
        redundancy_mode.value_namespace = name_space;
        redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "max-min")
    {
        max_min.yfilter = yfilter;
    }
    if(value_path == "redundancy-mode")
    {
        redundancy_mode.yfilter = yfilter;
    }
}

bool Native::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline" || name == "inputs" || name == "max-min" || name == "redundancy-mode")
        return true;
    return false;
}

Native::Power::Inline_::Inline_()
    :
    consumption(std::make_shared<Native::Power::Inline_::Consumption>())
	,logging(std::make_shared<Native::Power::Inline_::Logging>())
{
    consumption->parent = this;
    logging->parent = this;

    yang_name = "inline"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline_::~Inline_()
{
}

bool Native::Power::Inline_::has_data() const
{
    return (consumption !=  nullptr && consumption->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::Power::Inline_::has_operation() const
{
    return is_set(yfilter)
	|| (consumption !=  nullptr && consumption->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Power::Inline_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consumption")
    {
        if(consumption == nullptr)
        {
            consumption = std::make_shared<Native::Power::Inline_::Consumption>();
        }
        return consumption;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Power::Inline_::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(consumption != nullptr)
    {
        children["consumption"] = consumption;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::Power::Inline_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Power::Inline_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Power::Inline_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consumption" || name == "logging")
        return true;
    return false;
}

Native::Power::Inline_::Consumption::Consumption()
    :
    default_{YType::uint16, "default"}
{

    yang_name = "consumption"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline_::Consumption::~Consumption()
{
}

bool Native::Power::Inline_::Consumption::has_data() const
{
    return default_.is_set;
}

bool Native::Power::Inline_::Consumption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Power::Inline_::Consumption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline_::Consumption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consumption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline_::Consumption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline_::Consumption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline_::Consumption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Power::Inline_::Consumption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline_::Consumption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Power::Inline_::Consumption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Power::Inline_::Logging::Logging()
    :
    global{YType::empty, "global"}
{

    yang_name = "logging"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline_::Logging::~Logging()
{
}

bool Native::Power::Inline_::Logging::has_data() const
{
    return global.is_set;
}

bool Native::Power::Inline_::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Power::Inline_::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline_::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline_::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline_::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline_::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Power::Inline_::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline_::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Power::Inline_::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::Ppp::Ppp()
    :
    packet(std::make_shared<Native::Ppp::Packet>())
{
    packet->parent = this;

    yang_name = "ppp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ppp::~Ppp()
{
}

bool Native::Ppp::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Ppp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Ppp::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Ppp::Packet::Packet()
    :
    allow_time{YType::uint32, "allow_time"},
    block_time{YType::uint32, "block_time"},
    throttle{YType::uint32, "throttle"}
{

    yang_name = "packet"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ppp::Packet::~Packet()
{
}

bool Native::Ppp::Packet::has_data() const
{
    return allow_time.is_set
	|| block_time.is_set
	|| throttle.is_set;
}

bool Native::Ppp::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_time.yfilter)
	|| ydk::is_set(block_time.yfilter)
	|| ydk::is_set(throttle.yfilter);
}

std::string Native::Ppp::Packet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ppp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp:packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_time.is_set || is_set(allow_time.yfilter)) leaf_name_data.push_back(allow_time.get_name_leafdata());
    if (block_time.is_set || is_set(block_time.yfilter)) leaf_name_data.push_back(block_time.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ppp::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ppp::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ppp::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow_time")
    {
        allow_time = value;
        allow_time.value_namespace = name_space;
        allow_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_time")
    {
        block_time = value;
        block_time.value_namespace = name_space;
        block_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ppp::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow_time")
    {
        allow_time.yfilter = yfilter;
    }
    if(value_path == "block_time")
    {
        block_time.yfilter = yfilter;
    }
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
}

bool Native::Ppp::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow_time" || name == "block_time" || name == "throttle")
        return true;
    return false;
}

Native::Privilege::Privilege()
    :
    exec(std::make_shared<Native::Privilege::Exec>())
{
    exec->parent = this;

    yang_name = "privilege"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::~Privilege()
{
}

bool Native::Privilege::has_data() const
{
    return (exec !=  nullptr && exec->has_data());
}

bool Native::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Privilege::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Privilege::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Privilege::Exec::Exec()
{

    yang_name = "exec"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::Exec::~Exec()
{
}

bool Native::Privilege::Exec::has_data() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Privilege::Exec::has_operation() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Privilege::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/privilege/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        for(auto const & c : level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Privilege::Exec::Level>();
        c->parent = this;
        level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : level)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Privilege::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Privilege::Exec::Level::Level()
    :
    privilege{YType::uint8, "privilege"}
{

    yang_name = "level"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::Exec::Level::~Level()
{
}

bool Native::Privilege::Exec::Level::has_data() const
{
    for (std::size_t index=0; index<command_list.size(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return privilege.is_set;
}

bool Native::Privilege::Exec::Level::has_operation() const
{
    for (std::size_t index=0; index<command_list.size(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Privilege::Exec::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/privilege/exec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::Exec::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level" <<"[privilege='" <<privilege <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        for(auto const & c : command_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Privilege::Exec::Level::CommandList>();
        c->parent = this;
        command_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : command_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Privilege::Exec::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Exec::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Privilege::Exec::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list" || name == "privilege")
        return true;
    return false;
}

Native::Privilege::Exec::Level::CommandList::CommandList()
    :
    command{YType::str, "command"}
{

    yang_name = "command-list"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Privilege::Exec::Level::CommandList::~CommandList()
{
}

bool Native::Privilege::Exec::Level::CommandList::has_data() const
{
    return command.is_set;
}

bool Native::Privilege::Exec::Level::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Exec::Level::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list" <<"[command='" <<command <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::Level::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::Level::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::Level::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Privilege::Exec::Level::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Exec::Level::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Exec::Level::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Process::Process()
    :
    cpu(std::make_shared<Native::Process::Cpu>())
{
    cpu->parent = this;

    yang_name = "process"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::~Process()
{
}

bool Native::Process::has_data() const
{
    return (cpu !=  nullptr && cpu->has_data());
}

bool Native::Process::has_operation() const
{
    return is_set(yfilter)
	|| (cpu !=  nullptr && cpu->has_operation());
}

std::string Native::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Native::Process::Cpu>();
        }
        return cpu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpu != nullptr)
    {
        children["cpu"] = cpu;
    }

    return children;
}

void Native::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu")
        return true;
    return false;
}

Native::Process::Cpu::Cpu()
    :
    threshold(std::make_shared<Native::Process::Cpu::Threshold>())
{
    threshold->parent = this;

    yang_name = "cpu"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::~Cpu()
{
}

bool Native::Process::Cpu::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Process::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Process::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Process::Cpu::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Process::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Threshold()
    :
    type(std::make_shared<Native::Process::Cpu::Threshold::Type>())
{
    type->parent = this;

    yang_name = "threshold"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::~Threshold()
{
}

bool Native::Process::Cpu::Threshold::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Process::Cpu::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Process::Cpu::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Process::Cpu::Threshold::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Process::Cpu::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Type()
    :
    interrupt(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt>())
	,process(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_>())
	,total(std::make_shared<Native::Process::Cpu::Threshold::Type::Total>())
{
    interrupt->parent = this;
    process->parent = this;
    total->parent = this;

    yang_name = "type"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::~Type()
{
}

bool Native::Process::Cpu::Threshold::Type::has_data() const
{
    return (interrupt !=  nullptr && interrupt->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Native::Process::Cpu::Threshold::Type::has_operation() const
{
    return is_set(yfilter)
	|| (interrupt !=  nullptr && interrupt->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interrupt")
    {
        if(interrupt == nullptr)
        {
            interrupt = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt>();
        }
        return interrupt;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_>();
        }
        return process;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Process::Cpu::Threshold::Type::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interrupt != nullptr)
    {
        children["interrupt"] = interrupt;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt" || name == "process" || name == "total")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Interrupt()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising>())
{
    rising->parent = this;

    yang_name = "interrupt"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::~Interrupt()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interrupt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::Rising()
{

    yang_name = "rising"; yang_parent_name = "interrupt"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/interrupt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/interrupt/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::Interval()
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
    	,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{

    yang_name = "cpu-range"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range" || name == "interval")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Process_()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising>())
{
    rising->parent = this;

    yang_name = "process"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Process_::~Process_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::Rising()
{

    yang_name = "rising"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/process/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::Interval()
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
    	,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{

    yang_name = "cpu-range"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range" || name == "interval")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Total()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising>())
{
    rising->parent = this;

    yang_name = "total"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Total::~Total()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::Rising()
{

    yang_name = "rising"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/total/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/total/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table::policed_dscp {0, "policed-dscp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType::bytes {0, "bytes"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType::ms {1, "ms"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType::packets {2, "packets"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType::us {3, "us"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::dscp {0, "dscp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::precedence {1, "precedence"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::cos {2, "cos"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::qos_group {3, "qos-group"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::wlan {4, "wlan"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::MS_port_mapper {0, "MS-port-mapper"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::cifs {1, "cifs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::http {2, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::ica {3, "ica"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::mapi {4, "mapi"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::nfs {5, "nfs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::ssl {6, "ssl"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::video {7, "video"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::celb {0, "celb"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::cn {1, "cn"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::default_ {2, "default"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4 {3, "dvi4"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_2 {4, "dvi4-2"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_3 {5, "dvi4-3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_4 {6, "dvi4-4"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g722 {7, "g722"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g723 {8, "g723"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g728 {9, "g728"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g729 {10, "g729"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::gsm {11, "gsm"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::h261 {12, "h261"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::h263 {13, "h263"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::jpeg {14, "jpeg"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::l16 {15, "l16"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::l16_2 {16, "l16-2"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::lpc {17, "lpc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mp2t {18, "mp2t"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mpa {19, "mpa"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mpv {20, "mpv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::nv {21, "nv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::pcma {22, "pcma"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::pcmu {23, "pcmu"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::qcelp {24, "qcelp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode::media_stop {0, "media-stop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode::mrv {1, "mrv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode::rtp_jitter_average {2, "rtp-jitter-average"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode::transport_packets_lost_rate {3, "transport-packets-lost-rate"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::alert {0, "alert"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::critical {1, "critical"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::emergency {2, "emergency"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::error {3, "error"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::info {4, "info"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::cxsc {0, "cxsc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::drop {1, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::pass {3, "pass"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::service_policy {4, "service-policy"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ParameterMap::global {0, "global"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ParameterMap::gtp {1, "gtp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::gtpv0 {0, "gtpv0"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::gtpv1 {1, "gtpv1"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::pop3 {3, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::smtp {4, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::sunrpc {5, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::aaa_available {0, "aaa-available"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::absolute_timeout {1, "absolute-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::agent_found {2, "agent-found"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_failure {3, "authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_success {4, "authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_failure {5, "authorization-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_success {6, "authorization-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::identity_update {7, "identity-update"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::inactivity_timeout {8, "inactivity-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_failure {9, "remote-authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_success {10, "remote-authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_disconnected {11, "session-disconnected"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_started {12, "session-started"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_added {13, "tag-added"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_removed {14, "tag-removed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activated {15, "template-activated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activation_failed {16, "template-activation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivated {17, "template-deactivated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivation_failed {18, "template-deactivation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::timer_expiry {19, "timer-expiry"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::violation {20, "violation"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_first {1, "match-first"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::Class_::always {0, "always"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_all {0, "do-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_failure {1, "do-until-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_success {2, "do-until-success"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Method::dot1x {0, "dot1x"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Method::mab {1, "mab"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Method::webauth {2, "webauth"};

const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_ip {0, "dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_mac {1, "dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_mixed_ip_port {2, "dst-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_port {3, "dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::mpls {4, "mpls"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_ip {5, "src-dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_mac {6, "src-dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_mixed_ip_port {7, "src-dst-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_port {8, "src-dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_ip {9, "src-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_mac {10, "src-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_mixed_ip_port {11, "src-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_port {12, "src-port"};

const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_ip {0, "dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_mac {1, "dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_port {2, "dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::ipv6_label {3, "ipv6-label"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::l3_proto {4, "l3-proto"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_ip {5, "src-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_mac {6, "src-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_port {7, "src-port"};

const Enum::YLeaf Native::Power::RedundancyMode::combined {0, "combined"};
const Enum::YLeaf Native::Power::RedundancyMode::redundant {1, "redundant"};

const Enum::YLeaf Native::Power::MaxMin::max {0, "max"};


}
}

