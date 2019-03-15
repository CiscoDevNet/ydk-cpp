
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_ms_cfg {

Sr::Sr()
    :
    enable{YType::empty, "enable"}
        ,
    local_block(nullptr) // presence node
    , mappings(std::make_shared<Sr::Mappings>())
    , adjacency_sid(std::make_shared<Sr::AdjacencySid>())
    , global_block(nullptr) // presence node
    , traffic_engineering(std::make_shared<Sr::TrafficEngineering>())
{
    mappings->parent = this;
    adjacency_sid->parent = this;
    traffic_engineering->parent = this;

    yang_name = "sr"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Sr::~Sr()
{
}

bool Sr::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (local_block !=  nullptr && local_block->has_data())
	|| (mappings !=  nullptr && mappings->has_data())
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (global_block !=  nullptr && global_block->has_data())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_data());
}

bool Sr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (local_block !=  nullptr && local_block->has_operation())
	|| (mappings !=  nullptr && mappings->has_operation())
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (global_block !=  nullptr && global_block->has_operation())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation());
}

std::string Sr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-block")
    {
        if(local_block == nullptr)
        {
            local_block = std::make_shared<Sr::LocalBlock>();
        }
        return local_block;
    }

    if(child_yang_name == "mappings")
    {
        if(mappings == nullptr)
        {
            mappings = std::make_shared<Sr::Mappings>();
        }
        return mappings;
    }

    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Sr::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "global-block")
    {
        if(global_block == nullptr)
        {
            global_block = std::make_shared<Sr::GlobalBlock>();
        }
        return global_block;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering")
    {
        if(traffic_engineering == nullptr)
        {
            traffic_engineering = std::make_shared<Sr::TrafficEngineering>();
        }
        return traffic_engineering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_block != nullptr)
    {
        _children["local-block"] = local_block;
    }

    if(mappings != nullptr)
    {
        _children["mappings"] = mappings;
    }

    if(adjacency_sid != nullptr)
    {
        _children["adjacency-sid"] = adjacency_sid;
    }

    if(global_block != nullptr)
    {
        _children["global-block"] = global_block;
    }

    if(traffic_engineering != nullptr)
    {
        _children["Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering"] = traffic_engineering;
    }

    return _children;
}

void Sr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Sr::clone_ptr() const
{
    return std::make_shared<Sr>();
}

std::string Sr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Sr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-block" || name == "mappings" || name == "adjacency-sid" || name == "global-block" || name == "traffic-engineering" || name == "enable")
        return true;
    return false;
}

Sr::LocalBlock::LocalBlock()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{

    yang_name = "local-block"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Sr::LocalBlock::~LocalBlock()
{
}

bool Sr::LocalBlock::has_data() const
{
    if (is_presence_container) return true;
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Sr::LocalBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Sr::LocalBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::LocalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::LocalBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::LocalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::LocalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::LocalBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::LocalBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Sr::LocalBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Sr::Mappings::Mappings()
    :
    mapping(this, {"af", "ip", "mask"})
{

    yang_name = "mappings"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Mappings::~Mappings()
{
}

bool Sr::Mappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping.len(); index++)
    {
        if(mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::Mappings::has_operation() const
{
    for (std::size_t index=0; index<mapping.len(); index++)
    {
        if(mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::Mappings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Mappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Mappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Mappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping")
    {
        auto ent_ = std::make_shared<Sr::Mappings::Mapping>();
        ent_->parent = this;
        mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Mappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::Mappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::Mappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::Mappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Sr::Mappings::Mapping::Mapping()
    :
    af{YType::enumeration, "af"},
    ip{YType::str, "ip"},
    mask{YType::uint32, "mask"},
    sid_start{YType::uint32, "sid-start"},
    sid_range{YType::uint32, "sid-range"},
    flag_attached{YType::enumeration, "flag-attached"}
{

    yang_name = "mapping"; yang_parent_name = "mappings"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Mappings::Mapping::~Mapping()
{
}

bool Sr::Mappings::Mapping::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ip.is_set
	|| mask.is_set
	|| sid_start.is_set
	|| sid_range.is_set
	|| flag_attached.is_set;
}

bool Sr::Mappings::Mapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_range.yfilter)
	|| ydk::is_set(flag_attached.yfilter);
}

std::string Sr::Mappings::Mapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/mappings/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Mappings::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";
    ADD_KEY_TOKEN(af, "af");
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Mappings::Mapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_range.is_set || is_set(sid_range.yfilter)) leaf_name_data.push_back(sid_range.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Mappings::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Mappings::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::Mappings::Mapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-range")
    {
        sid_range = value;
        sid_range.value_namespace = name_space;
        sid_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::Mappings::Mapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-range")
    {
        sid_range.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Sr::Mappings::Mapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ip" || name == "mask" || name == "sid-start" || name == "sid-range" || name == "flag-attached")
        return true;
    return false;
}

Sr::AdjacencySid::AdjacencySid()
    :
    interfaces(std::make_shared<Sr::AdjacencySid::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::AdjacencySid::~AdjacencySid()
{
}

bool Sr::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Sr::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Sr::AdjacencySid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Sr::AdjacencySid::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Sr::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

Sr::AdjacencySid::Interfaces::Interfaces()
    :
    interface(this, {"interface"})
{

    yang_name = "interfaces"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::AdjacencySid::Interfaces::~Interfaces()
{
}

bool Sr::AdjacencySid::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::AdjacencySid::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::AdjacencySid::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/adjacency-sid/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::AdjacencySid::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::AdjacencySid::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::AdjacencySid::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Sr::AdjacencySid::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::AdjacencySid::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::AdjacencySid::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::AdjacencySid::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::AdjacencySid::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Sr::AdjacencySid::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"}
        ,
    address_families(std::make_shared<Sr::AdjacencySid::Interfaces::Interface::AddressFamilies>())
{
    address_families->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::AdjacencySid::Interfaces::Interface::~Interface()
{
}

bool Sr::AdjacencySid::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (address_families !=  nullptr && address_families->has_data());
}

bool Sr::AdjacencySid::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (address_families !=  nullptr && address_families->has_operation());
}

std::string Sr::AdjacencySid::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/adjacency-sid/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::AdjacencySid::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::AdjacencySid::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::AdjacencySid::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-families")
    {
        if(address_families == nullptr)
        {
            address_families = std::make_shared<Sr::AdjacencySid::Interfaces::Interface::AddressFamilies>();
        }
        return address_families;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::AdjacencySid::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_families != nullptr)
    {
        _children["address-families"] = address_families;
    }

    return _children;
}

void Sr::AdjacencySid::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::AdjacencySid::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Sr::AdjacencySid::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-families" || name == "interface")
        return true;
    return false;
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamilies()
    :
    address_family(this, {"address_family"})
{

    yang_name = "address-families"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::~AddressFamilies()
{
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_family.len(); index++)
    {
        if(address_family[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::has_operation() const
{
    for (std::size_t index=0; index<address_family.len(); index++)
    {
        if(address_family[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-families";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        auto ent_ = std::make_shared<Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily>();
        ent_->parent = this;
        address_family.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_family.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::AddressFamily()
    :
    address_family{YType::enumeration, "address-family"}
        ,
    next_hops(std::make_shared<Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops>())
{
    next_hops->parent = this;

    yang_name = "address-family"; yang_parent_name = "address-families"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::~AddressFamily()
{
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    ADD_KEY_TOKEN(address_family, "address-family");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hops != nullptr)
    {
        _children["next-hops"] = next_hops;
    }

    return _children;
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hops" || name == "address-family")
        return true;
    return false;
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHops()
    :
    next_hop(this, {"ip_addr"})
{

    yang_name = "next-hops"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::~NextHops()
{
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::NextHop()
    :
    ip_addr{YType::str, "ip-addr"}
        ,
    l2_adjacency_sid(std::make_shared<Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid>())
{
    l2_adjacency_sid->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::~NextHop()
{
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| (l2_adjacency_sid !=  nullptr && l2_adjacency_sid->has_data());
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| (l2_adjacency_sid !=  nullptr && l2_adjacency_sid->has_operation());
}

std::string Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-adjacency-sid")
    {
        if(l2_adjacency_sid == nullptr)
        {
            l2_adjacency_sid = std::make_shared<Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid>();
        }
        return l2_adjacency_sid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_adjacency_sid != nullptr)
    {
        _children["l2-adjacency-sid"] = l2_adjacency_sid;
    }

    return _children;
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-adjacency-sid" || name == "ip-addr")
        return true;
    return false;
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::L2AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    absolute_sid{YType::uint32, "absolute-sid"},
    index_sid{YType::uint32, "index-sid"},
    srlb{YType::str, "srlb"}
{

    yang_name = "l2-adjacency-sid"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::~L2AdjacencySid()
{
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| absolute_sid.is_set
	|| index_sid.is_set
	|| srlb.is_set;
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(absolute_sid.yfilter)
	|| ydk::is_set(index_sid.yfilter)
	|| ydk::is_set(srlb.yfilter);
}

std::string Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (absolute_sid.is_set || is_set(absolute_sid.yfilter)) leaf_name_data.push_back(absolute_sid.get_name_leafdata());
    if (index_sid.is_set || is_set(index_sid.yfilter)) leaf_name_data.push_back(index_sid.get_name_leafdata());
    if (srlb.is_set || is_set(srlb.yfilter)) leaf_name_data.push_back(srlb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-sid")
    {
        absolute_sid = value;
        absolute_sid.value_namespace = name_space;
        absolute_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index-sid")
    {
        index_sid = value;
        index_sid.value_namespace = name_space;
        index_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb")
    {
        srlb = value;
        srlb.value_namespace = name_space;
        srlb.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "absolute-sid")
    {
        absolute_sid.yfilter = yfilter;
    }
    if(value_path == "index-sid")
    {
        index_sid.yfilter = yfilter;
    }
    if(value_path == "srlb")
    {
        srlb.yfilter = yfilter;
    }
}

bool Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "absolute-sid" || name == "index-sid" || name == "srlb")
        return true;
    return false;
}

Sr::GlobalBlock::GlobalBlock()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{

    yang_name = "global-block"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Sr::GlobalBlock::~GlobalBlock()
{
}

bool Sr::GlobalBlock::has_data() const
{
    if (is_presence_container) return true;
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Sr::GlobalBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Sr::GlobalBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::GlobalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::GlobalBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::GlobalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::GlobalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::GlobalBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::GlobalBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Sr::GlobalBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Sr::TrafficEngineering::TrafficEngineering()
    :
    te_latency{YType::empty, "te-latency"},
    maximum_sid_depth{YType::uint32, "maximum-sid-depth"},
    enable{YType::empty, "enable"}
        ,
    out_of_resources(std::make_shared<Sr::TrafficEngineering::OutOfResources>())
    , on_demand_colors(std::make_shared<Sr::TrafficEngineering::OnDemandColors>())
    , segments(std::make_shared<Sr::TrafficEngineering::Segments>())
    , logging(nullptr) // presence node
    , timers(std::make_shared<Sr::TrafficEngineering::Timers>())
    , binding_sid_rules(std::make_shared<Sr::TrafficEngineering::BindingSidRules>())
    , policies(std::make_shared<Sr::TrafficEngineering::Policies>())
    , srte_interfaces(std::make_shared<Sr::TrafficEngineering::SrteInterfaces>())
    , pcc(std::make_shared<Sr::TrafficEngineering::Pcc>())
    , affinity_maps(std::make_shared<Sr::TrafficEngineering::AffinityMaps>())
{
    out_of_resources->parent = this;
    on_demand_colors->parent = this;
    segments->parent = this;
    timers->parent = this;
    binding_sid_rules->parent = this;
    policies->parent = this;
    srte_interfaces->parent = this;
    pcc->parent = this;
    affinity_maps->parent = this;

    yang_name = "traffic-engineering"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::~TrafficEngineering()
{
}

bool Sr::TrafficEngineering::has_data() const
{
    if (is_presence_container) return true;
    return te_latency.is_set
	|| maximum_sid_depth.is_set
	|| enable.is_set
	|| (out_of_resources !=  nullptr && out_of_resources->has_data())
	|| (on_demand_colors !=  nullptr && on_demand_colors->has_data())
	|| (segments !=  nullptr && segments->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (binding_sid_rules !=  nullptr && binding_sid_rules->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (srte_interfaces !=  nullptr && srte_interfaces->has_data())
	|| (pcc !=  nullptr && pcc->has_data())
	|| (affinity_maps !=  nullptr && affinity_maps->has_data());
}

bool Sr::TrafficEngineering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_latency.yfilter)
	|| ydk::is_set(maximum_sid_depth.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (out_of_resources !=  nullptr && out_of_resources->has_operation())
	|| (on_demand_colors !=  nullptr && on_demand_colors->has_operation())
	|| (segments !=  nullptr && segments->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (binding_sid_rules !=  nullptr && binding_sid_rules->has_operation())
	|| (policies !=  nullptr && policies->has_operation())
	|| (srte_interfaces !=  nullptr && srte_interfaces->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation())
	|| (affinity_maps !=  nullptr && affinity_maps->has_operation());
}

std::string Sr::TrafficEngineering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_latency.is_set || is_set(te_latency.yfilter)) leaf_name_data.push_back(te_latency.get_name_leafdata());
    if (maximum_sid_depth.is_set || is_set(maximum_sid_depth.yfilter)) leaf_name_data.push_back(maximum_sid_depth.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-of-resources")
    {
        if(out_of_resources == nullptr)
        {
            out_of_resources = std::make_shared<Sr::TrafficEngineering::OutOfResources>();
        }
        return out_of_resources;
    }

    if(child_yang_name == "on-demand-colors")
    {
        if(on_demand_colors == nullptr)
        {
            on_demand_colors = std::make_shared<Sr::TrafficEngineering::OnDemandColors>();
        }
        return on_demand_colors;
    }

    if(child_yang_name == "segments")
    {
        if(segments == nullptr)
        {
            segments = std::make_shared<Sr::TrafficEngineering::Segments>();
        }
        return segments;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Sr::TrafficEngineering::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Sr::TrafficEngineering::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "binding-sid-rules")
    {
        if(binding_sid_rules == nullptr)
        {
            binding_sid_rules = std::make_shared<Sr::TrafficEngineering::BindingSidRules>();
        }
        return binding_sid_rules;
    }

    if(child_yang_name == "policies")
    {
        if(policies == nullptr)
        {
            policies = std::make_shared<Sr::TrafficEngineering::Policies>();
        }
        return policies;
    }

    if(child_yang_name == "srte-interfaces")
    {
        if(srte_interfaces == nullptr)
        {
            srte_interfaces = std::make_shared<Sr::TrafficEngineering::SrteInterfaces>();
        }
        return srte_interfaces;
    }

    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<Sr::TrafficEngineering::Pcc>();
        }
        return pcc;
    }

    if(child_yang_name == "affinity-maps")
    {
        if(affinity_maps == nullptr)
        {
            affinity_maps = std::make_shared<Sr::TrafficEngineering::AffinityMaps>();
        }
        return affinity_maps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out_of_resources != nullptr)
    {
        _children["out-of-resources"] = out_of_resources;
    }

    if(on_demand_colors != nullptr)
    {
        _children["on-demand-colors"] = on_demand_colors;
    }

    if(segments != nullptr)
    {
        _children["segments"] = segments;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(binding_sid_rules != nullptr)
    {
        _children["binding-sid-rules"] = binding_sid_rules;
    }

    if(policies != nullptr)
    {
        _children["policies"] = policies;
    }

    if(srte_interfaces != nullptr)
    {
        _children["srte-interfaces"] = srte_interfaces;
    }

    if(pcc != nullptr)
    {
        _children["pcc"] = pcc;
    }

    if(affinity_maps != nullptr)
    {
        _children["affinity-maps"] = affinity_maps;
    }

    return _children;
}

void Sr::TrafficEngineering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-latency")
    {
        te_latency = value;
        te_latency.value_namespace = name_space;
        te_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-sid-depth")
    {
        maximum_sid_depth = value;
        maximum_sid_depth.value_namespace = name_space;
        maximum_sid_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-latency")
    {
        te_latency.yfilter = yfilter;
    }
    if(value_path == "maximum-sid-depth")
    {
        maximum_sid_depth.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-of-resources" || name == "on-demand-colors" || name == "segments" || name == "logging" || name == "timers" || name == "binding-sid-rules" || name == "policies" || name == "srte-interfaces" || name == "pcc" || name == "affinity-maps" || name == "te-latency" || name == "maximum-sid-depth" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::OutOfResources::OutOfResources()
    :
    maximum_ls_ps{YType::uint32, "maximum-ls-ps"}
{

    yang_name = "out-of-resources"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::OutOfResources::~OutOfResources()
{
}

bool Sr::TrafficEngineering::OutOfResources::has_data() const
{
    if (is_presence_container) return true;
    return maximum_ls_ps.is_set;
}

bool Sr::TrafficEngineering::OutOfResources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_ls_ps.yfilter);
}

std::string Sr::TrafficEngineering::OutOfResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::OutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OutOfResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_ls_ps.is_set || is_set(maximum_ls_ps.yfilter)) leaf_name_data.push_back(maximum_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OutOfResources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::OutOfResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-ls-ps")
    {
        maximum_ls_ps = value;
        maximum_ls_ps.value_namespace = name_space;
        maximum_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OutOfResources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-ls-ps")
    {
        maximum_ls_ps.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OutOfResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-ls-ps")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColors()
    :
    on_demand_color(this, {"color"})
{

    yang_name = "on-demand-colors"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::OnDemandColors::~OnDemandColors()
{
}

bool Sr::TrafficEngineering::OnDemandColors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<on_demand_color.len(); index++)
    {
        if(on_demand_color[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::OnDemandColors::has_operation() const
{
    for (std::size_t index=0; index<on_demand_color.len(); index++)
    {
        if(on_demand_color[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::OnDemandColors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::OnDemandColors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-colors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-demand-color")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor>();
        ent_->parent = this;
        on_demand_color.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : on_demand_color.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::OnDemandColors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::OnDemandColors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-demand-color")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColor()
    :
    color{YType::uint32, "color"},
    bandwidth{YType::uint32, "bandwidth"},
    maximum_sid_depth{YType::uint32, "maximum-sid-depth"},
    enable{YType::empty, "enable"}
        ,
    on_demand_color_dyn_mpls(std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls>())
{
    on_demand_color_dyn_mpls->parent = this;

    yang_name = "on-demand-color"; yang_parent_name = "on-demand-colors"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::~OnDemandColor()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::has_data() const
{
    if (is_presence_container) return true;
    return color.is_set
	|| bandwidth.is_set
	|| maximum_sid_depth.is_set
	|| enable.is_set
	|| (on_demand_color_dyn_mpls !=  nullptr && on_demand_color_dyn_mpls->has_data());
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(maximum_sid_depth.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (on_demand_color_dyn_mpls !=  nullptr && on_demand_color_dyn_mpls->has_operation());
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/on-demand-colors/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-color";
    ADD_KEY_TOKEN(color, "color");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (maximum_sid_depth.is_set || is_set(maximum_sid_depth.yfilter)) leaf_name_data.push_back(maximum_sid_depth.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-demand-color-dyn-mpls")
    {
        if(on_demand_color_dyn_mpls == nullptr)
        {
            on_demand_color_dyn_mpls = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls>();
        }
        return on_demand_color_dyn_mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_demand_color_dyn_mpls != nullptr)
    {
        _children["on-demand-color-dyn-mpls"] = on_demand_color_dyn_mpls;
    }

    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-sid-depth")
    {
        maximum_sid_depth = value;
        maximum_sid_depth.value_namespace = name_space;
        maximum_sid_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-sid-depth")
    {
        maximum_sid_depth.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-demand-color-dyn-mpls" || name == "color" || name == "bandwidth" || name == "maximum-sid-depth" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMpls()
    :
    on_demand_color_dyn_mpls_flex_algorithm{YType::uint32, "on-demand-color-dyn-mpls-flex-algorithm"},
    enable{YType::empty, "enable"}
        ,
    on_demand_color_dyn_mpls_metric(std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric>())
    , on_demand_color_dyn_mpls_pce(std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce>())
    , disjoint_path(nullptr) // presence node
    , affinity_rules(std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules>())
{
    on_demand_color_dyn_mpls_metric->parent = this;
    on_demand_color_dyn_mpls_pce->parent = this;
    affinity_rules->parent = this;

    yang_name = "on-demand-color-dyn-mpls"; yang_parent_name = "on-demand-color"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::~OnDemandColorDynMpls()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::has_data() const
{
    if (is_presence_container) return true;
    return on_demand_color_dyn_mpls_flex_algorithm.is_set
	|| enable.is_set
	|| (on_demand_color_dyn_mpls_metric !=  nullptr && on_demand_color_dyn_mpls_metric->has_data())
	|| (on_demand_color_dyn_mpls_pce !=  nullptr && on_demand_color_dyn_mpls_pce->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data())
	|| (affinity_rules !=  nullptr && affinity_rules->has_data());
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_demand_color_dyn_mpls_flex_algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (on_demand_color_dyn_mpls_metric !=  nullptr && on_demand_color_dyn_mpls_metric->has_operation())
	|| (on_demand_color_dyn_mpls_pce !=  nullptr && on_demand_color_dyn_mpls_pce->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation())
	|| (affinity_rules !=  nullptr && affinity_rules->has_operation());
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-color-dyn-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_demand_color_dyn_mpls_flex_algorithm.is_set || is_set(on_demand_color_dyn_mpls_flex_algorithm.yfilter)) leaf_name_data.push_back(on_demand_color_dyn_mpls_flex_algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-demand-color-dyn-mpls-metric")
    {
        if(on_demand_color_dyn_mpls_metric == nullptr)
        {
            on_demand_color_dyn_mpls_metric = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric>();
        }
        return on_demand_color_dyn_mpls_metric;
    }

    if(child_yang_name == "on-demand-color-dyn-mpls-pce")
    {
        if(on_demand_color_dyn_mpls_pce == nullptr)
        {
            on_demand_color_dyn_mpls_pce = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce>();
        }
        return on_demand_color_dyn_mpls_pce;
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath>();
        }
        return disjoint_path;
    }

    if(child_yang_name == "affinity-rules")
    {
        if(affinity_rules == nullptr)
        {
            affinity_rules = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules>();
        }
        return affinity_rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_demand_color_dyn_mpls_metric != nullptr)
    {
        _children["on-demand-color-dyn-mpls-metric"] = on_demand_color_dyn_mpls_metric;
    }

    if(on_demand_color_dyn_mpls_pce != nullptr)
    {
        _children["on-demand-color-dyn-mpls-pce"] = on_demand_color_dyn_mpls_pce;
    }

    if(disjoint_path != nullptr)
    {
        _children["disjoint-path"] = disjoint_path;
    }

    if(affinity_rules != nullptr)
    {
        _children["affinity-rules"] = affinity_rules;
    }

    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-demand-color-dyn-mpls-flex-algorithm")
    {
        on_demand_color_dyn_mpls_flex_algorithm = value;
        on_demand_color_dyn_mpls_flex_algorithm.value_namespace = name_space;
        on_demand_color_dyn_mpls_flex_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-demand-color-dyn-mpls-flex-algorithm")
    {
        on_demand_color_dyn_mpls_flex_algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-demand-color-dyn-mpls-metric" || name == "on-demand-color-dyn-mpls-pce" || name == "disjoint-path" || name == "affinity-rules" || name == "on-demand-color-dyn-mpls-flex-algorithm" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::OnDemandColorDynMplsMetric()
    :
    metric_type{YType::enumeration, "metric-type"},
    enable{YType::empty, "enable"}
        ,
    metric_margin(std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin>())
{
    metric_margin->parent = this;

    yang_name = "on-demand-color-dyn-mpls-metric"; yang_parent_name = "on-demand-color-dyn-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::~OnDemandColorDynMplsMetric()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::has_data() const
{
    if (is_presence_container) return true;
    return metric_type.is_set
	|| enable.is_set
	|| (metric_margin !=  nullptr && metric_margin->has_data());
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (metric_margin !=  nullptr && metric_margin->has_operation());
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-color-dyn-mpls-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-margin")
    {
        if(metric_margin == nullptr)
        {
            metric_margin = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin>();
        }
        return metric_margin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric_margin != nullptr)
    {
        _children["metric-margin"] = metric_margin;
    }

    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-margin" || name == "metric-type" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::MetricMargin()
    :
    value_type{YType::enumeration, "value-type"},
    absolute_value{YType::uint32, "absolute-value"},
    relative_value{YType::uint32, "relative-value"}
{

    yang_name = "metric-margin"; yang_parent_name = "on-demand-color-dyn-mpls-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::~MetricMargin()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::has_data() const
{
    if (is_presence_container) return true;
    return value_type.is_set
	|| absolute_value.is_set
	|| relative_value.is_set;
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_type.yfilter)
	|| ydk::is_set(absolute_value.yfilter)
	|| ydk::is_set(relative_value.yfilter);
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-margin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_type.is_set || is_set(value_type.yfilter)) leaf_name_data.push_back(value_type.get_name_leafdata());
    if (absolute_value.is_set || is_set(absolute_value.yfilter)) leaf_name_data.push_back(absolute_value.get_name_leafdata());
    if (relative_value.is_set || is_set(relative_value.yfilter)) leaf_name_data.push_back(relative_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value-type")
    {
        value_type = value;
        value_type.value_namespace = name_space;
        value_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-value")
    {
        absolute_value = value;
        absolute_value.value_namespace = name_space;
        absolute_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-value")
    {
        relative_value = value;
        relative_value.value_namespace = name_space;
        relative_value.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value-type")
    {
        value_type.yfilter = yfilter;
    }
    if(value_path == "absolute-value")
    {
        absolute_value.yfilter = yfilter;
    }
    if(value_path == "relative-value")
    {
        relative_value.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value-type" || name == "absolute-value" || name == "relative-value")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::OnDemandColorDynMplsPce()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "on-demand-color-dyn-mpls-pce"; yang_parent_name = "on-demand-color-dyn-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::~OnDemandColorDynMplsPce()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-color-dyn-mpls-pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::DisjointPath()
    :
    group_id{YType::uint32, "group-id"},
    disjointness_type{YType::enumeration, "disjointness-type"},
    sub_id{YType::uint32, "sub-id"}
{

    yang_name = "disjoint-path"; yang_parent_name = "on-demand-color-dyn-mpls"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::~DisjointPath()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| disjointness_type.is_set
	|| sub_id.is_set;
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(disjointness_type.yfilter)
	|| ydk::is_set(sub_id.yfilter);
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (disjointness_type.is_set || is_set(disjointness_type.yfilter)) leaf_name_data.push_back(disjointness_type.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disjointness-type")
    {
        disjointness_type = value;
        disjointness_type.value_namespace = name_space;
        disjointness_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "disjointness-type")
    {
        disjointness_type.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id" || name == "disjointness-type" || name == "sub-id")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRules()
    :
    affinity_rule(this, {"rule"})
{

    yang_name = "affinity-rules"; yang_parent_name = "on-demand-color-dyn-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::~AffinityRules()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_rule.len(); index++)
    {
        if(affinity_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::has_operation() const
{
    for (std::size_t index=0; index<affinity_rule.len(); index++)
    {
        if(affinity_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-rule")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule>();
        ent_->parent = this;
        affinity_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-rule")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityRule()
    :
    rule{YType::enumeration, "rule"}
        ,
    affinity_name(this, {"affinity_name"})
{

    yang_name = "affinity-rule"; yang_parent_name = "affinity-rules"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::~AffinityRule()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_name.len(); index++)
    {
        if(affinity_name[index]->has_data())
            return true;
    }
    return rule.is_set;
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::has_operation() const
{
    for (std::size_t index=0; index<affinity_name.len(); index++)
    {
        if(affinity_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rule.yfilter);
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-rule";
    ADD_KEY_TOKEN(rule, "rule");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule.is_set || is_set(rule.yfilter)) leaf_name_data.push_back(rule.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-name")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName>();
        ent_->parent = this;
        affinity_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule")
    {
        rule = value;
        rule.value_namespace = name_space;
        rule.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule")
    {
        rule.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-name" || name == "rule")
        return true;
    return false;
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::AffinityName()
    :
    affinity_name{YType::str, "affinity-name"}
{

    yang_name = "affinity-name"; yang_parent_name = "affinity-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::~AffinityName()
{
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::has_data() const
{
    if (is_presence_container) return true;
    return affinity_name.is_set;
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter);
}

std::string Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-name";
    ADD_KEY_TOKEN(affinity_name, "affinity-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-name")
        return true;
    return false;
}

Sr::TrafficEngineering::Segments::Segments()
    :
    segment(this, {"path_name"})
{

    yang_name = "segments"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Segments::~Segments()
{
}

bool Sr::TrafficEngineering::Segments::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Segments::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Segments::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Segments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Segments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Segments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Segments::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Segments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Segments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Segments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Segments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment")
        return true;
    return false;
}

Sr::TrafficEngineering::Segments::Segment::Segment()
    :
    path_name{YType::str, "path-name"},
    enable{YType::empty, "enable"}
        ,
    segments(std::make_shared<Sr::TrafficEngineering::Segments::Segment::Segments_>())
{
    segments->parent = this;

    yang_name = "segment"; yang_parent_name = "segments"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Segments::Segment::~Segment()
{
}

bool Sr::TrafficEngineering::Segments::Segment::has_data() const
{
    if (is_presence_container) return true;
    return path_name.is_set
	|| enable.is_set
	|| (segments !=  nullptr && segments->has_data());
}

bool Sr::TrafficEngineering::Segments::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (segments !=  nullptr && segments->has_operation());
}

std::string Sr::TrafficEngineering::Segments::Segment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/segments/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Segments::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    ADD_KEY_TOKEN(path_name, "path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Segments::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Segments::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segments")
    {
        if(segments == nullptr)
        {
            segments = std::make_shared<Sr::TrafficEngineering::Segments::Segment::Segments_>();
        }
        return segments;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Segments::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segments != nullptr)
    {
        _children["segments"] = segments;
    }

    return _children;
}

void Sr::TrafficEngineering::Segments::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Segments::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Segments::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segments" || name == "path-name" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::Segments::Segment::Segments_::Segments_()
    :
    segment(this, {"segment_index"})
{

    yang_name = "segments"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Segments::Segment::Segments_::~Segments_()
{
}

bool Sr::TrafficEngineering::Segments::Segment::Segments_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Segments::Segment::Segments_::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Segments::Segment::Segments_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Segments::Segment::Segments_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Segments::Segment::Segments_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Segments::Segment::Segments_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Segments::Segment::Segments_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Segments::Segment::Segments_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Segments::Segment::Segments_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment")
        return true;
    return false;
}

Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::Segment_()
    :
    segment_index{YType::uint32, "segment-index"},
    segment_type{YType::enumeration, "segment-type"},
    address{YType::str, "address"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "segment"; yang_parent_name = "segments"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::~Segment_()
{
}

bool Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::has_data() const
{
    if (is_presence_container) return true;
    return segment_index.is_set
	|| segment_type.is_set
	|| address.is_set
	|| mpls_label.is_set;
}

bool Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_index.yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    ADD_KEY_TOKEN(segment_index, "segment-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_index.is_set || is_set(segment_index.yfilter)) leaf_name_data.push_back(segment_index.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-index")
    {
        segment_index = value;
        segment_index.value_namespace = name_space;
        segment_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-index")
    {
        segment_index.yfilter = yfilter;
    }
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-index" || name == "segment-type" || name == "address" || name == "mpls-label")
        return true;
    return false;
}

Sr::TrafficEngineering::Logging::Logging()
    :
    policy_status{YType::empty, "policy-status"}
{

    yang_name = "logging"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Sr::TrafficEngineering::Logging::~Logging()
{
}

bool Sr::TrafficEngineering::Logging::has_data() const
{
    if (is_presence_container) return true;
    return policy_status.is_set;
}

bool Sr::TrafficEngineering::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_status.yfilter);
}

std::string Sr::TrafficEngineering::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_status.is_set || is_set(policy_status.yfilter)) leaf_name_data.push_back(policy_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-status")
    {
        policy_status = value;
        policy_status.value_namespace = name_space;
        policy_status.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-status")
    {
        policy_status.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-status")
        return true;
    return false;
}

Sr::TrafficEngineering::Timers::Timers()
    :
    cleanup_delay{YType::uint32, "cleanup-delay"},
    install_delay{YType::uint32, "install-delay"},
    periodic_reoptimization{YType::uint32, "periodic-reoptimization"}
{

    yang_name = "timers"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Timers::~Timers()
{
}

bool Sr::TrafficEngineering::Timers::has_data() const
{
    if (is_presence_container) return true;
    return cleanup_delay.is_set
	|| install_delay.is_set
	|| periodic_reoptimization.is_set;
}

bool Sr::TrafficEngineering::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cleanup_delay.yfilter)
	|| ydk::is_set(install_delay.yfilter)
	|| ydk::is_set(periodic_reoptimization.yfilter);
}

std::string Sr::TrafficEngineering::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup_delay.is_set || is_set(cleanup_delay.yfilter)) leaf_name_data.push_back(cleanup_delay.get_name_leafdata());
    if (install_delay.is_set || is_set(install_delay.yfilter)) leaf_name_data.push_back(install_delay.get_name_leafdata());
    if (periodic_reoptimization.is_set || is_set(periodic_reoptimization.yfilter)) leaf_name_data.push_back(periodic_reoptimization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cleanup-delay")
    {
        cleanup_delay = value;
        cleanup_delay.value_namespace = name_space;
        cleanup_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-delay")
    {
        install_delay = value;
        install_delay.value_namespace = name_space;
        install_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-reoptimization")
    {
        periodic_reoptimization = value;
        periodic_reoptimization.value_namespace = name_space;
        periodic_reoptimization.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cleanup-delay")
    {
        cleanup_delay.yfilter = yfilter;
    }
    if(value_path == "install-delay")
    {
        install_delay.yfilter = yfilter;
    }
    if(value_path == "periodic-reoptimization")
    {
        periodic_reoptimization.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cleanup-delay" || name == "install-delay" || name == "periodic-reoptimization")
        return true;
    return false;
}

Sr::TrafficEngineering::BindingSidRules::BindingSidRules()
    :
    explicit_(nullptr) // presence node
    , dynamic_binding_sid_rules(nullptr) // presence node
{

    yang_name = "binding-sid-rules"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::BindingSidRules::~BindingSidRules()
{
}

bool Sr::TrafficEngineering::BindingSidRules::has_data() const
{
    if (is_presence_container) return true;
    return (explicit_ !=  nullptr && explicit_->has_data())
	|| (dynamic_binding_sid_rules !=  nullptr && dynamic_binding_sid_rules->has_data());
}

bool Sr::TrafficEngineering::BindingSidRules::has_operation() const
{
    return is_set(yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (dynamic_binding_sid_rules !=  nullptr && dynamic_binding_sid_rules->has_operation());
}

std::string Sr::TrafficEngineering::BindingSidRules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::BindingSidRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::BindingSidRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::BindingSidRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Sr::TrafficEngineering::BindingSidRules::Explicit>();
        }
        return explicit_;
    }

    if(child_yang_name == "dynamic-binding-sid-rules")
    {
        if(dynamic_binding_sid_rules == nullptr)
        {
            dynamic_binding_sid_rules = std::make_shared<Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules>();
        }
        return dynamic_binding_sid_rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::BindingSidRules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(explicit_ != nullptr)
    {
        _children["explicit"] = explicit_;
    }

    if(dynamic_binding_sid_rules != nullptr)
    {
        _children["dynamic-binding-sid-rules"] = dynamic_binding_sid_rules;
    }

    return _children;
}

void Sr::TrafficEngineering::BindingSidRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::BindingSidRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::BindingSidRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "dynamic-binding-sid-rules")
        return true;
    return false;
}

Sr::TrafficEngineering::BindingSidRules::Explicit::Explicit()
    :
    rule{YType::enumeration, "rule"}
{

    yang_name = "explicit"; yang_parent_name = "binding-sid-rules"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Sr::TrafficEngineering::BindingSidRules::Explicit::~Explicit()
{
}

bool Sr::TrafficEngineering::BindingSidRules::Explicit::has_data() const
{
    if (is_presence_container) return true;
    return rule.is_set;
}

bool Sr::TrafficEngineering::BindingSidRules::Explicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule.yfilter);
}

std::string Sr::TrafficEngineering::BindingSidRules::Explicit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/binding-sid-rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::BindingSidRules::Explicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::BindingSidRules::Explicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule.is_set || is_set(rule.yfilter)) leaf_name_data.push_back(rule.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::BindingSidRules::Explicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::BindingSidRules::Explicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::BindingSidRules::Explicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule")
    {
        rule = value;
        rule.value_namespace = name_space;
        rule.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::BindingSidRules::Explicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule")
    {
        rule.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::BindingSidRules::Explicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule")
        return true;
    return false;
}

Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::DynamicBindingSidRules()
    :
    dynamic_binding_sid_rule{YType::enumeration, "dynamic-binding-sid-rule"}
{

    yang_name = "dynamic-binding-sid-rules"; yang_parent_name = "binding-sid-rules"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::~DynamicBindingSidRules()
{
}

bool Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::has_data() const
{
    if (is_presence_container) return true;
    return dynamic_binding_sid_rule.is_set;
}

bool Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_binding_sid_rule.yfilter);
}

std::string Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/binding-sid-rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-binding-sid-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_binding_sid_rule.is_set || is_set(dynamic_binding_sid_rule.yfilter)) leaf_name_data.push_back(dynamic_binding_sid_rule.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-binding-sid-rule")
    {
        dynamic_binding_sid_rule = value;
        dynamic_binding_sid_rule.value_namespace = name_space;
        dynamic_binding_sid_rule.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-binding-sid-rule")
    {
        dynamic_binding_sid_rule.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-binding-sid-rule")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policies()
    :
    policy(this, {"policy_name"})
{

    yang_name = "policies"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Policies::~Policies()
{
}

bool Sr::TrafficEngineering::Policies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Policies::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Policies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Policies::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Policies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Policies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::Policy()
    :
    policy_name{YType::str, "policy-name"},
    forward_class{YType::uint32, "forward-class"},
    ipv6_disable{YType::empty, "ipv6-disable"},
    shutdown{YType::empty, "shutdown"},
    bandwidth{YType::uint32, "bandwidth"},
    enable{YType::empty, "enable"}
        ,
    steering(std::make_shared<Sr::TrafficEngineering::Policies::Policy::Steering>())
    , binding_sid(std::make_shared<Sr::TrafficEngineering::Policies::Policy::BindingSid>())
    , policy_color_endpoint(nullptr) // presence node
    , auto_route(std::make_shared<Sr::TrafficEngineering::Policies::Policy::AutoRoute>())
    , candidate_paths(std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths>())
{
    steering->parent = this;
    binding_sid->parent = this;
    auto_route->parent = this;
    candidate_paths->parent = this;

    yang_name = "policy"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Policies::Policy::~Policy()
{
}

bool Sr::TrafficEngineering::Policies::Policy::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| forward_class.is_set
	|| ipv6_disable.is_set
	|| shutdown.is_set
	|| bandwidth.is_set
	|| enable.is_set
	|| (steering !=  nullptr && steering->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (policy_color_endpoint !=  nullptr && policy_color_endpoint->has_data())
	|| (auto_route !=  nullptr && auto_route->has_data())
	|| (candidate_paths !=  nullptr && candidate_paths->has_data());
}

bool Sr::TrafficEngineering::Policies::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(ipv6_disable.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (steering !=  nullptr && steering->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (policy_color_endpoint !=  nullptr && policy_color_endpoint->has_operation())
	|| (auto_route !=  nullptr && auto_route->has_operation())
	|| (candidate_paths !=  nullptr && candidate_paths->has_operation());
}

std::string Sr::TrafficEngineering::Policies::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/policies/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Policies::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (ipv6_disable.is_set || is_set(ipv6_disable.yfilter)) leaf_name_data.push_back(ipv6_disable.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "steering")
    {
        if(steering == nullptr)
        {
            steering = std::make_shared<Sr::TrafficEngineering::Policies::Policy::Steering>();
        }
        return steering;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Sr::TrafficEngineering::Policies::Policy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "policy-color-endpoint")
    {
        if(policy_color_endpoint == nullptr)
        {
            policy_color_endpoint = std::make_shared<Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint>();
        }
        return policy_color_endpoint;
    }

    if(child_yang_name == "auto-route")
    {
        if(auto_route == nullptr)
        {
            auto_route = std::make_shared<Sr::TrafficEngineering::Policies::Policy::AutoRoute>();
        }
        return auto_route;
    }

    if(child_yang_name == "candidate-paths")
    {
        if(candidate_paths == nullptr)
        {
            candidate_paths = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths>();
        }
        return candidate_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(steering != nullptr)
    {
        _children["steering"] = steering;
    }

    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(policy_color_endpoint != nullptr)
    {
        _children["policy-color-endpoint"] = policy_color_endpoint;
    }

    if(auto_route != nullptr)
    {
        _children["auto-route"] = auto_route;
    }

    if(candidate_paths != nullptr)
    {
        _children["candidate-paths"] = candidate_paths;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-disable")
    {
        ipv6_disable = value;
        ipv6_disable.value_namespace = name_space;
        ipv6_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "ipv6-disable")
    {
        ipv6_disable.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "steering" || name == "binding-sid" || name == "policy-color-endpoint" || name == "auto-route" || name == "candidate-paths" || name == "policy-name" || name == "forward-class" || name == "ipv6-disable" || name == "shutdown" || name == "bandwidth" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::Steering::Steering()
    :
    applications(std::make_shared<Sr::TrafficEngineering::Policies::Policy::Steering::Applications>())
{
    applications->parent = this;

    yang_name = "steering"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::Steering::~Steering()
{
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::has_data() const
{
    if (is_presence_container) return true;
    return (applications !=  nullptr && applications->has_data());
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::has_operation() const
{
    return is_set(yfilter)
	|| (applications !=  nullptr && applications->has_operation());
}

std::string Sr::TrafficEngineering::Policies::Policy::Steering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::Steering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::Steering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applications")
    {
        if(applications == nullptr)
        {
            applications = std::make_shared<Sr::TrafficEngineering::Policies::Policy::Steering::Applications>();
        }
        return applications;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::Steering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(applications != nullptr)
    {
        _children["applications"] = applications;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::Steering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Policies::Policy::Steering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "applications")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Applications()
    :
    application(this, {"application"})
{

    yang_name = "applications"; yang_parent_name = "steering"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::Steering::Applications::~Applications()
{
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::Applications::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::Applications::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::Steering::Applications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applications";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::Steering::Applications::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::Steering::Applications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::Steering::Applications::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::Steering::Applications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Policies::Policy::Steering::Applications::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::Applications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::Application()
    :
    application{YType::enumeration, "application"},
    disable{YType::empty, "disable"}
{

    yang_name = "application"; yang_parent_name = "applications"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::~Application()
{
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::has_data() const
{
    if (is_presence_container) return true;
    return application.is_set
	|| disable.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(application, "application");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application.is_set || is_set(application.yfilter)) leaf_name_data.push_back(application.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application")
    {
        application = value;
        application.value_namespace = name_space;
        application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application")
    {
        application.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "disable")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::BindingSid::BindingSid()
    :
    binding_sid_type{YType::enumeration, "binding-sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "binding-sid"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::BindingSid::~BindingSid()
{
}

bool Sr::TrafficEngineering::Policies::Policy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return binding_sid_type.is_set
	|| mpls_label.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_sid_type.is_set || is_set(binding_sid_type.yfilter)) leaf_name_data.push_back(binding_sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-sid-type")
    {
        binding_sid_type = value;
        binding_sid_type.value_namespace = name_space;
        binding_sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-sid-type")
    {
        binding_sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid-type" || name == "mpls-label")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::PolicyColorEndpoint()
    :
    color{YType::uint32, "color"},
    end_point_type{YType::enumeration, "end-point-type"},
    end_point_address{YType::str, "end-point-address"}
{

    yang_name = "policy-color-endpoint"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::~PolicyColorEndpoint()
{
}

bool Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::has_data() const
{
    if (is_presence_container) return true;
    return color.is_set
	|| end_point_type.is_set
	|| end_point_address.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(end_point_type.yfilter)
	|| ydk::is_set(end_point_address.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-color-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (end_point_type.is_set || is_set(end_point_type.yfilter)) leaf_name_data.push_back(end_point_type.get_name_leafdata());
    if (end_point_address.is_set || is_set(end_point_address.yfilter)) leaf_name_data.push_back(end_point_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-point-type")
    {
        end_point_type = value;
        end_point_type.value_namespace = name_space;
        end_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-point-address")
    {
        end_point_address = value;
        end_point_address.value_namespace = name_space;
        end_point_address.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "end-point-type")
    {
        end_point_type.yfilter = yfilter;
    }
    if(value_path == "end-point-address")
    {
        end_point_address.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color" || name == "end-point-type" || name == "end-point-address")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRoute()
    :
    force_sr_include{YType::empty, "force-sr-include"},
    enable{YType::empty, "enable"}
        ,
    auto_route_metric(std::make_shared<Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric>())
    , include_prefixes(std::make_shared<Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes>())
{
    auto_route_metric->parent = this;
    include_prefixes->parent = this;

    yang_name = "auto-route"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::AutoRoute::~AutoRoute()
{
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::has_data() const
{
    if (is_presence_container) return true;
    return force_sr_include.is_set
	|| enable.is_set
	|| (auto_route_metric !=  nullptr && auto_route_metric->has_data())
	|| (include_prefixes !=  nullptr && include_prefixes->has_data());
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_sr_include.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (auto_route_metric !=  nullptr && auto_route_metric->has_operation())
	|| (include_prefixes !=  nullptr && include_prefixes->has_operation());
}

std::string Sr::TrafficEngineering::Policies::Policy::AutoRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::AutoRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_sr_include.is_set || is_set(force_sr_include.yfilter)) leaf_name_data.push_back(force_sr_include.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::AutoRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-metric")
    {
        if(auto_route_metric == nullptr)
        {
            auto_route_metric = std::make_shared<Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric>();
        }
        return auto_route_metric;
    }

    if(child_yang_name == "include-prefixes")
    {
        if(include_prefixes == nullptr)
        {
            include_prefixes = std::make_shared<Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes>();
        }
        return include_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::AutoRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_route_metric != nullptr)
    {
        _children["auto-route-metric"] = auto_route_metric;
    }

    if(include_prefixes != nullptr)
    {
        _children["include-prefixes"] = include_prefixes;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::AutoRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-sr-include")
    {
        force_sr_include = value;
        force_sr_include.value_namespace = name_space;
        force_sr_include.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::AutoRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-sr-include")
    {
        force_sr_include.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-metric" || name == "include-prefixes" || name == "force-sr-include" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::AutoRouteMetric()
    :
    autoroute_metric_type{YType::enumeration, "autoroute-metric-type"},
    metric_relative_value{YType::int32, "metric-relative-value"},
    metric_constant_value{YType::uint32, "metric-constant-value"}
{

    yang_name = "auto-route-metric"; yang_parent_name = "auto-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::~AutoRouteMetric()
{
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::has_data() const
{
    if (is_presence_container) return true;
    return autoroute_metric_type.is_set
	|| metric_relative_value.is_set
	|| metric_constant_value.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autoroute_metric_type.yfilter)
	|| ydk::is_set(metric_relative_value.yfilter)
	|| ydk::is_set(metric_constant_value.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autoroute_metric_type.is_set || is_set(autoroute_metric_type.yfilter)) leaf_name_data.push_back(autoroute_metric_type.get_name_leafdata());
    if (metric_relative_value.is_set || is_set(metric_relative_value.yfilter)) leaf_name_data.push_back(metric_relative_value.get_name_leafdata());
    if (metric_constant_value.is_set || is_set(metric_constant_value.yfilter)) leaf_name_data.push_back(metric_constant_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autoroute-metric-type")
    {
        autoroute_metric_type = value;
        autoroute_metric_type.value_namespace = name_space;
        autoroute_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-relative-value")
    {
        metric_relative_value = value;
        metric_relative_value.value_namespace = name_space;
        metric_relative_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-constant-value")
    {
        metric_constant_value = value;
        metric_constant_value.value_namespace = name_space;
        metric_constant_value.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autoroute-metric-type")
    {
        autoroute_metric_type.yfilter = yfilter;
    }
    if(value_path == "metric-relative-value")
    {
        metric_relative_value.yfilter = yfilter;
    }
    if(value_path == "metric-constant-value")
    {
        metric_constant_value.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute-metric-type" || name == "metric-relative-value" || name == "metric-constant-value")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefixes()
    :
    include_prefix(this, {"af_type", "prefix_address", "prefix_length"})
{

    yang_name = "include-prefixes"; yang_parent_name = "auto-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::~IncludePrefixes()
{
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<include_prefix.len(); index++)
    {
        if(include_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::has_operation() const
{
    for (std::size_t index=0; index<include_prefix.len(); index++)
    {
        if(include_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include-prefix")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix>();
        ent_->parent = this;
        include_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : include_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-prefix")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::IncludePrefix()
    :
    af_type{YType::enumeration, "af-type"},
    prefix_address{YType::str, "prefix-address"},
    prefix_length{YType::uint32, "prefix-length"}
{

    yang_name = "include-prefix"; yang_parent_name = "include-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::~IncludePrefix()
{
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_type.is_set
	|| prefix_address.is_set
	|| prefix_length.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_type.yfilter)
	|| ydk::is_set(prefix_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-prefix";
    ADD_KEY_TOKEN(af_type, "af-type");
    ADD_KEY_TOKEN(prefix_address, "prefix-address");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_type.is_set || is_set(af_type.yfilter)) leaf_name_data.push_back(af_type.get_name_leafdata());
    if (prefix_address.is_set || is_set(prefix_address.yfilter)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-type")
    {
        af_type = value;
        af_type.value_namespace = name_space;
        af_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-address")
    {
        prefix_address = value;
        prefix_address.value_namespace = name_space;
        prefix_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-type")
    {
        af_type.yfilter = yfilter;
    }
    if(value_path == "prefix-address")
    {
        prefix_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-type" || name == "prefix-address" || name == "prefix-length")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::CandidatePaths()
    :
    enable{YType::empty, "enable"}
        ,
    preferences(std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences>())
{
    preferences->parent = this;

    yang_name = "candidate-paths"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::~CandidatePaths()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (preferences !=  nullptr && preferences->has_data());
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (preferences !=  nullptr && preferences->has_operation());
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preferences")
    {
        if(preferences == nullptr)
        {
            preferences = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences>();
        }
        return preferences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(preferences != nullptr)
    {
        _children["preferences"] = preferences;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preferences" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preferences()
    :
    preference(this, {"path_index"})
{

    yang_name = "preferences"; yang_parent_name = "candidate-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::~Preferences()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<preference.len(); index++)
    {
        if(preference[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::has_operation() const
{
    for (std::size_t index=0; index<preference.len(); index++)
    {
        if(preference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preference")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference>();
        ent_->parent = this;
        preference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : preference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Preference()
    :
    path_index{YType::uint32, "path-index"},
    enable{YType::empty, "enable"}
        ,
    constraints(std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints>())
    , path_infos(std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos>())
{
    constraints->parent = this;
    path_infos->parent = this;

    yang_name = "preference"; yang_parent_name = "preferences"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::~Preference()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::has_data() const
{
    if (is_presence_container) return true;
    return path_index.is_set
	|| enable.is_set
	|| (constraints !=  nullptr && constraints->has_data())
	|| (path_infos !=  nullptr && path_infos->has_data());
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (constraints !=  nullptr && constraints->has_operation())
	|| (path_infos !=  nullptr && path_infos->has_operation());
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preference";
    ADD_KEY_TOKEN(path_index, "path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraints")
    {
        if(constraints == nullptr)
        {
            constraints = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints>();
        }
        return constraints;
    }

    if(child_yang_name == "path-infos")
    {
        if(path_infos == nullptr)
        {
            path_infos = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos>();
        }
        return path_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(constraints != nullptr)
    {
        _children["constraints"] = constraints;
    }

    if(path_infos != nullptr)
    {
        _children["path-infos"] = path_infos;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraints" || name == "path-infos" || name == "path-index" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::Constraints()
    :
    disjoint_path(nullptr) // presence node
    , segment_rules(nullptr) // presence node
    , affinity_rules(std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules>())
{
    affinity_rules->parent = this;

    yang_name = "constraints"; yang_parent_name = "preference"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::~Constraints()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::has_data() const
{
    if (is_presence_container) return true;
    return (disjoint_path !=  nullptr && disjoint_path->has_data())
	|| (segment_rules !=  nullptr && segment_rules->has_data())
	|| (affinity_rules !=  nullptr && affinity_rules->has_data());
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::has_operation() const
{
    return is_set(yfilter)
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation())
	|| (segment_rules !=  nullptr && segment_rules->has_operation())
	|| (affinity_rules !=  nullptr && affinity_rules->has_operation());
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath>();
        }
        return disjoint_path;
    }

    if(child_yang_name == "segment-rules")
    {
        if(segment_rules == nullptr)
        {
            segment_rules = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules>();
        }
        return segment_rules;
    }

    if(child_yang_name == "affinity-rules")
    {
        if(affinity_rules == nullptr)
        {
            affinity_rules = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules>();
        }
        return affinity_rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disjoint_path != nullptr)
    {
        _children["disjoint-path"] = disjoint_path;
    }

    if(segment_rules != nullptr)
    {
        _children["segment-rules"] = segment_rules;
    }

    if(affinity_rules != nullptr)
    {
        _children["affinity-rules"] = affinity_rules;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disjoint-path" || name == "segment-rules" || name == "affinity-rules")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::DisjointPath()
    :
    group_id{YType::uint32, "group-id"},
    disjointness_type{YType::enumeration, "disjointness-type"},
    sub_id{YType::uint32, "sub-id"}
{

    yang_name = "disjoint-path"; yang_parent_name = "constraints"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::~DisjointPath()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| disjointness_type.is_set
	|| sub_id.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(disjointness_type.yfilter)
	|| ydk::is_set(sub_id.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (disjointness_type.is_set || is_set(disjointness_type.yfilter)) leaf_name_data.push_back(disjointness_type.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disjointness-type")
    {
        disjointness_type = value;
        disjointness_type.value_namespace = name_space;
        disjointness_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "disjointness-type")
    {
        disjointness_type.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id" || name == "disjointness-type" || name == "sub-id")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::SegmentRules()
    :
    sid_algorithm{YType::uint32, "sid-algorithm"}
{

    yang_name = "segment-rules"; yang_parent_name = "constraints"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::~SegmentRules()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::has_data() const
{
    if (is_presence_container) return true;
    return sid_algorithm.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_algorithm.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_algorithm.is_set || is_set(sid_algorithm.yfilter)) leaf_name_data.push_back(sid_algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-algorithm")
    {
        sid_algorithm = value;
        sid_algorithm.value_namespace = name_space;
        sid_algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-algorithm")
    {
        sid_algorithm.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-algorithm")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRules()
    :
    affinity_rule(this, {"rule"})
{

    yang_name = "affinity-rules"; yang_parent_name = "constraints"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::~AffinityRules()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_rule.len(); index++)
    {
        if(affinity_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::has_operation() const
{
    for (std::size_t index=0; index<affinity_rule.len(); index++)
    {
        if(affinity_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-rule")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule>();
        ent_->parent = this;
        affinity_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-rule")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityRule()
    :
    rule{YType::enumeration, "rule"}
        ,
    affinity_name(this, {"affinity_name"})
{

    yang_name = "affinity-rule"; yang_parent_name = "affinity-rules"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::~AffinityRule()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_name.len(); index++)
    {
        if(affinity_name[index]->has_data())
            return true;
    }
    return rule.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::has_operation() const
{
    for (std::size_t index=0; index<affinity_name.len(); index++)
    {
        if(affinity_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rule.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-rule";
    ADD_KEY_TOKEN(rule, "rule");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule.is_set || is_set(rule.yfilter)) leaf_name_data.push_back(rule.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-name")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName>();
        ent_->parent = this;
        affinity_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule")
    {
        rule = value;
        rule.value_namespace = name_space;
        rule.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule")
    {
        rule.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-name" || name == "rule")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::AffinityName()
    :
    affinity_name{YType::str, "affinity-name"}
{

    yang_name = "affinity-name"; yang_parent_name = "affinity-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::~AffinityName()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::has_data() const
{
    if (is_presence_container) return true;
    return affinity_name.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-name";
    ADD_KEY_TOKEN(affinity_name, "affinity-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-name")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfos()
    :
    path_info(this, {"type", "hop_type", "segment_list_name"})
{

    yang_name = "path-infos"; yang_parent_name = "preference"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::~PathInfos()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::has_operation() const
{
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-info")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo>();
        ent_->parent = this;
        path_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-info")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::PathInfo()
    :
    type{YType::enumeration, "type"},
    hop_type{YType::enumeration, "hop-type"},
    segment_list_name{YType::str, "segment-list-name"},
    weight{YType::uint32, "weight"},
    enable{YType::empty, "enable"}
        ,
    metric(std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric>())
    , pcep(std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep>())
{
    metric->parent = this;
    pcep->parent = this;

    yang_name = "path-info"; yang_parent_name = "path-infos"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::~PathInfo()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| hop_type.is_set
	|| segment_list_name.is_set
	|| weight.is_set
	|| enable.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (pcep !=  nullptr && pcep->has_data());
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(segment_list_name.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (pcep !=  nullptr && pcep->has_operation());
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(hop_type, "hop-type");
    ADD_KEY_TOKEN(segment_list_name, "segment-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (segment_list_name.is_set || is_set(segment_list_name.yfilter)) leaf_name_data.push_back(segment_list_name.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "pcep")
    {
        if(pcep == nullptr)
        {
            pcep = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep>();
        }
        return pcep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(pcep != nullptr)
    {
        _children["pcep"] = pcep;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-list-name")
    {
        segment_list_name = value;
        segment_list_name.value_namespace = name_space;
        segment_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "segment-list-name")
    {
        segment_list_name.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "pcep" || name == "type" || name == "hop-type" || name == "segment-list-name" || name == "weight" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::Metric()
    :
    sid_limit{YType::uint32, "sid-limit"},
    metric_type{YType::enumeration, "metric-type"},
    enable{YType::empty, "enable"}
        ,
    metric_margin(std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin>())
{
    metric_margin->parent = this;

    yang_name = "metric"; yang_parent_name = "path-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::~Metric()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::has_data() const
{
    if (is_presence_container) return true;
    return sid_limit.is_set
	|| metric_type.is_set
	|| enable.is_set
	|| (metric_margin !=  nullptr && metric_margin->has_data());
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_limit.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (metric_margin !=  nullptr && metric_margin->has_operation());
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_limit.is_set || is_set(sid_limit.yfilter)) leaf_name_data.push_back(sid_limit.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-margin")
    {
        if(metric_margin == nullptr)
        {
            metric_margin = std::make_shared<Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin>();
        }
        return metric_margin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric_margin != nullptr)
    {
        _children["metric-margin"] = metric_margin;
    }

    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-limit")
    {
        sid_limit = value;
        sid_limit.value_namespace = name_space;
        sid_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-limit")
    {
        sid_limit.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-margin" || name == "sid-limit" || name == "metric-type" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::MetricMargin()
    :
    value_type{YType::enumeration, "value-type"},
    absolute_value{YType::uint32, "absolute-value"},
    relative_value{YType::uint32, "relative-value"}
{

    yang_name = "metric-margin"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::~MetricMargin()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::has_data() const
{
    if (is_presence_container) return true;
    return value_type.is_set
	|| absolute_value.is_set
	|| relative_value.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_type.yfilter)
	|| ydk::is_set(absolute_value.yfilter)
	|| ydk::is_set(relative_value.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-margin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_type.is_set || is_set(value_type.yfilter)) leaf_name_data.push_back(value_type.get_name_leafdata());
    if (absolute_value.is_set || is_set(absolute_value.yfilter)) leaf_name_data.push_back(absolute_value.get_name_leafdata());
    if (relative_value.is_set || is_set(relative_value.yfilter)) leaf_name_data.push_back(relative_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value-type")
    {
        value_type = value;
        value_type.value_namespace = name_space;
        value_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-value")
    {
        absolute_value = value;
        absolute_value.value_namespace = name_space;
        absolute_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-value")
    {
        relative_value = value;
        relative_value.value_namespace = name_space;
        relative_value.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value-type")
    {
        value_type.yfilter = yfilter;
    }
    if(value_path == "absolute-value")
    {
        absolute_value.yfilter = yfilter;
    }
    if(value_path == "relative-value")
    {
        relative_value.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value-type" || name == "absolute-value" || name == "relative-value")
        return true;
    return false;
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::Pcep()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "pcep"; yang_parent_name = "path-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::~Pcep()
{
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::SrteInterfaces::SrteInterfaces()
    :
    srte_interface(this, {"srte_interface_name"})
{

    yang_name = "srte-interfaces"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::SrteInterfaces::~SrteInterfaces()
{
}

bool Sr::TrafficEngineering::SrteInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srte_interface.len(); index++)
    {
        if(srte_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::SrteInterfaces::has_operation() const
{
    for (std::size_t index=0; index<srte_interface.len(); index++)
    {
        if(srte_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::SrteInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::SrteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::SrteInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::SrteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srte-interface")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::SrteInterfaces::SrteInterface>();
        ent_->parent = this;
        srte_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::SrteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srte_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::SrteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::SrteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::SrteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srte-interface")
        return true;
    return false;
}

Sr::TrafficEngineering::SrteInterfaces::SrteInterface::SrteInterface()
    :
    srte_interface_name{YType::str, "srte-interface-name"},
    interface_metric{YType::uint32, "interface-metric"},
    enable{YType::empty, "enable"}
        ,
    interface_affinities(std::make_shared<Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities>())
{
    interface_affinities->parent = this;

    yang_name = "srte-interface"; yang_parent_name = "srte-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::SrteInterfaces::SrteInterface::~SrteInterface()
{
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::has_data() const
{
    if (is_presence_container) return true;
    return srte_interface_name.is_set
	|| interface_metric.is_set
	|| enable.is_set
	|| (interface_affinities !=  nullptr && interface_affinities->has_data());
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srte_interface_name.yfilter)
	|| ydk::is_set(interface_metric.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interface_affinities !=  nullptr && interface_affinities->has_operation());
}

std::string Sr::TrafficEngineering::SrteInterfaces::SrteInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/srte-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::SrteInterfaces::SrteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-interface";
    ADD_KEY_TOKEN(srte_interface_name, "srte-interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::SrteInterfaces::SrteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srte_interface_name.is_set || is_set(srte_interface_name.yfilter)) leaf_name_data.push_back(srte_interface_name.get_name_leafdata());
    if (interface_metric.is_set || is_set(interface_metric.yfilter)) leaf_name_data.push_back(interface_metric.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::SrteInterfaces::SrteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-affinities")
    {
        if(interface_affinities == nullptr)
        {
            interface_affinities = std::make_shared<Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities>();
        }
        return interface_affinities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::SrteInterfaces::SrteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_affinities != nullptr)
    {
        _children["interface-affinities"] = interface_affinities;
    }

    return _children;
}

void Sr::TrafficEngineering::SrteInterfaces::SrteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srte-interface-name")
    {
        srte_interface_name = value;
        srte_interface_name.value_namespace = name_space;
        srte_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-metric")
    {
        interface_metric = value;
        interface_metric.value_namespace = name_space;
        interface_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::SrteInterfaces::SrteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srte-interface-name")
    {
        srte_interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-metric")
    {
        interface_metric.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-affinities" || name == "srte-interface-name" || name == "interface-metric" || name == "enable")
        return true;
    return false;
}

Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinities()
    :
    interface_affinity(this, {"affinity_name"})
{

    yang_name = "interface-affinities"; yang_parent_name = "srte-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::~InterfaceAffinities()
{
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_affinity.len(); index++)
    {
        if(interface_affinity[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::has_operation() const
{
    for (std::size_t index=0; index<interface_affinity.len(); index++)
    {
        if(interface_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-affinities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-affinity")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity>();
        ent_->parent = this;
        interface_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-affinity")
        return true;
    return false;
}

Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::InterfaceAffinity()
    :
    affinity_name{YType::str, "affinity-name"}
{

    yang_name = "interface-affinity"; yang_parent_name = "interface-affinities"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::~InterfaceAffinity()
{
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::has_data() const
{
    if (is_presence_container) return true;
    return affinity_name.is_set;
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter);
}

std::string Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-affinity";
    ADD_KEY_TOKEN(affinity_name, "affinity-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-name")
        return true;
    return false;
}

Sr::TrafficEngineering::Pcc::Pcc()
    :
    dead_timer_interval{YType::uint32, "dead-timer-interval"},
    pcc_centric{YType::empty, "pcc-centric"},
    report_all{YType::empty, "report-all"},
    keepalive_timer_interval{YType::uint32, "keepalive-timer-interval"},
    initiated_state_interval{YType::uint32, "initiated-state-interval"},
    source_address{YType::str, "source-address"},
    enable{YType::empty, "enable"},
    initiated_orphan_interval{YType::uint32, "initiated-orphan-interval"},
    delegation_timeout{YType::uint32, "delegation-timeout"}
        ,
    pce_peers(std::make_shared<Sr::TrafficEngineering::Pcc::PcePeers>())
    , pce_addresses(std::make_shared<Sr::TrafficEngineering::Pcc::PceAddresses>())
{
    pce_peers->parent = this;
    pce_addresses->parent = this;

    yang_name = "pcc"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Pcc::~Pcc()
{
}

bool Sr::TrafficEngineering::Pcc::has_data() const
{
    if (is_presence_container) return true;
    return dead_timer_interval.is_set
	|| pcc_centric.is_set
	|| report_all.is_set
	|| keepalive_timer_interval.is_set
	|| initiated_state_interval.is_set
	|| source_address.is_set
	|| enable.is_set
	|| initiated_orphan_interval.is_set
	|| delegation_timeout.is_set
	|| (pce_peers !=  nullptr && pce_peers->has_data())
	|| (pce_addresses !=  nullptr && pce_addresses->has_data());
}

bool Sr::TrafficEngineering::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dead_timer_interval.yfilter)
	|| ydk::is_set(pcc_centric.yfilter)
	|| ydk::is_set(report_all.yfilter)
	|| ydk::is_set(keepalive_timer_interval.yfilter)
	|| ydk::is_set(initiated_state_interval.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(initiated_orphan_interval.yfilter)
	|| ydk::is_set(delegation_timeout.yfilter)
	|| (pce_peers !=  nullptr && pce_peers->has_operation())
	|| (pce_addresses !=  nullptr && pce_addresses->has_operation());
}

std::string Sr::TrafficEngineering::Pcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_timer_interval.is_set || is_set(dead_timer_interval.yfilter)) leaf_name_data.push_back(dead_timer_interval.get_name_leafdata());
    if (pcc_centric.is_set || is_set(pcc_centric.yfilter)) leaf_name_data.push_back(pcc_centric.get_name_leafdata());
    if (report_all.is_set || is_set(report_all.yfilter)) leaf_name_data.push_back(report_all.get_name_leafdata());
    if (keepalive_timer_interval.is_set || is_set(keepalive_timer_interval.yfilter)) leaf_name_data.push_back(keepalive_timer_interval.get_name_leafdata());
    if (initiated_state_interval.is_set || is_set(initiated_state_interval.yfilter)) leaf_name_data.push_back(initiated_state_interval.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (initiated_orphan_interval.is_set || is_set(initiated_orphan_interval.yfilter)) leaf_name_data.push_back(initiated_orphan_interval.get_name_leafdata());
    if (delegation_timeout.is_set || is_set(delegation_timeout.yfilter)) leaf_name_data.push_back(delegation_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-peers")
    {
        if(pce_peers == nullptr)
        {
            pce_peers = std::make_shared<Sr::TrafficEngineering::Pcc::PcePeers>();
        }
        return pce_peers;
    }

    if(child_yang_name == "pce-addresses")
    {
        if(pce_addresses == nullptr)
        {
            pce_addresses = std::make_shared<Sr::TrafficEngineering::Pcc::PceAddresses>();
        }
        return pce_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pce_peers != nullptr)
    {
        _children["pce-peers"] = pce_peers;
    }

    if(pce_addresses != nullptr)
    {
        _children["pce-addresses"] = pce_addresses;
    }

    return _children;
}

void Sr::TrafficEngineering::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-timer-interval")
    {
        dead_timer_interval = value;
        dead_timer_interval.value_namespace = name_space;
        dead_timer_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcc-centric")
    {
        pcc_centric = value;
        pcc_centric.value_namespace = name_space;
        pcc_centric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-all")
    {
        report_all = value;
        report_all.value_namespace = name_space;
        report_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-timer-interval")
    {
        keepalive_timer_interval = value;
        keepalive_timer_interval.value_namespace = name_space;
        keepalive_timer_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initiated-state-interval")
    {
        initiated_state_interval = value;
        initiated_state_interval.value_namespace = name_space;
        initiated_state_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initiated-orphan-interval")
    {
        initiated_orphan_interval = value;
        initiated_orphan_interval.value_namespace = name_space;
        initiated_orphan_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timeout")
    {
        delegation_timeout = value;
        delegation_timeout.value_namespace = name_space;
        delegation_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-timer-interval")
    {
        dead_timer_interval.yfilter = yfilter;
    }
    if(value_path == "pcc-centric")
    {
        pcc_centric.yfilter = yfilter;
    }
    if(value_path == "report-all")
    {
        report_all.yfilter = yfilter;
    }
    if(value_path == "keepalive-timer-interval")
    {
        keepalive_timer_interval.yfilter = yfilter;
    }
    if(value_path == "initiated-state-interval")
    {
        initiated_state_interval.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "initiated-orphan-interval")
    {
        initiated_orphan_interval.yfilter = yfilter;
    }
    if(value_path == "delegation-timeout")
    {
        delegation_timeout.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-peers" || name == "pce-addresses" || name == "dead-timer-interval" || name == "pcc-centric" || name == "report-all" || name == "keepalive-timer-interval" || name == "initiated-state-interval" || name == "source-address" || name == "enable" || name == "initiated-orphan-interval" || name == "delegation-timeout")
        return true;
    return false;
}

Sr::TrafficEngineering::Pcc::PcePeers::PcePeers()
    :
    pce_peer(this, {"pce_address"})
{

    yang_name = "pce-peers"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Pcc::PcePeers::~PcePeers()
{
}

bool Sr::TrafficEngineering::Pcc::PcePeers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pce_peer.len(); index++)
    {
        if(pce_peer[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Pcc::PcePeers::has_operation() const
{
    for (std::size_t index=0; index<pce_peer.len(); index++)
    {
        if(pce_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Pcc::PcePeers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Pcc::PcePeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Pcc::PcePeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Pcc::PcePeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-peer")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Pcc::PcePeers::PcePeer>();
        ent_->parent = this;
        pce_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Pcc::PcePeers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pce_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Pcc::PcePeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Pcc::PcePeers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Pcc::PcePeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-peer")
        return true;
    return false;
}

Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::PcePeer()
    :
    pce_address{YType::str, "pce-address"},
    password{YType::str, "password"},
    keychain{YType::str, "keychain"},
    enable{YType::empty, "enable"},
    precedence{YType::uint32, "precedence"}
{

    yang_name = "pce-peer"; yang_parent_name = "pce-peers"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::~PcePeer()
{
}

bool Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::has_data() const
{
    if (is_presence_container) return true;
    return pce_address.is_set
	|| password.is_set
	|| keychain.is_set
	|| enable.is_set
	|| precedence.is_set;
}

bool Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/pcc/pce-peers/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-peer";
    ADD_KEY_TOKEN(pce_address, "pce-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Pcc::PcePeers::PcePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-address" || name == "password" || name == "keychain" || name == "enable" || name == "precedence")
        return true;
    return false;
}

Sr::TrafficEngineering::Pcc::PceAddresses::PceAddresses()
    :
    pce_address(this, {"pce_address"})
{

    yang_name = "pce-addresses"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Pcc::PceAddresses::~PceAddresses()
{
}

bool Sr::TrafficEngineering::Pcc::PceAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pce_address.len(); index++)
    {
        if(pce_address[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::Pcc::PceAddresses::has_operation() const
{
    for (std::size_t index=0; index<pce_address.len(); index++)
    {
        if(pce_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::Pcc::PceAddresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Pcc::PceAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Pcc::PceAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Pcc::PceAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-address")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress>();
        ent_->parent = this;
        pce_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Pcc::PceAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pce_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::Pcc::PceAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::Pcc::PceAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::Pcc::PceAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-address")
        return true;
    return false;
}

Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::PceAddress()
    :
    pce_address{YType::str, "pce-address"},
    precedence{YType::uint32, "precedence"}
{

    yang_name = "pce-address"; yang_parent_name = "pce-addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::~PceAddress()
{
}

bool Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::has_data() const
{
    if (is_presence_container) return true;
    return pce_address.is_set
	|| precedence.is_set;
}

bool Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/pcc/pce-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-address";
    ADD_KEY_TOKEN(pce_address, "pce-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-address" || name == "precedence")
        return true;
    return false;
}

Sr::TrafficEngineering::AffinityMaps::AffinityMaps()
    :
    affinity_map(this, {"affinity_name"})
{

    yang_name = "affinity-maps"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::AffinityMaps::~AffinityMaps()
{
}

bool Sr::TrafficEngineering::AffinityMaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_map.len(); index++)
    {
        if(affinity_map[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::TrafficEngineering::AffinityMaps::has_operation() const
{
    for (std::size_t index=0; index<affinity_map.len(); index++)
    {
        if(affinity_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::TrafficEngineering::AffinityMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::AffinityMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::AffinityMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::AffinityMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-map")
    {
        auto ent_ = std::make_shared<Sr::TrafficEngineering::AffinityMaps::AffinityMap>();
        ent_->parent = this;
        affinity_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::AffinityMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::TrafficEngineering::AffinityMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::TrafficEngineering::AffinityMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::TrafficEngineering::AffinityMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-map")
        return true;
    return false;
}

Sr::TrafficEngineering::AffinityMaps::AffinityMap::AffinityMap()
    :
    affinity_name{YType::str, "affinity-name"},
    bit_position{YType::uint32, "bit-position"}
{

    yang_name = "affinity-map"; yang_parent_name = "affinity-maps"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::TrafficEngineering::AffinityMaps::AffinityMap::~AffinityMap()
{
}

bool Sr::TrafficEngineering::AffinityMaps::AffinityMap::has_data() const
{
    if (is_presence_container) return true;
    return affinity_name.is_set
	|| bit_position.is_set;
}

bool Sr::TrafficEngineering::AffinityMaps::AffinityMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(bit_position.yfilter);
}

std::string Sr::TrafficEngineering::AffinityMaps::AffinityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-infra-xtc-agent-cfg:traffic-engineering/affinity-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::TrafficEngineering::AffinityMaps::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";
    ADD_KEY_TOKEN(affinity_name, "affinity-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::TrafficEngineering::AffinityMaps::AffinityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (bit_position.is_set || is_set(bit_position.yfilter)) leaf_name_data.push_back(bit_position.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::TrafficEngineering::AffinityMaps::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::TrafficEngineering::AffinityMaps::AffinityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::TrafficEngineering::AffinityMaps::AffinityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-position")
    {
        bit_position = value;
        bit_position.value_namespace = name_space;
        bit_position.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::TrafficEngineering::AffinityMaps::AffinityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "bit-position")
    {
        bit_position.yfilter = yfilter;
    }
}

bool Sr::TrafficEngineering::AffinityMaps::AffinityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-name" || name == "bit-position")
        return true;
    return false;
}

const Enum::YLeaf SrmsMiFlag::disable {0, "disable"};
const Enum::YLeaf SrmsMiFlag::enable {1, "enable"};

const Enum::YLeaf SrmsAddressFamily::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsAddressFamily::ipv6 {2, "ipv6"};

const Enum::YLeaf SidTypeList::absolute {1, "absolute"};
const Enum::YLeaf SidTypeList::index_ {2, "index"};


}
}

