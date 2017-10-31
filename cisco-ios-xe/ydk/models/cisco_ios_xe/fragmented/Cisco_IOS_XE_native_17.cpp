
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_17.hpp"
#include "Cisco_IOS_XE_native_44.hpp"
#include "Cisco_IOS_XE_native_42.hpp"
#include "Cisco_IOS_XE_native_32.hpp"
#include "Cisco_IOS_XE_native_62.hpp"
#include "Cisco_IOS_XE_native_61.hpp"
#include "Cisco_IOS_XE_native_23.hpp"
#include "Cisco_IOS_XE_native_22.hpp"
#include "Cisco_IOS_XE_native_66.hpp"
#include "Cisco_IOS_XE_native_37.hpp"
#include "Cisco_IOS_XE_native_27.hpp"
#include "Cisco_IOS_XE_native_39.hpp"
#include "Cisco_IOS_XE_native_51.hpp"
#include "Cisco_IOS_XE_native_21.hpp"
#include "Cisco_IOS_XE_native_18.hpp"
#include "Cisco_IOS_XE_native_72.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_55.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_53.hpp"
#include "Cisco_IOS_XE_native_56.hpp"
#include "Cisco_IOS_XE_native_59.hpp"
#include "Cisco_IOS_XE_native_60.hpp"
#include "Cisco_IOS_XE_native_71.hpp"
#include "Cisco_IOS_XE_native_54.hpp"
#include "Cisco_IOS_XE_native_45.hpp"
#include "Cisco_IOS_XE_native_69.hpp"
#include "Cisco_IOS_XE_native_47.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformSetMplsExpImpositionTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::~ConformSetMplsExpImpositionTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformSetMplsExpTopmostTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::~ConformSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformSetMplsExpTopmostTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::~ConformSetMplsExpTopmostTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformSetPrecTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::~ConformSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::has_data() const
{
    return set_prec_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformSetPrecTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::~ConformSetPrecTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformSetQosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::~ConformSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformSetQosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::~ConformSetQosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_data() const
{
    return set_qos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::~ConformTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::ConformAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformDrop()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::~ConformDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::ConformAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ConformDrop::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedDscp()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-dscp"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::~ExceedDscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::ExceedAction()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::has_data() const
{
    return dscp.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDscp::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedSetClpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::~ExceedSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::ExceedAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedSetCosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::~ExceedSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::ExceedAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedSetDiscardClassTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::~ExceedSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::ExceedAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedSetDscpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::~ExceedSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::ExceedAction()
    :
    set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>())
{
    set_dscp_transmit->parent = this;

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::has_data() const
{
    return (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| (set_dscp_transmit !=  nullptr && set_dscp_transmit->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-dscp-transmit")
    {
        if(set_dscp_transmit == nullptr)
        {
            set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit>();
        }
        return set_dscp_transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set_dscp_transmit != nullptr)
    {
        children["set-dscp-transmit"] = set_dscp_transmit;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::SetDscpTransmit()
    :
    dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>())
{
    dscp->parent = this;

    yang_name = "set-dscp-transmit"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::~SetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_data() const
{
    return (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Dscp()
    :
    table{YType::enumeration, "table"}
{

    yang_name = "dscp"; yang_parent_name = "set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedSetDscpTransmitTable()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::~ExceedSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::ExceedAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmitTable::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedSetFrdeTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::~ExceedSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::ExceedAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetFrdeTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedSetMplsExpImpositionTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::~ExceedSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpImpositionTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedSetMplsExpTopmostTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::~ExceedSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::ExceedAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetMplsExpTopmostTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedSetPrecTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::~ExceedSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::ExceedAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetPrecTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedSetQosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::~ExceedSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::ExceedAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetQosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::~ExceedTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::ExceedAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedDrop()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::~ExceedDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::ExceedAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedDrop::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateSetClpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::~ViolateSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::ViolateAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetClpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateSetCosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::~ViolateSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::ViolateAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetCosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateSetDiscardClassTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::~ViolateSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::ViolateAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDiscardClassTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateSetDscpTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::~ViolateSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::ViolateAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetDscpTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateSetFrdeTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::~ViolateSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::ViolateAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetFrdeTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateSetMplsExpImpositionTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::~ViolateSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpImpositionTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateSetMplsExpTopmostTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::~ViolateSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::ViolateAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetMplsExpTopmostTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateSetPrecTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::~ViolateSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::ViolateAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetPrecTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateSetQosTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::~ViolateSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::ViolateAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateSetQosTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateTransmit()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::~ViolateTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::ViolateAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateTransmit::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateDrop()
    :
    violate_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction>())
{
    violate_action->parent = this;

    yang_name = "violate-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::~ViolateDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::has_data() const
{
    return (violate_action !=  nullptr && violate_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::has_operation() const
{
    return is_set(yfilter)
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "violate-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::ViolateAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "violate-action"; yang_parent_name = "violate-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::~ViolateAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ViolateDrop::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::PoliceSwitch()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police>())
{
    police->parent = this;

    yang_name = "police-switch"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::~PoliceSwitch()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::Police()
    :
    cir{YType::uint32, "cir"},
    bc{YType::uint32, "bc"},
    exceed_action{YType::enumeration, "exceed-action"}
{

    yang_name = "police"; yang_parent_name = "police-switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::has_data() const
{
    return cir.is_set
	|| bc.is_set
	|| exceed_action.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cir.yfilter)
	|| ydk::is_set(bc.yfilter)
	|| ydk::is_set(exceed_action.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cir.is_set || is_set(cir.yfilter)) leaf_name_data.push_back(cir.get_name_leafdata());
    if (bc.is_set || is_set(bc.yfilter)) leaf_name_data.push_back(bc.get_name_leafdata());
    if (exceed_action.is_set || is_set(exceed_action.yfilter)) leaf_name_data.push_back(exceed_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cir")
    {
        cir = value;
        cir.value_namespace = name_space;
        cir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc")
    {
        bc = value;
        bc.value_namespace = name_space;
        bc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-action")
    {
        exceed_action = value;
        exceed_action.value_namespace = name_space;
        exceed_action.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cir")
    {
        cir.yfilter = yfilter;
    }
    if(value_path == "bc")
    {
        bc.yfilter = yfilter;
    }
    if(value_path == "exceed-action")
    {
        exceed_action.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "bc" || name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Priority::Priority()
    :
    level{YType::uint8, "level"},
    kilo_bits{YType::uint32, "kilo-bits"},
    percent{YType::uint16, "percent"},
    burst{YType::uint32, "burst"}
{

    yang_name = "priority"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Priority::~Priority()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Priority::has_data() const
{
    return level.is_set
	|| kilo_bits.is_set
	|| percent.is_set
	|| burst.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(kilo_bits.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(burst.yfilter);
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

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (kilo_bits.is_set || is_set(kilo_bits.yfilter)) leaf_name_data.push_back(kilo_bits.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());

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
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilo-bits")
    {
        kilo_bits = value;
        kilo_bits.value_namespace = name_space;
        kilo_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "kilo-bits")
    {
        kilo_bits.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "kilo-bits" || name == "percent" || name == "burst")
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
    queue_limit_value{YType::uint32, "queue-limit-value"},
    queue_limit_type{YType::enumeration, "queue-limit-type"}
{

    yang_name = "queue-limit"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::~QueueLimit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::has_data() const
{
    return queue_limit_value.is_set
	|| queue_limit_type.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_limit_value.yfilter)
	|| ydk::is_set(queue_limit_type.yfilter);
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

    if (queue_limit_value.is_set || is_set(queue_limit_value.yfilter)) leaf_name_data.push_back(queue_limit_value.get_name_leafdata());
    if (queue_limit_type.is_set || is_set(queue_limit_type.yfilter)) leaf_name_data.push_back(queue_limit_type.get_name_leafdata());

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
    if(value_path == "queue-limit-value")
    {
        queue_limit_value = value;
        queue_limit_value.value_namespace = name_space;
        queue_limit_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-limit-type")
    {
        queue_limit_type = value;
        queue_limit_type.value_namespace = name_space;
        queue_limit_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-limit-value")
    {
        queue_limit_value.yfilter = yfilter;
    }
    if(value_path == "queue-limit-type")
    {
        queue_limit_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-limit-value" || name == "queue-limit-type")
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
    values{YType::empty, "values"},
    dscp_val1{YType::str, "dscp-val1"},
    percent{YType::uint8, "percent"}
{

    yang_name = "dscp"; yang_parent_name = "queue-limit-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::has_data() const
{
    return dscp_val.is_set
	|| values.is_set
	|| dscp_val1.is_set
	|| percent.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(values.yfilter)
	|| ydk::is_set(dscp_val1.yfilter)
	|| ydk::is_set(percent.yfilter);
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
    if (values.is_set || is_set(values.yfilter)) leaf_name_data.push_back(values.get_name_leafdata());
    if (dscp_val1.is_set || is_set(dscp_val1.yfilter)) leaf_name_data.push_back(dscp_val1.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

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
    if(value_path == "values")
    {
        values = value;
        values.value_namespace = name_space;
        values.value_namespace_prefix = name_space_prefix;
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
}

void Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "values")
    {
        values.yfilter = yfilter;
    }
    if(value_path == "dscp-val1")
    {
        dscp_val1.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-val" || name == "values" || name == "dscp-val1" || name == "percent")
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
    minimum_thresh{YType::uint32, "minimum-thresh"},
    maximum_thresh{YType::uint32, "maximum-thresh"},
    mark_probability{YType::empty, "mark-probability"},
    denominator{YType::uint32, "denominator"}
{

    yang_name = "aggregate"; yang_parent_name = "random-detect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::~Aggregate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::has_data() const
{
    return minimum_thresh.is_set
	|| maximum_thresh.is_set
	|| mark_probability.is_set
	|| denominator.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_thresh.yfilter)
	|| ydk::is_set(maximum_thresh.yfilter)
	|| ydk::is_set(mark_probability.yfilter)
	|| ydk::is_set(denominator.yfilter);
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

    if (minimum_thresh.is_set || is_set(minimum_thresh.yfilter)) leaf_name_data.push_back(minimum_thresh.get_name_leafdata());
    if (maximum_thresh.is_set || is_set(maximum_thresh.yfilter)) leaf_name_data.push_back(maximum_thresh.get_name_leafdata());
    if (mark_probability.is_set || is_set(mark_probability.yfilter)) leaf_name_data.push_back(mark_probability.get_name_leafdata());
    if (denominator.is_set || is_set(denominator.yfilter)) leaf_name_data.push_back(denominator.get_name_leafdata());

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
    if(value_path == "minimum-thresh")
    {
        minimum_thresh = value;
        minimum_thresh.value_namespace = name_space;
        minimum_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-thresh")
    {
        maximum_thresh = value;
        maximum_thresh.value_namespace = name_space;
        maximum_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-probability")
    {
        mark_probability = value;
        mark_probability.value_namespace = name_space;
        mark_probability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denominator")
    {
        denominator = value;
        denominator.value_namespace = name_space;
        denominator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-thresh")
    {
        minimum_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-thresh")
    {
        maximum_thresh.yfilter = yfilter;
    }
    if(value_path == "mark-probability")
    {
        mark_probability.yfilter = yfilter;
    }
    if(value_path == "denominator")
    {
        denominator.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-thresh" || name == "maximum-thresh" || name == "mark-probability" || name == "denominator")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::DiscardClass()
    :
    dclass{YType::uint16, "dclass"},
    min_threshold{YType::uint16, "min-threshold"},
    max_threshold{YType::uint16, "max-threshold"},
    denominator{YType::uint32, "denominator"}
{

    yang_name = "discard-class"; yang_parent_name = "random-detect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::~DiscardClass()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::has_data() const
{
    return dclass.is_set
	|| min_threshold.is_set
	|| max_threshold.is_set
	|| denominator.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dclass.yfilter)
	|| ydk::is_set(min_threshold.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(denominator.yfilter);
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
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (denominator.is_set || is_set(denominator.yfilter)) leaf_name_data.push_back(denominator.get_name_leafdata());

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
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denominator")
    {
        denominator = value;
        denominator.value_namespace = name_space;
        denominator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dclass")
    {
        dclass.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "denominator")
    {
        denominator.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::DiscardClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dclass" || name == "min-threshold" || name == "max-threshold" || name == "denominator")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"},
    min_threshold{YType::uint16, "min-threshold"},
    max_threshold{YType::uint16, "max-threshold"},
    denominator{YType::uint32, "denominator"}
{

    yang_name = "dscp"; yang_parent_name = "random-detect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::has_data() const
{
    return dscp_val.is_set
	|| min_threshold.is_set
	|| max_threshold.is_set
	|| denominator.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(min_threshold.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(denominator.yfilter);
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
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (denominator.is_set || is_set(denominator.yfilter)) leaf_name_data.push_back(denominator.get_name_leafdata());

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
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denominator")
    {
        denominator = value;
        denominator.value_namespace = name_space;
        denominator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "denominator")
    {
        denominator.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-val" || name == "min-threshold" || name == "max-threshold" || name == "denominator")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::Precedence()
    :
    prec{YType::str, "prec"},
    min_threshold{YType::uint16, "min-threshold"},
    max_threshold{YType::uint16, "max-threshold"},
    denominator{YType::uint32, "denominator"}
{

    yang_name = "precedence"; yang_parent_name = "random-detect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::~Precedence()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::has_data() const
{
    return prec.is_set
	|| min_threshold.is_set
	|| max_threshold.is_set
	|| denominator.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec.yfilter)
	|| ydk::is_set(min_threshold.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(denominator.yfilter);
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

    if (prec.is_set || is_set(prec.yfilter)) leaf_name_data.push_back(prec.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (denominator.is_set || is_set(denominator.yfilter)) leaf_name_data.push_back(denominator.get_name_leafdata());

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
    if(value_path == "prec")
    {
        prec = value;
        prec.value_namespace = name_space;
        prec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denominator")
    {
        denominator = value;
        denominator.value_namespace = name_space;
        denominator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec")
    {
        prec.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "denominator")
    {
        denominator.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::RandomDetect::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec" || name == "min-threshold" || name == "max-threshold" || name == "denominator")
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
    val{YType::uint16, "val"},
    pack{YType::enumeration, "pack"},
    user_priority{YType::empty, "user-priority"},
    table{YType::str, "table"}
{

    yang_name = "cos"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::~Cos()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::has_data() const
{
    return val.is_set
	|| pack.is_set
	|| user_priority.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(pack.yfilter)
	|| ydk::is_set(user_priority.yfilter)
	|| ydk::is_set(table.yfilter);
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

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (pack.is_set || is_set(pack.yfilter)) leaf_name_data.push_back(pack.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

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
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pack")
    {
        pack = value;
        pack.value_namespace = name_space;
        pack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "pack")
    {
        pack.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "pack" || name == "user-priority" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::Dscp()
    :
    tunnel{YType::empty, "tunnel"},
    dscp_val{YType::str, "dscp-val"}
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
    return tunnel.is_set
	|| dscp_val.is_set
	|| (dscp !=  nullptr && dscp->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(dscp_val.yfilter)
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

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());

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
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "tunnel" || name == "dscp-val")
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
    tunnel{YType::empty, "tunnel"},
    dscp_val{YType::str, "dscp-val"}
{

    yang_name = "dscp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::~Dscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::has_data() const
{
    return tunnel.is_set
	|| dscp_val.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(dscp_val.yfilter);
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

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());

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
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Set::Ip::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "dscp-val")
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
    bits_per_interval_sustained{YType::uint32, "bits-per-interval-sustained"},
    bits_per_interval_excess{YType::uint32, "bits-per-interval-excess"},
    percent{YType::uint8, "percent"},
    burst_size_sustained{YType::uint16, "burst-size-sustained"},
    ms{YType::empty, "ms"}
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
	|| bits_per_interval_sustained.is_set
	|| bits_per_interval_excess.is_set
	|| percent.is_set
	|| burst_size_sustained.is_set
	|| ms.is_set
	|| (account !=  nullptr && account->has_data())
	|| (bse !=  nullptr && bse->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(bits_per_interval_sustained.yfilter)
	|| ydk::is_set(bits_per_interval_excess.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(burst_size_sustained.yfilter)
	|| ydk::is_set(ms.yfilter)
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
    if (bits_per_interval_sustained.is_set || is_set(bits_per_interval_sustained.yfilter)) leaf_name_data.push_back(bits_per_interval_sustained.get_name_leafdata());
    if (bits_per_interval_excess.is_set || is_set(bits_per_interval_excess.yfilter)) leaf_name_data.push_back(bits_per_interval_excess.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (burst_size_sustained.is_set || is_set(burst_size_sustained.yfilter)) leaf_name_data.push_back(burst_size_sustained.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

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
    if(value_path == "bits-per-interval-sustained")
    {
        bits_per_interval_sustained = value;
        bits_per_interval_sustained.value_namespace = name_space;
        bits_per_interval_sustained.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bits-per-interval-excess")
    {
        bits_per_interval_excess = value;
        bits_per_interval_excess.value_namespace = name_space;
        bits_per_interval_excess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
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
}

void Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "bits-per-interval-sustained")
    {
        bits_per_interval_sustained.yfilter = yfilter;
    }
    if(value_path == "bits-per-interval-excess")
    {
        bits_per_interval_excess.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "burst-size-sustained")
    {
        burst_size_sustained.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Shape::Average::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account" || name == "bse" || name == "bit-rate" || name == "bits-per-interval-sustained" || name == "bits-per-interval-excess" || name == "percent" || name == "burst-size-sustained" || name == "ms")
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

Native::Interface::Interface()
    :
    atm_subinterface(std::make_shared<Native::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::~Interface()
{
}

bool Native::Interface::has_data() const
{
    for (std::size_t index=0; index<appnav_compress.size(); index++)
    {
        if(appnav_compress[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<appnav_uncompress.size(); index++)
    {
        if(appnav_uncompress[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<atm.size(); index++)
    {
        if(atm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<atm_acr.size(); index++)
    {
        if(atm_acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bdi.size(); index++)
    {
        if(bdi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cem_acr.size(); index++)
    {
        if(cem_acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<embedded_service_engine.size(); index++)
    {
        if(embedded_service_engine[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fastethernet.size(); index++)
    {
        if(fastethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<gigabitethernet.size(); index++)
    {
        if(gigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tengigabitethernet.size(); index++)
    {
        if(tengigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fortygigabitethernet.size(); index++)
    {
        if(fortygigabitethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lisp.size(); index++)
    {
        if(lisp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nve.size(); index++)
    {
        if(nve[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<overlay.size(); index++)
    {
        if(overlay[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sm.size(); index++)
    {
        if(sm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group_async.size(); index++)
    {
        if(group_async[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multilink.size(); index++)
    {
        if(multilink[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<serial.size(); index++)
    {
        if(serial[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_template.size(); index++)
    {
        if(virtual_template[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtualportgroup.size(); index++)
    {
        if(virtualportgroup[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vasileft.size(); index++)
    {
        if(vasileft[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vasiright.size(); index++)
    {
        if(vasiright[index]->has_data())
            return true;
    }
    return (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::has_operation() const
{
    for (std::size_t index=0; index<appnav_compress.size(); index++)
    {
        if(appnav_compress[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<appnav_uncompress.size(); index++)
    {
        if(appnav_uncompress[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<atm.size(); index++)
    {
        if(atm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<atm_acr.size(); index++)
    {
        if(atm_acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bdi.size(); index++)
    {
        if(bdi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cem_acr.size(); index++)
    {
        if(cem_acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<embedded_service_engine.size(); index++)
    {
        if(embedded_service_engine[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fastethernet.size(); index++)
    {
        if(fastethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<gigabitethernet.size(); index++)
    {
        if(gigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tengigabitethernet.size(); index++)
    {
        if(tengigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fortygigabitethernet.size(); index++)
    {
        if(fortygigabitethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lisp.size(); index++)
    {
        if(lisp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nve.size(); index++)
    {
        if(nve[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<overlay.size(); index++)
    {
        if(overlay[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sm.size(); index++)
    {
        if(sm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group_async.size(); index++)
    {
        if(group_async[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multilink.size(); index++)
    {
        if(multilink[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<serial.size(); index++)
    {
        if(serial[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_template.size(); index++)
    {
        if(virtual_template[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtualportgroup.size(); index++)
    {
        if(virtualportgroup[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vasileft.size(); index++)
    {
        if(vasileft[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vasiright.size(); index++)
    {
        if(vasiright[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppNav-Compress")
    {
        for(auto const & c : appnav_compress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AppNavCompress>();
        c->parent = this;
        appnav_compress.push_back(c);
        return c;
    }

    if(child_yang_name == "AppNav-UnCompress")
    {
        for(auto const & c : appnav_uncompress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AppNavUnCompress>();
        c->parent = this;
        appnav_uncompress.push_back(c);
        return c;
    }

    if(child_yang_name == "ATM")
    {
        for(auto const & c : atm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATM>();
        c->parent = this;
        atm.push_back(c);
        return c;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACR")
    {
        for(auto const & c : atm_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACR>();
        c->parent = this;
        atm_acr.push_back(c);
        return c;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "BDI")
    {
        for(auto const & c : bdi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::BDI>();
        c->parent = this;
        bdi.push_back(c);
        return c;
    }

    if(child_yang_name == "CEM")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::CEM>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "CEM-ACR")
    {
        for(auto const & c : cem_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::CEMACR>();
        c->parent = this;
        cem_acr.push_back(c);
        return c;
    }

    if(child_yang_name == "Embedded-Service-Engine")
    {
        for(auto const & c : embedded_service_engine)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::EmbeddedServiceEngine>();
        c->parent = this;
        embedded_service_engine.push_back(c);
        return c;
    }

    if(child_yang_name == "FastEthernet")
    {
        for(auto const & c : fastethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet>();
        c->parent = this;
        fastethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "GigabitEthernet")
    {
        for(auto const & c : gigabitethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet>();
        c->parent = this;
        gigabitethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "TenGigabitEthernet")
    {
        for(auto const & c : tengigabitethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::TenGigabitEthernet>();
        c->parent = this;
        tengigabitethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "FortyGigabitEthernet")
    {
        for(auto const & c : fortygigabitethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FortyGigabitEthernet>();
        c->parent = this;
        fortygigabitethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "Loopback")
    {
        for(auto const & c : loopback)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Loopback>();
        c->parent = this;
        loopback.push_back(c);
        return c;
    }

    if(child_yang_name == "LISP")
    {
        for(auto const & c : lisp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::LISP>();
        c->parent = this;
        lisp.push_back(c);
        return c;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "nve")
    {
        for(auto const & c : nve)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Nve>();
        c->parent = this;
        nve.push_back(c);
        return c;
    }

    if(child_yang_name == "overlay")
    {
        for(auto const & c : overlay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay>();
        c->parent = this;
        overlay.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    if(child_yang_name == "pseudowire")
    {
        for(auto const & c : pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Pseudowire>();
        c->parent = this;
        pseudowire.push_back(c);
        return c;
    }

    if(child_yang_name == "SM")
    {
        for(auto const & c : sm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::SM>();
        c->parent = this;
        sm.push_back(c);
        return c;
    }

    if(child_yang_name == "Cellular")
    {
        for(auto const & c : cellular)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Cellular>();
        c->parent = this;
        cellular.push_back(c);
        return c;
    }

    if(child_yang_name == "Vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    if(child_yang_name == "Group-Async")
    {
        for(auto const & c : group_async)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GroupAsync>();
        c->parent = this;
        group_async.push_back(c);
        return c;
    }

    if(child_yang_name == "Multilink")
    {
        for(auto const & c : multilink)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Multilink>();
        c->parent = this;
        multilink.push_back(c);
        return c;
    }

    if(child_yang_name == "Serial")
    {
        for(auto const & c : serial)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Serial>();
        c->parent = this;
        serial.push_back(c);
        return c;
    }

    if(child_yang_name == "Tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    if(child_yang_name == "Virtual-Template")
    {
        for(auto const & c : virtual_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate>();
        c->parent = this;
        virtual_template.push_back(c);
        return c;
    }

    if(child_yang_name == "VirtualPortGroup")
    {
        for(auto const & c : virtualportgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualPortGroup>();
        c->parent = this;
        virtualportgroup.push_back(c);
        return c;
    }

    if(child_yang_name == "vasileft")
    {
        for(auto const & c : vasileft)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vasileft>();
        c->parent = this;
        vasileft.push_back(c);
        return c;
    }

    if(child_yang_name == "vasiright")
    {
        for(auto const & c : vasiright)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vasiright>();
        c->parent = this;
        vasiright.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appnav_compress)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : appnav_uncompress)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : atm)
    {
        children[c->get_segment_path()] = c;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    for (auto const & c : atm_acr)
    {
        children[c->get_segment_path()] = c;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    for (auto const & c : bdi)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cem_acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : embedded_service_engine)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : fastethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : gigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tengigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : fortygigabitethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : loopback)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lisp)
    {
        children[c->get_segment_path()] = c;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    for (auto const & c : nve)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : overlay)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    for (auto const & c : pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sm)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cellular)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : group_async)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : multilink)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : serial)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : virtual_template)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : virtualportgroup)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vasileft)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vasiright)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-subinterface" || name == "ATM-ACR" || name == "ATM-ACRsubinterface" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "TenGigabitEthernet" || name == "FortyGigabitEthernet" || name == "Loopback" || name == "LISP" || name == "LISP-subinterface" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "Port-channel-subinterface" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Vlan" || name == "Group-Async" || name == "Multilink" || name == "Serial" || name == "Tunnel" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::AppNavCompress::AppNavCompress()
    :
    name{YType::uint16, "name"},
    description{YType::str, "description"},
    mac_address{YType::str, "mac-address"},
    shutdown{YType::empty, "shutdown"},
    keepalive{YType::boolean, "keepalive"},
    if_state{YType::enumeration, "if-state"},
    delay{YType::uint32, "delay"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"}
    	,
    switchport_conf(std::make_shared<Native::Interface::AppNavCompress::SwitchportConf>())
	,switchport(std::make_shared<Native::Interface::AppNavCompress::Switchport>())
	,arp(std::make_shared<Native::Interface::AppNavCompress::Arp>())
	,backup(std::make_shared<Native::Interface::AppNavCompress::Backup>())
	,cemoudp(std::make_shared<Native::Interface::AppNavCompress::Cemoudp>())
	,cws_tunnel(std::make_shared<Native::Interface::AppNavCompress::CwsTunnel>())
	,l2protocol_tunnel(nullptr) // presence node
	,encapsulation(std::make_shared<Native::Interface::AppNavCompress::Encapsulation>())
	,fair_queue_conf(std::make_shared<Native::Interface::AppNavCompress::FairQueueConf>())
	,fair_queue(std::make_shared<Native::Interface::AppNavCompress::FairQueue>())
	,flowcontrol(std::make_shared<Native::Interface::AppNavCompress::Flowcontrol>())
	,isis(std::make_shared<Native::Interface::AppNavCompress::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::AppNavCompress::KeepaliveSettings>())
	,bfd(std::make_shared<Native::Interface::AppNavCompress::Bfd>())
	,bandwidth(std::make_shared<Native::Interface::AppNavCompress::Bandwidth>())
	,dampening(std::make_shared<Native::Interface::AppNavCompress::Dampening>())
	,domain(std::make_shared<Native::Interface::AppNavCompress::Domain>())
	,mpls(std::make_shared<Native::Interface::AppNavCompress::Mpls>())
	,ip_vrf(std::make_shared<Native::Interface::AppNavCompress::IpVrf>())
	,vrf(std::make_shared<Native::Interface::AppNavCompress::Vrf>())
	,ip(std::make_shared<Native::Interface::AppNavCompress::Ip>())
	,ipv6(std::make_shared<Native::Interface::AppNavCompress::Ipv6>())
	,logging(std::make_shared<Native::Interface::AppNavCompress::Logging>())
	,mdix(std::make_shared<Native::Interface::AppNavCompress::Mdix>())
	,mop(std::make_shared<Native::Interface::AppNavCompress::Mop>())
	,interface_qos(std::make_shared<Native::Interface::AppNavCompress::InterfaceQos>())
	,standby(std::make_shared<Native::Interface::AppNavCompress::Standby>())
	,access_session(std::make_shared<Native::Interface::AppNavCompress::AccessSession>())
	,storm_control(std::make_shared<Native::Interface::AppNavCompress::StormControl>())
	,trust(std::make_shared<Native::Interface::AppNavCompress::Trust>())
	,utd(std::make_shared<Native::Interface::AppNavCompress::Utd>())
	,priority_queue(std::make_shared<Native::Interface::AppNavCompress::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::AppNavCompress::RcvQueue>())
	,peer(std::make_shared<Native::Interface::AppNavCompress::Peer>())
	,pm_path(std::make_shared<Native::Interface::AppNavCompress::PmPath>())
{
    switchport_conf->parent = this;
    switchport->parent = this;
    arp->parent = this;
    backup->parent = this;
    cemoudp->parent = this;
    cws_tunnel->parent = this;
    encapsulation->parent = this;
    fair_queue_conf->parent = this;
    fair_queue->parent = this;
    flowcontrol->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    bfd->parent = this;
    bandwidth->parent = this;
    dampening->parent = this;
    domain->parent = this;
    mpls->parent = this;
    ip_vrf->parent = this;
    vrf->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    mdix->parent = this;
    mop->parent = this;
    interface_qos->parent = this;
    standby->parent = this;
    access_session->parent = this;
    storm_control->parent = this;
    trust->parent = this;
    utd->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    peer->parent = this;
    pm_path->parent = this;

    yang_name = "AppNav-Compress"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::AppNavCompress::~AppNavCompress()
{
}

bool Native::Interface::AppNavCompress::has_data() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| mac_address.is_set
	|| shutdown.is_set
	|| keepalive.is_set
	|| if_state.is_set
	|| delay.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data());
}

bool Native::Interface::AppNavCompress::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation());
}

std::string Native::Interface::AppNavCompress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::AppNavCompress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AppNav-Compress" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::AppNavCompress::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::AppNavCompress::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::AppNavCompress::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::AppNavCompress::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::AppNavCompress::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::AppNavCompress::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::AppNavCompress::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::AppNavCompress::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::AppNavCompress::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::AppNavCompress::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::AppNavCompress::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::AppNavCompress::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::AppNavCompress::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::AppNavCompress::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::AppNavCompress::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::AppNavCompress::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::AppNavCompress::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        for(auto const & c : hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AppNavCompress::HoldQueue>();
        c->parent = this;
        hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::AppNavCompress::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::AppNavCompress::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::AppNavCompress::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::AppNavCompress::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::AppNavCompress::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::AppNavCompress::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::AppNavCompress::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::AppNavCompress::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::AppNavCompress::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::AppNavCompress::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::AppNavCompress::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::AppNavCompress::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::AppNavCompress::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::AppNavCompress::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::AppNavCompress::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::AppNavCompress::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::AppNavCompress::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::AppNavCompress::PmPath>();
        }
        return pm_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(fair_queue_conf != nullptr)
    {
        children["fair-queue-conf"] = fair_queue_conf;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    for (auto const & c : hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(interface_qos != nullptr)
    {
        children["interface_qos"] = interface_qos;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    return children;
}

void Native::Interface::AppNavCompress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "utd" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "name" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion")
        return true;
    return false;
}

Native::Interface::AppNavCompress::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::AppNavCompress::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::AppNavCompress::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::AppNavCompress::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Switchport::Switchport()
{

    yang_name = "switchport"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Switchport::~Switchport()
{
}

bool Native::Interface::AppNavCompress::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::AppNavCompress::Switchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::AppNavCompress::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::AppNavCompress::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Arp::~Arp()
{
}

bool Native::Interface::AppNavCompress::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::AppNavCompress::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::AppNavCompress::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::AppNavCompress::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::AppNavCompress::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Backup::~Backup()
{
}

bool Native::Interface::AppNavCompress::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::AppNavCompress::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::AppNavCompress::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::AppNavCompress::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::AppNavCompress::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::AppNavCompress::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Backup::Delay::~Delay()
{
}

bool Native::Interface::AppNavCompress::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::AppNavCompress::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::AppNavCompress::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::AppNavCompress::Backup::Interface_::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::AppNavCompress::Backup::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::AppNavCompress::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Backup::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Interface::AppNavCompress::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Backup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Backup::Load::~Load()
{
}

bool Native::Interface::AppNavCompress::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::AppNavCompress::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::AppNavCompress::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::AppNavCompress::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::AppNavCompress::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::AppNavCompress::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::AppNavCompress::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::AppNavCompress::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::AppNavCompress::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::AppNavCompress::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::AppNavCompress::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::AppNavCompress::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::AppNavCompress::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::AppNavCompress::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::AppNavCompress::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::AppNavCompress::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::AppNavCompress::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::AppNavCompress::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::AppNavCompress::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::AppNavCompress::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::AppNavCompress::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::AppNavCompress::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::AppNavCompress::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::AppNavCompress::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::AppNavCompress::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::L2ProtocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::AppNavCompress::L2ProtocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::L2ProtocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::has_data() const
{
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::L2ProtocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::AppNavCompress::Encapsulation::Dot1Q>())
	,isl(std::make_shared<Native::Interface::AppNavCompress::Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
	,frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::AppNavCompress::Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::AppNavCompress::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::AppNavCompress::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::AppNavCompress::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::AppNavCompress::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::AppNavCompress::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::AppNavCompress::Encapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::AppNavCompress::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    return children;
}

void Native::Interface::AppNavCompress::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::AppNavCompress::Encapsulation::Dot1Q::has_data() const
{
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::AppNavCompress::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::AppNavCompress::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::AppNavCompress::Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::AppNavCompress::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::AppNavCompress::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::AppNavCompress::Encapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::AppNavCompress::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::AppNavCompress::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::AppNavCompress::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::AppNavCompress::Encapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::AppNavCompress::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::AppNavCompress::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::AppNavCompress::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::AppNavCompress::Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::AppNavCompress::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::AppNavCompress::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::AppNavCompress::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::AppNavCompress::FairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::AppNavCompress::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::AppNavCompress::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::AppNavCompress::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::FairQueue::~FairQueue()
{
}

bool Native::Interface::AppNavCompress::FairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::AppNavCompress::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::AppNavCompress::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::AppNavCompress::Flowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::AppNavCompress::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::AppNavCompress::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Isis::Isis()
{

    yang_name = "isis"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Isis::~Isis()
{
}

bool Native::Interface::AppNavCompress::Isis::has_data() const
{
    return false;
}

bool Native::Interface::AppNavCompress::Isis::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::AppNavCompress::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::AppNavCompress::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::AppNavCompress::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::AppNavCompress::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::AppNavCompress::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::AppNavCompress::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Bfd::~Bfd()
{
}

bool Native::Interface::AppNavCompress::Bfd::has_data() const
{
    return false;
}

bool Native::Interface::AppNavCompress::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::AppNavCompress::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::AppNavCompress::Bandwidth::Bandwidth()
    :
    qos_reference{YType::uint32, "qos-reference"},
    kilobits{YType::uint32, "kilobits"}
    	,
    receive(std::make_shared<Native::Interface::AppNavCompress::Bandwidth::Receive>())
	,inherit(nullptr) // presence node
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::AppNavCompress::Bandwidth::has_data() const
{
    return qos_reference.is_set
	|| kilobits.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (inherit !=  nullptr && inherit->has_data());
}

bool Native::Interface::AppNavCompress::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation());
}

std::string Native::Interface::AppNavCompress::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::AppNavCompress::Bandwidth::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::AppNavCompress::Bandwidth::Inherit>();
        }
        return inherit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    return children;
}

void Native::Interface::AppNavCompress::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "inherit" || name == "qos-reference" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::AppNavCompress::Bandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::AppNavCompress::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::AppNavCompress::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit")
    {
        inherit = value;
        inherit.value_namespace = name_space;
        inherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit")
    {
        inherit.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::AppNavCompress::Bandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::AppNavCompress::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::AppNavCompress::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::AppNavCompress::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Dampening::~Dampening()
{
}

bool Native::Interface::AppNavCompress::Dampening::has_data() const
{
    return dampening_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| maximum_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::AppNavCompress::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::AppNavCompress::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::AppNavCompress::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::AppNavCompress::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
        start_reusing_time.value_namespace = name_space;
        start_reusing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
        start_supressing_time.value_namespace = name_space;
        start_supressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "start-reusing-time" || name == "start-supressing-time" || name == "maximum-supressing-time")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Dampening::Restart::~Restart()
{
}

bool Native::Interface::AppNavCompress::Dampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::AppNavCompress::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::AppNavCompress::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Domain::Domain()
    :
    name{YType::str, "name"},
    path{YType::str, "path"},
    internet_bound{YType::empty, "internet-bound"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Domain::~Domain()
{
}

bool Native::Interface::AppNavCompress::Domain::has_data() const
{
    return name.is_set
	|| path.is_set
	|| internet_bound.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::AppNavCompress::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::AppNavCompress::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
        zero_sla.value_namespace = name_space;
        zero_sla.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
    if(value_path == "zero-sla")
    {
        zero_sla.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path" || name == "internet-bound" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::AppNavCompress::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{

    yang_name = "hold-queue"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::AppNavCompress::HoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::AppNavCompress::HoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::AppNavCompress::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::HoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::HoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::HoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::HoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Mpls::Mpls()
{

    yang_name = "mpls"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Mpls::~Mpls()
{
}

bool Native::Interface::AppNavCompress::Mpls::has_data() const
{
    return false;
}

bool Native::Interface::AppNavCompress::Mpls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::AppNavCompress::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::AppNavCompress::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::AppNavCompress::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::IpVrf::~IpVrf()
{
}

bool Native::Interface::AppNavCompress::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::AppNavCompress::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::AppNavCompress::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::AppNavCompress::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::AppNavCompress::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::AppNavCompress::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::AppNavCompress::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::AppNavCompress::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::AppNavCompress::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::AppNavCompress::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::AppNavCompress::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::AppNavCompress::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Vrf::~Vrf()
{
}

bool Native::Interface::AppNavCompress::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::AppNavCompress::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::AppNavCompress::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Ip::Ip()
    :
    admission{YType::str, "admission"},
    unnumbered{YType::str, "unnumbered"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    mtu{YType::uint16, "mtu"},
    mroute_cache{YType::boolean, "mroute-cache"}
    	,
    access_group(std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup>())
	,arp(std::make_shared<Native::Interface::AppNavCompress::Ip::Arp>())
	,vrf(std::make_shared<Native::Interface::AppNavCompress::Ip::Vrf>())
	,no_address(std::make_shared<Native::Interface::AppNavCompress::Ip::NoAddress>())
	,address(std::make_shared<Native::Interface::AppNavCompress::Ip::Address>())
	,hello_interval(std::make_shared<Native::Interface::AppNavCompress::Ip::HelloInterval>())
	,authentication(std::make_shared<Native::Interface::AppNavCompress::Ip::Authentication>())
	,hold_time(std::make_shared<Native::Interface::AppNavCompress::Ip::HoldTime>())
	,pim(std::make_shared<Native::Interface::AppNavCompress::Ip::Pim>())
	,policy(std::make_shared<Native::Interface::AppNavCompress::Ip::Policy>())
	,rip(std::make_shared<Native::Interface::AppNavCompress::Ip::Rip>())
	,route_cache_conf(std::make_shared<Native::Interface::AppNavCompress::Ip::RouteCacheConf>())
	,route_cache(nullptr) // presence node
	,router(std::make_shared<Native::Interface::AppNavCompress::Ip::Router>())
	,tcp(std::make_shared<Native::Interface::AppNavCompress::Ip::Tcp>())
	,virtual_reassembly(std::make_shared<Native::Interface::AppNavCompress::Ip::VirtualReassembly>())
	,dhcp(std::make_shared<Native::Interface::AppNavCompress::Ip::Dhcp>())
	,summary_address(std::make_shared<Native::Interface::AppNavCompress::Ip::SummaryAddress>())
	,verify(std::make_shared<Native::Interface::AppNavCompress::Ip::Verify>())
{
    access_group->parent = this;
    arp->parent = this;
    vrf->parent = this;
    no_address->parent = this;
    address->parent = this;
    hello_interval->parent = this;
    authentication->parent = this;
    hold_time->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    tcp->parent = this;
    virtual_reassembly->parent = this;
    dhcp->parent = this;
    summary_address->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "AppNav-Compress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Ip::~Ip()
{
}

bool Native::Interface::AppNavCompress::Ip::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| unnumbered.is_set
	|| directed_broadcast.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| mtu.is_set
	|| mroute_cache.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::AppNavCompress::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::AppNavCompress::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::AppNavCompress::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::AppNavCompress::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::AppNavCompress::Ip::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::AppNavCompress::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::AppNavCompress::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::AppNavCompress::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::AppNavCompress::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::AppNavCompress::Ip::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::AppNavCompress::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::AppNavCompress::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::AppNavCompress::Ip::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::AppNavCompress::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::AppNavCompress::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::AppNavCompress::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::AppNavCompress::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::AppNavCompress::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::AppNavCompress::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::AppNavCompress::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::AppNavCompress::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(route_cache_conf != nullptr)
    {
        children["route-cache-conf"] = route_cache_conf;
    }

    if(route_cache != nullptr)
    {
        children["route-cache"] = route_cache;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(virtual_reassembly != nullptr)
    {
        children["virtual-reassembly"] = virtual_reassembly;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Interface::AppNavCompress::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "arp" || name == "vrf" || name == "no-address" || name == "address" || name == "hello-interval" || name == "authentication" || name == "hold-time" || name == "helper-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache-conf" || name == "route-cache" || name == "router" || name == "tcp" || name == "virtual-reassembly" || name == "dhcp" || name == "summary-address" || name == "verify" || name == "admission" || name == "unnumbered" || name == "directed-broadcast" || name == "local-proxy-arp" || name == "proxy-arp" || name == "redirects" || name == "mtu" || name == "mroute-cache")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::AppNavCompress::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::In::In()
    :
    common_acl(std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl>())
	,acl(std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::has_data() const
{
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::AppNavCompress::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Ip::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Out()
    :
    common_acl(std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl>())
	,acl(std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::has_data() const
{
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::AppNavCompress::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Ip::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::AppNavCompress::Ip::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst::Police::Actions::ExceedSetDscpTransmit::ExceedAction::SetDscpTransmit::Dscp::Table::policed_dscp {0, "policed-dscp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::ExceedAction::drop {0, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch::Police::ExceedAction::policed_dscp_transmit {1, "policed-dscp-transmit"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType::bytes {0, "bytes"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType::ms {1, "ms"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType::packets {2, "packets"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::QueueLimit::QueueLimitType::us {3, "us"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::dscp {0, "dscp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::precedence {1, "precedence"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::cos {2, "cos"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::qos_group {3, "qos-group"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Set::Cos::Pack::wlan {4, "wlan"};

const Enum::YLeaf Native::Interface::AppNavCompress::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::AppNavCompress::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::AppNavCompress::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::AppNavCompress::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::AppNavCompress::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::AppNavCompress::Backup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::AppNavCompress::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::AppNavCompress::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::AppNavCompress::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::AppNavCompress::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::AppNavCompress::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::AppNavCompress::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::AppNavCompress::HoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::AppNavCompress::HoldQueue::Direction::out {1, "out"};


}
}

