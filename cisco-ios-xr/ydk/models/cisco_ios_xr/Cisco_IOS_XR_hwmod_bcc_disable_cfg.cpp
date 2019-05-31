
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_hwmod_bcc_disable_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_hwmod_bcc_disable_cfg {

HardwareModuleBccDisable::HardwareModuleBccDisable()
    :
    bcc(std::make_shared<HardwareModuleBccDisable::Bcc>())
{
    bcc->parent = this;

    yang_name = "hardware-module-bcc-disable"; yang_parent_name = "Cisco-IOS-XR-hwmod-bcc-disable-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModuleBccDisable::~HardwareModuleBccDisable()
{
}

bool HardwareModuleBccDisable::has_data() const
{
    if (is_presence_container) return true;
    return (bcc !=  nullptr && bcc->has_data());
}

bool HardwareModuleBccDisable::has_operation() const
{
    return is_set(yfilter)
	|| (bcc !=  nullptr && bcc->has_operation());
}

std::string HardwareModuleBccDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-hwmod-bcc-disable-cfg:hardware-module-bcc-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleBccDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleBccDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bcc")
    {
        if(bcc == nullptr)
        {
            bcc = std::make_shared<HardwareModuleBccDisable::Bcc>();
        }
        return bcc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleBccDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bcc != nullptr)
    {
        _children["bcc"] = bcc;
    }

    return _children;
}

void HardwareModuleBccDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleBccDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HardwareModuleBccDisable::clone_ptr() const
{
    return std::make_shared<HardwareModuleBccDisable>();
}

std::string HardwareModuleBccDisable::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleBccDisable::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleBccDisable::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModuleBccDisable::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModuleBccDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bcc")
        return true;
    return false;
}

HardwareModuleBccDisable::Bcc::Bcc()
    :
    node(std::make_shared<HardwareModuleBccDisable::Bcc::Node>())
{
    node->parent = this;

    yang_name = "bcc"; yang_parent_name = "hardware-module-bcc-disable"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleBccDisable::Bcc::~Bcc()
{
}

bool HardwareModuleBccDisable::Bcc::has_data() const
{
    if (is_presence_container) return true;
    return (node !=  nullptr && node->has_data());
}

bool HardwareModuleBccDisable::Bcc::has_operation() const
{
    return is_set(yfilter)
	|| (node !=  nullptr && node->has_operation());
}

std::string HardwareModuleBccDisable::Bcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-hwmod-bcc-disable-cfg:hardware-module-bcc-disable/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleBccDisable::Bcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleBccDisable::Bcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleBccDisable::Bcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<HardwareModuleBccDisable::Bcc::Node>();
        }
        return node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleBccDisable::Bcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node != nullptr)
    {
        _children["node"] = node;
    }

    return _children;
}

void HardwareModuleBccDisable::Bcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleBccDisable::Bcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleBccDisable::Bcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModuleBccDisable::Bcc::Node::Node()
    :
    all(std::make_shared<HardwareModuleBccDisable::Bcc::Node::All>())
{
    all->parent = this;

    yang_name = "node"; yang_parent_name = "bcc"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleBccDisable::Bcc::Node::~Node()
{
}

bool HardwareModuleBccDisable::Bcc::Node::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool HardwareModuleBccDisable::Bcc::Node::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string HardwareModuleBccDisable::Bcc::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-hwmod-bcc-disable-cfg:hardware-module-bcc-disable/bcc/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleBccDisable::Bcc::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleBccDisable::Bcc::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleBccDisable::Bcc::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<HardwareModuleBccDisable::Bcc::Node::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleBccDisable::Bcc::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void HardwareModuleBccDisable::Bcc::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleBccDisable::Bcc::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleBccDisable::Bcc::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

HardwareModuleBccDisable::Bcc::Node::All::All()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "all"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleBccDisable::Bcc::Node::All::~All()
{
}

bool HardwareModuleBccDisable::Bcc::Node::All::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool HardwareModuleBccDisable::Bcc::Node::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string HardwareModuleBccDisable::Bcc::Node::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-hwmod-bcc-disable-cfg:hardware-module-bcc-disable/bcc/node/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleBccDisable::Bcc::Node::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleBccDisable::Bcc::Node::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModuleBccDisable::Bcc::Node::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModuleBccDisable::Bcc::Node::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModuleBccDisable::Bcc::Node::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleBccDisable::Bcc::Node::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool HardwareModuleBccDisable::Bcc::Node::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}


}
}

