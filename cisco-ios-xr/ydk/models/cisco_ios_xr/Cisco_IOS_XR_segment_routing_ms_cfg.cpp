
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
    , srv6(std::make_shared<Sr::Srv6>())
{
    mappings->parent = this;
    adjacency_sid->parent = this;
    srv6->parent = this;

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
	|| (srv6 !=  nullptr && srv6->has_data());
}

bool Sr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (local_block !=  nullptr && local_block->has_operation())
	|| (mappings !=  nullptr && mappings->has_operation())
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (global_block !=  nullptr && global_block->has_operation())
	|| (srv6 !=  nullptr && srv6->has_operation());
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

    if(child_yang_name == "Cisco-IOS-XR-segment-routing-srv6-cfg:srv6")
    {
        if(srv6 == nullptr)
        {
            srv6 = std::make_shared<Sr::Srv6>();
        }
        return srv6;
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

    if(srv6 != nullptr)
    {
        _children["Cisco-IOS-XR-segment-routing-srv6-cfg:srv6"] = srv6;
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
    if(name == "local-block" || name == "mappings" || name == "adjacency-sid" || name == "global-block" || name == "srv6" || name == "enable")
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

Sr::Srv6::Srv6()
    :
    enable{YType::empty, "enable"},
    sid_holdtime{YType::uint32, "sid-holdtime"}
        ,
    logging(std::make_shared<Sr::Srv6::Logging>())
    , locators(std::make_shared<Sr::Srv6::Locators>())
    , encapsulation(std::make_shared<Sr::Srv6::Encapsulation>())
{
    logging->parent = this;
    locators->parent = this;
    encapsulation->parent = this;

    yang_name = "srv6"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Srv6::~Srv6()
{
}

bool Sr::Srv6::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| sid_holdtime.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (locators !=  nullptr && locators->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Sr::Srv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(sid_holdtime.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (locators !=  nullptr && locators->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Sr::Srv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Srv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-cfg:srv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Srv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (sid_holdtime.is_set || is_set(sid_holdtime.yfilter)) leaf_name_data.push_back(sid_holdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Srv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Sr::Srv6::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "locators")
    {
        if(locators == nullptr)
        {
            locators = std::make_shared<Sr::Srv6::Locators>();
        }
        return locators;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Sr::Srv6::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Srv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(locators != nullptr)
    {
        _children["locators"] = locators;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    return _children;
}

void Sr::Srv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-holdtime")
    {
        sid_holdtime = value;
        sid_holdtime.value_namespace = name_space;
        sid_holdtime.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::Srv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "sid-holdtime")
    {
        sid_holdtime.yfilter = yfilter;
    }
}

bool Sr::Srv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "locators" || name == "encapsulation" || name == "enable" || name == "sid-holdtime")
        return true;
    return false;
}

Sr::Srv6::Logging::Logging()
    :
    locator_status{YType::empty, "locator-status"}
{

    yang_name = "logging"; yang_parent_name = "srv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Srv6::Logging::~Logging()
{
}

bool Sr::Srv6::Logging::has_data() const
{
    if (is_presence_container) return true;
    return locator_status.is_set;
}

bool Sr::Srv6::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_status.yfilter);
}

std::string Sr::Srv6::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-segment-routing-srv6-cfg:srv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Srv6::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Srv6::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_status.is_set || is_set(locator_status.yfilter)) leaf_name_data.push_back(locator_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Srv6::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Srv6::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::Srv6::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-status")
    {
        locator_status = value;
        locator_status.value_namespace = name_space;
        locator_status.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::Srv6::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-status")
    {
        locator_status.yfilter = yfilter;
    }
}

bool Sr::Srv6::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-status")
        return true;
    return false;
}

Sr::Srv6::Locators::Locators()
    :
    locators(std::make_shared<Sr::Srv6::Locators::Locators_>())
{
    locators->parent = this;

    yang_name = "locators"; yang_parent_name = "srv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Srv6::Locators::~Locators()
{
}

bool Sr::Srv6::Locators::has_data() const
{
    if (is_presence_container) return true;
    return (locators !=  nullptr && locators->has_data());
}

bool Sr::Srv6::Locators::has_operation() const
{
    return is_set(yfilter)
	|| (locators !=  nullptr && locators->has_operation());
}

std::string Sr::Srv6::Locators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-segment-routing-srv6-cfg:srv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Srv6::Locators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Srv6::Locators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Srv6::Locators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locators")
    {
        if(locators == nullptr)
        {
            locators = std::make_shared<Sr::Srv6::Locators::Locators_>();
        }
        return locators;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Srv6::Locators::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locators != nullptr)
    {
        _children["locators"] = locators;
    }

    return _children;
}

void Sr::Srv6::Locators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::Srv6::Locators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::Srv6::Locators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locators")
        return true;
    return false;
}

Sr::Srv6::Locators::Locators_::Locators_()
    :
    locator(this, {"name"})
{

    yang_name = "locators"; yang_parent_name = "locators"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Srv6::Locators::Locators_::~Locators_()
{
}

bool Sr::Srv6::Locators::Locators_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator.len(); index++)
    {
        if(locator[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::Srv6::Locators::Locators_::has_operation() const
{
    for (std::size_t index=0; index<locator.len(); index++)
    {
        if(locator[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::Srv6::Locators::Locators_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-segment-routing-srv6-cfg:srv6/locators/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Srv6::Locators::Locators_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Srv6::Locators::Locators_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Srv6::Locators::Locators_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator")
    {
        auto ent_ = std::make_shared<Sr::Srv6::Locators::Locators_::Locator>();
        ent_->parent = this;
        locator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Srv6::Locators::Locators_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Sr::Srv6::Locators::Locators_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::Srv6::Locators::Locators_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::Srv6::Locators::Locators_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator")
        return true;
    return false;
}

Sr::Srv6::Locators::Locators_::Locator::Locator()
    :
    name{YType::str, "name"},
    locator_enable{YType::empty, "locator-enable"}
        ,
    prefix(std::make_shared<Sr::Srv6::Locators::Locators_::Locator::Prefix>())
{
    prefix->parent = this;

    yang_name = "locator"; yang_parent_name = "locators"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Srv6::Locators::Locators_::Locator::~Locator()
{
}

bool Sr::Srv6::Locators::Locators_::Locator::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| locator_enable.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Sr::Srv6::Locators::Locators_::Locator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(locator_enable.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Sr::Srv6::Locators::Locators_::Locator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-segment-routing-srv6-cfg:srv6/locators/locators/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Srv6::Locators::Locators_::Locator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Srv6::Locators::Locators_::Locator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (locator_enable.is_set || is_set(locator_enable.yfilter)) leaf_name_data.push_back(locator_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Srv6::Locators::Locators_::Locator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Sr::Srv6::Locators::Locators_::Locator::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Srv6::Locators::Locators_::Locator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Sr::Srv6::Locators::Locators_::Locator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-enable")
    {
        locator_enable = value;
        locator_enable.value_namespace = name_space;
        locator_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::Srv6::Locators::Locators_::Locator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "locator-enable")
    {
        locator_enable.yfilter = yfilter;
    }
}

bool Sr::Srv6::Locators::Locators_::Locator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "name" || name == "locator-enable")
        return true;
    return false;
}

Sr::Srv6::Locators::Locators_::Locator::Prefix::Prefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
{

    yang_name = "prefix"; yang_parent_name = "locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Sr::Srv6::Locators::Locators_::Locator::Prefix::~Prefix()
{
}

bool Sr::Srv6::Locators::Locators_::Locator::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Sr::Srv6::Locators::Locators_::Locator::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Sr::Srv6::Locators::Locators_::Locator::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Srv6::Locators::Locators_::Locator::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Srv6::Locators::Locators_::Locator::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Srv6::Locators::Locators_::Locator::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::Srv6::Locators::Locators_::Locator::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::Srv6::Locators::Locators_::Locator::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Sr::Srv6::Locators::Locators_::Locator::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Sr::Srv6::Encapsulation::Encapsulation()
    :
    source_address{YType::str, "source-address"}
        ,
    hop_limit(std::make_shared<Sr::Srv6::Encapsulation::HopLimit>())
{
    hop_limit->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "srv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Srv6::Encapsulation::~Encapsulation()
{
}

bool Sr::Srv6::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| (hop_limit !=  nullptr && hop_limit->has_data());
}

bool Sr::Srv6::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (hop_limit !=  nullptr && hop_limit->has_operation());
}

std::string Sr::Srv6::Encapsulation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-segment-routing-srv6-cfg:srv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Srv6::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Srv6::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Srv6::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop-limit")
    {
        if(hop_limit == nullptr)
        {
            hop_limit = std::make_shared<Sr::Srv6::Encapsulation::HopLimit>();
        }
        return hop_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Srv6::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hop_limit != nullptr)
    {
        _children["hop-limit"] = hop_limit;
    }

    return _children;
}

void Sr::Srv6::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::Srv6::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Sr::Srv6::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-limit" || name == "source-address")
        return true;
    return false;
}

Sr::Srv6::Encapsulation::HopLimit::HopLimit()
    :
    option{YType::enumeration, "option"},
    value_{YType::uint32, "value"}
{

    yang_name = "hop-limit"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = false; 
}

Sr::Srv6::Encapsulation::HopLimit::~HopLimit()
{
}

bool Sr::Srv6::Encapsulation::HopLimit::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set
	|| value_.is_set;
}

bool Sr::Srv6::Encapsulation::HopLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Sr::Srv6::Encapsulation::HopLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/Cisco-IOS-XR-segment-routing-srv6-cfg:srv6/encapsulation/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Srv6::Encapsulation::HopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Srv6::Encapsulation::HopLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::Srv6::Encapsulation::HopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::Srv6::Encapsulation::HopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::Srv6::Encapsulation::HopLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::Srv6::Encapsulation::HopLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Sr::Srv6::Encapsulation::HopLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "value")
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

